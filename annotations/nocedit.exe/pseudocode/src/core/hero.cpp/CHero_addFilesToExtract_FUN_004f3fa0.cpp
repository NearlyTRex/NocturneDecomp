// Name: core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0
// Address: 004f3fa0
// Address Range: [[004f3fa0, 004f3fe4]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_addFilesToExtract_FUN_004f3fa0(CHero *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_addFilesToExtract_FUN_004f3fa0(CHero *this_ptr,_FILE *file_handle)

{
  CDeformableModel *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  
  this_ptr_00 = &(this_ptr->base).model;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  _fprintf(file_handle,"MODELS\\%s\n",pCVar1->model_filename);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  core_skeledit_cpp_FUN_0058a2b0();
  return;
}
