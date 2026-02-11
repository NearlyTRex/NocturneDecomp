// Name: core_morph.cpp_CMorphModel_FUN_0052aa80
// Address: 0052aa80
// Address Range: [[0052aa80, 0052aab2]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_FUN_0052aa80(CMorphModel *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_FUN_0052aa80(CMorphModel *this_ptr)

{
  CKeyFramedModel *in_stack_0000000c;
  int in_stack_00000010;
  
  core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(in_stack_0000000c,in_stack_00000010)
  ;
  core_morph_cpp_CMorphModel_animate_FUN_0052a920(this_ptr);
  return;
}
