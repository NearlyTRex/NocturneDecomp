// Name: core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0
// Address: 0059deb0
// Address Range: [[0059deb0, 0059df33]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0(CDeformableModelInstance *this_ptr)

{
  int iVar1;
  CDeformableModel *pCVar2;
  CVector3i *pCVar3;
  
  core_skeleton_cpp_CDeformableModelInstance_free_FUN_0059df40(this_ptr);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  iVar1 = pCVar2->vertex_count[0];
  pCVar3 = (CVector3i *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                     (iVar1 * 0xc,"..\\core\\skeleton.cpp",2297);
  this_ptr->skinned_vertices_buffer = pCVar3;
  if (pCVar3 != (CVector3i *)0x0) {
    this_ptr->cached_skinned_lod_index = -1;
    return;
  }
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 2298;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModelInstance::allocPointList out of memory for %d points!",iVar1);
  this_ptr->cached_skinned_lod_index = -1;
  return;
}
