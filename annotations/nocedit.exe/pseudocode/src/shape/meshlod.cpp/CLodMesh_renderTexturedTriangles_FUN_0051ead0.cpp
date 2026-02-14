// Name: shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
// Address: 0051ead0
// Address Range: [[0051ead0, 0051ecc9]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0(CLodMesh *this_ptr,int enable_texture_lookup,int use_atlas_mode)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0(CLodMesh *this_ptr,int enable_texture_lookup,int use_atlas_mode)

{
  char cVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  char *pcVar5;
  float atlas_texture_index;
  int unaff_EBX;
  float *pfVar6;
  float *pfVar7;
  char *pcVar8;
  double dVar9;
  double dVar10;
  int unaff_retaddr;
  SMRGLTextureBasic *texture;
  int local_64;
  float afStack_60 [12];
  float local_30;
  float local_2c [2];
  uint local_24;
  int local_20;
  int local_1c;
  float *local_18;
  float *local_14;
  
  local_64 = 0;
  local_24 = 0xffffffff;
  local_1c = 0;
  if (0 < this_ptr->tri_count) {
    local_20 = 0;
    do {
      local_18 = (float *)((int)this_ptr->tri_data->attribute_indices + local_20);
      if (local_18[0x10] == 0.0) {
        atlas_texture_index = *local_18;
        if ((-1 < (int)atlas_texture_index) && (enable_texture_lookup != 0)) {
          atlas_texture_index =
               (float)shape_design_c_findTextureByFilename_FUN_0046dfc0
                                (this_ptr->submesh_data[(int)atlas_texture_index].texture_filename);
        }
        local_14 = local_18 + 3;
        iVar4 = 0;
        pfVar6 = local_18;
        pfVar7 = local_18;
        do {
          *(float *)((int)afStack_60 + iVar4) = pfVar6[4];
          local_30 = pfVar7[7];
          local_2c[0] = pfVar7[8];
          if ((-1 < (int)atlas_texture_index) && (enable_texture_lookup != 0)) {
            shape_design_c_fixupCramUV_FUN_0046e090((int)atlas_texture_index,&local_30,local_2c);
          }
          pfVar3 = local_14;
          fVar2 = local_2c[0] * 65535.0f;
          pfVar7 = pfVar7 + 2;
          dVar9 = round((double)(local_30 * 65535.0f));
          dVar10 = round((double)fVar2);
          local_30 = (float)(int)ROUND(dVar10);
          *(int *)((int)afStack_60 + iVar4 + -4) = (int)ROUND(dVar9);
          pfVar6 = pfVar6 + 1;
          *(float *)((int)afStack_60 + iVar4) = local_30;
          iVar4 = iVar4 + 0xc;
        } while (pfVar6 != pfVar3);
        if ((int)atlas_texture_index < 0) {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr2,-((local_24 & 0x7f) + 0x80));
          engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                    (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)&stack0xffffff80);
        }
        else {
          if (atlas_texture_index != local_2c[0]) {
            if (unaff_retaddr == 0) {
              texture = (SMRGLTextureBasic *)
                        ((int)atlas_texture_index * 0x48 + *(int *)(unaff_EBX + 0x14));
            }
            else {
              iVar4 = shape_design_c_getAtlasMapIndex_FUN_0046e030((int)atlas_texture_index);
              pcVar5 = shape_design_c_getTextureName_FUN_0046e060(iVar4);
              pcVar8 = g_TempTextureDescriptor.texture_name;
              do {
                cVar1 = *pcVar5;
                *pcVar8 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar5[1];
                pcVar5 = pcVar5 + 2;
                pcVar8[1] = cVar1;
                pcVar8 = pcVar8 + 2;
              } while (cVar1 != '\0');
              texture = &g_TempTextureDescriptor;
            }
            engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(texture);
            local_2c[0] = atlas_texture_index;
          }
          engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
                    (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)&stack0xffffff80);
        }
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + 0x8c;
    } while (local_1c < this_ptr->tri_count);
  }
  return;
}
