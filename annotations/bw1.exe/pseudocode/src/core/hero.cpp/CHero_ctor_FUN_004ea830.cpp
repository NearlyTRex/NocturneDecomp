// Name: core_hero.cpp_CHero_ctor_FUN_004ea830
// Address: 004ea830
// Address Range: [[004ea830, 004ea97f]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_CHero_ctor_FUN_004ea830(CHero *this_ptr)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_CHero_ctor_FUN_004ea830(CHero *this_ptr)

{
  CHero *this_ptr_00;
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  CInventory *pCVar3;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_0042c080((CCharacter *)this_ptr);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_00532fe0((CPathMap *)((int)&pCVar1[1].base.orient + 8));
  pCVar3 = core_inv_cpp_CInventory_ctor_FUN_004f6ed0((CInventory *)&pCVar2[1].current_position.y);
  this_ptr_00 = (CHero *)(pCVar3 + -0x1fae8);
  *(CHero **)(pCVar3 + 4) = this_ptr_00;
  *(byte ***)(pCVar3 + -0x1f994) = &PTR_core_hero_cpp_CHero_setup_FUN_004eaa10_00601d34;
  memset(pCVar3 + -0x13910,0,0x30);
  *(uint *)(pCVar3 + -0x13918) = 0;
  *(uint *)(pCVar3 + -0x1cafc) = 0x3f19999a;
  *(uint *)(pCVar3 + -0x1caf8) = 0x3f666666;
  *(uint *)(pCVar3 + -0x1caf4) = 0x49742400;
  *(uint *)(pCVar3 + -0x1caf0) = 0x49742400;
  *(uint *)(pCVar3 + -0x1caec) = 0x3fcccccd;
  *(uint *)(pCVar3 + -0x1cae8) = 0x40c00000;
  *(uint *)(pCVar3 + -0x13914) = 2;
  *(uint *)(pCVar3 + -4) = 0;
  *(uint *)(pCVar3 + 0x474) = 0;
  *(uint *)(pCVar3 + 0x48c) = 0;
  *(uint *)(pCVar3 + 0x490) = 0;
  *(uint *)(pCVar3 + 0x494) = 0;
  *(uint *)(pCVar3 + 0x498) = 0;
  *(uint *)(pCVar3 + 0x49c) = 0;
  *(uint *)(pCVar3 + 0x4a0) = 0;
  *(uint *)(pCVar3 + 0x4a4) = 0;
  *(uint *)(pCVar3 + 0x46c) = 0;
  *(uint *)(pCVar3 + 0x470) = 0;
  core_hero_cpp_CHero_createDefaultWeapon_FUN_004eafd0(this_ptr_00);
  *(uint *)(pCVar3 + 0x4c0) = 2;
  *(uint *)(pCVar3 + -0x1d328) = 0;
  *(uint *)(pCVar3 + -0x1d5a8) = 1;
  *(uint *)(pCVar3 + -0x1d5b8) = 0x40490fdb;
  *(uint *)(pCVar3 + -0x1d5bc) = 0x41490fdb;
  return this_ptr_00;
}
