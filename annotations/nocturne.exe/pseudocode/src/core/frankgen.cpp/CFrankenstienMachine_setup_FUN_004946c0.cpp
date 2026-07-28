// Name: core_frankgen.cpp_CFrankenstienMachine_setup_FUN_004946c0
// Address: 004946c0
// Address Range: [[004946c0, 004948e4]]
// Convention: unknown
// Signature: void core_frankgen_cpp_CFrankenstienMachine_setup_FUN_004946c0(CDemonActor *param_1)

#include "nocturne.h"

void core_frankgen_cpp_CFrankenstienMachine_setup_FUN_004946c0(CDemonActor *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  param_1[1].actor_name[8] = '\0';
  uVar2 = *(uint *)param_1[1].actor_name;
  param_1[3].create_event[0x18] = '\0';
  param_1[3].create_event[0x19] = '\0';
  param_1[3].create_event[0x1a] = '\0';
  param_1[3].create_event[0x1b] = '\0';
  switch(uVar2) {
  case 0:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              ((CKeyFramedModelInstance *)&param_1[1].location.area_id,"frankxbed.kfm");
    pcVar3 = "frankxbed.pth";
    pcVar4 = param_1[1].actor_name + 8;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              ((CKeyFramedModelInstance *)&param_1[2].health,"frankxbody.kfm");
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
              ((CKeyFramedModelInstance *)&param_1[2].health);
    break;
  case 1:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              ((CKeyFramedModelInstance *)&param_1[1].location.area_id,"frankxcrn1.kfm");
    param_1[3].create_event[0x18] = -0x52;
    param_1[3].create_event[0x19] = '\0';
    param_1[3].create_event[0x1a] = '\0';
    param_1[3].create_event[0x1b] = '\0';
    break;
  case 2:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              ((CKeyFramedModelInstance *)&param_1[1].location.area_id,"frankxcrn2.kfm");
    param_1[3].create_event[0x18] = -0x74;
    param_1[3].create_event[0x19] = '\0';
    param_1[3].create_event[0x1a] = '\0';
    param_1[3].create_event[0x1b] = '\0';
    break;
  case 3:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              ((CKeyFramedModelInstance *)&param_1[1].location.area_id,"frankxcrn3.kfm");
    param_1[3].create_event[0x18] = 'j';
    param_1[3].create_event[0x19] = '\x01';
    param_1[3].create_event[0x1a] = '\0';
    param_1[3].create_event[0x1b] = '\0';
    break;
  case 4:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              ((CKeyFramedModelInstance *)&param_1[1].location.area_id,"frankxstch.kfm");
    break;
  case 5:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              ((CKeyFramedModelInstance *)&param_1[1].location.area_id,"frankxarm.kfm");
    break;
  case 6:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              ((CKeyFramedModelInstance *)&param_1[1].location.area_id,"frankxflap1.kfm");
    pcVar3 = "frankxflap1.pth";
    pcVar4 = param_1[1].actor_name + 8;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    break;
  case 7:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              ((CKeyFramedModelInstance *)&param_1[1].location.area_id,"frankxflap2.kfm");
    pcVar3 = "frankxflap2.pth";
    pcVar4 = param_1[1].actor_name + 8;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    break;
  case 8:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              ((CKeyFramedModelInstance *)&param_1[1].location.area_id,"frankxramp.kfm");
    pcVar3 = "frankxramp.pth";
    pcVar4 = param_1[1].actor_name + 8;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)&param_1[1].location.area_id);
  if (param_1[1].actor_name[8] != '\0') {
    core_course_cpp_CCourse_load_FUN_0043b690
              ((CCourse *)&param_1[2].orient_matrix.m[2].y,param_1[1].actor_name + 8);
    core_frankgen_cpp_FUN_004950a0(param_1);
    return;
  }
  core_frankgen_cpp_FUN_004950a0(param_1);
  return;
}
