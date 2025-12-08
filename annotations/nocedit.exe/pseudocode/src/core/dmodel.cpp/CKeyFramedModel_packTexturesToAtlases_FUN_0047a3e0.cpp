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
  int iVar7;
  BADSPACEBASE *in_ESP;
  int iVar8;
  int max_u;
  char *pcVar9;
  float10 fVar10;
  double dVar11;
  float fVar12;
  float fStack_a4;
  char *pcStack_34;
  int local_24;
  int local_1c;
  char *local_18;
  int local_14;
  int iVar13;
  
  shape_design_c_initializeTextureManager_FUN_0046a880(1);
  shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x40);
  local_1c = 0;
  if (0 < model_ptr->texture_count) {
    pcStack_34 = model_ptr->texture_list[0].base.texture_name;
    do {
      iVar8 = 0x7fffffff;
      max_u = -0x7fffffff;
      iVar4 = 0x7fffffff;
      iVar13 = 0;
      iVar5 = -0x7fffffff;
      if (0 < model_ptr->poly_count) {
        local_18 = (char *)model_ptr->poly_texture_index_list;
        local_14 = 0;
        do {
          if (local_1c == *(int *)local_18) {
            iVar6 = local_14 + (int)model_ptr->poly_vert_list;
            iVar7 = iVar6 + 0x24;
            do {
              if (*(int *)(iVar6 + 0x1c) < iVar8) {
                iVar8 = *(int *)(iVar6 + 0x1c);
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
            } while (iVar6 != iVar7);
          }
          local_18 = (char *)((int)local_18 + 4);
          local_14 = local_14 + 0x48;
          iVar13 = iVar13 + 1;
        } while (iVar13 < model_ptr->poly_count);
      }
      if (iVar8 <= max_u) {
        shape_design_c_cramTextures_FUN_0046a970(pcStack_34,iVar8,iVar4,max_u,iVar5);
      }
      pcStack_34 = pcStack_34 + 0x48;
      local_1c = local_1c + 1;
    } while (local_1c < model_ptr->texture_count);
  }
  shape_design_c_initializeCramConfig_FUN_0046b6e0((SCramConfig *)&stack0xffffff50);
  pcVar9 = &stack0xffffff54;
  do {
    cVar1 = *atlas_filename;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = atlas_filename[1];
    atlas_filename = atlas_filename + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  shape_design_c_cramTextureList_FUN_0046bb80((SCramConfig *)&stack0xffffff54);
  local_18 = (char *)0x0;
  if (0 < model_ptr->poly_count) {
    local_14 = 0;
    do {
      piVar2 = (int *)((int)model_ptr->poly_texture_index_list + local_14);
      if (*piVar2 < 0) {
        *piVar2 = 0;
      }
      local_14 = shape_design_c_findTextureByFilename_FUN_0046dfc0
                           (model_ptr->texture_list
                            [*(int *)((int)model_ptr->poly_texture_index_list + local_14)].base.
                            texture_name);
      iVar5 = (int)model_ptr->poly_vert_list + local_24;
      iVar8 = 0;
      iVar4 = iVar5;
      if (0 < *(int *)(iVar5 + 4)) {
        do {
          shape_design_c_fixupCramUV_FUN_0046e090
                    (local_14,(float *)&stack0xffffff58,(float *)&stack0xffffff54);
          fVar10 = (float10)65536;
          fVar12 = 6.580217e-39;
          dVar11 = crt_math_c_round_FUN_005fe6b0((double)((float10)fStack_a4 * fVar10));
          *(int *)(iVar4 + 0x1c) = (int)ROUND(dVar11);
          dVar11 = crt_math_c_round_FUN_005fe6b0((double)(fVar10 * (float10)fVar12));
          *(int *)(iVar4 + 0x20) = (int)ROUND(dVar11);
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + 0xc;
        } while (iVar8 < *(int *)(iVar5 + 4));
      }
      iVar4 = shape_design_c_getAtlasMapIndex_FUN_0046e030(local_14);
      local_18 = (char *)((int)local_18 + 1);
      *(int *)((int)model_ptr->poly_texture_index_list + local_14) = iVar4;
      local_14 = local_14 + 4;
    } while ((int)local_18 < model_ptr->poly_count);
  }
  iVar4 = shape_design_c_getLastTextureProcessIndex_FUN_0046a860();
  iVar5 = 0;
  model_ptr->texture_count = iVar4;
  if (0 < iVar4) {
    local_18 = model_ptr->texture_list[0].base.texture_name;
    do {
      pcVar3 = shape_design_c_getTextureName_FUN_0046e060(iVar5);
      pcVar9 = local_18;
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
      local_18 = local_18 + 0x48;
    } while (iVar5 < model_ptr->texture_count);
  }
  core_dmodel_cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820(model_ptr);
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  return;
}
