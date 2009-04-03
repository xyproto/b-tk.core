/* 
 * The Biomechanical ToolKit
 * Copyright (c) 2009, Arnaud Barré
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 *     * Redistributions of source code must retain the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials
 *       provided with the distribution.
 *     * Neither the name(s) of the copyright holders nor the names
 *       of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written
 *       permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include "btkAcquisitionFileIO.h"

namespace btk
{
  /**
   * @class AcquisitionFileIO
   * @brief Interface to read/write acquisition's files.
   */
  /**
   * @var AcquisitionFileIO::m_FileType
   * File type.
   */
  /**
   * @var AcquisitionFileIO::m_ByteOrder
   * Byte order.
   */
  
  /**
   * @typedef AcquisitionFileIO::Pointer
   * Smart pointer associated with an AcquisitionFileIO object.
   */
  
  /**
   * @typedef AcquisitionFileIO::ConstPointer
   * Smart const pointer associated with an AcquisitionFileIO object.
   */
  
  /**
   * @enum AcquisitionFileIO::FileType
   * Enums used to specify the type of the file.
   */
  /**
   * @var AcquisitionFileIO::FileType AcquisitionFileIO::TypeNotApplicable
   * Enum value used to indicate the type of the file is not yet known.
   */
  /**
   * @var AcquisitionFileIO::FileType AcquisitionFileIO::ASCII
   * Enum value for ASCII file
   */
  /**
   * @var AcquisitionFileIO::FileType AcquisitionFileIO::Binary
   * Enum value for binary file
   */
  
  /**
   * @enum AcquisitionFileIO::ByteOrder
   * Enums used to specify the byte order of the file (integer and float).
   */
  /**
   * @var AcquisitionFileIO::ByteOrder AcquisitionFileIO::OrderNotApplicable
   * Enum value used to indicate the byte order is not yet known.
   */
  /**
   * @var AcquisitionFileIO::ByteOrder AcquisitionFileIO::VAX_LittleEndian
   * Enum value for a byte order in little endian with a VAX float representation.
   */
  /**
   * @var AcquisitionFileIO::ByteOrder AcquisitionFileIO::IEEE_LittleEndian
   * Enum value for a byte order in little endian with a IEEE float representation.
   */
  /**
   * @var AcquisitionFileIO::ByteOrder AcquisitionFileIO::IEEE_BigEndian
   * Enum value for a byte order in big endian with a IEEE float representation.
   */
  
  /**
   * @fn FileType AcquisitionFileIO::GetFileType() const
   * Gets the type of the file.
   */
  
  /**
   * @fn ByteOrder AcquisitionFileIO::GetByteOrder() const
   * Gets the byte order of the file.
   */
  
  /**
   * @fn virtual bool AcquisitionFileIO::CanReadFile(const std::string& filename) = 0
   * Checks if @a filename can be read by this AcquisitionFileIO. This methods 
   * should try to read the file header instead to check the file's suffix.
   */
  
  /**
   * @fn virtual bool AcquisitionFileIO::CanWriteFile(const std::string& filename) = 0
   * Checks if @a filename can be write by this AcquisitionFileIO. This method 
   * should try to determine if the file's suffix corresponds to one of the supported
   * file's suffixes by this AcquisitionFileIO.
   */
  
  /**
   * @fn virtual void AcquisitionFileIO::Read(const std::string& filename, Acquisition::Pointer output) = 0
   * Read the file designated by @a filename and fill @a output.
   */
  
  /**
   * @fn virtual void AcquisitionFileIO::Write(const std::string& filename, Acquisition::Pointer input) = 0
   * Write the file designated by @a filename with the content of @a input.
   */
  
  /**
   * Constructor.
   */
  AcquisitionFileIO::AcquisitionFileIO()
  {
    this->m_FileType = TypeNotApplicable;
    this->m_ByteOrder = OrderNotApplicable;
  };
  
  /**
   * @fn virtual AcquisitionFileIO::~AcquisitionFileIO()
   * Empty destructor.
   */
  
  /**
   * @fn void AcquisitionFileIO::SetFileType(FileType f)
   * Sets the type of the file. This method is protected because some file can
   * be only ASCII file or binary file. An inherited class can use this method as
   * public with @c using @c AcquisitionFileIO::SetFileType; in its public part.
   */
  
  /**
   * @fn void AcquisitionFileIO::SetByteOrder(ByteOrder b)
   * Sets the byte order of the file. This method is protected because some file can
   * be only ASCII file or binary file. An inherited class can use this method as
   * public with @c using @c AcquisitionFileIO::SetByteOrder; in its public part.
   */
};