// Name: core_melee.cpp_CMelee_ctor_FUN_004cec60
// Address: 004cec60
// Address Range: [[004cec60, 004cedae]]
// Convention: unknown
// Signature: int core_melee_cpp_CMelee_ctor_FUN_004cec60(undefined4 param_1)

#include "nocturne.h"

int core_melee_cpp_CMelee_ctor_FUN_004cec60(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(param_1);
  *(byte ***)(iVar2 + 0x14c) = &PTR_core_weapon_cpp_CWeapon_setup_FUN_00553f10_005a03f4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (iVar2 + 0x150,"melee.kfm");
  *(uint *)(iVar2 + 0x2d8) = 7;
  *(uint *)(iVar2 + 0x594) = 0xffffffff;
  *(uint *)(iVar2 + 0x560) = 0;
  *(uint *)(iVar2 + 0x2d0) = 0;
  *(uint *)(iVar2 + 0x2d4) = 0;
  *(uint *)(iVar2 + 0x2dc) = 0;
  *(uint *)(iVar2 + 0x2e0) = 0x40a00000;
  *(uint *)(iVar2 + 0x2e4) = 0;
  *(uint *)(iVar2 + 0x2e8) = 0;
  *(uint *)(iVar2 + 0x570) = 1;
  *(uint *)(iVar2 + 0x574) = 0x41200000;
  *(uint *)(iVar2 + 0x578) = 0x41700000;
  *(uint *)(iVar2 + 0x57c) = 0x3f000000;
  *(uint *)(iVar2 + 0x580) = 0;
  pcVar3 = "shovel?.wav";
  *(uint *)(iVar2 + 0x588) = 0;
  *(uint *)(iVar2 + 0x58c) = 0;
  pcVar4 = (char *)(iVar2 + 0x598);
  *(uint *)(iVar2 + 0x594) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = &DAT_00588378;
  pcVar4 = (char *)(iVar2 + 0x5fc);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = &DAT_00588384;
  pcVar4 = (char *)(iVar2 + 0x660);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return iVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return iVar2;
}
