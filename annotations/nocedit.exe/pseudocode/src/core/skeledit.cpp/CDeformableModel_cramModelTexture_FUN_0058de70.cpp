// Name: core_skeledit.cpp_CDeformableModel_cramModelTexture_FUN_0058de70
// Address: 0058de70
// Address Range: [[0058de70, 0058e0aa]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_cramModelTexture_FUN_0058de70(CDeformableModel *this_ptr,char *base_name,int num_crams,int atlas_dimension,int texture_set_index,int max_iterations)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_cramModelTexture_FUN_0058de70(CDeformableModel *this_ptr,char *base_name,int num_crams,int atlas_dimension,int texture_set_index,int max_iterations)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  SCram *pSVar8;
  SCram local_98;
  char *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  __STK();
  shape_design_c_initializeTextureManager_FUN_0046a880(1);
  shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x40);
  pSVar8 = &local_98;
  local_20 = 0;
  if (0 < this_ptr->num_textures) {
    local_24 = this_ptr->texture_sets[texture_set_index].textures[0].textures[0].texture_name;
    do {
      uVar3 = 0x7fffffff;
      uVar4 = 0x80000001;
      uVar6 = 0x7fffffff;
      uVar7 = 0x80000001;
      local_14 = 0;
      local_18 = 0;
      for (local_1c = 0; local_1c < this_ptr->tri_count[0] + this_ptr->cap_tri_count[0];
          local_1c = local_1c + 1) {
        iVar2 = (int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 + local_18;
        if (local_20 == *(int *)((int)this_ptr->index_data_ptr[0] + local_14)) {
          iVar5 = iVar2 + 6;
          do {
            if (*(ushort *)(iVar2 + 6) < uVar3) {
              uVar3 = (uint)*(ushort *)(iVar2 + 6);
            }
            if ((int)uVar4 < (int)(uint)*(ushort *)(iVar2 + 6)) {
              uVar4 = (uint)*(ushort *)(iVar2 + 6);
            }
            if (*(ushort *)(iVar2 + 0xc) < uVar6) {
              uVar6 = (uint)*(ushort *)(iVar2 + 0xc);
            }
            if ((int)uVar7 < (int)(uint)*(ushort *)(iVar2 + 0xc)) {
              uVar7 = (uint)*(ushort *)(iVar2 + 0xc);
            }
            iVar2 = iVar2 + 2;
          } while (iVar2 != iVar5);
        }
        local_18 = local_18 + 0x12;
        local_14 = local_14 + 4;
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
  do {
    cVar1 = *base_name;
    pSVar8->filename[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = base_name[1];
    base_name = base_name + 2;
    *(char *)((int)pSVar8 + 1) = cVar1;
    pSVar8 = (SCram *)((int)pSVar8 + 2);
  } while (cVar1 != '\0');
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
