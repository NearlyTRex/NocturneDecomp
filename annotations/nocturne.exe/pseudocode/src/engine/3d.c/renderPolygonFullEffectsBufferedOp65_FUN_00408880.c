// Name: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00408880
// Address: 00408880
// Address Range: [[00408880, 00408a5d]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00408880(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00408880(SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  SMRGLTextureBasic *pSVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  byte bVar11;
  int local_14;
  
  bVar11 = 0;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&prim->surface_normal);
  if (iVar2 != 0) {
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
    piVar6 = &DAT_006b029c;
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_FOG_COLOR | RENDER_BLEND_READ_DEST | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE | RENDER_ALPHA_FROM_VERTEX);
    g_VertexPreprocessMode = 1;
    pSVar3 = prim + 1;
    for (iVar2 = 0; iVar4 = DAT_006b0264, iVar2 < (prim->base).count * 3; iVar2 = iVar2 + 3) {
      *piVar6 = (pSVar3->base).type + DAT_006b0264;
      (&DAT_005c502c)[((pSVar3->base).type + iVar4) * 0xc] = (pSVar3->base).count;
      piVar6 = piVar6 + 1;
      *(UIntegerFloat *)(&DAT_005c5030 + ((pSVar3->base).type + iVar4) * 0x30) =
           (pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    if (((DAT_006b494c == 0) || (0x9c3 < DAT_006b4950)) || (iVar2 = (prim->base).count, 4 < iVar2))
    {
      engine_clipper_c_clipAndRasterize_FUN_00432cd0((prim->base).count,&DAT_006b029c);
    }
    else {
      iVar8 = 0;
      local_14 = 0x7fffffff;
      iVar4 = DAT_006b4950 * 0x118;
      DAT_006b4950 = DAT_006b4950 + 1;
      piVar6 = (int *)(&DAT_006b4954 + iVar4);
      *piVar6 = iVar2;
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          piVar9 = &DAT_005c5014 + *(int *)((int)&DAT_006b029c + iVar2) * 0xc;
          piVar10 = piVar6 + 1;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar10 = *piVar9;
            piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
            piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
          }
          if (piVar6[3] < local_14) {
            local_14 = piVar6[3];
          }
          piVar6 = piVar6 + 0xc;
          iVar8 = iVar8 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar8 < (prim->base).count);
      }
      pSVar5 = engine_texture_cpp_getCurrentTexture_FUN_00545ad0();
      uVar1 = DAT_005b763c;
      piVar6 = (int *)(&DAT_006b4a18 + iVar4);
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = (pSVar5->base).type;
        pSVar5 = (SMRGLTextureBasic *)((int)pSVar5 + (uint)bVar11 * -8 + 4);
        piVar6 = piVar6 + (uint)bVar11 * -2 + 1;
      }
      *(uint *)(&DAT_006b4a60 + iVar4) = uVar1;
      *(uint *)(&DAT_006b4a64 + iVar4) = _DAT_01c03998;
      *(int *)(&DAT_006b4a68 + iVar4) = local_14;
    }
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
