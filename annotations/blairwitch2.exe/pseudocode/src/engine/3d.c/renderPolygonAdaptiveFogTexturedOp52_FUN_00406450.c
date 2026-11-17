// Name: engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406450
// Address: 00406450
// Address Range: [[00406450, 004066e3]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406450(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406450(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal);
  if (iVar1 != 0) {
    if (g_INT_0070ca74 == 0) {
      if (g_INT_0070ca70 == 0) {
        if (g_INT_01c38b40 == 0) {
          if (g_INT_006141c0 == 0x20) {
            g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
          }
          else {
            g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
          }
        }
        else if (g_INT_006141c0 == 0x20) {
          g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
        }
        else {
          g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
        }
        if (g_INT_006093bc == 0) {
          if (g_INT_01c38b40 == 0) {
            if (g_INT_006141c0 == 0x20) {
              g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
            }
            else {
              g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
            }
          }
          else if (g_INT_006141c0 == 0x20) {
            g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
          }
          else {
            g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
          }
          g_INT_01c38b58 = 0;
          g_BIT_INTEGER32_01c38b54.dword = 0xc1;
        }
        else {
          g_INT_01c38b58 = 1;
          g_BIT_INTEGER32_01c38b54.dword = 0xc1;
        }
      }
      else {
        if (g_INT_01c38b40 == 0) {
          if (g_INT_006141c0 == 0x20) {
            g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
          }
          else {
            g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
          }
        }
        else if (g_INT_006141c0 == 0x20) {
          g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
        }
        else {
          g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
        }
        g_BIT_INTEGER32_01c38b54.dword = 0xc0;
        g_INT_01c38b58 = 1;
        engine_light_cpp_calculateLighting_FUN_004e28b0
                  ((prim->surface_normal).A.i,(prim->surface_normal).B.i,(prim->surface_normal).C.i)
        ;
        g_INT_01c35e60 = engine_3d_c_lookupLitColor_FUN_004039e0(g_INT_0070ca5c,g_INT_01c35e64);
      }
    }
    else {
      if (g_INT_01c38b40 == 0) {
        if (g_INT_006141c0 == 0x20) {
          g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
        }
        else {
          g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
        }
      }
      else if (g_INT_006141c0 == 0x20) {
        g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
      }
      else {
        g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
      }
      g_BIT_INTEGER32_01c38b54.dword = 0;
      g_INT_01c38b58 = 0;
    }
    piVar3 = g_INT_ARRAY_0070ca98;
    pSVar2 = prim + 1;
    for (iVar1 = 0; iVar1 < (prim->base).count * 3; iVar1 = iVar1 + 3) {
      *piVar3 = (pSVar2->base).type + g_UINT_0070ca60;
      g_SRenderVertex_ARRAY_00622014[(pSVar2->base).type + g_UINT_0070ca60].u = (pSVar2->base).count
      ;
      piVar3 = piVar3 + 1;
      g_SRenderVertex_ARRAY_00622014[(pSVar2->base).type + g_UINT_0070ca60].v =
           (int)(pSVar2->surface_normal).A;
      pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_00431d90((prim->base).count,g_INT_ARRAY_0070ca98);
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
