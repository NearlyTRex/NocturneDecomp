// Name: engine_3d.c_renderPolygonLitDetailed_FUN_00404220
// Address: 00404220
// Address Range: [[00404220, 0040441e]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonLitDetailed_FUN_00404220(SMRGLHeaderPrimitive * polygon_info)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonLitDetailed_FUN_00404220(SMRGLHeaderPrimitive *polygon_info)

{
  SMRGLHeaderBasic *pSVar1;
  int iVar2;
  float fVar3;
  SMRGLHeaderPrimitive *pSVar4;
  float fVar5;
  int iVar6;
  int vertex_count;
  SMRGLHeaderPrimitive *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  pSVar4 = polygon_info + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar2 == 0) goto LAB_004043ff;
  if (DAT_00772a78 == 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
LAB_00404269:
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
LAB_00404350:
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
  }
  else if (g_MMXSupported == 0) {
    if (g_BitsPerPixel == 0x20) goto LAB_00404269;
    g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
  }
  else {
    if (g_BitsPerPixel != 0x20) goto LAB_00404350;
    g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
  }
  engine_3d_c_calculatePolygonLighting_FUN_00403a00(in_stack_00000008);
  g_RenderStateFlags = RENDER_LIT_DETAILED;
  if (g_CurrentAlphaValue < 0xff) {
    g_RenderStateFlags = RENDER_ALPHA_DETAILED;
  }
  vertex_count = 0;
  iVar6 = 0;
  g_RenderStateFlag2 = PREPROCESS_NONE;
  for (iVar2 = 0; iVar2 < *(int *)(in_stack_0000000c + 4) * 3; iVar2 = iVar2 + 3) {
    *(int *)((int)g_ProcessedVertexIndices + iVar6) = (pSVar4->base).type;
    fVar3 = (float)(pSVar4->base).count;
    fVar5 = (float)(pSVar4->surface_normal).A;
    if (g_UseExternalRenderer == 0) {
      if ((int)fVar3 < 0x10000) {
        fVar3 = 9.18355e-41;
      }
      if ((int)fVar5 < 0x10000) {
        fVar5 = 9.18355e-41;
      }
      if (0xfeffff < (int)fVar3) {
        fVar3 = 2.341805e-38;
      }
      if (0xfeffff < (int)fVar5) {
        fVar5 = 2.341805e-38;
      }
    }
    else {
      if ((int)fVar3 < 0x20000) {
        fVar3 = 1.83671e-40;
      }
      if ((int)fVar5 < 0x20000) {
        fVar5 = 1.83671e-40;
      }
      if (0xfdffff < (int)fVar3) {
        fVar3 = 2.3326215e-38;
      }
      if (0xfdffff < (int)fVar5) {
        fVar5 = 2.3326215e-38;
      }
    }
    g_RenderVertexBuffer[(pSVar4->base).type].u = fVar3;
    pSVar1 = &pSVar4->base;
    iVar6 = iVar6 + 4;
    vertex_count = vertex_count + 1;
    pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
    g_RenderVertexBuffer[pSVar1->type].v = fVar5;
  }
  engine_clipper_c_clipAndRasterize_FUN_004371b0(vertex_count,g_ProcessedVertexIndices);
LAB_004043ff:
  return (SMRGLHeaderExtended *)(*(int *)(in_stack_00000010 + 4) * 0xc + in_stack_00000010 + 0x18);
}
