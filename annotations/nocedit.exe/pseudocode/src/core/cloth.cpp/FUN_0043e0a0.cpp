// Name: core_cloth.cpp_FUN_0043e0a0
// Address: 0043e0a0
// Address Range: [[0043e0a0, 0043e0cf]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043e0a0()

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_FUN_0043e0a0(uint param_1, uint param_2) */

void core_cloth_cpp_FUN_0043e0a0(void)

{
  CKeyFramedModel *in_stack_00000004;
  FILE *in_stack_00000008;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"models\\%s\n",in_stack_00000004);
  core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
            (in_stack_00000004,in_stack_00000008,0);
  return;
}
