// Name: core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
// Address: 0058a260
// Address Range: [[0058a260, 0058a2a3]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()

#include "nocturne.h"

void core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               CDeformableModelInstance *param_5,FILE *param_6)

{
  crt_stack_c_stack_probe_FUN_005ff9f3(0x14);
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"MODELS\\%s\n",param_5->model_name,unaff_EBX);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(param_5);
  core_skeledit_cpp_FUN_0058a2b0();
  return;
}
