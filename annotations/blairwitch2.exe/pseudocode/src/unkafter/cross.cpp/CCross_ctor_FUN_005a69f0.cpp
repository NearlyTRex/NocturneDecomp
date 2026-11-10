// Name: unkafter_cross.cpp_CCross_ctor_FUN_005a69f0
// Address: 005a69f0
// Address Range: [[005a69f0, 005a6b2a]]
// Convention: unknown
// Signature: CCross * unkafter_cross_cpp_CCross_ctor_FUN_005a69f0(CCross *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCross * unkafter_cross_cpp_CCross_ctor_FUN_005a69f0(CCross *this_ptr)

{
  char cVar1;
  CCross *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CCross *)core_melee_cpp_CMelee_ctor_FUN_004ea8b0((CMelee *)this_ptr);
  ((UActorVTable *)&pCVar2->field_0x2b0)->_ub = &g_CCrossVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar2->field_0x2b4,(char *)0x5f06e9);
  *(EWeaponType *)&pCVar2->field_0x43c = WEAPON_TYPE_BARON|WEAPON_TYPE_FLASHLIGHT;
  *(float *)&pCVar2->field_0x6d8 = 25.0;
  pcVar3 = "shovel?.wav";
  *(float *)&pCVar2->field_0x6dc = 50.0;
  *(float *)&pCVar2->field_0x6e0 = 0.9;
  pcVar4 = &pCVar2->field_0x6fc;
  *(int *)&pCVar2->field_0x6e4 = 1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5f0700;
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
  pcVar3 = (char *)0x5f070c;
  pcVar4 = &pCVar2->field_0x7c4;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar2->field_0x2a8 = 0x3dcccccd;
  *(uint *)&pCVar2->field_0xfc = 0;
  *(uint *)&pCVar2->field_0x828 = 0;
  *(uint *)&pCVar2->field_0x82c = 0;
  *(uint *)&pCVar2->field_0x834 = 0;
  *(uint *)&pCVar2->field_0x830 = 0x3f333333;
  *(uint *)&pCVar2->field_0x844 = 0;
  *(uint *)&pCVar2->field_0x840 = 0;
  *(uint *)&pCVar2->field_0x83c = 0;
  *(uint *)&pCVar2->field_0x838 = 0;
  return pCVar2;
}
