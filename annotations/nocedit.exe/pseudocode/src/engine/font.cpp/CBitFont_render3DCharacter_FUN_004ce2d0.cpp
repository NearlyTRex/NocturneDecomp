// Name: engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0
// Address: 004ce2d0
// Address Range: [[004ce2d0, 004ce79b] [03fc3535, 03fc3672]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_render3DCharacter_FUN_004ce2d0(CBitFont *this_ptr,int character_code,int x,int y,int right_x,int bottom_y,int color_mode)

#include "nocturne.h"

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __cdecl engine_font_cpp_CBitFont_render3DCharacter_FUN_004ce2d0(CBitFont *this_ptr,int character_code,int x,int y,int right_x,int bottom_y,int color_mode)

{
  char cVar2;
  uint uVar4;
  int iVar3;
  int iVar4;
  int iVar5;
  char (*pacVar6) [80];
  SRenderVertex *pSVar7;
  int iVar6;
  int iVar8;
  char *pcVar9;
  SRenderVertex *pSVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  SMRGLHeaderPrimitive SStack_54;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint uVar2;
  uint uVar3;
  char cVar1;
  
  pcVar9 = g_FontTextureInfo.texture_name;
  pacVar6 = this_ptr->bitmap_files + this_ptr->char_bitmap_index[character_code];
  do {
    cVar1 = (*pacVar6)[0];
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = (*pacVar6)[1];
    pacVar6 = (char (*) [80])(*pacVar6 + 2);
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&g_FontTextureInfo);
  uVar4 = g_ShadowColorBlue;
  uVar2 = g_ShadowColorRed;
  uVar3 = g_ShadowColorGreen;
  if (color_mode != -2) {
    if (color_mode < 0) {
      g_QuadVertex0.g = 0xffff;
      g_QuadVertex0.b = 0xffff;
      g_QuadVertex0.r = 0xffff;
      goto LAB_004ce397;
    }
    iVar3 = color_mode * 3;
    uVar2 = (uint)(byte)g_SourcePaletteData[iVar3];
    uVar3 = (uint)(byte)g_SourcePaletteData[iVar3 + 1];
    uVar4 = (uint)(byte)g_SourcePaletteData[iVar3 + 2];
  }
  g_QuadVertex0.g = uVar3 << 8;
  g_QuadVertex0.r = uVar2 << 8;
  uVar4 = uVar4 << 8;
  g_QuadVertex0.b = uVar4;
LAB_004ce397:
  g_QuadVertex0.projected_vertex.transformed_z = 0x10000;
  g_QuadVertex0.projected_vertex.inv_z = 0x10000;
  g_QuadVertex1.projected_vertex.transformed_z = 0x10000;
  g_QuadVertex1.projected_vertex.inv_z = 0x10000;
  g_QuadVertex1.projected_vertex.screen_x = g_QuadVertex0.projected_vertex.screen_x;
  g_QuadVertex1.projected_vertex.screen_y = g_QuadVertex0.projected_vertex.screen_y;
  g_QuadVertex1.u = g_QuadVertex0.u;
  g_QuadVertex1.v = g_QuadVertex0.v;
  g_QuadVertex1.r = g_QuadVertex0.r;
  g_QuadVertex1.g = g_QuadVertex0.g;
  g_QuadVertex1.b = g_QuadVertex0.b;
  g_QuadVertex1.a = g_QuadVertex0.a;
  g_QuadVertex2.projected_vertex.transformed_z = 0x10000;
  g_QuadVertex2.projected_vertex.inv_z = 0x10000;
  g_QuadVertex2.projected_vertex.screen_x = g_QuadVertex0.projected_vertex.screen_x;
  g_QuadVertex2.projected_vertex.screen_y = g_QuadVertex0.projected_vertex.screen_y;
  g_QuadVertex2.u = g_QuadVertex0.u;
  g_QuadVertex2.v = g_QuadVertex0.v;
  g_QuadVertex2.r = g_QuadVertex0.r;
  g_QuadVertex2.g = g_QuadVertex0.g;
  g_QuadVertex2.b = g_QuadVertex0.b;
  g_QuadVertex2.a = g_QuadVertex0.a;
  g_QuadVertex3.projected_vertex.transformed_z = 0x10000;
  g_QuadVertex3.projected_vertex.inv_z = 0x10000;
  g_QuadVertex3.projected_vertex.screen_x = g_QuadVertex0.projected_vertex.screen_x;
  g_QuadVertex3.projected_vertex.screen_y = g_QuadVertex0.projected_vertex.screen_y;
  g_QuadVertex3.u = g_QuadVertex0.u;
  g_QuadVertex3.v = g_QuadVertex0.v;
  g_QuadVertex3.r = g_QuadVertex0.r;
  g_QuadVertex3.g = g_QuadVertex0.g;
  g_QuadVertex3.b = g_QuadVertex0.b;
  g_QuadVertex3.a = g_QuadVertex0.a;
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
  g_QuadVertex0.projected_vertex.transformed_x =
       (int)((longlong)
             ((((longlong)(iVar3 - g_ViewportRightFixed) & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)(iVar3 - g_ViewportRightFixed) * 0x10000 & 0xffffffffU) /
            (longlong)g_ViewportCenterXFixed);
  g_QuadVertex0.projected_vertex.transformed_y =
       (int)((longlong)
             ((((longlong)(iVar4 - g_ViewportBottomFixed) & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)(iVar4 - g_ViewportBottomFixed) * 0x10000 & 0xffffffffU) /
            (longlong)g_ViewportCenterYFixed);
  g_QuadVertex1.projected_vertex.transformed_x =
       (int)((longlong)
             ((((longlong)(iVar8 - g_ViewportRightFixed) & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)(iVar8 - g_ViewportRightFixed) * 0x10000 & 0xffffffffU) /
            (longlong)g_ViewportCenterXFixed);
  g_QuadVertex1.projected_vertex.transformed_y =
       (int)((longlong)
             ((((longlong)(iVar4 - g_ViewportBottomFixed) & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)(iVar4 - g_ViewportBottomFixed) * 0x10000 & 0xffffffffU) /
            (longlong)g_ViewportCenterYFixed);
  g_QuadVertex2.projected_vertex.transformed_x =
       (int)((longlong)
             ((((longlong)(iVar8 - g_ViewportRightFixed) & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)(iVar8 - g_ViewportRightFixed) * 0x10000 & 0xffffffffU) /
            (longlong)g_ViewportCenterXFixed);
  g_QuadVertex2.projected_vertex.transformed_y =
       (int)((longlong)
             ((((longlong)(iVar12 - g_ViewportBottomFixed) & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)(iVar12 - g_ViewportBottomFixed) * 0x10000 & 0xffffffffU) /
            (longlong)g_ViewportCenterYFixed);
  g_QuadVertex3.projected_vertex.transformed_x =
       (int)((longlong)
             ((((longlong)(iVar3 - g_ViewportRightFixed) & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)(iVar3 - g_ViewportRightFixed) * 0x10000 & 0xffffffffU) /
            (longlong)g_ViewportCenterXFixed);
  g_QuadVertex3.projected_vertex.transformed_y =
       (int)((longlong)
             ((((longlong)(iVar12 - g_ViewportBottomFixed) & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)(iVar12 - g_ViewportBottomFixed) * 0x10000 & 0xffffffffU) /
            (longlong)g_ViewportCenterYFixed);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(0x4e1c);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(0x4e1d);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(0x4e1e);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(19999);
  iVar6 = this_ptr->char_positions[character_code] -
          (int)this_ptr->bitmap_data[this_ptr->char_bitmap_index[character_code]];
  g_QuadVertex0.u =
       (iVar6 % this_ptr->bitmap_widths[this_ptr->char_bitmap_index[character_code]]) * 0x10000 +
       -0x1000;
  g_QuadVertex0.v =
       (iVar6 / this_ptr->bitmap_widths[this_ptr->char_bitmap_index[character_code]]) * 0x10000 +
       -0x1000;
  g_QuadVertex2.u = (g_QuadVertex0.u + iVar8) - iVar3;
  g_QuadVertex2.v = (g_QuadVertex0.v + iVar12) - iVar4;
  if (g_UseExternalRenderer == 0) {
    g_QuadVertex2.v = g_QuadVertex2.v + 0x8000;
    g_QuadVertex2.u = g_QuadVertex2.u + 0x8000;
  }
  SStack_54.surface_normal.D = 0;
  SStack_54.base.count = 4;
  SStack_54.surface_normal.C = 0;
  SStack_54.surface_normal.B = 0;
  SStack_54.surface_normal.A = 0;
  g_QuadVertex1.u = g_QuadVertex2.u;
  g_QuadVertex1.v = g_QuadVertex0.v;
  g_QuadVertex3.u = g_QuadVertex0.u;
  g_QuadVertex3.v = g_QuadVertex2.v;
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  if (g_CurrentTextureOpacityData == (void *)0x0) {
    iVar3 = 0x207;
  }
  else {
    iVar3 = 0x227;
  }
  engine_3d_c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620(&SStack_54,iVar3,0);
  return;
}
