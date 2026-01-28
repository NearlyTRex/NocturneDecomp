// Name: core_frankgen.cpp_FUN_004d17b0
// Address: 004d17b0
// Address Range: [[004d17b0, 004d19d4]]
// Convention: unknown
// Signature: void core_frankgen_cpp_FUN_004d17b0(void)

#include "nocturne.h"

/* Signature: byte actors_other_frankgen.cpp_FUN_004d17b0(uint param_1) */

void core_frankgen_cpp_FUN_004d17b0(void)

{
  float *this_ptr;
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  in_stack_00000004[1].actor_name[8] = '\0';
  uVar2 = *(uint *)in_stack_00000004[1].actor_name;
  in_stack_00000004[3].create_event[8] = '\0';
  in_stack_00000004[3].create_event[9] = '\0';
  in_stack_00000004[3].create_event[10] = '\0';
  in_stack_00000004[3].create_event[0xb] = '\0';
  switch(uVar2) {
  case 0:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               "frankxbed.kfm");
    pcVar3 = "frankxbed.pth";
    pcVar4 = in_stack_00000004[1].actor_name + 8;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    this_ptr = &in_stack_00000004[2].orient_matrix.m[2].z;
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)this_ptr,"frankxbody.kfm");
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
              ((CKeyFramedModelInstance *)this_ptr);
    break;
  case 1:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               "frankxcrn1.kfm");
    in_stack_00000004[3].create_event[8] = -0x52;
    in_stack_00000004[3].create_event[9] = '\0';
    in_stack_00000004[3].create_event[10] = '\0';
    in_stack_00000004[3].create_event[0xb] = '\0';
    break;
  case 2:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               "frankxcrn2.kfm");
    in_stack_00000004[3].create_event[8] = -0x74;
    in_stack_00000004[3].create_event[9] = '\0';
    in_stack_00000004[3].create_event[10] = '\0';
    in_stack_00000004[3].create_event[0xb] = '\0';
    break;
  case 3:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               "frankxcrn3.kfm");
    in_stack_00000004[3].create_event[8] = 'j';
    in_stack_00000004[3].create_event[9] = '\x01';
    in_stack_00000004[3].create_event[10] = '\0';
    in_stack_00000004[3].create_event[0xb] = '\0';
    break;
  case 4:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               "frankxstch.kfm");
    break;
  case 5:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               "frankxarm.kfm");
    break;
  case 6:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               "frankxflap1.kfm");
    pcVar3 = "frankxflap1.pth";
    pcVar4 = in_stack_00000004[1].actor_name + 8;
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
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               "frankxflap2.kfm");
    pcVar3 = "frankxflap2.pth";
    pcVar4 = in_stack_00000004[1].actor_name + 8;
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
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               "frankxramp.kfm");
    pcVar3 = "frankxramp.pth";
    pcVar4 = in_stack_00000004[1].actor_name + 8;
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
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id);
  if (in_stack_00000004[1].actor_name[8] != '\0') {
    core_course_cpp_CCourse_load_FUN_00442580
              ((CCourse *)&in_stack_00000004[2].orient_matrix.m[1].z,
               in_stack_00000004[1].actor_name + 8);
    core_frankgen_cpp_LoadModel_FUN_004d2190();
    return;
  }
  core_frankgen_cpp_LoadModel_FUN_004d2190();
  return;
}
