// Name: engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470
// Address: 00407470
// Address Range: [[00407470, 00407618]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470(SMRGLHeaderPrimitive * primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  SRenderBufferEntry *pSVar2;
  SMRGLTextureBasic *pSVar3;
  int iVar4;
  int iVar5;
  SMRGLHeaderPrimitive *vertex_indices;
  SRenderVertex *pSVar6;
  int unaff_EDI;
  SRenderVertex *pSVar7;
  int *piVar8;
  byte bVar9;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  bVar9 = 0;
  vertex_indices = primitive + 1;
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&primitive->surface_normal);
  if (iVar1 != 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
      }
      else {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    g_RenderStateFlags = RENDER_ENGINE_PREMIUM_QUALITY;
    if (((g_RenderBufferEnabled == 0) || (0x9c3 < g_RenderBufferCount)) ||
       (4 < *(int *)(in_stack_00000008 + 4))) {
      engine_clipper_c_clipAndRasterize_FUN_004371b0
                (*(int *)(in_stack_00000008 + 4),(int *)vertex_indices);
    }
    else {
      pSVar2 = g_RenderBufferPool + g_RenderBufferCount;
      g_RenderBufferCount = g_RenderBufferCount + 1;
      pSVar2->vertex_count = *(int *)(in_stack_00000008 + 4);
      iVar1 = 0x7fffffff;
      iVar5 = 0;
      if (0 < *(int *)(in_stack_00000008 + 4)) {
        do {
          pSVar6 = g_RenderVertexBuffer + (vertex_indices->base).type;
          pSVar7 = pSVar2->vertices;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            (pSVar7->projected_vertex).transformed_x = (pSVar6->projected_vertex).transformed_x;
            pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar9 * -2 + 1) * 4);
            pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
          }
          iVar4 = pSVar2->vertices[0].projected_vertex.transformed_z;
          if (iVar4 < iVar1) {
            iVar1 = iVar4;
          }
          pSVar2 = (SRenderBufferEntry *)&pSVar2->vertices[0].w_recip;
          iVar5 = iVar5 + 1;
          vertex_indices = (SMRGLHeaderPrimitive *)&(vertex_indices->base).count;
        } while (iVar5 < *(int *)(in_stack_00000008 + 4));
      }
      pSVar3 = engine_texture_cpp_getCurrentTexture_FUN_005dd9c0();
      iVar5 = g_CurrentAlphaValue;
      piVar8 = (int *)(unaff_EDI + 0xc4);
      for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar8 = (pSVar3->base).type;
        pSVar3 = (SMRGLTextureBasic *)((int)pSVar3 + (uint)bVar9 * -8 + 4);
        piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
      }
      *(int *)(unaff_EDI + 0x10c) = iVar5;
      *(int *)(unaff_EDI + 0x114) = iVar1;
      *(int *)(unaff_EDI + 0x110) = g_BlendMode;
    }
  }
  return (SMRGLHeaderExtended *)(in_stack_0000000c + 0x18 + *(int *)(in_stack_0000000c + 4) * 0xc);
}
