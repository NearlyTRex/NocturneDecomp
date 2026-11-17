// Name: engine_3d.c_renderPolygonSolidLitOp62_FUN_00406890
// Address: 00406890
// Address Range: [[00406890, 004069a7]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidLitOp62_FUN_00406890(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidLitOp62_FUN_00406890(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  int vertex_count;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar2 != 0) {
    if (g_MMXSupported == 0) {
      if (g_INT_005fba20 == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
      }
    }
    else if (g_INT_005fba20 == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_00560f31;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
    }
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_LIGHTING_COLOR);
    engine_3d_c_calculatePolygonLighting_FUN_004039d0(prim);
    if (g_INT_005fba38 < 0xff) {
      g_RenderStateFlags.dword = g_RenderStateFlags.dword | RENDER_BLEND_READ_DEST;
    }
    vertex_count = 0;
    iVar4 = 0;
    g_VertexPreprocessMode = 0;
    pSVar3 = prim + 1;
    for (iVar2 = 0; iVar2 < (prim->base).count * 3; iVar2 = iVar2 + 3) {
      iVar1 = (pSVar3->base).type;
      *(int *)((int)g_ProcessedVertexIndices + iVar4) = iVar1;
      g_SRenderVertex_ARRAY_0060b014[iVar1].u = (pSVar3->base).count;
      iVar4 = iVar4 + 4;
      vertex_count = vertex_count + 1;
      g_SRenderVertex_ARRAY_0060b014[(pSVar3->base).type].v = (int)(pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043a840(vertex_count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
