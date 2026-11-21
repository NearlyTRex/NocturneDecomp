// Name: core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_00544db0
// Address: 00544db0
// Address Range: [[00544db0, 00544e29]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_00544db0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_00544db0(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *pCVar1;
  CVector3i *pCVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_free_FUN_00544e30(this_ptr);
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  pCVar2 = operator_new_array(pCVar1->vertex_count[0] * 0xc);
  this_ptr->skinned_vertices_buffer = pCVar2;
  if (pCVar2 != (CVector3i *)0x0) {
    this_ptr->cached_skinned_lod_index = -1;
    return;
  }
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 2313;
  core_main_c_displayErrorAndQuit_FUN_004e4500("CDeformableModelInstance::allocPointList out of memory for %d points!");
  this_ptr->cached_skinned_lod_index = -1;
  return;
}
