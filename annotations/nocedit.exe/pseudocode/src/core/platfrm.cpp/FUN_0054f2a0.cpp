// Name: core_platfrm.cpp_FUN_0054f2a0
// Address: 0054f2a0
// Address Range: [[0054f2a0, 0054f2df]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054f2a0()

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_FUN_0054f2a0(uint param_1, uint
   param_2) */

void core_platfrm_cpp_FUN_0054f2a0
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               int param_5,FILE *param_6)

{
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)(param_5 + 0x158),param_6);
  if (*(char *)(param_5 + 0x2f0) == '\0') {
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"data\\%s\n",param_5 + 0x2f0,unaff_EBX);
  return;
}
