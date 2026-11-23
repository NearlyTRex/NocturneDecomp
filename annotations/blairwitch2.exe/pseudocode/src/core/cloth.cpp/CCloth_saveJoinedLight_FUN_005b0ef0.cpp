// Name: core_cloth.cpp_CCloth_saveJoinedLight_FUN_005b0ef0
// Address: 005b0ef0
// Address Range: [[005b0ef0, 005b0fd4]]
// Convention: __cdecl
// Signature: int __cdecl core_cloth_cpp_CCloth_saveJoinedLight_FUN_005b0ef0(CCloth *this_ptr,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

int __cdecl core_cloth_cpp_CCloth_saveJoinedLight_FUN_005b0ef0(CCloth *this_ptr,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  CDemonRenderer *pCVar2;
  CCloth *pCVar3;
  CCloth *pCVar4;
  char *pcVar5;
  int iVar6;
  
  if (model_ptr == (CDeformableModelInstance *)0x0) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 1264;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CCloth::saveJoinedLight - Can't save light with no model!");
  }
  iVar1 = model_ptr->cached_skinned_lod_index;
  if (iVar1 < 0) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 1269;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CCloth::saveJoinedLight - Model wasn't drawn");
  }
  pCVar4 = (CCloth *)this_ptr->locked_vertex_count;
  iVar6 = 0;
  if (0 < (int)pCVar4) {
    pcVar5 = (this_ptr->model).model_filename + iVar1 * 400;
    pCVar3 = this_ptr;
    do {
      pCVar2 = g_CDemonRenderer_PTR_0060b280;
      iVar1 = *(int *)(pcVar5 + 0x39e7c);
      pCVar3->locked_vertex_indices[600] = g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[iVar1].r
      ;
      pCVar3->locked_vertex_indices[700] = pCVar2->vertex_buffer_ptr[iVar1].g;
      pCVar4 = (CCloth *)((pCVar3->model).model_filename + 4);
      pCVar3->locked_vertex_indices[800] = pCVar2->vertex_buffer_ptr[iVar1].b;
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 4;
      pCVar3 = pCVar4;
    } while (iVar6 < this_ptr->locked_vertex_count);
  }
  return (int)pCVar4;
}
