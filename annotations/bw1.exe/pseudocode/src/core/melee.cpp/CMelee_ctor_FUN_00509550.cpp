// Name: core_melee.cpp_CMelee_ctor_FUN_00509550
// Address: 00509550
// Address Range: [[00509550, 0050969e]]
// Convention: __cdecl
// Signature: CMelee * __cdecl core_melee_cpp_CMelee_ctor_FUN_00509550(CMelee *this_ptr)

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_CMelee_ctor_FUN_00509550(CMelee *this_ptr)

{
  char cVar1;
  CMelee *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CMelee *)core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0((CWeapon *)this_ptr);
  *(byte **)&pCVar2->field_0x154 = &g_CMeleeVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&pCVar2->field_0x158,"melee.kfm");
  *(uint *)&pCVar2->field_0x2e0 = 7;
  *(uint *)&pCVar2->field_0x59c = 0xffffffff;
  *(uint *)&pCVar2->field_0x568 = 0;
  *(uint *)&pCVar2->field_0x2d8 = 0;
  *(uint *)&pCVar2->field_0x2dc = 0;
  *(uint *)&pCVar2->field_0x2e4 = 0;
  *(uint *)&pCVar2->field_0x2e8 = 0x40a00000;
  *(uint *)&pCVar2->field_0x2ec = 0;
  *(uint *)&pCVar2->field_0x2f0 = 0;
  *(uint *)&pCVar2->field_0x578 = 1;
  *(uint *)&pCVar2->field_0x57c = 0x41200000;
  *(uint *)&pCVar2->field_0x580 = 0x41700000;
  *(uint *)&pCVar2->field_0x584 = 0x3f000000;
  *(uint *)&pCVar2->field_0x588 = 0;
  pcVar3 = "shovel?.wav";
  *(uint *)&pCVar2->field_0x590 = 0;
  *(uint *)&pCVar2->field_0x594 = 0;
  pcVar4 = &pCVar2->field_0x5a0;
  *(uint *)&pCVar2->field_0x59c = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "shvl-f?.wav";
  pcVar4 = &pCVar2->field_0x604;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "shvl-s?.wav";
  pcVar4 = &pCVar2->field_0x668;
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
