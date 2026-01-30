// Name: core_filmreel.cpp_FUN_004be9b0
// Address: 004be9b0
// Address Range: [[004be9b0, 004be9f9]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_FUN_004be9b0(void)

#include "nocturne.h"

/* Signature: byte actors_other_filmreel.cpp_FUN_004be9b0(uint param_1, uint
   param_2) */

void __cdecl core_filmreel_cpp_FUN_004be9b0(void)

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
