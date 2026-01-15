// Name: core_boxactor.cpp_FUN_00422900
// Address: 00422900
// Address Range: [[00422900, 00422941]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422900()

#include "nocturne.h"

/* Signature: byte actors_other_boxactor.cpp_FUN_00422900(uint param_1, uint
   param_2) */

void core_boxactor_cpp_FUN_00422900
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               int param_5,FILE *param_6)

{
  CKeyFramedModel *pCVar1;
  int skip_raw_files;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(param_5 + 0x158));
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"MODELS\\%s\n",pCVar1,unaff_EBX);
  skip_raw_files = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(param_5 + 0x158));
  core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00(pCVar1,param_6,skip_raw_files);
  return;
}
