// Name: core_frankgen.cpp_CFrankenstienMachine_setup_FUN_004946c0
// Address: 004946c0
// Address Range: [[004946c0, 004948e4]]
// Convention: unknown
// Signature: void core_frankgen_cpp_CFrankenstienMachine_setup_FUN_004946c0(CFrankenstienMachine *param_1)

#include "nocturne.h"

void core_frankgen_cpp_CFrankenstienMachine_setup_FUN_004946c0(CFrankenstienMachine *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&param_1->base);
  param_1->course_filename[0] = '\0';
  param_1->anchor_vertex_index = 0;
  switch(param_1->which_part) {
  case 0:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (&param_1->bed_model,"frankxbed.kfm");
    pcVar2 = "frankxbed.pth";
    pcVar3 = param_1->course_filename;
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (&param_1->body_model,"frankxbody.kfm");
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&param_1->body_model);
    break;
  case 1:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (&param_1->bed_model,"frankxcrn1.kfm");
    param_1->anchor_vertex_index = 0xae;
    break;
  case 2:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (&param_1->bed_model,"frankxcrn2.kfm");
    param_1->anchor_vertex_index = 0x8c;
    break;
  case 3:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (&param_1->bed_model,"frankxcrn3.kfm");
    param_1->anchor_vertex_index = 0x16a;
    break;
  case 4:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (&param_1->bed_model,"frankxstch.kfm");
    break;
  case 5:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (&param_1->bed_model,"frankxarm.kfm");
    break;
  case 6:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (&param_1->bed_model,"frankxflap1.kfm");
    pcVar2 = "frankxflap1.pth";
    pcVar3 = param_1->course_filename;
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    break;
  case 7:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (&param_1->bed_model,"frankxflap2.kfm");
    pcVar2 = "frankxflap2.pth";
    pcVar3 = param_1->course_filename;
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    break;
  case 8:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (&param_1->bed_model,"frankxramp.kfm");
    pcVar2 = "frankxramp.pth";
    pcVar3 = param_1->course_filename;
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
  }
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&param_1->bed_model);
  if (param_1->course_filename[0] != '\0') {
    core_course_cpp_CCourse_load_FUN_0043b690(&param_1->course,param_1->course_filename);
    core_frankgen_cpp_FUN_004950a0(param_1);
    return;
  }
  core_frankgen_cpp_FUN_004950a0(param_1);
  return;
}
