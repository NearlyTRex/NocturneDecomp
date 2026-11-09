// Name: core_melee.cpp_CMelee_ctor_FUN_004e6f90
// Address: 004e6f90
// Address Range: [[004e6f90, 004e70de]]
// Convention: __cdecl
// Signature: CMelee * __cdecl core_melee_cpp_CMelee_ctor_FUN_004e6f90(CMelee *this_ptr)

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_CMelee_ctor_FUN_004e6f90(CMelee *this_ptr)

{
  char cVar1;
  CMelee *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CMelee *)core_weapon_cpp_CWeapon_ctor_FUN_0057ad70((CWeapon *)this_ptr);
  *(byte **)&pCVar2->field_0x154 = &g_CMeleeVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar2->field_0x158,(char *)0x5c7051);
  *(uint *)&pCVar2->field_0x2e0 = 7;
  *(uint *)&pCVar2->field_0x5b8 = 0xffffffff;
  *(uint *)&pCVar2->field_0x568 = 0;
  *(uint *)&pCVar2->field_0x2d8 = 0;
  *(uint *)&pCVar2->field_0x2dc = 0;
  *(uint *)&pCVar2->field_0x2e4 = 0;
  *(uint *)&pCVar2->field_0x2e8 = 0x40a00000;
  *(uint *)&pCVar2->field_0x2ec = 0;
  *(uint *)&pCVar2->field_0x2f0 = 0;
  *(uint *)&pCVar2->field_0x594 = 1;
  *(uint *)&pCVar2->field_0x598 = 0x41200000;
  *(uint *)&pCVar2->field_0x59c = 0x41700000;
  *(uint *)&pCVar2->field_0x5a0 = 0x3f000000;
  *(uint *)&pCVar2->field_0x5a4 = 0;
  pcVar3 = "shovel?.wav";
  *(uint *)&pCVar2->field_0x5ac = 0;
  *(uint *)&pCVar2->field_0x5b0 = 0;
  pcVar4 = &pCVar2->field_0x5bc;
  *(uint *)&pCVar2->field_0x5b8 = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5c7067;
  pcVar4 = &pCVar2->field_0x620;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5c7073;
  pcVar4 = &pCVar2->field_0x684;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return pCVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return pCVar2;
}
