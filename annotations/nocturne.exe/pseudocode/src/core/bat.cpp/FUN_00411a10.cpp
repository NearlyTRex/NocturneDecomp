// Name: core_bat.cpp_FUN_00411a10
// Address: 00411a10
// Address Range: [[00411a10, 00411adf]]
// Convention: unknown
// Signature: CKeyFramedModel ** core_bat_cpp_FUN_00411a10(undefined4 param_1)

#include "nocturne.h"

CKeyFramedModel ** core_bat_cpp_FUN_00411a10(uint param_1)

{
  char cVar1;
  int iVar2;
  CCourse *pCVar3;
  CKeyFramedModelInstance *this_ptr;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = core_actor_cpp_FUN_00409d30(param_1);
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_0043b5d0((CCourse *)(iVar2 + 0x170));
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                       ((CKeyFramedModelInstance *)&pCVar3[1].frames);
  *(byte ***)(this_ptr[-1].model_name + 0xd0) =
       &PTR_core_bat_cpp_CBat_setup_FUN_00411ae0_00599e94;
  this_ptr[-1].model_ptr = (CKeyFramedModel *)0x0;
  this_ptr[1].part_visibility_flags[0] = 0;
  pcVar4 = "batpath.pth";
  this_ptr[1].part_visibility_flags[1] = 0x41f00000;
  this_ptr[1].part_visibility_flags[2] = 0x3f800000;
  pcVar5 = this_ptr[-1].model_name + 0xd4;
  this_ptr[1].part_visibility_flags[3] = 0x41f00000;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(this_ptr,"bat.kfm");
  *(byte *)(this_ptr[1].part_visibility_flags + 4) = 0;
  this_ptr[1].part_visibility_flags[0x1d] = 0x41700000;
  this_ptr[1].model_name[0] = '\0';
  this_ptr[1].model_name[1] = '\0';
  this_ptr[1].model_name[2] = -0x10;
  this_ptr[1].model_name[3] = 'A';
  this_ptr[1].model_name[8] = '\0';
  this_ptr[1].model_name[9] = '\0';
  this_ptr[1].model_name[10] = '\0';
  this_ptr[1].model_name[0xb] = '\0';
  return &this_ptr[-2].model_ptr;
}
