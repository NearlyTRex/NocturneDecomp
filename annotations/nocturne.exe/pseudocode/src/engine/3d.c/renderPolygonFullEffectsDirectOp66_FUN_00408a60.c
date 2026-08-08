// Name: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00408a60
// Address: 00408a60
// Address Range: [[00408a60, 00408c08]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00408a60(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00408a60(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  int iVar2;
  SMRGLTextureBasic *pSVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  SMRGLHeaderPrimitive *vertex_indices;
  int *piVar7;
  int *piVar8;
  byte bVar9;
  
  bVar9 = 0;
  vertex_indices = primitive + 1;
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&primitive->surface_normal);
  if (iVar1 != 0) {
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
    g_VertexPreprocessMode = 1;
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_FOG_COLOR | RENDER_BLEND_READ_DEST | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE | RENDER_ALPHA_FROM_VERTEX);
    if (((DAT_006b494c == 0) || (0x9c3 < DAT_006b4950)) || (4 < (primitive->base).count)) {
      engine_clipper_c_clipAndRasterize_FUN_00432cd0((primitive->base).count,(int *)vertex_indices);
    }
    else {
      iVar2 = DAT_006b4950 * 0x118;
      piVar5 = (int *)(&DAT_006b4954 + iVar2);
      DAT_006b4950 = DAT_006b4950 + 1;
      *piVar5 = (primitive->base).count;
      iVar1 = 0x7fffffff;
      iVar6 = 0;
      if (0 < (primitive->base).count) {
        do {
          piVar7 = &DAT_005c5014 + (vertex_indices->base).type * 0xc;
          piVar8 = piVar5 + 1;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar8 = *piVar7;
            piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
            piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
          }
          if (piVar5[3] < iVar1) {
            iVar1 = piVar5[3];
          }
          piVar5 = piVar5 + 0xc;
          iVar6 = iVar6 + 1;
          vertex_indices = (SMRGLHeaderPrimitive *)&(vertex_indices->base).count;
        } while (iVar6 < (primitive->base).count);
      }
      pSVar3 = engine_texture_cpp_getCurrentTexture_FUN_00545ad0();
      iVar6 = g_CurrentAlphaValue;
      piVar5 = (int *)(&DAT_006b4a18 + iVar2);
      for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar5 = (pSVar3->base).type;
        pSVar3 = (SMRGLTextureBasic *)((int)pSVar3 + (uint)bVar9 * -8 + 4);
        piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
      }
      *(int *)(&DAT_006b4a60 + iVar2) = iVar6;
      *(int *)(&DAT_006b4a68 + iVar2) = iVar1;
      *(int *)(&DAT_006b4a64 + iVar2) = g_BlendMode;
    }
  }
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}
