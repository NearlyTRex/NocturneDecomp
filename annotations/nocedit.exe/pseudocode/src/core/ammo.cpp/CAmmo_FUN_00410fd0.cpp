// Name: core_ammo.cpp_CAmmo_FUN_00410fd0
// Address: 00410fd0
// Address Range: [[00410fd0, 004111a7]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_FUN_00410fd0(void)

#include "nocturne.h"

/* Signature: byte actors_other_ammo.cpp_CAmmo_FUN_00410fd0(CAmmo* param_1_00, uint
   param_2_00, uint param_3, uint sClassNameMaybe) */

void __cdecl core_ammo_cpp_CAmmo_FUN_00410fd0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int in_stack_00000004;
  char *in_stack_00000008;
  char *pcVar4;
  
  pcVar4 = (char *)(in_stack_00000004 + 0x2d4);
  pcVar3 = in_stack_00000008;
  if (pcVar4 != in_stack_00000008) {
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
  iVar2 = strcmp(in_stack_00000008,"CGun");
  if (iVar2 == 0) {
    switch(*(uint *)(in_stack_00000004 + 0x318)) {
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
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),pcVar4);
  }
  iVar2 = strcmp(in_stack_00000008,"CShotgun");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),"shell.kfm");
  }
  iVar2 = strcmp(in_stack_00000008,"CCrossbow");
  if (iVar2 == 0) {
    if (*(int *)(in_stack_00000004 + 0x318) == 1) {
      pcVar4 = "holystake.kfm";
    }
    else {
      pcVar4 = "stake.kfm";
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),pcVar4);
  }
  iVar2 = strcmp(in_stack_00000008,"CDynamite");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),"dynamitebundle.kfm")
    ;
  }
  iVar2 = strcmp(in_stack_00000008,"CTommyGun");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),"tommybullet.kfm");
  }
  iVar2 = strcmp(in_stack_00000008,"CFlameThrower");
  if (iVar2 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),"fgunammo.kfm");
  }
  iVar2 = strcmp(in_stack_00000008,"CElephantGun");
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
    return;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),"eleshell.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  return;
}
