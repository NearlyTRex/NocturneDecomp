// Name: core_ammo.cpp_FUN_0040ddd0
// Address: 0040ddd0
// Address Range: [[0040ddd0, 0040dfcd]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_FUN_0040ddd0(CAmmo *this_ptr,char *weapon_class_name)

#include "nocturne.h"

void __cdecl core_ammo_cpp_FUN_0040ddd0(CAmmo *this_ptr,char *weapon_class_name)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = &this_ptr->field_0x2d4;
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
  iVar2 = _strcmp(weapon_class_name,&DAT_005d307c);
  if (iVar2 == 0) {
    switch(*(uint *)&this_ptr->field_0x318) {
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
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
              ((CKeyFramedModelInstance *)&this_ptr->field_0x158,pcVar4);
  }
  iVar2 = _strcmp(weapon_class_name,"CShotgun");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
              ((CKeyFramedModelInstance *)&this_ptr->field_0x158,"shell.kfm");
  }
  iVar2 = _strcmp(weapon_class_name,"CCrossbow");
  if (iVar2 == 0) {
    if (*(int *)&this_ptr->field_0x318 == 1) {
      pcVar4 = "holystake.kfm";
    }
    else {
      pcVar4 = "stake.kfm";
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
              ((CKeyFramedModelInstance *)&this_ptr->field_0x158,pcVar4);
  }
  iVar2 = _strcmp(weapon_class_name,"CDynamite");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
              ((CKeyFramedModelInstance *)&this_ptr->field_0x158,"dynamitebundle.kfm");
  }
  iVar2 = _strcmp(weapon_class_name,"CTommyGun");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
              ((CKeyFramedModelInstance *)&this_ptr->field_0x158,"tommybullet.kfm");
  }
  iVar2 = _strcmp(weapon_class_name,"CFlameThrower");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
              ((CKeyFramedModelInstance *)&this_ptr->field_0x158,"fgunammo.kfm");
  }
  iVar2 = _strcmp(weapon_class_name,"CElephantGun");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
              ((CKeyFramedModelInstance *)&this_ptr->field_0x158,"eleshell.kfm");
  }
  iVar2 = _strcmp(weapon_class_name,"CLightgun");
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
              ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
    return;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158,"batterylarge.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  return;
}
