// Name: support_trstream.cpp_COutStreamFile_openInDirectory_FUN_00574a10
// Address: 00574a10
// Address Range: [[00574a10, 00574a52]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStreamFile_openInDirectory_FUN_00574a10(COutStreamFile *this_ptr,char *directory,char *filename,char *mode)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStreamFile_openInDirectory_FUN_00574a10(COutStreamFile *this_ptr,char *directory,char *filename,char *mode)

{
  _FILE *p_Var1;
  
  (**(code **)((int)(this_ptr->base).vtable + 0x18))(this_ptr);
  p_Var1 = engine_dosio_cpp_FUN_004659c0(directory,filename,mode);
  this_ptr->file = p_Var1;
  if (p_Var1 != (_FILE *)0x0) {
    return 1;
  }
  (**(code **)((int)(this_ptr->base).vtable + 0x18))(this_ptr);
  return 0;
}
