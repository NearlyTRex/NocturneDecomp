// Name: core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80
// Address: 0040ed80
// Address Range: [[0040ed80, 0040ef57]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(CAmmo *this_ptr,char *weapon_class_name)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(CAmmo *this_ptr,char *weapon_class_name)

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
  iVar2 = _strcmp(weapon_class_name,"CGun");
  if (iVar2 == 0) {
    switch(this_ptr->ammo_type) {
    case AMMO_TYPE_HOLY:
      pcVar4 = "holybullet.kfm";
      break;
    case AMMO_TYPE_WOOD:
      pcVar4 = "woodbullet.kfm";
      break;
    case AMMO_TYPE_SILVER:
      pcVar4 = "silverbullet.kfm";
      break;
    case AMMO_TYPE_GOLD:
      pcVar4 = "goldbullet.kfm";
      break;
    default:
      pcVar4 = "gatbullet.kfm";
      break;
    case AMMO_TYPE_LITHIUM:
      pcVar4 = "lithiumbullet.kfm";
      break;
    case AMMO_TYPE_MERCURY:
      pcVar4 = "mercurybullet.kfm";
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(&this_ptr->model,pcVar4);
  }
  iVar2 = _strcmp(weapon_class_name,"CShotgun");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (&this_ptr->model,"shell.kfm");
  }
  iVar2 = _strcmp(weapon_class_name,"CCrossbow");
  if (iVar2 == 0) {
    if (this_ptr->ammo_type == AMMO_TYPE_HOLY) {
      pcVar4 = "holystake.kfm";
    }
    else {
      pcVar4 = "stake.kfm";
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(&this_ptr->model,pcVar4);
  }
  iVar2 = _strcmp(weapon_class_name,"CDynamite");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (&this_ptr->model,"dynamitebundle.kfm");
  }
  iVar2 = _strcmp(weapon_class_name,"CTommyGun");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (&this_ptr->model,"tommybullet.kfm");
  }
  iVar2 = _strcmp(weapon_class_name,"CFlameThrower");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (&this_ptr->model,"fgunammo.kfm");
  }
  iVar2 = _strcmp(weapon_class_name,"CElephantGun");
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
    return;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&this_ptr->model,"eleshell.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  return;
}
