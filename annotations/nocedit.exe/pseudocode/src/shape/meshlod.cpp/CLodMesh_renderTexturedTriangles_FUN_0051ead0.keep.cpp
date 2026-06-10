// Name: shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
// Address: 0051ead0
// MANUAL RECONSTRUCTION
// Address Range: [[0051ead0, 0051ecc9]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0(CLodMesh *this_ptr,int enable_texture_lookup)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0(CLodMesh *this_ptr,int enable_texture_lookup)

{
  int iVar3;
  char *pcVar4;
  int atlas_texture_index;
  int i;
  CLodFace *face;
  SMRGLPrimitiveQuad SStack_78;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  uint local_1c;
  SMRGLTextureBasic *texture;
  
  SStack_78.base.surface_normal.D.i = 0;
  SStack_78.base.surface_normal.C.i = 0;
  SStack_78.base.surface_normal.B.i = 0;
  SStack_78.base.surface_normal.A.i = 0;
  SStack_78.base.base.count = 3;
  local_24 = -1;
  local_1c = 0;
  if (0 < this_ptr->tri_count) {
    do {
      face = this_ptr->tri_data + local_1c;
      if (face->processed_flag == 0) {
        atlas_texture_index = face->attribute_indices[0];
        if ((-1 < atlas_texture_index) && (enable_texture_lookup != 0)) {
          atlas_texture_index =
               shape_design_c_findTextureByFilename_FUN_0046dfc0
                         (this_ptr->lod_textures[atlas_texture_index].textures[0].texture_name);
        }
        for (i = 0; i < 3; i = i + 1) {
          SStack_78.vertices[i].vertex_index = (&face->vertex_idx_0)[i];
          local_30 = face->uv_coords[i][0];
          local_2c = face->uv_coords[i][1];
          if ((-1 < atlas_texture_index) && (enable_texture_lookup != 0)) {
            shape_design_c_fixupCramUV_FUN_0046e090(atlas_texture_index,&local_30,&local_2c);
          }
          local_28 = (int)ROUND(ROUND(local_2c * 65535.0f));
          SStack_78.vertices[i].texture_u = (int)ROUND(ROUND(local_30 * 65535.0f));
          SStack_78.vertices[i].texture_v = local_28;
        }
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
              strcpy(g_TempTextureDescriptor.texture_name,pcVar4);
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
    } while ((int)local_1c < this_ptr->tri_count);
  }
  return;
}
