// Name: support_codec.cpp_crc32UpdateFromFile_FUN_004406e0
// Address: 004406e0
// Address Range: [[004406e0, 00440741]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_crc32UpdateFromFile_FUN_004406e0(uint *crc,_FILE *file,int byte_count)

#include "nocturne.h"

int __cdecl support_codec_cpp_crc32UpdateFromFile_FUN_004406e0(uint *crc,_FILE *file,int byte_count)

{
  int iVar1;
  
  while( true ) {
    if (byte_count == 0) {
      return 1;
    }
    if (0 < byte_count) {
      byte_count = byte_count + -1;
    }
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
    support_codec_cpp_crc32UpdateByteInPlace_FUN_004404e0(crc,(uchar)iVar1);
  }
  if ((byte_count < 0) && ((file->_flag & 0x20) == 0)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
