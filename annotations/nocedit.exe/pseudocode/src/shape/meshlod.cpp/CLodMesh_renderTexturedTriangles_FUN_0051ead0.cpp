// Name: shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
// Address: 0051ead0
// Address Range: [[0051ead0, 0051ecc9]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0(CLodMesh *this_ptr,int enable_texture_lookup)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0(CLodMesh *this_ptr,int enable_texture_lookup)

{
  char cVar2;
  int iVar3;
  char *pcVar4;
  int atlas_texture_index;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  SMRGLHeaderPrimitive SStack_78;
  int aiStack_60 [12];
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int *local_18;
  int *local_14;
  SMRGLTextureBasic *texture;
  char cVar1;
  int *piVar2;
  
  SStack_78.surface_normal.D.i = 0;
  SStack_78.surface_normal.C.i = 0;
  SStack_78.surface_normal.B.i = 0;
  SStack_78.surface_normal.A.i = 0;
  SStack_78.base.count = 3;
  local_24 = -1;
  local_1c = 0;
  if (0 < this_ptr->tri_count) {
    local_20 = 0;
    do {
      local_18 = (int *)((int)this_ptr->tri_data->attribute_indices + local_20);
      if (local_18[0x10] == 0) {
        atlas_texture_index = *local_18;
        if ((-1 < atlas_texture_index) && (enable_texture_lookup != 0)) {
          atlas_texture_index =
               shape_design_c_findTextureByFilename_FUN_0046dfc0
                         (this_ptr->lod_textures[atlas_texture_index].textures[0].texture_name);
        }
        local_14 = local_18 + 3;
        iVar4 = 0;
        piVar5 = local_18;
        piVar6 = local_18;
        do {
          *(int *)((int)aiStack_60 + iVar4) = piVar5[4];
          local_30 = (float)piVar6[7];
          local_2c = (float)piVar6[8];
          if ((-1 < atlas_texture_index) && (enable_texture_lookup != 0)) {
            shape_design_c_fixupCramUV_FUN_0046e090(atlas_texture_index,&local_30,&local_2c);
          }
          piVar2 = local_14;
          piVar6 = piVar6 + 2;
          local_28 = (int)ROUND(ROUND(local_2c * 65535.0f));
          *(int *)((int)aiStack_60 + iVar4 + 4) = (int)ROUND(ROUND(local_30 * 65535.0f));
          piVar5 = piVar5 + 1;
          *(int *)((int)aiStack_60 + iVar4 + 8) = local_28;
          iVar4 = iVar4 + 0xc;
        } while (piVar5 != piVar2);
        if (atlas_texture_index < 0) {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr2,-((local_1c & 0x7f) + 0x80));
          engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0048a8a0
                    (g_CDemonRendererPtr2,(SMRGLPrimitivePoly *)&SStack_78);
        }
        else {
          if (atlas_texture_index != local_24) {
            if (enable_texture_lookup == 0) {
              texture = this_ptr->lod_textures[atlas_texture_index].textures;
            }
            else {
              iVar3 = shape_design_c_getAtlasMapIndex_FUN_0046e030(atlas_texture_index);
              pcVar4 = shape_design_c_getTextureName_FUN_0046e060(iVar3);
              pcVar7 = g_TempTextureDescriptor.texture_name;
              do {
                cVar1 = *pcVar4;
                *pcVar7 = cVar1;
                if (cVar1 == '\0') break;
                cVar2 = pcVar4[1];
                pcVar4 = pcVar4 + 2;
                pcVar7[1] = cVar2;
                pcVar7 = pcVar7 + 2;
              } while (cVar2 != '\0');
              texture = &g_TempTextureDescriptor;
            }
            engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(texture);
            local_24 = atlas_texture_index;
          }
          engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0048b1e0
                    (g_CDemonRendererPtr2,(SMRGLPrimitivePoly *)&SStack_78);
        }
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + 0x8c;
    } while ((int)local_1c < this_ptr->tri_count);
  }
  return;
}
