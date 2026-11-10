// Name: core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040e240
// Address: 0040e240
// Address Range: [[0040e240, 0040e43d]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040e240(CAmmo *this_ptr,char *weapon_class_name)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040e240(CAmmo *this_ptr,char *weapon_class_name)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = this_ptr->weapon_class_name;
  pcVar3 = weapon_class_name;
  if (pcVar4 != weapon_class_name) {
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
  iVar2 = _strcmp(weapon_class_name,&DAT_005cb10b);
  if (iVar2 == 0) {
    switch(*(uint *)&this_ptr->field_0x474) {
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
      pcVar4 = "bullets6_1.kfm";
      break;
    case 7:
      pcVar4 = "lithiumbullet.kfm";
      break;
    case 8:
      pcVar4 = "mercurybullet.kfm";
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(&this_ptr->model,pcVar4);
  }
  iVar2 = _strcmp(weapon_class_name,"CShotgun");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              (&this_ptr->model,"shell.kfm");
  }
  iVar2 = _strcmp(weapon_class_name,"CCrossbow");
  if (iVar2 == 0) {
    if (*(int *)&this_ptr->field_0x474 == 1) {
      pcVar4 = "holystake.kfm";
    }
    else {
      pcVar4 = "stake.kfm";
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(&this_ptr->model,pcVar4);
  }
  iVar2 = _strcmp(weapon_class_name,"CDynamite");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              (&this_ptr->model,"dynamitebundle.kfm");
  }
  iVar2 = _strcmp(weapon_class_name,"CTommyGun");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              (&this_ptr->model,"tommybullet.kfm");
  }
  iVar2 = _strcmp(weapon_class_name,"CFlameThrower");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              (&this_ptr->model,"fgunammo.kfm");
  }
  iVar2 = _strcmp(weapon_class_name,"CElephantGun");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              (&this_ptr->model,"eleshell.kfm");
  }
  iVar2 = _strcmp(weapon_class_name,"CLightgun");
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
    return;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (&this_ptr->model,"batterylarge.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  return;
}
