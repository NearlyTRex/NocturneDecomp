// Name: support_trstream.cpp_COutStreamFile_open_FUN_005749d0
// Address: 005749d0
// Address Range: [[005749d0, 00574a0a]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_COutStreamFile_open_FUN_005749d0(COutStreamFile *this_ptr,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_COutStreamFile_open_FUN_005749d0(COutStreamFile *this_ptr,uint param_2,uint param_3)

{
  _FILE *p_Var1;
  
  (**(code **)((int)this_ptr->vtable + 0x18))(this_ptr);
  p_Var1 = (_FILE *)_fopen(param_2,param_3);
  this_ptr->file = p_Var1;
  if (p_Var1 != (_FILE *)0x0) {
    return 1;
  }
  (**(code **)((int)this_ptr->vtable + 0x18))(this_ptr);
  return 0;
}
