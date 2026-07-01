// Name: core_cloth.cpp_CCloth_saveJoinedLight_FUN_0043b9f0
// Address: 0043b9f0
// MANUAL RECONSTRUCTION
// Address Range: [[0043b9f0, 0043bad4]]
// Convention: __cdecl
// Signature: int __cdecl core_cloth_cpp_CCloth_saveJoinedLight_FUN_0043b9f0(CCloth *this_ptr,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

int __cdecl core_cloth_cpp_CCloth_saveJoinedLight_FUN_0043b9f0(CCloth *this_ptr,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  CDemonRenderer *pCVar2;
  int *piVar5;
  int iVar6;
  int vertex_count;

  if (model_ptr == (CDeformableModelInstance *)0x0) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 1251;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCloth::saveJoinedLight - Can't save light with no model!");
  }
  iVar1 = model_ptr->cached_skinned_lod_index;
  if (iVar1 < 0) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 1256;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCloth::saveJoinedLight - Model wasn't drawn");
  }
  vertex_count = this_ptr->locked_vertex_count;
  iVar6 = 0;
  if (0 < vertex_count) {
    piVar5 = &this_ptr->locked_vertex_indices[100 + iVar1 * 100];
    do {
      pCVar2 = g_CDemonRendererPtr2;
      iVar1 = piVar5[iVar6];
      this_ptr->locked_vertex_indices[600 + iVar6] = pCVar2->vertex_buffer_ptr[iVar1].r;
      this_ptr->locked_vertex_indices[700 + iVar6] = pCVar2->vertex_buffer_ptr[iVar1].g;
      this_ptr->locked_vertex_indices[800 + iVar6] = pCVar2->vertex_buffer_ptr[iVar1].b;
      iVar6 = iVar6 + 1;
    } while (iVar6 < this_ptr->locked_vertex_count);
  }
  return vertex_count;
}
