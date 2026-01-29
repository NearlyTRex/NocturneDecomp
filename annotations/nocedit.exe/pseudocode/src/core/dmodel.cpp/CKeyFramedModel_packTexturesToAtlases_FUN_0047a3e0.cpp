// Name: core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0
// Address: 0047a3e0
// Address Range: [[0047a3e0, 0047a812]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 (CKeyFramedModel *model_ptr,char *atlas_filename,int quality_parameter,int pack_parameter)

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
  int iVar7;
  int max_u;
  char *pcVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fStack_b4;
  float afStack_b0 [18];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
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
        shape_design_c_cramTextures_FUN_0046a970((char *)local_3c,iVar7,iVar4,max_u,iVar5);
      }
      local_3c = local_3c + 1;
      local_24 = local_24 + 1;
    } while (local_24 < model_ptr->texture_count);
  }
  shape_design_c_initializeCramConfig_FUN_0046b6e0((SCramConfig *)&stack0xffffff48);
  pcVar8 = &stack0xffffff48;
  do {
    cVar1 = *atlas_filename;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = atlas_filename[1];
    atlas_filename = atlas_filename + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  local_68 = pack_parameter;
  local_5c = 1;
  local_60 = 0x5f;
  local_64 = 2;
  local_58 = quality_parameter;
  local_4c = 1;
  local_54 = 1;
  local_50 = 1;
  shape_design_c_cramTextureList_FUN_0046bb80((SCramConfig *)&stack0xffffff48);
  iStack_2c = 0;
  if (0 < model_ptr->poly_count) {
    local_3c = model_ptr->texture_list;
    iStack_34 = 0;
    iStack_28 = 0;
    do {
      piVar2 = (int *)((int)model_ptr->poly_texture_index_list + iStack_28);
      if (*piVar2 < 0) {
        *piVar2 = 0;
      }
      local_24 = shape_design_c_findTextureByFilename_FUN_0046dfc0
                           (local_3c[*(int *)((int)model_ptr->poly_texture_index_list + iStack_28)].
                            base.texture_name);
      iVar5 = (int)model_ptr->poly_vert_list + iStack_34;
      iVar7 = 0;
      iVar4 = iVar5;
      if (0 < *(int *)(iVar5 + 4)) {
        do {
          afStack_b0[0] = (float)*(int *)(iVar4 + 0x1c) * (float)1.52587890625e-05;
          fStack_b4 = (float)*(int *)(iVar4 + 0x20) * (float)1.52587890625e-05;
          if (afStack_b0[0] < 0.0) {
            afStack_b0[0] = 0.0;
          }
          if ((float)255.999 < afStack_b0[0]) {
            afStack_b0[0] = 255.999;
          }
          if (fStack_b4 < 0.0) {
            fStack_b4 = 0.0;
          }
          if ((float)255.999 < fStack_b4) {
            fStack_b4 = 255.999;
          }
          shape_design_c_fixupCramUV_FUN_0046e090(local_1c,afStack_b0,&fStack_b4);
          dVar10 = 65536;
          fVar11 = 6.580217e-39;
          dVar9 = round((double)afStack_b0[0] * 65536);
          local_3c = (SMRGLTextureExtended *)(int)ROUND(dVar9);
          *(SMRGLTextureExtended **)(iVar4 + 0x1c) = local_3c;
          dVar10 = round(dVar10 * (double)fVar11);
          iStack_40 = (int)ROUND(dVar10);
          *(int *)(iVar4 + 0x20) = iStack_40;
          iVar7 = iVar7 + 1;
          iVar4 = iVar4 + 0xc;
        } while (iVar7 < *(int *)(iVar5 + 4));
      }
      iVar4 = shape_design_c_getAtlasMapIndex_FUN_0046e030(local_24);
      iStack_2c = iStack_2c + 1;
      *(int *)((int)model_ptr->poly_texture_index_list + iStack_28) = iVar4;
      iStack_28 = iStack_28 + 4;
      iStack_34 = iStack_34 + 0x48;
    } while (iStack_2c < model_ptr->poly_count);
  }
  iVar4 = shape_design_c_getLastTextureProcessIndex_FUN_0046a860();
  iVar5 = 0;
  model_ptr->texture_count = iVar4;
  if (0 < iVar4) {
    pcStack_30 = model_ptr->texture_list[0].base.texture_name;
    do {
      pcVar3 = shape_design_c_getTextureName_FUN_0046e060(iVar5);
      pcVar8 = pcStack_30;
      do {
        cVar1 = *pcVar3;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      iVar5 = iVar5 + 1;
      pcStack_30 = pcStack_30 + 0x48;
    } while (iVar5 < model_ptr->texture_count);
  }
  core_dmodel_cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820(model_ptr);
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  return;
}
