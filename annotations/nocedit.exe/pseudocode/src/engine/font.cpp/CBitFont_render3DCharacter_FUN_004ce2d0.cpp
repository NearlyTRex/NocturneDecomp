// Name: engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0
// Address: 004ce2d0
// Address Range: [[004ce2d0, 004ce79b]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0(CBitFont * this_ptr, int character_code, int x_pos, int y_pos, int z_pos, int width, int height, int color_mode)

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_render3DCharacter_FUN_004ce2d0
          (CBitFont *this_ptr,int character_code,int x_pos,int y_pos,int z_pos,int width,int height,
          int color_mode)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char (*pacVar7) [80];
  SRenderVertex *pSVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  SRenderVertex *pSVar12;
  int iVar13;
  int iVar14;
  byte bVar15;
  int in_stack_ffffffac;
  
  bVar15 = 0;
  pcVar11 = g_FontTextureInfo.texture_name;
  pacVar7 = this_ptr->bitmap_files + this_ptr->char_bitmap_index[character_code];
  do {
    cVar1 = (*pacVar7)[0];
    *pcVar11 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = (*pacVar7)[1];
    pacVar7 = (char (*) [80])(*pacVar7 + 2);
    pcVar11[1] = cVar1;
    pcVar11 = pcVar11 + 2;
  } while (cVar1 != '\0');
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&g_FontTextureInfo);
  uVar4 = g_ShadowColorBlue;
  uVar2 = g_ShadowColorRed;
  uVar3 = g_ShadowColorGreen;
  if (height != -2) {
    if (height < 0) {
      g_QuadVertex0.color = 0xffff;
      g_QuadVertex0.fog = 9.18341e-41;
      g_QuadVertex0.light = 9.18341e-41;
      goto LAB_004ce397;
    }
    iVar6 = height * 3;
    uVar4 = (uint)(byte)g_SourcePaletteData[iVar6 + 2];
    uVar2 = (uint)(byte)g_SourcePaletteData[iVar6];
    uVar3 = (uint)(byte)g_SourcePaletteData[iVar6 + 1];
  }
  g_QuadVertex0.color = uVar3 << 8;
  g_QuadVertex0.light = (float)(uVar2 << 8);
  g_QuadVertex0.fog = (float)(uVar4 << 8);
LAB_004ce397:
  g_QuadVertex0.projected_vertex.transformed_z = 0x10000;
  g_QuadVertex0.projected_vertex.inv_z = 0x10000;
  pSVar8 = &g_QuadVertex0;
  pSVar12 = &g_QuadVertex1;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    (pSVar12->projected_vertex).transformed_x = (pSVar8->projected_vertex).transformed_x;
    pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar15 * -2 + 1) * 4);
    pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
  }
  pSVar8 = &g_QuadVertex0;
  pSVar12 = &g_QuadVertex2;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    (pSVar12->projected_vertex).transformed_x = (pSVar8->projected_vertex).transformed_x;
    pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar15 * -2 + 1) * 4);
    pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
  }
  pSVar8 = &g_QuadVertex0;
  pSVar12 = &g_QuadVertex3;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    (pSVar12->projected_vertex).transformed_x = (pSVar8->projected_vertex).transformed_x;
    pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar15 * -2 + 1) * 4);
    pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
  }
  iVar6 = x_pos * 0x10000 + -0x1000;
  iVar9 = (z_pos + 1) * 0x10000;
  iVar10 = iVar9 + 0x1000;
  iVar13 = (width + 1) * 0x10000;
  iVar5 = y_pos * 0x10000 + -0x1000;
  iVar14 = iVar13 + 0x1000;
  if (g_UseExternalRenderer == 0) {
    iVar14 = iVar13 + 0x9000;
    iVar10 = iVar9 + 0x9000;
  }
  g_QuadVertex0.projected_vertex.transformed_x =
       (int)(((longlong)(iVar6 - g_ViewportRightFixed) * 0x10000) / (longlong)g_ViewportCenterXFixed
            );
  g_QuadVertex0.projected_vertex.transformed_y =
       (int)(((longlong)(iVar5 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  g_QuadVertex1.projected_vertex.transformed_x =
       (int)(((longlong)(iVar10 - g_ViewportRightFixed) * 0x10000) /
            (longlong)g_ViewportCenterXFixed);
  g_QuadVertex1.projected_vertex.transformed_y =
       (int)(((longlong)(iVar5 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  g_QuadVertex2.projected_vertex.transformed_x =
       (int)(((longlong)(iVar10 - g_ViewportRightFixed) * 0x10000) /
            (longlong)g_ViewportCenterXFixed);
  g_QuadVertex2.projected_vertex.transformed_y =
       (int)(((longlong)(iVar14 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  g_QuadVertex3.projected_vertex.transformed_x =
       (int)(((longlong)(iVar6 - g_ViewportRightFixed) * 0x10000) / (longlong)g_ViewportCenterXFixed
            );
  g_QuadVertex3.projected_vertex.transformed_y =
       (int)(((longlong)(iVar14 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(0x4e1c);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(0x4e1d);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(0x4e1e);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(19999);
  iVar9 = this_ptr->char_positions[character_code] -
          (int)this_ptr->bitmap_data[this_ptr->char_bitmap_index[character_code]];
  g_QuadVertex0.u =
       (float)((iVar9 % this_ptr->bitmap_widths[this_ptr->char_bitmap_index[character_code]]) *
               0x10000 + -0x1000);
  g_QuadVertex0.v =
       (float)((iVar9 / this_ptr->bitmap_widths[this_ptr->char_bitmap_index[character_code]]) *
               0x10000 + -0x1000);
  g_QuadVertex2.u = (float)(((int)g_QuadVertex0.u + iVar10) - iVar6);
  g_QuadVertex2.v = (float)(((int)g_QuadVertex0.v + iVar14) - iVar5);
  if (g_UseExternalRenderer == 0) {
    g_QuadVertex2.v = (float)((int)g_QuadVertex2.v + 0x8000);
    g_QuadVertex2.u = (float)((int)g_QuadVertex2.u + 0x8000);
  }
  iVar6 = 4;
  g_QuadVertex1.u = g_QuadVertex2.u;
  g_QuadVertex1.v = g_QuadVertex0.v;
  g_QuadVertex3.u = g_QuadVertex0.u;
  g_QuadVertex3.v = g_QuadVertex2.v;
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  if (g_CurrentTextureOpacityData == (void *)0x0) {
    iVar5 = 0x207;
  }
  else {
    iVar5 = 0x227;
  }
  engine_3d_c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620
            ((SMRGLHeaderPrimitive *)&stack0xffffffac,iVar5,0,in_stack_ffffffac,iVar6);
  return;
}
