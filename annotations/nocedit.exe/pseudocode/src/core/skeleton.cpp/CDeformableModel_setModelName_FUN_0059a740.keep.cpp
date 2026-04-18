// Name: core_skeleton.cpp_CDeformableModel_setModelName_FUN_0059a740
// Address: 0059a740
// MANUAL RECONSTRUCTION
// Address Range: [[0059a740, 0059a776]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_setModelName_FUN_0059a740(CDeformableModel *this_ptr,char *model_name)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_setModelName_FUN_0059a740(CDeformableModel *this_ptr,char *model_name)

{
  strcpy(this_ptr->model_name,model_name);
  this_ptr->skeleton_ptr = (CSkeleton *)0x0;
  return;
}
