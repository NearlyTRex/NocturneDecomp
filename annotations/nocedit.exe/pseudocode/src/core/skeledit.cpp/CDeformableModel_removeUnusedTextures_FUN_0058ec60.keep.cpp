// Name: core_skeledit.cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60
// Address: 0058ec60
// MANUAL RECONSTRUCTION
// Address Range: [[0058ec60, 0058edd7]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60(CDeformableModel *this_ptr)

{
  int *piVar1;
  int iVar3;
  int iVar6;
  int iVar4;
  int iVar5;
  SMRGLTextureLod *local_20;
  SMRGLTextureLod *local_1c;
  int local_14;

  if (this_ptr->num_texture_sets != 1) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 2674;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::removeUnusedTextures() - textureSetCount must be 1.");
  }
  iVar4 = 0;
  if (0 < this_ptr->num_textures) {
    local_1c = this_ptr->texture_sets[0].textures;
    local_20 = this_ptr->texture_sets[0].textures + 1;
    do {
      iVar5 = 0;
      if (0 < this_ptr->num_lods) {
        do {
          for (iVar3 = 0; iVar3 < this_ptr->tri_count[iVar5] + this_ptr->cap_tri_count[iVar5];
              iVar3 = iVar3 + 1) {
            if (iVar4 == this_ptr->index_data_ptr[iVar5][iVar3]) {
              iVar4 = iVar4 + 1;
              local_20 = local_20 + 1;
              local_1c = local_1c + 1;
              goto LAB_0058ed3a;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < this_ptr->num_lods);
      }
      iVar6 = this_ptr->num_textures + -1;
      this_ptr->num_textures = iVar6;
      memmove(local_1c,local_20,(iVar6 - iVar4) * sizeof(*local_1c));
      local_14 = 0;
      if (0 < this_ptr->num_lods) {
        do {
          iVar6 = 0;
          while (iVar6 < this_ptr->tri_count[local_14] + this_ptr->cap_tri_count[local_14]) {
            piVar1 = &this_ptr->index_data_ptr[local_14][iVar6];
            if (iVar4 < *piVar1) {
              *piVar1 = *piVar1 + -1;
            }
            iVar6 = iVar6 + 1;
          }
          local_14 = local_14 + 1;
        } while (local_14 < this_ptr->num_lods);
      }
LAB_0058ed3a:
    } while (iVar4 < this_ptr->num_textures);
  }
  return;
}
