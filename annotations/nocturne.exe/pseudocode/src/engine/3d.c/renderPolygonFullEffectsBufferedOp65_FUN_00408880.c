// Name: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00408880
// Address: 00408880
// Address Range: [[00408880, 00408a5d]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00408880(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00408880(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int iVar3;
  SMRGLTextureBasic *pSVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  byte bVar10;
  int local_14;
  
  bVar10 = 0;
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&prim->surface_normal);
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
    piVar5 = &DAT_006b029c;
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_FOG_COLOR | RENDER_BLEND_READ_DEST | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE | RENDER_ALPHA_FROM_VERTEX);
    g_VertexPreprocessMode = 1;
    pSVar2 = prim + 1;
    for (iVar1 = 0; iVar3 = DAT_006b0264, iVar1 < (prim->base).count * 3; iVar1 = iVar1 + 3) {
      *piVar5 = (pSVar2->base).type + DAT_006b0264;
      (&DAT_005c502c)[((pSVar2->base).type + iVar3) * 0xc] = (pSVar2->base).count;
      piVar5 = piVar5 + 1;
      *(UIntegerFloat *)(&DAT_005c5030 + ((pSVar2->base).type + iVar3) * 0x30) =
           (pSVar2->surface_normal).A;
      pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
    }
    if (((DAT_006b494c == 0) || (0x9c3 < DAT_006b4950)) || (iVar1 = (prim->base).count, 4 < iVar1))
    {
      engine_clipper_c_clipAndRasterize_FUN_00432cd0((prim->base).count,&DAT_006b029c);
    }
    else {
      iVar7 = 0;
      local_14 = 0x7fffffff;
      iVar3 = DAT_006b4950 * 0x118;
      DAT_006b4950 = DAT_006b4950 + 1;
      piVar5 = (int *)(&DAT_006b4954 + iVar3);
      *piVar5 = iVar1;
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          piVar8 = &DAT_005c5014 + *(int *)((int)&DAT_006b029c + iVar1) * 0xc;
          piVar9 = piVar5 + 1;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar9 = *piVar8;
            piVar8 = piVar8 + (uint)bVar10 * -2 + 1;
            piVar9 = piVar9 + (uint)bVar10 * -2 + 1;
          }
          if (piVar5[3] < local_14) {
            local_14 = piVar5[3];
          }
          piVar5 = piVar5 + 0xc;
          iVar7 = iVar7 + 1;
          iVar1 = iVar1 + 4;
        } while (iVar7 < (prim->base).count);
      }
      pSVar4 = engine_texture_cpp_getCurrentTexture_FUN_00545ad0();
      iVar1 = g_CurrentAlphaValue;
      piVar5 = (int *)(&DAT_006b4a18 + iVar3);
      for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar5 = (pSVar4->base).type;
        pSVar4 = (SMRGLTextureBasic *)((int)pSVar4 + (uint)bVar10 * -8 + 4);
        piVar5 = piVar5 + (uint)bVar10 * -2 + 1;
      }
      *(int *)(&DAT_006b4a60 + iVar3) = iVar1;
      *(int *)(&DAT_006b4a64 + iVar3) = g_BlendMode;
      *(int *)(&DAT_006b4a68 + iVar3) = local_14;
    }
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
