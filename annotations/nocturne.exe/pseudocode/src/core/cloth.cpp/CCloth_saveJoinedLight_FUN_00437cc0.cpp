// Name: core_cloth.cpp_CCloth_saveJoinedLight_FUN_00437cc0
// Address: 00437cc0
// Address Range: [[00437cc0, 00437da4]]
// Convention: __cdecl
// Signature: int __cdecl core_cloth_cpp_CCloth_saveJoinedLight_FUN_00437cc0(CCloth *this_ptr,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

int __cdecl core_cloth_cpp_CCloth_saveJoinedLight_FUN_00437cc0(CCloth *this_ptr,CDeformableModelInstance *model_ptr)

{
  int *piVar1;
  CCloth *pCVar2;
  CCloth *pCVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  if (model_ptr == (CDeformableModelInstance *)0x0) {
    PTR_01cc4800 = "..\\core\\cloth.cpp";
    INT_01cc4804 = 0x4e3;
    core_main_c_FUN_004c8440("CCloth::saveJoinedLight - Can't save light with no model!");
  }
  iVar4 = model_ptr->cached_skinned_lod_index;
  if (iVar4 < 0) {
    PTR_01cc4800 = "..\\core\\cloth.cpp";
    INT_01cc4804 = 0x4e8;
    core_main_c_FUN_004c8440("CCloth::saveJoinedLight - Model wasn't drawn");
  }
  pCVar3 = (CCloth *)this_ptr->vertices[0x2f3].rest_lengths[1];
  iVar6 = 0;
  if (0 < (int)pCVar3) {
    pcVar5 = (this_ptr->model).model_filename + iVar4 * 400;
    pCVar2 = this_ptr;
    do {
      piVar1 = DAT_005ae704;
      iVar4 = *(int *)(pcVar5 + 0x39e7c) * 0x30;
      pCVar2->vertices[0x2fb].bone_positions[1].z = *(float *)(iVar4 + 0x20 + *DAT_005ae704);
      pCVar2->vertices[0x2fd].connected_indices[9] = *(int *)(iVar4 + 0x24 + *piVar1);
      pCVar3 = (CCloth *)((pCVar2->model).model_filename + 4);
      pCVar2->vertices[0x2fe].prev_position.x = *(float *)(iVar4 + 0x28 + *piVar1);
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 4;
      pCVar2 = pCVar3;
    } while (iVar6 < (int)this_ptr->vertices[0x2f3].rest_lengths[1]);
  }
  return (int)pCVar3;
}
