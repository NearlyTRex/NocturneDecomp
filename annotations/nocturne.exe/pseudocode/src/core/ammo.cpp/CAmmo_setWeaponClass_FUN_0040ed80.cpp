// Name: core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80
// Address: 0040ed80
// Address Range: [[0040ed80, 0040ef57]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(int param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(param_1 + 0x2cc);
  pcVar3 = param_2;
  if (pcVar4 != param_2) {
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
  }
  iVar2 = _strcmp(param_2,&DAT_00578228);
  if (iVar2 == 0) {
    switch(*(uint *)(param_1 + 0x310)) {
    case 1:
      pcVar4 = "holybullet.kfm";
      break;
    case 2:
      pcVar4 = "woodbullet.kfm";
      break;
    case 3:
      pcVar4 = "silverbullet.kfm";
      break;
    case 4:
      pcVar4 = "goldbullet.kfm";
      break;
    default:
      pcVar4 = "gatbullet.kfm";
      break;
    case 7:
      pcVar4 = "lithiumbullet.kfm";
      break;
    case 8:
      pcVar4 = "mercurybullet.kfm";
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(param_1 + 0x150,pcVar4);
  }
  iVar2 = _strcmp(param_2,"CShotgun");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (param_1 + 0x150,"shell.kfm");
  }
  iVar2 = _strcmp(param_2,"CCrossbow");
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x310) == 1) {
      pcVar4 = "holystake.kfm";
    }
    else {
      pcVar4 = "stake.kfm";
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(param_1 + 0x150,pcVar4);
  }
  iVar2 = _strcmp(param_2,"CDynamite");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (param_1 + 0x150,"dynamitebundle.kfm");
  }
  iVar2 = _strcmp(param_2,"CTommyGun");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (param_1 + 0x150,"tommybullet.kfm");
  }
  iVar2 = _strcmp(param_2,"CFlameThrower");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (param_1 + 0x150,"fgunammo.kfm");
  }
  iVar2 = _strcmp(param_2,"CElephantGun");
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 0x150);
    return;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (param_1 + 0x150,"eleshell.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 0x150);
  return;
}
