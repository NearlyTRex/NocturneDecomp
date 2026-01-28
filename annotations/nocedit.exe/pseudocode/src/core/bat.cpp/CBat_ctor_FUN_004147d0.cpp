// Name: core_bat.cpp_CBat_ctor_FUN_004147d0
// Address: 004147d0
// Address Range: [[004147d0, 0041489f]]
// Convention: __cdecl
// Signature: CBat * __cdecl core_bat_cpp_CBat_ctor_FUN_004147d0(CBat *this_ptr)

#include "nocturne.h"

CBat * __cdecl core_bat_cpp_CBat_ctor_FUN_004147d0(CBat *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CCourse *pCVar3;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_004424c0((CCourse *)&pCVar2[1].location);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)&pCVar3[1].frame_list);
  *(CDemonActor_vtable **)(this_ptr_00[-1].animation_state + 0x6c) = &g_CBatVTable;
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)0x0;
  this_ptr_00[1].part_visibility_flags[0] = 0;
  pcVar4 = "batpath.pth";
  this_ptr_00[1].part_visibility_flags[1] = 0x41f00000;
  this_ptr_00[1].part_visibility_flags[2] = 0x3f800000;
  pcVar5 = this_ptr_00[-1].animation_state + 0x70;
  this_ptr_00[1].part_visibility_flags[3] = 0x41f00000;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr_00,"bat.kfm");
  *(byte *)(this_ptr_00[1].part_visibility_flags + 4) = 0;
  this_ptr_00[1].part_visibility_flags[0x1d] = 0x41700000;
  this_ptr_00[1].model_name[0] = '\0';
  this_ptr_00[1].model_name[1] = '\0';
  this_ptr_00[1].model_name[2] = -0x10;
  this_ptr_00[1].model_name[3] = 'A';
  this_ptr_00[1].model_name[8] = '\0';
  this_ptr_00[1].model_name[9] = '\0';
  this_ptr_00[1].model_name[10] = '\0';
  this_ptr_00[1].model_name[0xb] = '\0';
  return (CBat *)(this_ptr_00[-2].animation_state + 0x94);
}
