// Name: core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
// Address: 0058a260
// Address Range: [[0058a260, 0058a2a3]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260(CDeformableModelInstance *param_1,_FILE *param_2)

#include "nocturne.h"

void __cdecl
core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260(CDeformableModelInstance *param_1,_FILE *param_2)

{
  __STK(0x14);
  _fprintf(param_2,"MODELS\\%s\n",param_1->model_name);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(param_1);
  core_skeledit_cpp_FUN_0058a2b0();
  return;
}
