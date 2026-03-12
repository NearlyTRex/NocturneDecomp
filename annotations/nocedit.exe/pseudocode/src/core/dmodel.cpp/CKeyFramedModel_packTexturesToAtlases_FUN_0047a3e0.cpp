// Name: core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0
// Address: 0047a3e0
// Address Range: [[0047a3e0, 0047a812]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0(CKeyFramedModel *model_ptr,char *atlas_filename,int quality_parameter,int pack_parameter)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dmodel_cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0(CKeyFramedModel *model_ptr,char *atlas_filename,int quality_parameter,int pack_parameter)

{
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar5;
  int iVar9;
  int iVar8;
  int max_u;
  SCram *pSVar9;
  int iVar10;
  char *pcVar10;
  float fStack_c0;
  float fStack_bc;
  SCram local_b8;
  int iStack_44;
  SMRGLTextureLod *pSStack_40;
  char *local_3c;
  int iStack_38;
  char *pcStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  char cVar1;
  double dVar2;
  
  shape_design_c_initializeTextureManager_FUN_0046a880(1);
  shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x40);
  local_24 = 0;
  if (0 < model_ptr->texture_count) {
    local_3c = model_ptr->texture_list[0].textures[0].texture_name;
    do {
      iVar8 = 0x7fffffff;
      max_u = -0x7fffffff;
      iVar6 = 0x7fffffff;
      local_18 = 0;
      iVar7 = -0x7fffffff;
      if (0 < model_ptr->poly_count) {
        local_20 = model_ptr->poly_texture_index_list;
        local_1c = 0;
        do {
          if (local_24 == *local_20) {
            iVar3 = (int)&(((SMRGLPrimitiveQuad *)(model_ptr->poly_vert_list->vertices + -2))->base)
                          .base.type + local_1c;
            iVar5 = iVar3 + 0x24;
            do {
              if (*(int *)(iVar3 + 0x1c) < iVar8) {
                iVar8 = *(int *)(iVar3 + 0x1c);
              }
              if (max_u < *(int *)(iVar3 + 0x1c)) {
                max_u = *(int *)(iVar3 + 0x1c);
              }
              if (*(int *)(iVar3 + 0x20) < iVar6) {
                iVar6 = *(int *)(iVar3 + 0x20);
              }
              if (iVar7 < *(int *)(iVar3 + 0x20)) {
                iVar7 = *(int *)(iVar3 + 0x20);
              }
              iVar3 = iVar3 + 0xc;
            } while (iVar3 != iVar5);
          }
          local_20 = local_20 + 1;
          local_1c = local_1c + 0x48;
          local_18 = local_18 + 1;
        } while (local_18 < model_ptr->poly_count);
      }
      if (iVar8 <= max_u) {
        shape_design_c_cramTextures_FUN_0046a970(local_3c,iVar8,iVar6,max_u,iVar7);
      }
      local_3c = local_3c + 0x48;
      local_24 = local_24 + 1;
    } while (local_24 < model_ptr->texture_count);
  }
  shape_design_c_initializeCram_FUN_0046b6e0(&local_b8);
  pSVar9 = &local_b8;
  do {
    cVar1 = *atlas_filename;
    pSVar9->filename[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = atlas_filename[1];
    atlas_filename = atlas_filename + 2;
    pSVar9->filename[1] = cVar2;
    pSVar9 = (SCram *)(pSVar9->filename + 2);
  } while (cVar2 != '\0');
  local_b8.atlas_dimension = pack_parameter;
  local_b8.min_atlas_size = 1;
  local_b8.coverage_threshold = 0x5f;
  local_b8.padding_size = 2;
  local_b8.num_maps = quality_parameter;
  local_b8.paint_borders = 1;
  local_b8.fill_gaps = 1;
  local_b8.enable_visualization = 1;
  shape_design_c_cramTextureList_FUN_0046bb80(&local_b8);
  iStack_30 = 0;
  if (0 < model_ptr->poly_count) {
    iStack_38 = 0;
    iStack_2c = 0;
    do {
      piVar4 = (int *)((int)model_ptr->poly_texture_index_list + iStack_2c);
      if (*piVar4 < 0) {
        *piVar4 = 0;
      }
      iVar4 = shape_design_c_findTextureByFilename_FUN_0046dfc0
                        (model_ptr->texture_list
                         [*(int *)((int)model_ptr->poly_texture_index_list + iStack_2c)].textures[0]
                         .texture_name);
      iVar9 = (int)&(((SMRGLPrimitiveQuad *)(model_ptr->poly_vert_list->vertices + -2))->base).base.
                    type + iStack_38;
      iVar10 = 0;
      iVar5 = iVar9;
      if (0 < *(int *)(iVar9 + 4)) {
        do {
          fStack_bc = (float)*(int *)(iVar5 + 0x1c) * (float)1.52587890625e-05;
          fStack_c0 = (float)*(int *)(iVar5 + 0x20) * (float)1.52587890625e-05;
          if (fStack_bc < 0.0) {
            fStack_bc = 0.0;
          }
          if ((float)255.999 < fStack_bc) {
            fStack_bc = 255.999;
          }
          if (fStack_c0 < 0.0) {
            fStack_c0 = 0.0;
          }
          if ((float)255.999 < fStack_c0) {
            fStack_c0 = 255.999;
          }
          shape_design_c_fixupCramUV_FUN_0046e090(iVar4,&fStack_bc,&fStack_c0);
          dVar2 = 65536;
          *(int *)(iVar5 + 0x1c) = (int)ROUND(ROUND((double)fStack_bc * 65536));
          *(int *)(iVar5 + 0x20) = (int)ROUND(ROUND(dVar2 * (double)fStack_c0));
          iVar10 = iVar10 + 1;
          iVar5 = iVar5 + 0xc;
        } while (iVar10 < *(int *)(iVar9 + 4));
      }
      iVar5 = shape_design_c_getAtlasMapIndex_FUN_0046e030(iVar4);
      iStack_30 = iStack_30 + 1;
      *(int *)((int)model_ptr->poly_texture_index_list + iStack_2c) = iVar5;
      iStack_2c = iStack_2c + 4;
      iStack_38 = iStack_38 + 0x48;
    } while (iStack_30 < model_ptr->poly_count);
  }
  iVar5 = shape_design_c_getLastTextureProcessIndex_FUN_0046a860();
  iVar4 = 0;
  model_ptr->texture_count = iVar5;
  if (0 < iVar5) {
    pcStack_34 = model_ptr->texture_list[0].textures[0].texture_name;
    do {
      pcVar5 = shape_design_c_getTextureName_FUN_0046e060(iVar4);
      pcVar10 = pcStack_34;
      do {
        cVar2 = *pcVar5;
        *pcVar10 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar2;
        pcVar10 = pcVar10 + 2;
      } while (cVar2 != '\0');
      iVar4 = iVar4 + 1;
      pcStack_34 = pcStack_34 + 0x48;
    } while (iVar4 < model_ptr->texture_count);
  }
  core_dmodel_cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820(model_ptr);
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  return;
}
