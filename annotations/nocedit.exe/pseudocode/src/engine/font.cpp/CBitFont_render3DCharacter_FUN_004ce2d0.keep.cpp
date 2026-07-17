// Name: engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0
// Address: 004ce2d0
// MANUAL RECONSTRUCTION
// Address Range: [[004ce2d0, 004ce79b] [03fc3535, 03fc3672]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_render3DCharacter_FUN_004ce2d0(CBitFont *this_ptr,int character_code,int x,int y,int right_x,int bottom_y,int color_mode)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_render3DCharacter_FUN_004ce2d0(CBitFont *this_ptr,int character_code,int x,int y,int right_x,int bottom_y,int color_mode)

{
  uint uVar4;
  int iVar3;
  int iVar4;
  int iVar6;
  int iVar8;
  int iVar11;
  int iVar12;
  SMRGLPrimitiveTriangleIndex SStack_54;
  uint uVar2;
  uint uVar3;


  strcpy(g_FontTextureInfo.texture_name,
         this_ptr->bitmap_files[this_ptr->char_bitmap_index[character_code]]);
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&g_FontTextureInfo);
  uVar4 = g_ShadowColorBlue;
  uVar2 = g_ShadowColorRed;
  uVar3 = g_ShadowColorGreen;
  if (color_mode != -2) {
    if (color_mode < 0) {
      g_RenderVertexBuffer[0x4e1c].g = 0xffff;
      g_RenderVertexBuffer[0x4e1c].b = 0xffff;
      g_RenderVertexBuffer[0x4e1c].r = 0xffff;
      goto LAB_004ce397;
    }
    iVar3 = color_mode * 3;
    uVar2 = (uint)g_SourcePaletteData[iVar3];
    uVar3 = (uint)g_SourcePaletteData[iVar3 + 1];
    uVar4 = (uint)g_SourcePaletteData[iVar3 + 2];
  }
  g_RenderVertexBuffer[0x4e1c].g = uVar3 << 8;
  g_RenderVertexBuffer[0x4e1c].r = uVar2 << 8;
  uVar4 = uVar4 << 8;
  g_RenderVertexBuffer[0x4e1c].b = uVar4;
LAB_004ce397:
  g_RenderVertexBuffer[0x4e1c].projected_vertex.transformed_z = 0x10000;
  g_RenderVertexBuffer[0x4e1c].projected_vertex.inv_z = 0x10000;
  g_RenderVertexBuffer[0x4e1d] = g_RenderVertexBuffer[0x4e1c];
  g_RenderVertexBuffer[0x4e1e] = g_RenderVertexBuffer[0x4e1c];
  g_RenderVertexBuffer[19999] = g_RenderVertexBuffer[0x4e1c];
  iVar3 = x * 0x10000 + -0x1000;
  iVar6 = (right_x + 1) * 0x10000;
  iVar8 = iVar6 + 0x1000;
  iVar11 = (bottom_y + 1) * 0x10000;
  iVar4 = y * 0x10000 + -0x1000;
  iVar12 = iVar11 + 0x1000;
  if (g_UseExternalRenderer == 0) {
    iVar12 = iVar11 + 0x9000;
    iVar8 = iVar6 + 0x9000;
  }
  g_RenderVertexBuffer[0x4e1c].projected_vertex.transformed_x =
       (int)((longlong)
             ((((longlong)(iVar3 - g_Projection.center_x_fixed) & 0xffffffffffffU) >> 0x10) << 0x20
             | (longlong)(iVar3 - g_Projection.center_x_fixed) * 0x10000 & 0xffffffffU) /
            (longlong)g_Projection.half_width_fixed);
  g_RenderVertexBuffer[0x4e1c].projected_vertex.transformed_y =
       (int)((longlong)
             ((((longlong)(iVar4 - g_Projection.center_y_fixed) & 0xffffffffffffU) >> 0x10) << 0x20
             | (longlong)(iVar4 - g_Projection.center_y_fixed) * 0x10000 & 0xffffffffU) /
            (longlong)g_Projection.neg_half_height_fixed);
  g_RenderVertexBuffer[0x4e1d].projected_vertex.transformed_x =
       (int)((longlong)
             ((((longlong)(iVar8 - g_Projection.center_x_fixed) & 0xffffffffffffU) >> 0x10) << 0x20
             | (longlong)(iVar8 - g_Projection.center_x_fixed) * 0x10000 & 0xffffffffU) /
            (longlong)g_Projection.half_width_fixed);
  g_RenderVertexBuffer[0x4e1d].projected_vertex.transformed_y =
       (int)((longlong)
             ((((longlong)(iVar4 - g_Projection.center_y_fixed) & 0xffffffffffffU) >> 0x10) << 0x20
             | (longlong)(iVar4 - g_Projection.center_y_fixed) * 0x10000 & 0xffffffffU) /
            (longlong)g_Projection.neg_half_height_fixed);
  g_RenderVertexBuffer[0x4e1e].projected_vertex.transformed_x =
       (int)((longlong)
             ((((longlong)(iVar8 - g_Projection.center_x_fixed) & 0xffffffffffffU) >> 0x10) << 0x20
             | (longlong)(iVar8 - g_Projection.center_x_fixed) * 0x10000 & 0xffffffffU) /
            (longlong)g_Projection.half_width_fixed);
  g_RenderVertexBuffer[0x4e1e].projected_vertex.transformed_y =
       (int)((longlong)
             ((((longlong)(iVar12 - g_Projection.center_y_fixed) & 0xffffffffffffU) >> 0x10) << 0x20
             | (longlong)(iVar12 - g_Projection.center_y_fixed) * 0x10000 & 0xffffffffU) /
            (longlong)g_Projection.neg_half_height_fixed);
  g_RenderVertexBuffer[19999].projected_vertex.transformed_x =
       (int)((longlong)
             ((((longlong)(iVar3 - g_Projection.center_x_fixed) & 0xffffffffffffU) >> 0x10) << 0x20
             | (longlong)(iVar3 - g_Projection.center_x_fixed) * 0x10000 & 0xffffffffU) /
            (longlong)g_Projection.half_width_fixed);
  g_RenderVertexBuffer[19999].projected_vertex.transformed_y =
       (int)((longlong)
             ((((longlong)(iVar12 - g_Projection.center_y_fixed) & 0xffffffffffffU) >> 0x10) << 0x20
             | (longlong)(iVar12 - g_Projection.center_y_fixed) * 0x10000 & 0xffffffffU) /
            (longlong)g_Projection.neg_half_height_fixed);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(0x4e1c);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(0x4e1d);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(0x4e1e);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(19999);
  iVar6 = this_ptr->char_positions[character_code] -
          (uchar *)this_ptr->bitmap_data[this_ptr->char_bitmap_index[character_code]];
  g_RenderVertexBuffer[0x4e1c].u =
       (iVar6 % this_ptr->bitmap_widths[this_ptr->char_bitmap_index[character_code]]) * 0x10000 +
       -0x1000;
  g_RenderVertexBuffer[0x4e1c].v =
       (iVar6 / this_ptr->bitmap_widths[this_ptr->char_bitmap_index[character_code]]) * 0x10000 +
       -0x1000;
  g_RenderVertexBuffer[0x4e1e].u = (g_RenderVertexBuffer[0x4e1c].u + iVar8) - iVar3;
  g_RenderVertexBuffer[0x4e1e].v = (g_RenderVertexBuffer[0x4e1c].v + iVar12) - iVar4;
  if (g_UseExternalRenderer == 0) {
    g_RenderVertexBuffer[0x4e1e].v = g_RenderVertexBuffer[0x4e1e].v + 0x8000;
    g_RenderVertexBuffer[0x4e1e].u = g_RenderVertexBuffer[0x4e1e].u + 0x8000;
  }
  SStack_54.vertices[2] = 0x4e1e;
  SStack_54.base.surface_normal.D.i = 0;
  SStack_54.base.base.count = 4;
  SStack_54.base.surface_normal.C.i = 0;
  SStack_54.vertices[0] = 0x4e1c;
  SStack_54.base.surface_normal.B.i = 0;
  SStack_54.vertices[1] = 0x4e1d;
  SStack_54.base.surface_normal.A.i = 0;
  g_RenderVertexBuffer[0x4e1d].u = g_RenderVertexBuffer[0x4e1e].u;
  g_RenderVertexBuffer[0x4e1d].v = g_RenderVertexBuffer[0x4e1c].v;
  g_RenderVertexBuffer[19999].u = g_RenderVertexBuffer[0x4e1c].u;
  g_RenderVertexBuffer[19999].v = g_RenderVertexBuffer[0x4e1e].v;
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  if (g_CurrentTextureOpacityData == (void *)0x0) {
    iVar3 = 0x207;
  }
  else {
    iVar3 = 0x227;
  }
  engine_3d_c_renderPolygonWithRenderFlags_FUN_00407620(&SStack_54.base,iVar3,0);
  return;
}
