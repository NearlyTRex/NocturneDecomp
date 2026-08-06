// Name: core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0051b750
// Address: 0051b750
// Address Range: [[0051b750, 0051b7c9]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_0051b750(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_0051b750(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *pCVar1;
  CVector3i *pCVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_FUN_0051b7d0(this_ptr);
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  pCVar2 = shape_memdbg_cpp_malloc_FUN_00564c18(pCVar1->vertex_count[0] * 0xc);
  this_ptr->skinned_vertices_buffer = pCVar2;
  if (pCVar2 != (CVector3i *)0x0) {
    this_ptr->cached_skinned_lod_index = -1;
    return;
  }
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 2298;
  core_main_c_displayErrorAndQuit_FUN_004c8440("CDeformableModelInstance::allocPointList out of memory for %d points!");
  this_ptr->cached_skinned_lod_index = -1;
  return;
}
