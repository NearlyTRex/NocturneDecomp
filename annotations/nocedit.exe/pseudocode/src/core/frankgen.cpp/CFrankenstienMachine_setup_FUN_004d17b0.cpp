// Name: core_frankgen.cpp_CFrankenstienMachine_setup_FUN_004d17b0
// Address: 004d17b0
// Address Range: [[004d17b0, 004d19d4]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_setup_FUN_004d17b0(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_setup_FUN_004d17b0(CFrankenstienMachine *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  this_ptr->course_filename[0] = '\0';
  this_ptr->anchor_vertex_index = 0;
  switch(this_ptr->which_part) {
  case 0:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              (&this_ptr->bed_model,"frankxbed.kfm");
    pcVar2 = "frankxbed.pth";
    pcVar3 = this_ptr->course_filename;
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              (&this_ptr->body_model,"frankxbody.kfm");
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->body_model);
    break;
  case 1:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              (&this_ptr->bed_model,"frankxcrn1.kfm");
    this_ptr->anchor_vertex_index = 0xae;
    break;
  case 2:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              (&this_ptr->bed_model,"frankxcrn2.kfm");
    this_ptr->anchor_vertex_index = 0x8c;
    break;
  case 3:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              (&this_ptr->bed_model,"frankxcrn3.kfm");
    this_ptr->anchor_vertex_index = 0x16a;
    break;
  case 4:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              (&this_ptr->bed_model,"frankxstch.kfm");
    break;
  case 5:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              (&this_ptr->bed_model,"frankxarm.kfm");
    break;
  case 6:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              (&this_ptr->bed_model,"frankxflap1.kfm");
    pcVar2 = "frankxflap1.pth";
    pcVar3 = this_ptr->course_filename;
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
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              (&this_ptr->bed_model,"frankxflap2.kfm");
    pcVar2 = "frankxflap2.pth";
    pcVar3 = this_ptr->course_filename;
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
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              (&this_ptr->bed_model,"frankxramp.kfm");
    pcVar2 = "frankxramp.pth";
    pcVar3 = this_ptr->course_filename;
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
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->bed_model);
  if (this_ptr->course_filename[0] != '\0') {
    core_course_cpp_CCourse_load_FUN_00442580(&this_ptr->course,this_ptr->course_filename);
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d2190(this_ptr);
    return;
  }
  core_frankgen_cpp_CFrankenstienMachine_FUN_004d2190(this_ptr);
  return;
}
