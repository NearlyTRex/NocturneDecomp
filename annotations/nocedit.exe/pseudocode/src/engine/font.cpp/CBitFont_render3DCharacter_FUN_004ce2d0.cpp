// Name: engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0
// Address: 004ce2d0
// Address Range: [[004ce2d0, 004ce79b]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_render3DCharacter_FUN_004ce2d0(CBitFont *this_ptr,int character_code,int x,int y,int right_x,int bottom_y,int color_mode)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_render3DCharacter_FUN_004ce2d0(CBitFont *this_ptr,int character_code,int x,int y,int right_x,int bottom_y,int color_mode)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char (*pacVar6) [80];
  SRenderVertex *pSVar7;
  int iVar8;
  char *pcVar9;
  SRenderVertex *pSVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  SMRGLHeaderPrimitive SStack_54;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar13 = 0;
  pcVar9 = g_FontTextureInfo.texture_name;
  pacVar6 = this_ptr->bitmap_files + this_ptr->char_bitmap_index[character_code];
  do {
    cVar1 = (*pacVar6)[0];
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = (*pacVar6)[1];
    pacVar6 = (char (*) [80])(*pacVar6 + 2);
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&g_FontTextureInfo);
  local_18 = 0x4e1c;
  local_14 = 0x4e1d;
  local_1c = 19999;
  uVar4 = g_ShadowColorBlue;
  uVar2 = g_ShadowColorRed;
  uVar3 = g_ShadowColorGreen;
  if (color_mode != -2) {
    if (color_mode < 0) {
      g_QuadVertex0.r = 0xffff;
      g_QuadVertex0.g = 0xffff;
      g_QuadVertex0.z = 0xffff;
      goto LAB_004ce397;
    }
    iVar5 = color_mode * 3;
    uVar4 = (uint)(byte)g_SourcePaletteData[iVar5 + 2];
    uVar2 = (uint)(byte)g_SourcePaletteData[iVar5];
    uVar3 = (uint)(byte)g_SourcePaletteData[iVar5 + 1];
  }
  g_QuadVertex0.r = uVar3 << 8;
  g_QuadVertex0.z = uVar2 << 8;
  g_QuadVertex0.g = uVar4 << 8;
LAB_004ce397:
  g_QuadVertex0.projected_vertex.transformed_z = 0x10000;
  g_QuadVertex0.projected_vertex.inv_z = 0x10000;
  pSVar7 = &g_QuadVertex0;
  pSVar10 = &g_QuadVertex1;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    (pSVar10->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
    pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar13 * -2 + 1) * 4);
    pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
  }
  pSVar7 = &g_QuadVertex0;
  pSVar10 = &g_QuadVertex2;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    (pSVar10->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
    pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar13 * -2 + 1) * 4);
    pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
  }
  pSVar7 = &g_QuadVertex0;
  pSVar10 = &g_QuadVertex3;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    (pSVar10->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
    pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar13 * -2 + 1) * 4);
    pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
  }
  local_20 = x * 0x10000 + -0x1000;
  iVar5 = (right_x + 1) * 0x10000;
  iVar8 = iVar5 + 0x1000;
  iVar11 = (bottom_y + 1) * 0x10000;
  local_24 = y * 0x10000 + -0x1000;
  iVar12 = iVar11 + 0x1000;
  if (g_UseExternalRenderer == 0) {
    iVar12 = iVar11 + 0x9000;
    iVar8 = iVar5 + 0x9000;
  }
  g_QuadVertex0.projected_vertex.transformed_x =
       (int)(((longlong)(local_20 - g_ViewportRightFixed) * 0x10000) /
            (longlong)g_ViewportCenterXFixed);
  g_QuadVertex0.projected_vertex.transformed_y =
       (int)(((longlong)(local_24 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  g_QuadVertex1.projected_vertex.transformed_x =
       (int)(((longlong)(iVar8 - g_ViewportRightFixed) * 0x10000) / (longlong)g_ViewportCenterXFixed
            );
  g_QuadVertex1.projected_vertex.transformed_y =
       (int)(((longlong)(local_24 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  g_QuadVertex2.projected_vertex.transformed_x =
       (int)(((longlong)(iVar8 - g_ViewportRightFixed) * 0x10000) / (longlong)g_ViewportCenterXFixed
            );
  g_QuadVertex2.projected_vertex.transformed_y =
       (int)(((longlong)(iVar12 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  g_QuadVertex3.projected_vertex.transformed_x =
       (int)(((longlong)(local_20 - g_ViewportRightFixed) * 0x10000) /
            (longlong)g_ViewportCenterXFixed);
  g_QuadVertex3.projected_vertex.transformed_y =
       (int)(((longlong)(iVar12 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(0x4e1c);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(local_14);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(0x4e1e);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(local_1c);
  local_2c = this_ptr->bitmap_widths[this_ptr->char_bitmap_index[character_code]];
  iVar11 = this_ptr->char_positions[character_code] -
           (int)this_ptr->bitmap_data[this_ptr->char_bitmap_index[character_code]];
  iVar5 = (iVar11 % local_2c) * 0x10000 + -0x1000;
  iVar11 = (iVar11 / local_2c) * 0x10000 + -0x1000;
  g_QuadVertex2.u = (iVar5 + iVar8) - local_20;
  iVar8 = (iVar11 + iVar12) - local_24;
  if (g_UseExternalRenderer == 0) {
    iVar8 = iVar8 + 0x8000;
    g_QuadVertex2.u = g_QuadVertex2.u + 0x8000;
  }
  g_RenderVertexBuffer[local_18].u = iVar5;
  g_RenderVertexBuffer[local_18].v = iVar11;
  local_28 = local_14;
  g_RenderVertexBuffer[local_14].u = g_QuadVertex2.u;
  g_RenderVertexBuffer[local_14].v = iVar11;
  local_34 = 0x4e1e;
  SStack_54.surface_normal.D = 0;
  g_QuadVertex2.v = iVar8;
  g_RenderVertexBuffer[local_1c].u = iVar5;
  SStack_54.base.count = 4;
  g_RenderVertexBuffer[local_1c].v = iVar8;
  SStack_54.surface_normal.C = 0;
  local_3c = local_18;
  SStack_54.surface_normal.B = 0;
  local_38 = local_14;
  SStack_54.surface_normal.A = 0;
  local_30 = local_1c;
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  if (g_CurrentTextureOpacityData == (void *)0x0) {
    iVar5 = 0x207;
  }
  else {
    iVar5 = 0x227;
  }
  engine_3d_c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620(&SStack_54,iVar5,0);
  return;
}
