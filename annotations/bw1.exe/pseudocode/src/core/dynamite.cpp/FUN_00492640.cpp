// Name: core_dynamite.cpp_FUN_00492640
// Address: 00492640
// Address Range: [[00492640, 00492680]]
// Convention: __cdecl
// Signature: void __cdecl core_dynamite_cpp_FUN_00492640(CDynamite *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dynamite_cpp_FUN_00492640(CDynamite *this_ptr)

{
  uint uVar1;
  byte local_68 [100];
  
  *(uint *)&this_ptr->field_0x578 = _DAT_005ff6bc;
  FUN_005bfb40(local_68,"fuse.wav");
  uVar1 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,local_68);
  *(uint *)&this_ptr->field_0x588 = uVar1;
  return;
}
