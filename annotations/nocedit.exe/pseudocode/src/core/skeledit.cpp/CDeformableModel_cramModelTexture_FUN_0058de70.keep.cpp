// Name: core_skeledit.cpp_CDeformableModel_cramModelTexture_FUN_0058de70
// Address: 0058de70
// MANUAL RECONSTRUCTION
// Address Range: [[0058de70, 0058e0aa]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_cramModelTexture_FUN_0058de70(CDeformableModel *this_ptr,char *base_name,int num_crams,int atlas_dimension,int texture_set_index,int max_iterations)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_cramModelTexture_FUN_0058de70(CDeformableModel *this_ptr,char *base_name,int num_crams,int atlas_dimension,int texture_set_index,int max_iterations)

{
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar1;
  ushort *pvVar1;
  SInputFace *pSVar1;
  SCram local_98;
  char *local_24;
  int local_20;
  int local_1c;

  shape_design_c_initializeTextureManager_FUN_0046a880(1);
  shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x40);
  local_20 = 0;
  if (0 < this_ptr->num_textures) {
    local_24 = this_ptr->texture_sets[texture_set_index].textures[0].textures[0].texture_name;
    do {
      uVar3 = 0x7fffffff;
      uVar4 = 0x80000001;
      uVar6 = 0x7fffffff;
      uVar7 = 0x80000001;
      for (local_1c = 0; local_1c < this_ptr->tri_count[0] + this_ptr->cap_tri_count[0];
          local_1c = local_1c + 1) {
        if (local_20 == this_ptr->index_data_ptr[0][local_1c]) {
          pSVar1 = &this_ptr->tri_data_ptr[0][local_1c];
          puVar1 = &pSVar1->u_coord_0;
          pvVar1 = &pSVar1->v_coord_0;
          for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
            if (puVar1[iVar5] < uVar3) {
              uVar3 = puVar1[iVar5];
            }
            if ((int)uVar4 < (int)(uint)puVar1[iVar5]) {
              uVar4 = puVar1[iVar5];
            }
            if (pvVar1[iVar5] < uVar6) {
              uVar6 = pvVar1[iVar5];
            }
            if ((int)uVar7 < (int)(uint)pvVar1[iVar5]) {
              uVar7 = pvVar1[iVar5];
            }
          }
        }
      }
      if ((int)uVar3 <= (int)uVar4) {
        shape_design_c_cramTextures_FUN_0046a970
                  (local_24,uVar3 << 8,uVar6 << 8,uVar4 << 8,uVar7 << 8);
      }
      local_24 = local_24 + 0x48;
      local_20 = local_20 + 1;
    } while (local_20 < this_ptr->num_textures);
  }
  shape_design_c_initializeCram_FUN_0046b6e0(&local_98);
  strcpy(local_98.filename, base_name);
  local_98.coverage_threshold = 0x5f;
  local_98.atlas_dimension = atlas_dimension;
  local_98.min_atlas_size = 1;
  local_98.num_maps = num_crams;
  local_98.paint_borders = 1;
  local_98.max_iterations = max_iterations;
  local_98.fill_gaps = 1;
  local_98.enable_visualization = 1;
  local_98.padding_size = 2;
  shape_design_c_cramTextureList_FUN_0046bb80(&local_98);
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  return;
}
