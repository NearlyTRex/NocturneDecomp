// Name: FUN_004b46d0
// Address: 004b46d0
// Address Range: [[004b46d0, 004b47f7]]
// Convention: unknown
// Signature: int FUN_004b46d0(undefined4 param_1)

#include "nocturne.h"

int FUN_004b46d0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_charactr_cpp_CCharacter_ctor_FUN_00423f40(param_1);
  iVar1 = core_path_cpp_CPathMap_ctor_FUN_004efd50(iVar1 + 0xbcc0);
  iVar2 = core_inv_cpp_CInventory_ctor_FUN_004bedc0(iVar1 + 0x138e0);
  iVar1 = iVar2 + -0x1f5a0;
  *(int *)(iVar2 + 4) = iVar1;
  *(byte ***)(iVar2 + -0x1f454) = &PTR_FUN_0059eb34;
  memset(iVar2 + -0x1390c,0,0x2c);
  *(uint *)(iVar2 + -0x13914) = 0;
  *(uint *)(iVar2 + -0x1c7cc) = 0x3f19999a;
  *(uint *)(iVar2 + -0x1c7c8) = 0x3f666666;
  *(uint *)(iVar2 + -0x1c7c4) = 0x49742400;
  *(uint *)(iVar2 + -0x1c7c0) = 0x49742400;
  *(uint *)(iVar2 + -0x1c7bc) = 0x3fcccccd;
  *(uint *)(iVar2 + -0x1c7b8) = 0x40c00000;
  *(uint *)(iVar2 + -0x13910) = 2;
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + 0x464) = 0;
  *(uint *)(iVar2 + 0x468) = 0;
  *(uint *)(iVar2 + 0x46c) = 0;
  *(uint *)(iVar2 + 0x470) = 0;
  *(uint *)(iVar2 + 0x474) = 0;
  *(uint *)(iVar2 + 0x478) = 0;
  *(uint *)(iVar2 + 0x47c) = 0;
  *(uint *)(iVar2 + 0x460) = 0;
  core_hero_cpp_CHero_createDefaultWeapon_FUN_004b4dd0(iVar1);
  *(uint *)(iVar2 + 0x498) = 2;
  *(uint *)(iVar2 + -0x1cf84) = 0;
  *(uint *)(iVar2 + -0x1d164) = 1;
  return iVar1;
}
