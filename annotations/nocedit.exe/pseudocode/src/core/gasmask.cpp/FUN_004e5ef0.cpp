// Name: core_gasmask.cpp_FUN_004e5ef0
// Address: 004e5ef0
// Address Range: [[004e5ef0, 004e5f39]]
// Convention: unknown
// Signature: void core_gasmask_cpp_FUN_004e5ef0(void)

#include "nocturne.h"

/* Signature: byte actors_other_gasmask.cpp_FUN_004e5ef0(uint param_1, uint
   param_2) */

void core_gasmask_cpp_FUN_004e5ef0(void)

{
  CKeyFramedModel *pCVar1;
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  int skip_raw_files;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"MODELS\\%s\n",pCVar1);
  skip_raw_files = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
            (pCVar1,in_stack_00000008,skip_raw_files);
  return;
}
