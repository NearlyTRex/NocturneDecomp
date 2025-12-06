// Name: core_boxactor.cpp_FUN_00422900
// Address: 00422900
// Address Range: [[00422900, 00422941]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422900()

#include "nocturne.h"

/* Signature: byte actors_other_boxactor.cpp_FUN_00422900(uint param_1, uint
   param_2) */

void core_boxactor_cpp_FUN_00422900(void)

{
  CKeyFramedModel *pCVar1;
  FILE *dependency_file;
  int in_stack_00000004;
  FILE *in_stack_0000000c;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_0000000c,"MODELS\\%s\n",pCVar1);
  dependency_file = (FILE *)0x0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
            (pCVar1,dependency_file,in_stack_00000004);
  return;
}
