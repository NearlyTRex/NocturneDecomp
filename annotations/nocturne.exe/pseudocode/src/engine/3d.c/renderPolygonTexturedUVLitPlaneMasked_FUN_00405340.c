// Name: engine_3d.c_renderPolygonTexturedUVLitPlaneMasked_FUN_00405340
// Address: 00405340
// Address Range: [[00405340, 00405439]]
// Convention: __cdecl
// Signature: void * __cdecl engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00405340(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void * __cdecl engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00405340(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  int iVar4;
  
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
  g_RenderStateFlags.dword = RENDER_TEX_ENABLE;
  g_VertexPreprocessMode = 0;
  engine_3d_c_calculatePolygonLighting_FUN_00404710(prim);
  piVar3 = &DAT_006b029c;
  pSVar2 = prim + 1;
  for (iVar4 = 0; iVar1 = DAT_006b0264, iVar4 < (prim->base).count * 3; iVar4 = iVar4 + 3) {
    *piVar3 = (pSVar2->base).type + DAT_006b0264;
    (&DAT_005c502c)[((pSVar2->base).type + iVar1) * 0xc] = (pSVar2->base).count;
    piVar3 = piVar3 + 1;
    *(UIntegerFloat *)(&DAT_005c5030 + ((pSVar2->base).type + iVar1) * 0x30) =
         (pSVar2->surface_normal).A;
    pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
  }
  engine_clipper_c_clipAndRasterize_FUN_00432cd0((prim->base).count,&DAT_006b029c);
  return (void *)((int)&prim[1].base + (prim->base).count * 0xc);
}
