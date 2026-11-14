// Name: core_cloth.cpp_CCloth_saveJoinedLight_FUN_005b0ef0
// Address: 005b0ef0
// Address Range: [[005b0ef0, 005b0fd4]]
// Convention: __cdecl
// Signature: int __cdecl core_cloth_cpp_CCloth_saveJoinedLight_FUN_005b0ef0(CCloth *this_ptr,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_cloth_cpp_CCloth_saveJoinedLight_FUN_005b0ef0(CCloth *this_ptr,CDeformableModelInstance *model_ptr)

{
  int *piVar1;
  CCloth *pCVar2;
  CCloth *pCVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  if (model_ptr == (CDeformableModelInstance *)0x0) {
    _DAT_01d046a0 = "..\\core\\cloth.cpp";
    _DAT_01d046a4 = 0x4f0;
    core_main_c_FUN_004e4500("CCloth::saveJoinedLight - Can't save light with no model!");
  }
  iVar4 = model_ptr->cached_skinned_lod_index;
  if (iVar4 < 0) {
    _DAT_01d046a0 = "..\\core\\cloth.cpp";
    _DAT_01d046a4 = 0x4f5;
    core_main_c_FUN_004e4500("CCloth::saveJoinedLight - Model wasn't drawn");
  }
  pCVar3 = (CCloth *)this_ptr->locked_vertex_count;
  iVar6 = 0;
  if (0 < (int)pCVar3) {
    pcVar5 = (this_ptr->model).model_filename + iVar4 * 400;
    pCVar2 = this_ptr;
    do {
      piVar1 = DAT_0060b280;
      iVar4 = *(int *)(pcVar5 + 0x39e7c) * 0x30;
      pCVar2->locked_vertex_indices[600] = *(int *)(iVar4 + 0x20 + *DAT_0060b280);
      pCVar2->locked_vertex_indices[700] = *(int *)(iVar4 + 0x24 + *piVar1);
      pCVar3 = (CCloth *)((pCVar2->model).model_filename + 4);
      pCVar2->locked_vertex_indices[800] = *(int *)(iVar4 + 0x28 + *piVar1);
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 4;
      pCVar2 = pCVar3;
    } while (iVar6 < this_ptr->locked_vertex_count);
  }
  return (int)pCVar3;
}
