// Name: core_ammo.cpp_CAmmo_FUN_00410fd0
// Address: 00410fd0
// Address Range: [[00410fd0, 004111a7]]
// Convention: unknown
// Signature: undefined core_ammo.cpp_CAmmo_FUN_00410fd0()

#include "nocturne.h"

/* Signature: byte actors_other_ammo.cpp_CAmmo_FUN_00410fd0(CAmmo* param_1_00, uint
   param_2_00, uint param_3, uint sClassNameMaybe) */

void core_ammo_cpp_CAmmo_FUN_00410fd0(void)

{
  CKeyFramedModelInstance *this_ptr;
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *in_stack_00000004;
  char *in_stack_00000008;
  char *pcVar5;
  
  iVar2 = (int)in_stack_00000004;
  pcVar5 = (char *)((int)in_stack_00000004 + 0x2d4);
  pcVar4 = in_stack_00000008;
  if (pcVar5 != in_stack_00000008) {
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  iVar3 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000008,"CGun");
  if (iVar3 == 0) {
    switch(*(uint *)((int)in_stack_00000004 + 0x318)) {
    case 1:
      pcVar5 = "holybullet.kfm";
      break;
    case 2:
      pcVar5 = "woodbullet.kfm";
      break;
    case 3:
      pcVar5 = "silverbullet.kfm";
      break;
    case 4:
      pcVar5 = "goldbullet.kfm";
      break;
    default:
      pcVar5 = "gatbullet.kfm";
      break;
    case 7:
      pcVar5 = "lithiumbullet.kfm";
      break;
    case 8:
      pcVar5 = "mercurybullet.kfm";
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)((int)in_stack_00000004 + 0x158),pcVar5);
  }
  iVar3 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000008,"CShotgun");
  if (iVar3 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)((int)in_stack_00000004 + 0x158),"shell.kfm");
  }
  iVar3 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000008,"CCrossbow");
  if (iVar3 == 0) {
    this_ptr = (CKeyFramedModelInstance *)((int)in_stack_00000004 + 0x158);
    if (*(int *)((int)in_stack_00000004 + 0x318) == 1) {
      in_stack_00000004 = "holystake.kfm";
    }
    else {
      in_stack_00000004 = "stake.kfm";
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr,in_stack_00000004);
  }
  iVar3 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000008,"CDynamite");
  if (iVar3 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(iVar2 + 0x158),"dynamitebundle.kfm");
  }
  iVar3 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000008,"CTommyGun");
  if (iVar3 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(iVar2 + 0x158),"tommybullet.kfm");
  }
  iVar3 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000008,"CFlameThrower");
  if (iVar3 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(iVar2 + 0x158),"fgunammo.kfm");
  }
  iVar3 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000008,"CElephantGun");
  if (iVar3 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
              ((CKeyFramedModelInstance *)(iVar2 + 0x158));
    return;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)(iVar2 + 0x158),"eleshell.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(iVar2 + 0x158));
  return;
}
