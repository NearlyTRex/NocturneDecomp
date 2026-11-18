// Name: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00408880
// Address: 00408880
// Address Range: [[00408880, 00408a5d]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00408880(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00408880(SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive *pSVar4;
  SRenderBufferEntry *pSVar5;
  SMRGLTextureBasic *pSVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  SRenderVertex *pSVar10;
  SRenderVertex *pSVar11;
  SMRGLTextureModel *pSVar12;
  byte bVar13;
  int local_14;
  
  bVar13 = 0;
  iVar3 = engine_3d_c_isVisiblePlane_FUN_00404610(&prim->surface_normal);
  if (iVar3 != 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_005300ec;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00530322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0052f031;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0052f823;
    }
    piVar7 = g_ProcessedVertexIndices;
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_FOG_COLOR | RENDER_BLEND_READ_DEST | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE | RENDER_ALPHA_FROM_VERTEX);
    g_VertexPreprocessMode = 1;
    pSVar4 = prim + 1;
    for (iVar3 = 0; iVar2 = g_RenderBufferCount, uVar1 = g_ProcessedVertexOffset,
        iVar3 < (prim->base).count * 3; iVar3 = iVar3 + 3) {
      *piVar7 = (pSVar4->base).type + g_ProcessedVertexOffset;
      g_SRenderVertex_ARRAY_005c5014[(pSVar4->base).type + uVar1].u = (pSVar4->base).count;
      piVar7 = piVar7 + 1;
      g_SRenderVertex_ARRAY_005c5014[(pSVar4->base).type + uVar1].v =
           (int)(pSVar4->surface_normal).A;
      pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
    }
    if (((g_RenderBufferEnabled == 0) || (0x9c3 < g_RenderBufferCount)) ||
       (iVar3 = (prim->base).count, 4 < iVar3)) {
      engine_clipper_c_clipAndRasterize_FUN_00432cd0((prim->base).count,g_ProcessedVertexIndices);
    }
    else {
      iVar9 = 0;
      local_14 = 0x7fffffff;
      pSVar5 = g_RenderBufferPool + g_RenderBufferCount;
      g_RenderBufferCount = g_RenderBufferCount + 1;
      pSVar5->vertex_count = iVar3;
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          pSVar10 = g_SRenderVertex_ARRAY_005c5014 + *(int *)((int)g_ProcessedVertexIndices + iVar3)
          ;
          pSVar11 = pSVar5->vertices;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            (pSVar11->projected_vertex).transformed_x = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar13 * -2 + 1) * 4);
          }
          iVar8 = pSVar5->vertices[0].projected_vertex.transformed_z;
          if (iVar8 < local_14) {
            local_14 = iVar8;
          }
          pSVar5 = (SRenderBufferEntry *)&pSVar5->vertices[0].a;
          iVar9 = iVar9 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar9 < (prim->base).count);
      }
      pSVar6 = engine_texture_cpp_getCurrentTexture_FUN_00545ad0();
      iVar3 = g_CurrentAlphaValue;
      pSVar12 = &g_RenderBufferPool[iVar2].texture_data;
      for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
        (pSVar12->base).type = (pSVar6->base).type;
        pSVar6 = (SMRGLTextureBasic *)((int)pSVar6 + (uint)bVar13 * -8 + 4);
        pSVar12 = (SMRGLTextureModel *)((int)pSVar12 + ((uint)bVar13 * -2 + 1) * 4);
      }
      g_RenderBufferPool[iVar2].alpha_value = iVar3;
      g_RenderBufferPool[iVar2].blend_mode = g_BlendMode;
      g_RenderBufferPool[iVar2].min_z_value = local_14;
    }
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
