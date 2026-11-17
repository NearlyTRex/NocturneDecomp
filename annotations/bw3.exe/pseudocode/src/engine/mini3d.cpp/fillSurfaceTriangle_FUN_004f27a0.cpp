// Name: engine_mini3d.cpp_fillSurfaceTriangle_FUN_004f27a0
// Address: 004f27a0
// Address Range: [[004f27a0, 004f2a0f]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_fillSurfaceTriangle_FUN_004f27a0(float *v0,float *v1,float *v2)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_fillSurfaceTriangle_FUN_004f27a0(float *v0,float *v1,float *v2)

{
  float fVar1;
  float fVar2;
  SSoftwareEdge *pSVar3;
  SSoftwareEdge *pSVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int local_20;
  
  fVar1 = (v1[6] - v0[6]) * (v2[5] - v1[5]);
  fVar2 = (v1[5] - v0[5]) * (v2[6] - v1[6]);
  if (g_INT_01d76cf8 == 0) {
    if (fVar2 <= fVar1) {
      return;
    }
  }
  else if (fVar1 <= fVar2) {
    return;
  }
  g_INT_01d80d48 = 0x4b0;
  g_INT_01d80d4c = 0;
  g_INT_01d80844 = 0;
  engine_mini3d_cpp_setupSurfaceEdge_FUN_004f2610(v0,v1);
  engine_mini3d_cpp_setupSurfaceEdge_FUN_004f2610(v1,v2);
  engine_mini3d_cpp_setupSurfaceEdge_FUN_004f2610(v2,v0);
  pSVar3 = &g_SSoftwareEdge_01d80848;
  iVar7 = 0;
  if (0 < g_INT_01d80844) {
    do {
      if ((g_INT_01d80d48 == (pSVar3->base).y_min) && (pSVar3 != (SSoftwareEdge *)0x0))
      goto LAB_004f2882;
      iVar7 = iVar7 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar7 < g_INT_01d80844);
  }
  pSVar3 = (SSoftwareEdge *)0x0;
LAB_004f2882:
  if (pSVar3 != (SSoftwareEdge *)0x0) {
    iVar7 = 0;
    pSVar4 = &g_SSoftwareEdge_01d80848;
    if (0 < g_INT_01d80844) {
      do {
        if ((g_INT_01d80d48 == (pSVar4->base).y_min) && (pSVar4 != pSVar3)) goto LAB_004f28b3;
        iVar7 = iVar7 + 1;
        pSVar4 = pSVar4 + 1;
      } while (iVar7 < g_INT_01d80844);
    }
    pSVar4 = (SSoftwareEdge *)0x0;
LAB_004f28b3:
    if (pSVar4 != (SSoftwareEdge *)0x0) {
      local_20 = g_INT_01d80d48;
      do {
        if ((pSVar3->base).y_max <= local_20) {
          (pSVar3->base).y_min = -1;
          iVar7 = 0;
          pSVar3 = &g_SSoftwareEdge_01d80848;
          if (0 < g_INT_01d80844) {
            do {
              if ((local_20 == (pSVar3->base).y_min) && (pSVar3 != pSVar4)) goto LAB_004f28f8;
              iVar7 = iVar7 + 1;
              pSVar3 = pSVar3 + 1;
            } while (iVar7 < g_INT_01d80844);
          }
          pSVar3 = (SSoftwareEdge *)0x0;
LAB_004f28f8:
          if (pSVar3 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((pSVar4->base).y_max <= local_20) {
          (pSVar4->base).y_min = -1;
          iVar7 = 0;
          pSVar4 = &g_SSoftwareEdge_01d80848;
          if (0 < g_INT_01d80844) {
            do {
              if ((local_20 == (pSVar4->base).y_min) && (pSVar4 != pSVar3)) goto LAB_004f2935;
              iVar7 = iVar7 + 1;
              pSVar4 = pSVar4 + 1;
            } while (iVar7 < g_INT_01d80844);
          }
          pSVar4 = (SSoftwareEdge *)0x0;
LAB_004f2935:
          if (pSVar4 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        iVar7 = (pSVar3->base).x_current;
        iVar6 = (pSVar4->base).x_current;
        iVar5 = iVar7;
        if (iVar6 < iVar7) {
          iVar5 = iVar6;
          iVar6 = iVar7;
        }
        iVar5 = iVar5 >> 0x10;
        puVar8 = (uint *)(g_ScreenBufferArray[local_20] + iVar5 * 4);
        for (; iVar5 < iVar6 >> 0x10; iVar5 = iVar5 + 1) {
          *puVar8 = 0x80000000;
          puVar8 = puVar8 + 1;
        }
        (pSVar3->base).x_current = (pSVar3->base).x_current + (pSVar3->base).x_gradient;
        local_20 = local_20 + 1;
        (pSVar4->base).x_current = (pSVar4->base).x_current + (pSVar4->base).x_gradient;
      } while( true );
    }
  }
  return;
}
