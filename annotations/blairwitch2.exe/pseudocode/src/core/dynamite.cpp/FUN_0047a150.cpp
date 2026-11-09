// Name: core_dynamite.cpp_FUN_0047a150
// Address: 0047a150
// Address Range: [[0047a150, 0047a190]]
// Convention: __cdecl
// Signature: void __cdecl core_dynamite_cpp_FUN_0047a150(CDynamite *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dynamite_cpp_FUN_0047a150(CDynamite *this_ptr)

{
  uint uVar1;
  byte local_68 [100];
  
  *(uint *)&this_ptr->field_0x6d4 = _DAT_005f5bac;
  FUN_005b7790(local_68,"fuse.wav");
  uVar1 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,local_68);
  *(uint *)&this_ptr->field_0x6e4 = uVar1;
  return;
}
