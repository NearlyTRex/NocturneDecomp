// Name: core_melee.cpp_CMelee_ctor_FUN_004ea8b0
// Address: 004ea8b0
// Address Range: [[004ea8b0, 004ea9fe]]
// Convention: __cdecl
// Signature: CMelee * __cdecl core_melee_cpp_CMelee_ctor_FUN_004ea8b0(CMelee *this_ptr)

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_CMelee_ctor_FUN_004ea8b0(CMelee *this_ptr)

{
  char cVar1;
  CMelee *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CMelee *)core_weapon_cpp_CWeapon_ctor_FUN_005899d0((CWeapon *)this_ptr);
  *(byte **)&pCVar2->field_0x2b0 = &g_CMeleeVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar2->field_0x2b4,(char *)0x5dc915);
  *(uint *)&pCVar2->field_0x43c = 6;
  *(uint *)&pCVar2->field_0x6f8 = 0xffffffff;
  *(uint *)&pCVar2->field_0x6c4 = 0;
  *(uint *)&pCVar2->field_0x434 = 0;
  *(uint *)&pCVar2->field_0x438 = 0;
  *(uint *)&pCVar2->field_0x440 = 0;
  *(uint *)&pCVar2->field_0x444 = 0x40a00000;
  *(uint *)&pCVar2->field_0x448 = 0;
  *(uint *)&pCVar2->field_0x44c = 0;
  *(uint *)&pCVar2->field_0x6d4 = 3;
  *(uint *)&pCVar2->field_0x6d8 = 0x41200000;
  *(uint *)&pCVar2->field_0x6dc = 0x41700000;
  *(uint *)&pCVar2->field_0x6e0 = 0x3f000000;
  *(uint *)&pCVar2->field_0x6e4 = 1;
  pcVar3 = "swordimpactflesh0?.wav";
  *(uint *)&pCVar2->field_0x6ec = 0;
  *(uint *)&pCVar2->field_0x6f0 = 0;
  pcVar4 = &pCVar2->field_0x6fc;
  *(uint *)&pCVar2->field_0x6f8 = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "swordimpactflesh0?.wav";
  pcVar4 = &pCVar2->field_0x760;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "swordimpactrock0?.wav";
  pcVar4 = &pCVar2->field_0x7c4;
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
