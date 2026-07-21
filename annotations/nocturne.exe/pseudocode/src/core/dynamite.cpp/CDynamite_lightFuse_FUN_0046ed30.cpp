// Name: core_dynamite.cpp_CDynamite_lightFuse_FUN_0046ed30
// Address: 0046ed30
// Address Range: [[0046ed30, 0046ed70]]
// Convention: __cdecl
// Signature: void __cdecl core_dynamite_cpp_CDynamite_lightFuse_FUN_0046ed30(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dynamite_cpp_CDynamite_lightFuse_FUN_0046ed30(int param_1)

{
  uint uVar1;
  byte local_68 [100];
  
  *(uint *)(param_1 + 0x570) = _DAT_0059c91c;
  _sprintf(local_68,"fuse.wav");
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,local_68);
  *(uint *)(param_1 + 0x580) = uVar1;
  return;
}
