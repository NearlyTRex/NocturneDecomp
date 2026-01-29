// Name: core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
// Address: 0058a260
// Address Range: [[0058a260, 0058a2a3]]
// Convention: unknown
// Signature: void core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260 (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4, CDeformableModelInstance *param_5,_FILE *param_6)

#include "nocturne.h"

void core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               CDeformableModelInstance *param_5,_FILE *param_6)

{
  __STK(0x14);
  _fprintf(param_6,"MODELS\\%s\n",param_5->model_name,unaff_EBX);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(param_5);
  core_skeledit_cpp_FUN_0058a2b0();
  return;
}
