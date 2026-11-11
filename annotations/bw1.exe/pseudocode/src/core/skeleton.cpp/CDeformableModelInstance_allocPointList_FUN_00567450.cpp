// Name: core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_00567450
// Address: 00567450
// Address Range: [[00567450, 005674c9]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_00567450(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_00567450(CDeformableModelInstance *this_ptr)

{
  int iVar1;
  CDeformableModel *pCVar2;
  CVector3i *pCVar3;
  
  core_skeleton_cpp_FUN_005674d0(this_ptr);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(this_ptr);
  iVar1 = pCVar2->vertex_count[0];
  pCVar3 = (CVector3i *)operator_new_array(iVar1 * 0xc);
  this_ptr->skinned_vertices_buffer = pCVar3;
  if (pCVar3 != (CVector3i *)0x0) {
    this_ptr->cached_skinned_lod_index = -1;
    return;
  }
  _DAT_01d1d400 = "..\\core\\skeleton.cpp";
  _DAT_01d1d404 = 0x919;
  core_main_c_FUN_005030e0("CDeformableModelInstance::allocPointList out of memory for %d points!",iVar1);
  this_ptr->cached_skinned_lod_index = -1;
  return;
}
