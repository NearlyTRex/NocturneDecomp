// Name: core_ammobox.cpp_FUN_0040f040
// Address: 0040f040
// Address Range: [[0040f040, 0040f0ef]]
// Convention: unknown
// Signature: int * core_ammobox_cpp_FUN_0040f040(undefined4 param_1)

#include "nocturne.h"

int * core_ammobox_cpp_FUN_0040f040(uint param_1)

{
  char cVar1;
  int iVar2;
  CKeyFramedModelInstance *this_ptr;
  char *pcVar3;
  CKeyFramedModelInstance *pCVar4;
  
  iVar2 = core_actor_cpp_FUN_00409d30(param_1);
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                       ((CKeyFramedModelInstance *)(iVar2 + 0x150));
  this_ptr[-1].model_ptr = (CKeyFramedModel *)&PTR_core_ammobox_cpp_FUN_0040f0f0_00599574;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(this_ptr,"ammobag.kfm")
  ;
  pcVar3 = "CGun";
  pCVar4 = this_ptr + 1;
  do {
    cVar1 = *pcVar3;
    *(char *)pCVar4->part_visibility_flags = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)pCVar4->part_visibility_flags + 1) = cVar1;
    pCVar4 = (CKeyFramedModelInstance *)((int)pCVar4->part_visibility_flags + 2);
  } while (cVar1 != '\0');
  this_ptr[1].part_visibility_flags[0x10] = 0x14;
  this_ptr[1].part_visibility_flags[0x11] = 0;
  this_ptr[1].part_visibility_flags[0x12] = 0;
  this_ptr[1].part_visibility_flags[0x13] = 0;
  this_ptr[1].part_visibility_flags[0x14] = 0;
  *(byte *)(this_ptr[1].part_visibility_flags + 0x15) = 0;
  this_ptr[1].part_visibility_flags[0x1d] = 0;
  return this_ptr[-1].part_visibility_flags + 0xb;
}
