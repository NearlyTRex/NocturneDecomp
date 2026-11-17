// Name: engine_mini3d.cpp_fillSurfaceTriangle_FUN_004f8110
// Address: 004f8110
// Address Range: [[004f8110, 004f8324]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_fillSurfaceTriangle_FUN_004f8110(float *v0,float *v1,float *v2)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_fillSurfaceTriangle_FUN_004f8110(float *v0,float *v1,float *v2)

{
  SSoftwareEdge *pSVar1;
  SSoftwareEdge *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int local_14;
  
  if ((v2[5] - v1[5]) * (v1[6] - v0[6]) < (v1[5] - v0[5]) * (v2[6] - v1[6])) {
    g_INT_01d17fb8 = 0x4b0;
    g_INT_01d17fbc = 0;
    g_INT_01d17ab4 = 0;
    engine_mini3d_cpp_setupSurfaceEdge_FUN_004f7f80(v0,v1);
    engine_mini3d_cpp_setupSurfaceEdge_FUN_004f7f80(v1,v2);
    engine_mini3d_cpp_setupSurfaceEdge_FUN_004f7f80(v2,v0);
    pSVar1 = &g_SSoftwareEdge_01d17ab8;
    iVar5 = 0;
    if (0 < g_INT_01d17ab4) {
      do {
        if ((g_INT_01d17fb8 == (pSVar1->base).y_min) && (pSVar1 != (SSoftwareEdge *)0x0))
        goto LAB_004f81c0;
        iVar5 = iVar5 + 1;
        pSVar1 = pSVar1 + 1;
      } while (iVar5 < g_INT_01d17ab4);
    }
    pSVar1 = (SSoftwareEdge *)0x0;
LAB_004f81c0:
    if (pSVar1 != (SSoftwareEdge *)0x0) {
      iVar5 = 0;
      pSVar2 = &g_SSoftwareEdge_01d17ab8;
      if (0 < g_INT_01d17ab4) {
        do {
          if ((g_INT_01d17fb8 == (pSVar2->base).y_min) && (pSVar2 != pSVar1)) goto LAB_004f81ed;
          iVar5 = iVar5 + 1;
          pSVar2 = pSVar2 + 1;
        } while (iVar5 < g_INT_01d17ab4);
      }
      pSVar2 = (SSoftwareEdge *)0x0;
LAB_004f81ed:
      if (pSVar2 != (SSoftwareEdge *)0x0) {
        local_14 = g_INT_01d17fb8;
        do {
          if ((pSVar1->base).y_max <= local_14) {
            (pSVar1->base).y_min = -1;
            iVar5 = 0;
            pSVar1 = &g_SSoftwareEdge_01d17ab8;
            if (0 < g_INT_01d17ab4) {
              do {
                if ((local_14 == (pSVar1->base).y_min) && (pSVar1 != pSVar2)) goto LAB_004f8232;
                iVar5 = iVar5 + 1;
                pSVar1 = pSVar1 + 1;
              } while (iVar5 < g_INT_01d17ab4);
            }
            pSVar1 = (SSoftwareEdge *)0x0;
LAB_004f8232:
            if (pSVar1 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          if ((pSVar2->base).y_max <= local_14) {
            (pSVar2->base).y_min = -1;
            iVar5 = 0;
            pSVar2 = &g_SSoftwareEdge_01d17ab8;
            if (0 < g_INT_01d17ab4) {
              do {
                if ((local_14 == (pSVar2->base).y_min) && (pSVar2 != pSVar1)) goto LAB_004f826f;
                iVar5 = iVar5 + 1;
                pSVar2 = pSVar2 + 1;
              } while (iVar5 < g_INT_01d17ab4);
            }
            pSVar2 = (SSoftwareEdge *)0x0;
LAB_004f826f:
            if (pSVar2 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          iVar5 = (pSVar1->base).x_current;
          iVar4 = (pSVar2->base).x_current;
          iVar3 = iVar5;
          if (iVar4 < iVar5) {
            iVar3 = iVar4;
            iVar4 = iVar5;
          }
          iVar3 = iVar3 >> 0x10;
          puVar6 = (uint *)(g_ARRAY_PTR_01c2a38c[local_14] + iVar3 * 4);
          for (; iVar3 < iVar4 >> 0x10; iVar3 = iVar3 + 1) {
            *puVar6 = 0x80000000;
            puVar6 = puVar6 + 1;
          }
          (pSVar1->base).x_current = (pSVar1->base).x_current + (pSVar1->base).x_gradient;
          local_14 = local_14 + 1;
          (pSVar2->base).x_current = (pSVar2->base).x_current + (pSVar2->base).x_gradient;
        } while( true );
      }
    }
  }
  return;
}
