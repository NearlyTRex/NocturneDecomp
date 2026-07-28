// Name: core_anvil.cpp_FUN_0040f560
// Address: 0040f560
// Address Range: [[0040f560, 0040f5ea]]
// Convention: unknown
// Signature: int * core_anvil_cpp_FUN_0040f560(undefined4 param_1)

#include "nocturne.h"

int * core_anvil_cpp_FUN_0040f560(uint param_1)

{
  char cVar1;
  int iVar2;
  CKeyFramedModelInstance *this_ptr;
  char *pcVar3;
  CKeyFramedModelInstance *pCVar4;
  
  iVar2 = core_actor_cpp_FUN_00409d30(param_1);
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                       ((CKeyFramedModelInstance *)(iVar2 + 0x150));
  pcVar3 = "acmeanvilinc";
  this_ptr[-1].model_ptr = (CKeyFramedModel *)&PTR_core_anvil_cpp_FUN_0040f5f0_00599694;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (this_ptr,"question.kfm");
  this_ptr[1].part_visibility_flags[0x19] = 0x41c80000;
  this_ptr[1].part_visibility_flags[0x1a] = 0;
  pCVar4 = this_ptr + 1;
  this_ptr[1].part_visibility_flags[0x1b] = 0;
  do {
    cVar1 = *pcVar3;
    *(char *)pCVar4->part_visibility_flags = cVar1;
    if (cVar1 == '\0') {
      return this_ptr[-1].part_visibility_flags + 0xb;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)pCVar4->part_visibility_flags + 1) = cVar1;
    pCVar4 = (CKeyFramedModelInstance *)((int)pCVar4->part_visibility_flags + 2);
  } while (cVar1 != '\0');
  return this_ptr[-1].part_visibility_flags + 0xb;
}
