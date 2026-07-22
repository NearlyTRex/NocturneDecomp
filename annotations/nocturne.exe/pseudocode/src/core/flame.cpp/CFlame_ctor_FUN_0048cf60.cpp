// Name: core_flame.cpp_CFlame_ctor_FUN_0048cf60
// Address: 0048cf60
// Address Range: [[0048cf60, 0048d04e]]
// Convention: __cdecl
// Signature: int __cdecl core_flame_cpp_CFlame_ctor_FUN_0048cf60(undefined4 param_1)

#include "nocturne.h"

int __cdecl core_flame_cpp_CFlame_ctor_FUN_0048cf60(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_actor_cpp_FUN_00409d30(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_core_flame_cpp_CFlame_setup_FUN_0048d050_0059d584;
  *(uint *)(iVar1 + 0x150) = 0x3f800000;
  *(uint *)(iVar1 + 0x154) = 0x40000000;
  *(uint *)(iVar1 + 0x158) = 0x3f800000;
  uVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x41000000);
  *(uint *)(iVar1 + 0x1a0) = 0;
  *(uint *)(iVar1 + 0x1a4) = 0x3f800000;
  *(uint *)(iVar1 + 0x288) = 1;
  *(uint *)(iVar1 + 0x1a8) = 0;
  *(byte *)(iVar1 + 0x1b0) = 0;
  *(byte *)(iVar1 + 0x214) = 0;
  *(uint *)(iVar1 + 0x1ac) = 1;
  *(uint *)(iVar1 + 0xfc) = 1;
  *(uint *)(iVar1 + 0x27c) = 0x3d4ccccd;
  *(uint *)(iVar1 + 0x278) = 0x3f000000;
  *(uint *)(iVar1 + 0x290) = 1;
  *(uint *)(iVar1 + 0x280) = 0;
  *(uint *)(iVar1 + 0x284) = 0;
  *(uint *)(iVar1 + 0x294) = 0;
  *(uint *)(iVar1 + 0x298) = 0;
  *(uint *)(iVar1 + 0x15c) = uVar2;
  return iVar1;
}
