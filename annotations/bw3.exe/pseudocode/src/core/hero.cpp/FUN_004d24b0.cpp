// Name: core_hero.cpp_FUN_004d24b0
// Address: 004d24b0
// Address Range: [[004d24b0, 004d261d]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_FUN_004d24b0(CHero *this_ptr)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_FUN_004d24b0(CHero *this_ptr)

{
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  CInventory *pCVar3;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_0042ac20((CCharacter *)this_ptr);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_0050acc0((CPathMap *)&pCVar1[1].field_0x3c);
  pCVar3 = core_inv_cpp_FUN_004da360((CInventory *)&pCVar2[1].field_0x4);
  *(CInventory **)(pCVar3 + 4) = pCVar3 + -0x206e8;
  *(byte ***)(pCVar3 + -0x20594) = &PTR_core_hero_cpp_FUN_004d26b0_005e1534;
  memset(pCVar3 + -0x13914,0,0x34);
  *(uint *)(pCVar3 + -0x1391c) = 0;
  *(uint *)(pCVar3 + -0x1d47c) = 0x3f19999a;
  *(uint *)(pCVar3 + -0x1d478) = 0x3f666666;
  *(uint *)(pCVar3 + -0x1d474) = 0x49742400;
  *(uint *)(pCVar3 + -0x1d470) = 0x49742400;
  *(uint *)(pCVar3 + -0x1d46c) = 0x3fcccccd;
  *(uint *)(pCVar3 + -0x1d468) = 0x40c00000;
  *(uint *)(pCVar3 + -0x13918) = 2;
  *(uint *)(pCVar3 + -4) = 0;
  *(uint *)(pCVar3 + 0x47c) = 0;
  *(uint *)(pCVar3 + 0x4ac) = 0;
  *(uint *)(pCVar3 + 0x4b0) = 0;
  *(uint *)(pCVar3 + 0x4b4) = 0;
  *(uint *)(pCVar3 + 0x4b8) = 0;
  *(uint *)(pCVar3 + 0x4bc) = 0;
  *(uint *)(pCVar3 + 0x4c0) = 0;
  *(uint *)(pCVar3 + 0x4c4) = 0;
  *(uint *)(pCVar3 + 0x470) = 0;
  *(uint *)(pCVar3 + 0x474) = 0;
  core_hero_cpp_FUN_004d2cd0();
  *(uint *)(pCVar3 + 0x4e0) = 2;
  *(uint *)(pCVar3 + -0x1df28) = 0;
  *(uint *)(pCVar3 + -0x1e1a8) = 1;
  *(uint *)(pCVar3 + -0x1e1bc) = 0x41490fdb;
  *(uint *)(pCVar3 + 0x498) = 100;
  *(uint *)(pCVar3 + 0x49c) = 0x1e;
  *(uint *)(pCVar3 + 0x478) = 0;
  *(uint *)(pCVar3 + 0x4a0) = 0;
  return (CHero *)(pCVar3 + -0x206e8);
}
