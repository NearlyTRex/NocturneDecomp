// Name: core_hero.cpp_FUN_004ce240
// Address: 004ce240
// Address Range: [[004ce240, 004ce3ad]]
// Convention: unknown
// Signature: int core_hero_cpp_FUN_004ce240(CCharacter *param_1)

#include "nocturne.h"

int core_hero_cpp_FUN_004ce240(CCharacter *param_1)

{
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  int iVar3;
  int iVar4;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_00422340(param_1);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_00511c90((CPathMap *)&pCVar1[1].field_0x3c);
  iVar3 = core_inv_cpp_FUN_004da760(&pCVar2[1].field_0x4);
  iVar3 = core_inv_cpp_FUN_004da760(iVar3 + 0x624);
  iVar4 = core_inv_cpp_FUN_004da760(iVar3 + 0x624);
  iVar3 = iVar4 + -0x24fc4;
  *(int *)(iVar4 + -0xc44) = iVar3;
  *(int *)(iVar4 + -0x620) = iVar3;
  *(int *)(iVar4 + 4) = iVar3;
  *(byte **)(iVar4 + -0x24d14) = &DAT_005f8274;
  *(uint *)(iVar4 + 0x678) = 0;
  memset((void *)(iVar4 + -0x1455c),0,0x34);
  *(uint *)(iVar4 + -0x14564) = 0;
  *(uint *)(iVar4 + -0x21b94) = 0x3f19999a;
  *(uint *)(iVar4 + -0x21b90) = 0x3f666666;
  *(uint *)(iVar4 + -0x21b8c) = 0x49742400;
  *(uint *)(iVar4 + -0x21b88) = 0x49742400;
  *(uint *)(iVar4 + -0x21b84) = 0x3fcccccd;
  *(uint *)(iVar4 + -0x21b80) = 0x40c00000;
  *(uint *)(iVar4 + -0x14560) = 2;
  *(uint *)(iVar4 + -0xc4c) = 0;
  *(uint *)(iVar4 + 0x640) = 0;
  *(uint *)(iVar4 + 0x644) = 0;
  *(uint *)(iVar4 + 0x648) = 0;
  *(uint *)(iVar4 + 0x64c) = 0;
  *(uint *)(iVar4 + 0x650) = 0;
  *(uint *)(iVar4 + 0x654) = 0;
  *(uint *)(iVar4 + 0x658) = 0;
  *(uint *)(iVar4 + 0x624) = 0;
  *(uint *)(iVar4 + 0x628) = 0;
  core_hero_cpp_FUN_004cec30(iVar3);
  *(uint *)(iVar4 + 0x674) = 2;
  *(uint *)(iVar4 + -0x22798) = 0;
  *(uint *)(iVar4 + -0x22a14) = 1;
  *(uint *)(iVar4 + -0x22a28) = 0x41490fdb;
  return iVar3;
}
