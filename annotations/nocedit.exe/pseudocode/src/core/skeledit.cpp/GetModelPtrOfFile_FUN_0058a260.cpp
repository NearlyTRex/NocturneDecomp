// Name: core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
// Address: 0058a260
// Address Range: [[0058a260, 0058a2a3]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260(void)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260(void)

{
  CDeformableModelInstance *in_stack_00000004;
  _FILE *in_stack_00000008;
  
  __STK(0x14);
  _fprintf(in_stack_00000008,"MODELS\\%s\n",in_stack_00000004->model_name);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(in_stack_00000004);
  core_skeledit_cpp_FUN_0058a2b0();
  return;
}
