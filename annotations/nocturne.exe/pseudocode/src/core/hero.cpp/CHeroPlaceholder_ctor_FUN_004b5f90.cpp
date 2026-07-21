// Name: core_hero.cpp_CHeroPlaceholder_ctor_FUN_004b5f90
// Address: 004b5f90
// Address Range: [[004b5f90, 004b5fbb]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHeroPlaceholder_ctor_FUN_004b5f90(undefined4 param_1)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHeroPlaceholder_ctor_FUN_004b5f90(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00409d30(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_core_actor_cpp_CDemonActor_setup_FUN_00409fc0_0059ec84;
  *(uint *)(iVar1 + 0xfc) = 1;
  *(uint *)(iVar1 + 0x150) = 0;
  return;
}
