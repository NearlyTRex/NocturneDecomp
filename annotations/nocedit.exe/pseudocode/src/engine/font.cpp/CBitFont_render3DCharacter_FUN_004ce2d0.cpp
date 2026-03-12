// Name: engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0
// Address: 004ce2d0
// Address Range: [[004ce2d0, 004ce79b]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_render3DCharacter_FUN_004ce2d0(CBitFont *this_ptr,int character_code,int x,int y,int right_x,int bottom_y,int color_mode)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_render3DCharacter_FUN_004ce2d0(CBitFont *this_ptr,int character_code,int x,int y,int right_x,int bottom_y,int color_mode)

{
  char cVar2;
  uint uVar4;
  int iVar3;
  int iVar5;
  int iVar4;
  char (*pacVar6) [80];
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar7;
  int iVar6;
  int iVar8;
  char *pcVar9;
  SRenderVertex *pSVar8;
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
  
  bVar13 = 0;
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
    iVar4 = color_mode * 3;
    uVar2 = (uint)(byte)g_SourcePaletteData[iVar4];
    uVar3 = (uint)(byte)g_SourcePaletteData[iVar4 + 1];
    uVar4 = (uint)(byte)g_SourcePaletteData[iVar4 + 2];
  }
  g_QuadVertex0.g = uVar3 << 8;
  g_QuadVertex0.r = uVar2 << 8;
  uVar4 = uVar4 << 8;
  g_QuadVertex0.b = uVar4;
LAB_004ce397:
  g_QuadVertex0.projected_vertex.transformed_z = 0x10000;
  g_QuadVertex0.projected_vertex.inv_z = 0x10000;
  pSVar5 = &g_QuadVertex0;
  pSVar8 = &g_QuadVertex1;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    (pSVar8->projected_vertex).transformed_x = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar13 * -2 + 1) * 4);
    pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar13 * -2 + 1) * 4);
  }
  pSVar5 = &g_QuadVertex0;
  pSVar8 = &g_QuadVertex2;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    (pSVar8->projected_vertex).transformed_x = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar13 * -2 + 1) * 4);
    pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar13 * -2 + 1) * 4);
  }
  pSVar7 = &g_QuadVertex0;
  pSVar10 = &g_QuadVertex3;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pSVar10 = (SRenderVertex *)((int)pSVar10 + (uint)bVar13 * -8 + 4);
    pSVar7 = (SRenderVertex *)((int)pSVar7 + (uint)bVar13 * -8 + 4);
    (pSVar10->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
    pSVar7 = pSVar7;
    pSVar10 = pSVar10;
  }
  iVar4 = x * 0x10000 + -0x1000;
  iVar6 = (right_x + 1) * 0x10000;
  iVar8 = iVar6 + 0x1000;
  iVar11 = (bottom_y + 1) * 0x10000;
  iVar3 = y * 0x10000 + -0x1000;
  iVar12 = iVar11 + 0x1000;
  if (g_UseExternalRenderer == 0) {
    iVar12 = iVar11 + 0x9000;
    iVar8 = iVar6 + 0x9000;
  }
  g_QuadVertex0.projected_vertex.transformed_x =
       (int)(((longlong)(iVar4 - g_ViewportRightFixed) * 0x10000) / (longlong)g_ViewportCenterXFixed
            );
  g_QuadVertex0.projected_vertex.transformed_y =
       (int)(((longlong)(iVar3 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  g_QuadVertex1.projected_vertex.transformed_x =
       (int)(((longlong)(iVar8 - g_ViewportRightFixed) * 0x10000) / (longlong)g_ViewportCenterXFixed
            );
  g_QuadVertex1.projected_vertex.transformed_y =
       (int)(((longlong)(iVar3 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  g_QuadVertex2.projected_vertex.transformed_x =
       (int)(((longlong)(iVar8 - g_ViewportRightFixed) * 0x10000) / (longlong)g_ViewportCenterXFixed
            );
  g_QuadVertex2.projected_vertex.transformed_y =
       (int)(((longlong)(iVar12 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  g_QuadVertex3.projected_vertex.transformed_x =
       (int)(((longlong)(iVar4 - g_ViewportRightFixed) * 0x10000) / (longlong)g_ViewportCenterXFixed
            );
  g_QuadVertex3.projected_vertex.transformed_y =
       (int)(((longlong)(iVar12 - g_ViewportBottomFixed) * 0x10000) /
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
  g_QuadVertex2.u = (g_QuadVertex0.u + iVar8) - iVar4;
  g_QuadVertex2.v = (g_QuadVertex0.v + iVar12) - iVar3;
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
    iVar4 = 0x207;
  }
  else {
    iVar4 = 0x227;
  }
  engine_3d_c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620(&SStack_54,iVar4,0);
  return;
}
