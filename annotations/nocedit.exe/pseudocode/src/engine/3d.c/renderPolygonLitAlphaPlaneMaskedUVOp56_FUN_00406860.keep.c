// Name: engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00406860
// Address: 00406860
// MANUAL RECONSTRUCTION
// Address Range: [[00406860, 00406a14]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00406860(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00406860(SMRGLHeaderPrimitive *prim)

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
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_LIGHTING_COLOR | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(prim);
    if (g_CurrentAlphaValue < 0xff) {
      g_RenderStateFlags.dword = g_RenderStateFlags.dword | RENDER_BLEND_READ_DEST;
    }
    g_VertexPreprocessMode = PREPROCESS_Z_PASS_INVW;
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
        if ((0xfc << 0x10) - 1 < iVar3) {
          iVar3 = (0xfc << 0x10) - 1;
        }
        if ((0xfc << 0x10) - 1 < iVar5) {
          iVar5 = (0xfc << 0x10) - 1;
        }
      }
      else {
        if (iVar3 < 0x10000) {
          iVar3 = 0x10000;
        }
        if (iVar5 < 0x10000) {
          iVar5 = 0x10000;
        }
        if ((0xff << 0x10) - 1 < iVar3) {
          iVar3 = (0xff << 0x10) - 1;
        }
        if ((0xff << 0x10) - 1 < iVar5) {
          iVar5 = (0xff << 0x10) - 1;
        }
      }
      g_RenderVertexBuffer[iVar1].u = iVar3;
      g_RenderVertexBuffer[iVar1].v = iVar5;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0(vertex_count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((SMRGLVertex *)(prim + 1) + (prim->base).count);
}
