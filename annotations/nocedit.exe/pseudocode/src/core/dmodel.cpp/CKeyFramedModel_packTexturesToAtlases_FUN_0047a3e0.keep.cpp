// Name: core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0
// Address: 0047a3e0
// MANUAL RECONSTRUCTION
// Address Range: [[0047a3e0, 0047a812]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0(CKeyFramedModel *model_ptr,char *atlas_filename,int quality_parameter,int pack_parameter)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0(CKeyFramedModel *model_ptr,char *atlas_filename,int quality_parameter,int pack_parameter)

{
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar5;
  int iVar8;
  int max_u;
  int iVar10;
  float fStack_c0;
  float fStack_bc;
  SCram local_b8;
  char *local_3c;
  char *pcStack_34;
  int iStack_30;
  int local_24;
  int local_18;
  double dVar2;
  SMRGLPrimitiveQuad *pSVar1;
  
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
        for (local_18 = 0; local_18 < model_ptr->poly_count; local_18 = local_18 + 1) {
          if (local_24 == model_ptr->poly_texture_index_list[local_18]) {
            pSVar1 = model_ptr->poly_vert_list + local_18;
            for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
              if (pSVar1->vertices[iVar3].texture_u < iVar8) {
                iVar8 = pSVar1->vertices[iVar3].texture_u;
              }
              if (max_u < pSVar1->vertices[iVar3].texture_u) {
                max_u = pSVar1->vertices[iVar3].texture_u;
              }
              if (pSVar1->vertices[iVar3].texture_v < iVar6) {
                iVar6 = pSVar1->vertices[iVar3].texture_v;
              }
              if (iVar7 < pSVar1->vertices[iVar3].texture_v) {
                iVar7 = pSVar1->vertices[iVar3].texture_v;
              }
            }
          }
        }
      }
      if (iVar8 <= max_u) {
        shape_design_c_cramTextures_FUN_0046a970(local_3c,iVar8,iVar6,max_u,iVar7);
      }
      local_3c = local_3c + 0x48;
      local_24 = local_24 + 1;
    } while (local_24 < model_ptr->texture_count);
  }
  shape_design_c_initializeCram_FUN_0046b6e0(&local_b8);
  strcpy(local_b8.filename,atlas_filename);
  local_b8.atlas_dimension = pack_parameter;
  local_b8.min_atlas_size = 1;
  local_b8.coverage_threshold = 0x5f;
  local_b8.padding_size = 2;
  local_b8.num_maps = quality_parameter;
  local_b8.paint_borders = 1;
  local_b8.fill_gaps = 1;
  local_b8.enable_visualization = 1;
  shape_design_c_cramTextureList_FUN_0046bb80(&local_b8);
  if (0 < model_ptr->poly_count) {
    for (iStack_30 = 0; iStack_30 < model_ptr->poly_count; iStack_30 = iStack_30 + 1) {
      if (model_ptr->poly_texture_index_list[iStack_30] < 0) {
        model_ptr->poly_texture_index_list[iStack_30] = 0;
      }
      iVar4 = shape_design_c_findTextureByFilename_FUN_0046dfc0
                        (model_ptr->texture_list
                         [model_ptr->poly_texture_index_list[iStack_30]].textures[0]
                         .texture_name);
      pSVar1 = model_ptr->poly_vert_list + iStack_30;
      if (0 < pSVar1->base.base.count) {
        for (iVar10 = 0; iVar10 < pSVar1->base.base.count; iVar10 = iVar10 + 1) {
          fStack_bc = (float)pSVar1->vertices[iVar10].texture_u * (float)1.52587890625e-05;
          fStack_c0 = (float)pSVar1->vertices[iVar10].texture_v * (float)1.52587890625e-05;
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
          pSVar1->vertices[iVar10].texture_u = (int)ROUND(ROUND((double)fStack_bc * 65536));
          pSVar1->vertices[iVar10].texture_v = (int)ROUND(ROUND(dVar2 * (double)fStack_c0));
        }
      }
      iVar5 = shape_design_c_getAtlasMapIndex_FUN_0046e030(iVar4);
      model_ptr->poly_texture_index_list[iStack_30] = iVar5;
    }
  }
  iVar5 = shape_design_c_getLastTextureProcessIndex_FUN_0046a860();
  iVar4 = 0;
  model_ptr->texture_count = iVar5;
  if (0 < iVar5) {
    pcStack_34 = model_ptr->texture_list[0].textures[0].texture_name;
    do {
      pcVar5 = shape_design_c_getTextureName_FUN_0046e060(iVar4);
      strcpy(pcStack_34,pcVar5);
      iVar4 = iVar4 + 1;
      pcStack_34 = pcStack_34 + 0x48;
    } while (iVar4 < model_ptr->texture_count);
  }
  core_dmodel_cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820(model_ptr);
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  return;
}
