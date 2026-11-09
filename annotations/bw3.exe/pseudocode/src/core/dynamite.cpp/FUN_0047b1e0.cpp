// Name: core_dynamite.cpp_FUN_0047b1e0
// Address: 0047b1e0
// Address Range: [[0047b1e0, 0047b220]]
// Convention: __cdecl
// Signature: void __cdecl core_dynamite_cpp_FUN_0047b1e0(CDynamite *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dynamite_cpp_FUN_0047b1e0(CDynamite *this_ptr)

{
  uint uVar1;
  byte local_68 [100];
  
  *(uint *)&this_ptr->field_0x594 = _DAT_005deecc;
  FUN_005a28c0(local_68,"fuse.wav");
  uVar1 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,local_68);
  *(uint *)&this_ptr->field_0x5a4 = uVar1;
  return;
}
