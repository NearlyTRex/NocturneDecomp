// Name: engine_3d.c_renderPolygonSolidLitClampedOp17_FUN_00405540
// Address: 00405540
// Address Range: [[00405540, 0040573e]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidLitClampedOp17_FUN_00405540(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidLitClampedOp17_FUN_00405540(SMRGLHeaderPrimitive *prim)

{
  SMRGLHeaderBasic *pSVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive *pSVar4;
  int iVar5;
  int iVar6;
  int vertex_count;
  
  pSVar4 = prim + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&prim->surface_normal);
  if (iVar2 == 0) goto LAB_0040571f;
  if (DAT_006b027c == 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
LAB_00405589:
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
LAB_00405670:
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0052f823;
    }
  }
  else if (g_MMXSupported == 0) {
    if (g_BitsPerPixel == 0x20) goto LAB_00405589;
    g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00530322;
  }
  else {
    if (g_BitsPerPixel != 0x20) goto LAB_00405670;
    g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0052f031;
  }
  engine_3d_c_calculatePolygonLighting_FUN_00404710(prim);
  g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_LIGHTING_COLOR);
  if (DAT_005b763c < 0xff) {
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_LIGHTING_COLOR | RENDER_BLEND_READ_DEST);
  }
  vertex_count = 0;
  iVar6 = 0;
  g_VertexPreprocessMode = 0;
  for (iVar2 = 0; iVar2 < (prim->base).count * 3; iVar2 = iVar2 + 3) {
    *(int *)((int)&DAT_006b029c + iVar6) = (pSVar4->base).type;
    iVar3 = (pSVar4->base).count;
    iVar5 = (pSVar4->surface_normal).A.i;
    if (g_UseExternalRenderer == 0) {
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
    else {
      if (iVar3 < 0x20000) {
        iVar3 = 0x20000;
      }
      if (iVar5 < 0x20000) {
        iVar5 = 0x20000;
      }
      if (0xfdffff < iVar3) {
        iVar3 = 0xfdffff;
      }
      if (0xfdffff < iVar5) {
        iVar5 = 0xfdffff;
      }
    }
    (&DAT_005c502c)[(pSVar4->base).type * 0xc] = iVar3;
    pSVar1 = &pSVar4->base;
    iVar6 = iVar6 + 4;
    vertex_count = vertex_count + 1;
    pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
    *(int *)(&DAT_005c5030 + pSVar1->type * 0x30) = iVar5;
  }
  engine_clipper_c_clipAndRasterize_FUN_00432cd0(vertex_count,&DAT_006b029c);
LAB_0040571f:
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
