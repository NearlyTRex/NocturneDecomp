// Name: core_cloth.cpp_FUN_0043e0a0
// Address: 0043e0a0
// Address Range: [[0043e0a0, 0043e0cf]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_0043e0a0(void)

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_FUN_0043e0a0(uint param_1, uint param_2) */

void __cdecl core_cloth_cpp_FUN_0043e0a0(void)

{
  CKeyFramedModel *in_stack_00000004;
  _FILE *in_stack_00000008;
  
  _fprintf(in_stack_00000008,"models\\%s\n");
  core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
            (in_stack_00000004,in_stack_00000008,0);
  return;
}
