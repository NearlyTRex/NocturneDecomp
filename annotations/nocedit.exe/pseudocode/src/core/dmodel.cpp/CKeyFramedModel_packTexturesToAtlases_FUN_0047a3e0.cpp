// Name: core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0
// Address: 0047a3e0
// Address Range: [[0047a3e0, 0047a812]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0(CKeyFramedModel *model_ptr,char *atlas_filename,int quality_parameter,int pack_parameter)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dmodel_cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0(CKeyFramedModel *model_ptr,char *atlas_filename,int quality_parameter,int pack_parameter)

{
  char cVar1;
  double dVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int max_u;
  SCramConfig *pSVar9;
  char *pcVar10;
  float fStack_bc;
  SCramConfig local_b8;
  int iStack_40;
  SMRGLTextureExtended *local_3c;
  int iStack_34;
  char *pcStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  shape_design_c_initializeTextureManager_FUN_0046a880(1);
  shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x40);
  local_24 = 0;
  if (0 < model_ptr->texture_count) {
    local_3c = (SMRGLTextureExtended *)model_ptr->texture_list[0].base.texture_name;
    do {
      iVar8 = 0x7fffffff;
      max_u = -0x7fffffff;
      iVar5 = 0x7fffffff;
      local_18 = 0;
      iVar6 = -0x7fffffff;
      if (0 < model_ptr->poly_count) {
        local_20 = model_ptr->poly_texture_index_list;
        local_1c = 0;
        do {
          if (local_24 == *local_20) {
            iVar7 = local_1c + (int)model_ptr->poly_vert_list;
            local_14 = iVar7 + 0x24;
            do {
              if (*(int *)(iVar7 + 0x1c) < iVar8) {
                iVar8 = *(int *)(iVar7 + 0x1c);
              }
              if (max_u < *(int *)(iVar7 + 0x1c)) {
                max_u = *(int *)(iVar7 + 0x1c);
              }
              if (*(int *)(iVar7 + 0x20) < iVar5) {
                iVar5 = *(int *)(iVar7 + 0x20);
              }
              if (iVar6 < *(int *)(iVar7 + 0x20)) {
                iVar6 = *(int *)(iVar7 + 0x20);
              }
              iVar7 = iVar7 + 0xc;
            } while (iVar7 != local_14);
          }
          local_20 = local_20 + 1;
          local_1c = local_1c + 0x48;
          local_18 = local_18 + 1;
        } while (local_18 < model_ptr->poly_count);
      }
      if (iVar8 <= max_u) {
        shape_design_c_cramTextures_FUN_0046a970((char *)local_3c,iVar8,iVar5,max_u,iVar6);
      }
      local_3c = local_3c + 1;
      local_24 = local_24 + 1;
    } while (local_24 < model_ptr->texture_count);
  }
  shape_design_c_initializeCramConfig_FUN_0046b6e0(&local_b8);
  pSVar9 = &local_b8;
  do {
    cVar1 = *atlas_filename;
    pSVar9->filename[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = atlas_filename[1];
    atlas_filename = atlas_filename + 2;
    pSVar9->filename[1] = cVar1;
    pSVar9 = (SCramConfig *)(pSVar9->filename + 2);
  } while (cVar1 != '\0');
  local_b8.initial_value = pack_parameter;
  local_b8.enable_optimization = 1;
  local_b8.coverage_threshold = 0x5f;
  local_b8.algorithm_mode = 2;
  local_b8.enable_gap_filling = quality_parameter;
  local_b8.enable_scaling = 1;
  local_b8.enable_rotation = 1;
  local_b8.enable_flipping = 1;
  shape_design_c_cramTextureList_FUN_0046bb80(&local_b8);
  iStack_2c = 0;
  if (0 < model_ptr->poly_count) {
    local_3c = model_ptr->texture_list;
    iStack_34 = 0;
    iStack_28 = 0;
    do {
      piVar3 = (int *)((int)model_ptr->poly_texture_index_list + iStack_28);
      if (*piVar3 < 0) {
        *piVar3 = 0;
      }
      local_24 = shape_design_c_findTextureByFilename_FUN_0046dfc0
                           (local_3c[*(int *)((int)model_ptr->poly_texture_index_list + iStack_28)].
                            base.texture_name);
      iVar6 = (int)model_ptr->poly_vert_list + iStack_34;
      iVar8 = 0;
      iVar5 = iVar6;
      if (0 < *(int *)(iVar6 + 4)) {
        do {
          local_b8.filename._0_4_ =
               (float)*(int *)(iVar5 + 0x1c) * (float)1.52587890625e-05;
          fStack_bc = (float)*(int *)(iVar5 + 0x20) * (float)1.52587890625e-05;
          if ((float)local_b8.filename._0_4_ < 0.0) {
            local_b8.filename._0_4_ = 0.0;
          }
          if ((float)255.999 < (float)local_b8.filename._0_4_) {
            local_b8.filename._0_4_ = 255.999;
          }
          if (fStack_bc < 0.0) {
            fStack_bc = 0.0;
          }
          if ((float)255.999 < fStack_bc) {
            fStack_bc = 255.999;
          }
          shape_design_c_fixupCramUV_FUN_0046e090(local_24,(float *)&local_b8,&fStack_bc);
          dVar2 = 65536;
          *(int *)(iVar5 + 0x1c) =
               (int)ROUND(ROUND((double)(float)local_b8.filename._0_4_ * 65536));
          iStack_40 = (int)ROUND(ROUND(dVar2 * (double)fStack_bc));
          *(int *)(iVar5 + 0x20) = iStack_40;
          iVar8 = iVar8 + 1;
          iVar5 = iVar5 + 0xc;
        } while (iVar8 < *(int *)(iVar6 + 4));
      }
      iVar5 = shape_design_c_getAtlasMapIndex_FUN_0046e030(local_24);
      iStack_2c = iStack_2c + 1;
      *(int *)((int)model_ptr->poly_texture_index_list + iStack_28) = iVar5;
      iStack_28 = iStack_28 + 4;
      iStack_34 = iStack_34 + 0x48;
    } while (iStack_2c < model_ptr->poly_count);
  }
  iVar5 = shape_design_c_getLastTextureProcessIndex_FUN_0046a860();
  iVar6 = 0;
  model_ptr->texture_count = iVar5;
  if (0 < iVar5) {
    pcStack_30 = model_ptr->texture_list[0].base.texture_name;
    do {
      pcVar4 = shape_design_c_getTextureName_FUN_0046e060(iVar6);
      pcVar10 = pcStack_30;
      do {
        cVar1 = *pcVar4;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      iVar6 = iVar6 + 1;
      pcStack_30 = pcStack_30 + 0x48;
    } while (iVar6 < model_ptr->texture_count);
  }
  core_dmodel_cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820(model_ptr);
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  return;
}
