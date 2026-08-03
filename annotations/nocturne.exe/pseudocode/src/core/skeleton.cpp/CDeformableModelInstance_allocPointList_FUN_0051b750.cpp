// Name: core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0051b750
// Address: 0051b750
// Address Range: [[0051b750, 0051b7c9]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_0051b750(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_0051b750(CDeformableModelInstance *this_ptr)

{
  int iVar1;
  CDeformableModel *pCVar2;
  CVector3i *pCVar3;
  
  core_skeleton_cpp_FUN_0051b7d0(this_ptr);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  iVar1 = pCVar2->vertex_count[0];
  pCVar3 = shape_memdbg_cpp_malloc_FUN_00564c18(iVar1 * 0xc);
  this_ptr->skinned_vertices_buffer = pCVar3;
  if (pCVar3 != (CVector3i *)0x0) {
    this_ptr->cached_skinned_lod_index = -1;
    return;
  }
  g_CHAR_PTR_01cc4800 = "..\\core\\skeleton.cpp";
  g_INT_01cc4804 = 0x8fa;
  core_main_c_FUN_004c8440("CDeformableModelInstance::allocPointList out of memory for %d points!",iVar1);
  this_ptr->cached_skinned_lod_index = -1;
  return;
}
