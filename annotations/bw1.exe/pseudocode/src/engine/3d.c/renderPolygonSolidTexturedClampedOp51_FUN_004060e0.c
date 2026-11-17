// Name: engine_3d.c_renderPolygonSolidTexturedClampedOp51_FUN_004060e0
// Address: 004060e0
// Address Range: [[004060e0, 00406272]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedClampedOp51_FUN_004060e0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedClampedOp51_FUN_004060e0(SMRGLHeaderPrimitive *prim)

{
  SMRGLHeaderBasic *pSVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive *pSVar4;
  int iVar5;
  int iVar6;
  int vertex_count;
  
  pSVar4 = prim + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar2 != 0) {
    if (g_MMXSupported == 0) {
      if (g_INT_0061b4a0 == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
      }
    }
    else if (g_INT_0061b4a0 == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0057de01;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
    }
    vertex_count = 0;
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
    engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
    g_VertexPreprocessMode = 1;
    iVar2 = 0;
    for (iVar6 = 0; iVar6 < (prim->base).count * 3; iVar6 = iVar6 + 3) {
      *(int *)((int)g_ProcessedVertexIndices + iVar2) = (pSVar4->base).type;
      iVar3 = (pSVar4->base).count;
      iVar5 = (pSVar4->surface_normal).A.i;
      if (g_CurrentTextureDimension < 0x41) {
        if (iVar3 < 0x40000) {
          iVar3 = 0x40000;
        }
        if (iVar5 < 0x40000) {
          iVar5 = 0x40000;
        }
        if (0xfbffff < iVar3) {
          iVar3 = 0xfbffff;
        }
        if (0xfbffff < iVar5) {
          iVar5 = 0xfbffff;
        }
      }
      else {
        if (iVar3 < 0x10000) {
          iVar3 = 0x10000;
        }
        if (iVar5 < 0x10000) {
          iVar5 = 0x10000;
        }
        if (0xfeffff < iVar3) {
          iVar3 = 0xfeffff;
        }
        if (0xfeffff < iVar5) {
          iVar5 = 0xfeffff;
        }
      }
      g_SRenderVertex_ARRAY_00629014[(pSVar4->base).type].u = iVar3;
      pSVar1 = &pSVar4->base;
      iVar2 = iVar2 + 4;
      vertex_count = vertex_count + 1;
      pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
      g_SRenderVertex_ARRAY_00629014[pSVar1->type].v = iVar5;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043cbf0(vertex_count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
