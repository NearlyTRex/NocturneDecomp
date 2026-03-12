// Name: core_skeledit.cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60
// Address: 0058ec60
// Address Range: [[0058ec60, 0058edd7]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60(CDeformableModel *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar1;
  int iVar6;
  int iVar4;
  int iVar5;
  CDeformableModel *pCVar6;
  SMRGLTextureLod *local_20;
  STextureSet *local_1c;
  CDeformableModel *local_18;
  int local_14;
  
  __STK();
  if (this_ptr->num_texture_sets != 1) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0xa72;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::removeUnusedTextures() - textureSetCount must be 1.");
  }
  iVar4 = 0;
  if (0 < this_ptr->num_textures) {
    local_1c = this_ptr->texture_sets;
    local_20 = this_ptr->texture_sets[0].textures + 1;
    do {
      iVar5 = 0;
      if (0 < this_ptr->num_lods) {
        local_18 = this_ptr;
        do {
          iVar2 = 0;
          for (iVar3 = 0; iVar3 < local_18->tri_count[0] + local_18->cap_tri_count[0];
              iVar3 = iVar3 + 1) {
            if (iVar4 == *(int *)(iVar2 + (int)local_18->index_data_ptr[0])) {
              iVar4 = iVar4 + 1;
              local_20 = local_20 + 1;
              local_1c = (STextureSet *)(local_1c->textures + 1);
              goto LAB_0058ed3a;
            }
            iVar2 = iVar2 + 4;
          }
          iVar5 = iVar5 + 1;
          local_18 = (CDeformableModel *)local_18->lod_info;
        } while (iVar5 < this_ptr->num_lods);
      }
      iVar6 = this_ptr->num_textures + -1;
      this_ptr->num_textures = iVar6;
      memmove(local_1c,local_20,(iVar6 - iVar4) * 0x48);
      local_14 = 0;
      pCVar6 = this_ptr;
      if (0 < this_ptr->num_lods) {
        do {
          iVar1 = 0;
          iVar6 = 0;
          while (iVar6 < pCVar6->tri_count[0] + pCVar6->cap_tri_count[0]) {
            piVar1 = (int *)((int)pCVar6->index_data_ptr[0] + iVar1);
            if (iVar4 < *piVar1) {
              *piVar1 = *piVar1 + -1;
              iVar6 = iVar6 + 1;
              iVar1 = iVar1 + 4;
            }
            else {
              iVar6 = iVar6 + 1;
              iVar1 = iVar1 + 4;
            }
          }
          pCVar6 = (CDeformableModel *)pCVar6->lod_info;
          local_14 = local_14 + 1;
        } while (local_14 < this_ptr->num_lods);
      }
LAB_0058ed3a:
    } while (iVar4 < this_ptr->num_textures);
  }
  return;
}
