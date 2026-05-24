// Name: engine_3d.c_renderPolygonSolidTexturedClampedOp51_FUN_00406290
// Address: 00406290
// MANUAL RECONSTRUCTION
// Address Range: [[00406290, 00406422]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedClampedOp51_FUN_00406290(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedClampedOp51_FUN_00406290(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SMRGLVertex *pSVar4;
  int iVar5;
  int vertex_count;

  pSVar4 = (SMRGLVertex *)(prim + 1);
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal);
  if (iVar2 != 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    g_VertexPreprocessMode = 1;
    for (vertex_count = 0; vertex_count < (prim->base).count; vertex_count = vertex_count + 1) {
      iVar1 = pSVar4[vertex_count].vertex_index;
      g_ProcessedVertexIndices[vertex_count] = iVar1;
      iVar3 = pSVar4[vertex_count].texture_u;
      iVar5 = pSVar4[vertex_count].texture_v;
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
      g_RenderVertexBuffer[iVar1].u = iVar3;
      g_RenderVertexBuffer[iVar1].v = iVar5;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0(vertex_count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((SMRGLVertex *)(prim + 1) + (prim->base).count);
}
