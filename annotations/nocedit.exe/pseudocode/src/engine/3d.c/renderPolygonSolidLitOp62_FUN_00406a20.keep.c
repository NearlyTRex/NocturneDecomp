// Name: engine_3d.c_renderPolygonSolidLitOp62_FUN_00406a20
// Address: 00406a20
// MANUAL RECONSTRUCTION
// Address Range: [[00406a20, 00406b37]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidLitOp62_FUN_00406a20(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidLitOp62_FUN_00406a20(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  int iVar2;
  SMRGLVertex *pSVar3;
  int vertex_count;
  
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
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_LIGHTING_COLOR);
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(prim);
    if (g_CurrentAlphaValue < 0xff) {
      g_RenderStateFlags.dword = g_RenderStateFlags.dword | RENDER_BLEND_READ_DEST;
    }
    g_VertexPreprocessMode = PREPROCESS_NONE;
    pSVar3 = (SMRGLVertex *)(prim + 1);
    for (vertex_count = 0; vertex_count < (prim->base).count; vertex_count = vertex_count + 1) {
      iVar1 = pSVar3[vertex_count].vertex_index;
      g_ProcessedVertexIndices[vertex_count] = iVar1;
      g_RenderVertexBuffer[iVar1].u = pSVar3[vertex_count].texture_u;
      g_RenderVertexBuffer[iVar1].v = pSVar3[vertex_count].texture_v;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0(vertex_count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((SMRGLVertex *)(prim + 1) + (prim->base).count);
}
