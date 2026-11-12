// Name: support_trstream.cpp_COutStreamFile_open_FUN_005a19e0
// Address: 005a19e0
// Address Range: [[005a19e0, 005a1a1a]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_COutStreamFile_open_FUN_005a19e0(COutStreamFile *this_ptr,char *param_2,char *param_3)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_COutStreamFile_open_FUN_005a19e0(COutStreamFile *this_ptr,char *param_2,char *param_3)

{
  _FILE *p_Var1;
  
  (**(code **)((int)this_ptr->vtable + 0x18))(this_ptr);
  p_Var1 = _fopen(param_2,param_3);
  this_ptr->file = p_Var1;
  if (p_Var1 != (_FILE *)0x0) {
    return 1;
  }
  (**(code **)((int)this_ptr->vtable + 0x18))(this_ptr);
  return 0;
}
