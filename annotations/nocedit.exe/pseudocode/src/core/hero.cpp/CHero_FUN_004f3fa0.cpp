// Name: core_hero.cpp_CHero_FUN_004f3fa0
// Address: 004f3fa0
// Address Range: [[004f3fa0, 004f3fe4]]
// Convention: __cdecl
// Signature: void core_hero.cpp_CHero_FUN_004f3fa0(CHero * this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_FUN_004f3fa0(CHero *this_ptr)

{
  CDeformableModel *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  FILE *in_stack_0000000c;
  
  this_ptr_00 = &(this_ptr->base_character).model;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_0000000c,"MODELS\\%s\n",pCVar1->model_filename);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  core_skeledit_cpp_FUN_0058a2b0();
  return;
}
