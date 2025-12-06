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
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  char (*pacVar9) [80];
  SRenderVertex *pSVar10;
  int iVar11;
  float fVar12;
  int unaff_EDI;
  char *pcVar13;
  SRenderVertex *pSVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  byte bVar18;
  int unaff_retaddr;
  
  bVar18 = 0;
  pcVar13 = g_FontTextureInfo.texture_name;
  pacVar9 = this_ptr->bitmap_files + this_ptr->char_bitmap_index[character_code];
  do {
    cVar3 = (*pacVar9)[0];
    *pcVar13 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = (*pacVar9)[1];
    pacVar9 = (char (*) [80])(*pacVar9 + 2);
    pcVar13[1] = cVar3;
    pcVar13 = pcVar13 + 2;
  } while (cVar3 != '\0');
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&g_FontTextureInfo);
  uVar6 = g_ShadowColorBlue;
  uVar4 = g_ShadowColorRed;
  uVar5 = g_ShadowColorGreen;
  if (height != -2) {
    if (height < 0) {
      g_QuadVertex0.color = 0xffff;
      g_QuadVertex0.fog = 9.18341e-41;
      g_QuadVertex0.light = 9.18341e-41;
      goto LAB_004ce397;
    }
    iVar8 = height * 3;
    uVar6 = (uint)(byte)g_SourcePaletteData[iVar8 + 2];
    uVar4 = (uint)(byte)g_SourcePaletteData[iVar8];
    uVar5 = (uint)(byte)g_SourcePaletteData[iVar8 + 1];
  }
  g_QuadVertex0.color = uVar5 << 8;
  g_QuadVertex0.light = (float)(uVar4 << 8);
  g_QuadVertex0.fog = (float)(uVar6 << 8);
LAB_004ce397:
  g_QuadVertex0.projected_vertex.transformed_z = 0x10000;
  g_QuadVertex0.projected_vertex.inv_z = 0x10000;
  pSVar10 = &g_QuadVertex0;
  pSVar14 = &g_QuadVertex1;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    (pSVar14->projected_vertex).transformed_x = (pSVar10->projected_vertex).transformed_x;
    pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar18 * -2 + 1) * 4);
    pSVar14 = (SRenderVertex *)((int)pSVar14 + ((uint)bVar18 * -2 + 1) * 4);
  }
  pSVar10 = &g_QuadVertex0;
  pSVar14 = &g_QuadVertex2;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    (pSVar14->projected_vertex).transformed_x = (pSVar10->projected_vertex).transformed_x;
    pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar18 * -2 + 1) * 4);
    pSVar14 = (SRenderVertex *)((int)pSVar14 + ((uint)bVar18 * -2 + 1) * 4);
  }
  pSVar10 = &g_QuadVertex0;
  pSVar14 = &g_QuadVertex3;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    (pSVar14->projected_vertex).transformed_x = (pSVar10->projected_vertex).transformed_x;
    pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar18 * -2 + 1) * 4);
    pSVar14 = (SRenderVertex *)((int)pSVar14 + ((uint)bVar18 * -2 + 1) * 4);
  }
  iVar15 = width + 1;
  iVar8 = y_pos * 0x10000 + -0x1000;
  iVar11 = iVar15 * 0x10000 + 0x1000;
  iVar16 = (height + 1) * 0x10000;
  iVar7 = z_pos * 0x10000 + -0x1000;
  iVar17 = iVar16 + 0x1000;
  if (g_UseExternalRenderer == 0) {
    iVar17 = iVar16 + 0x9000;
    iVar11 = iVar15 * 0x10000 + 0x9000;
  }
  g_QuadVertex0.projected_vertex.transformed_x =
       (int)(((longlong)(iVar8 - g_ViewportRightFixed) * 0x10000) / (longlong)g_ViewportCenterXFixed
            );
  g_QuadVertex0.projected_vertex.transformed_y =
       (int)(((longlong)(iVar7 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  g_QuadVertex1.projected_vertex.transformed_x =
       (int)(((longlong)(iVar11 - g_ViewportRightFixed) * 0x10000) /
            (longlong)g_ViewportCenterXFixed);
  g_QuadVertex1.projected_vertex.transformed_y =
       (int)(((longlong)(iVar7 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  g_QuadVertex2.projected_vertex.transformed_x =
       (int)(((longlong)(iVar11 - g_ViewportRightFixed) * 0x10000) /
            (longlong)g_ViewportCenterXFixed);
  g_QuadVertex2.projected_vertex.transformed_y =
       (int)(((longlong)(iVar17 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  g_QuadVertex3.projected_vertex.transformed_x =
       (int)(((longlong)(iVar8 - g_ViewportRightFixed) * 0x10000) / (longlong)g_ViewportCenterXFixed
            );
  g_QuadVertex3.projected_vertex.transformed_y =
       (int)(((longlong)(iVar17 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(0x4e1c);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(unaff_EDI);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(0x4e1e);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(unaff_EDI);
  iVar7 = (height + 1) * 4 + iVar15;
  iVar15 = *(int *)(iVar7 + 0x2168) * 4 + iVar15;
  iVar8 = *(int *)(iVar15 + 0x154);
  iVar7 = *(int *)(iVar7 + 0x1d68) - *(int *)(iVar15 + 0x144);
  fVar1 = (float)((iVar7 % iVar8) * 0x10000 + -0x1000);
  fVar2 = (float)((iVar7 / iVar8) * 0x10000 + -0x1000);
  g_QuadVertex2.u = (float)(((int)fVar1 + iVar11) - unaff_EDI);
  fVar12 = (float)((int)fVar2 + iVar17 + -0x4e1d);
  if (g_UseExternalRenderer == 0) {
    fVar12 = (float)((int)fVar2 + iVar17 + 0x31e3);
    g_QuadVertex2.u = (float)((int)g_QuadVertex2.u + 0x8000);
  }
  g_RenderVertexBuffer[unaff_EBX].u = fVar1;
  g_RenderVertexBuffer[unaff_EBX].v = fVar2;
  g_RenderVertexBuffer[unaff_retaddr].u = g_QuadVertex2.u;
  g_RenderVertexBuffer[unaff_retaddr].v = fVar2;
  g_QuadVertex2.v = fVar12;
  g_RenderVertexBuffer[unaff_ESI].u = fVar1;
  iVar8 = 4;
  g_RenderVertexBuffer[unaff_ESI].v = fVar12;
  iVar7 = 0;
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  if (g_CurrentTextureOpacityData == (void *)0x0) {
    iVar15 = 0x207;
  }
  else {
    iVar15 = 0x227;
  }
  engine_3d_c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620
            ((SMRGLHeaderPrimitive *)&stack0xffffffc4,iVar15,0,iVar8,iVar7);
  return;
}
