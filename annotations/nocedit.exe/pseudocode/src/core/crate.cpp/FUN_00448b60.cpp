// Name: core_crate.cpp_FUN_00448b60
// Address: 00448b60
// Address Range: [[00448b60, 00448ba9]]
// Convention: unknown
// Signature: void core_crate_cpp_FUN_00448b60(void)

#include "nocturne.h"

/* Signature: byte actors_other_crate.cpp_FUN_00448b60(uint param_1, uint param_2)
    */

void core_crate_cpp_FUN_00448b60(void)

{
  CKeyFramedModel *pCVar1;
  CDemonActor *in_stack_00000004;
  _FILE *in_stack_00000008;
  int skip_raw_files;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  _fprintf(in_stack_00000008,"MODELS\\%s\n",pCVar1);
  skip_raw_files = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
            (pCVar1,in_stack_00000008,skip_raw_files);
  return;
}
