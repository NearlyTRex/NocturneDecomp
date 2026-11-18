// Name: support_trstream.cpp_COutStreamFile_write_FUN_005a18f0
// Address: 005a18f0
// Address Range: [[005a18f0, 005a1930]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStreamFile_write_FUN_005a18f0(COutStreamFile *this_ptr,void *data,int size)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStreamFile_write_FUN_005a18f0(COutStreamFile *this_ptr,void *data,int size)

{
  SIZE_T SVar1;
  
  if (this_ptr->file != (_FILE *)0x0) {
    SVar1 = _fwrite(data,1,size,this_ptr->file);
    if ((SVar1 == size) || ((this_ptr->file->_flag & 0x20) == 0)) {
      return SVar1;
    }
  }
  return -2;
}
