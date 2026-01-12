// Name: core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0
// Address: 0047a3e0
// Address Range: [[0047a3e0, 0047a812]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0(CKeyFramedModel * model_ptr, char * atlas_filename, int quality_parameter, int pack_parameter)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0
          (CKeyFramedModel *model_ptr,char *atlas_filename,int quality_parameter,int pack_parameter)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  int max_u;
  SCramConfig *pSVar8;
  char *pcVar9;
  float10 fVar10;
  double dVar11;
  float fVar12;
  float fStack_bc;
  SCramConfig local_b8;
  SMRGLTextureExtended *pSStack_40;
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
  
  shape_design_c_initializeTextureManager_FUN_0046a880(1);
  shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x40);
  local_24 = 0;
  if (0 < model_ptr->texture_count) {
    local_3c = model_ptr->texture_list[0].base.texture_name;
    do {
      iVar7 = 0x7fffffff;
      max_u = -0x7fffffff;
      iVar4 = 0x7fffffff;
      local_18 = 0;
      iVar5 = -0x7fffffff;
      if (0 < model_ptr->poly_count) {
        local_20 = model_ptr->poly_texture_index_list;
        local_1c = 0;
        do {
          if (local_24 == *local_20) {
            iVar6 = local_1c + (int)model_ptr->poly_vert_list;
            local_14 = iVar6 + 0x24;
            do {
              if (*(int *)(iVar6 + 0x1c) < iVar7) {
                iVar7 = *(int *)(iVar6 + 0x1c);
              }
              if (max_u < *(int *)(iVar6 + 0x1c)) {
                max_u = *(int *)(iVar6 + 0x1c);
              }
              if (*(int *)(iVar6 + 0x20) < iVar4) {
                iVar4 = *(int *)(iVar6 + 0x20);
              }
              if (iVar5 < *(int *)(iVar6 + 0x20)) {
                iVar5 = *(int *)(iVar6 + 0x20);
              }
              iVar6 = iVar6 + 0xc;
            } while (iVar6 != local_14);
          }
          local_20 = local_20 + 1;
          local_1c = local_1c + 0x48;
          local_18 = local_18 + 1;
        } while (local_18 < model_ptr->poly_count);
      }
      if (iVar7 <= max_u) {
        shape_design_c_cramTextures_FUN_0046a970(local_3c,iVar7,iVar4,max_u,iVar5);
      }
      local_3c = local_3c + 0x48;
      local_24 = local_24 + 1;
    } while (local_24 < model_ptr->texture_count);
  }
  shape_design_c_initializeCramConfig_FUN_0046b6e0(&local_b8);
  pSVar8 = &local_b8;
  do {
    cVar1 = *atlas_filename;
    pSVar8->filename[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = atlas_filename[1];
    atlas_filename = atlas_filename + 2;
    pSVar8->filename[1] = cVar1;
    pSVar8 = (SCramConfig *)(pSVar8->filename + 2);
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
  iStack_30 = 0;
  if (0 < model_ptr->poly_count) {
    pSStack_40 = model_ptr->texture_list;
    iStack_38 = 0;
    iStack_2c = 0;
    do {
      piVar2 = (int *)((int)model_ptr->poly_texture_index_list + iStack_2c);
      if (*piVar2 < 0) {
        *piVar2 = 0;
      }
      iStack_28 = shape_design_c_findTextureByFilename_FUN_0046dfc0
                            (pSStack_40
                             [*(int *)((int)model_ptr->poly_texture_index_list + iStack_2c)].base.
                             texture_name);
      iVar5 = (int)model_ptr->poly_vert_list + iStack_38;
      iVar7 = 0;
      iVar4 = iVar5;
      if (0 < *(int *)(iVar5 + 4)) {
        do {
          shape_design_c_fixupCramUV_FUN_0046e090
                    (iStack_30,(float *)&stack0xffffff3c,(float *)&stack0xffffff38);
          fVar10 = (float10)65536;
          fVar12 = 6.580217e-39;
          dVar11 = crt_math_c_round_FUN_005fe6b0((double)((float10)fStack_bc * fVar10));
          local_b8.final_mode = (int)ROUND(dVar11);
          *(int *)(iVar4 + 0x1c) = local_b8.final_mode;
          dVar11 = crt_math_c_round_FUN_005fe6b0((double)(fVar10 * (float10)fVar12));
          local_b8.enable_scaling = (int)ROUND(dVar11);
          *(int *)(iVar4 + 0x20) = local_b8.enable_scaling;
          iVar7 = iVar7 + 1;
          iVar4 = iVar4 + 0xc;
        } while (iVar7 < *(int *)(iVar5 + 4));
      }
      iVar4 = shape_design_c_getAtlasMapIndex_FUN_0046e030(iStack_30);
      iStack_30 = iStack_30 + 1;
      *(int *)((int)model_ptr->poly_texture_index_list + iStack_2c) = iVar4;
      iStack_2c = iStack_2c + 4;
      iStack_38 = iStack_38 + 0x48;
    } while (iStack_30 < model_ptr->poly_count);
  }
  iVar4 = shape_design_c_getLastTextureProcessIndex_FUN_0046a860();
  iVar5 = 0;
  model_ptr->texture_count = iVar4;
  if (0 < iVar4) {
    pcStack_34 = model_ptr->texture_list[0].base.texture_name;
    do {
      pcVar3 = shape_design_c_getTextureName_FUN_0046e060(iVar5);
      pcVar9 = pcStack_34;
      do {
        cVar1 = *pcVar3;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      iVar5 = iVar5 + 1;
      pcStack_34 = pcStack_34 + 0x48;
    } while (iVar5 < model_ptr->texture_count);
  }
  core_dmodel_cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820(model_ptr);
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  return;
}
