// Name: support_trstream.cpp_COutStreamFile_openInDirectory_FUN_00574a10
// Address: 00574a10
// Address Range: [[00574a10, 00574a52]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_COutStreamFile_openInDirectory_FUN_00574a10(COutStreamFile *this_ptr,char *param_2,char *param_3,char *param_4)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_COutStreamFile_openInDirectory_FUN_00574a10(COutStreamFile *this_ptr,char *param_2,char *param_3,char *param_4)

{
  _FILE *p_Var1;
  
  (**(code **)((int)this_ptr->vtable + 0x18))(this_ptr);
  p_Var1 = engine_dosio_cpp_FUN_004659c0(param_2,param_3,param_4);
  this_ptr->file = p_Var1;
  if (p_Var1 != (_FILE *)0x0) {
    return 1;
  }
  (**(code **)((int)this_ptr->vtable + 0x18))(this_ptr);
  return 0;
}
