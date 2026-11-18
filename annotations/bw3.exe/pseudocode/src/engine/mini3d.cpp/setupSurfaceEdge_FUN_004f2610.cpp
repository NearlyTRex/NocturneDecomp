// Name: engine_mini3d.cpp_setupSurfaceEdge_FUN_004f2610
// Address: 004f2610
// Address Range: [[004f2610, 004f274e]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setupSurfaceEdge_FUN_004f2610(float *v0,float *v1)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setupSurfaceEdge_FUN_004f2610(float *v0,float *v1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  SSoftwareEdge *pSVar5;
  float local_18;
  
  pfVar4 = v1;
  iVar3 = g_INT_01d80844;
  pSVar5 = &g_SSoftwareEdge_01d80848 + g_INT_01d80844;
  if (v1[6] < v0[6]) {
    v1 = v0;
    v0 = pfVar4;
  }
  (pSVar5->base).y_min = (int)ROUND(v0[6] - 0.5f);
  (&g_SSoftwareEdge_01d80848)[iVar3].base.y_max = (int)ROUND(v1[6] - 0.5f);
  iVar2 = (pSVar5->base).y_min;
  if (iVar2 != (&g_SSoftwareEdge_01d80848)[iVar3].base.y_max) {
    if (iVar2 < g_INT_01d80d48) {
      g_INT_01d80d48 = iVar2;
    }
    iVar2 = (&g_SSoftwareEdge_01d80848)[iVar3].base.y_max;
    if (g_INT_01d80d4c < iVar2) {
      g_INT_01d80d4c = iVar2;
    }
    if ((int)(v1[6] - v0[6]) < 0x3f800000) {
      local_18 = 0.0;
    }
    else {
      local_18 = 1.0 / (v1[6] - v0[6]);
    }
    fVar1 = v0[6];
    iVar2 = (pSVar5->base).y_min;
    (&g_SSoftwareEdge_01d80848)[iVar3].base.x_gradient =
         (int)ROUND(65536.0f * (v1[5] - v0[5]) * local_18 - 0.5f);
    (&g_SSoftwareEdge_01d80848)[iVar3].base.x_current =
         (int)ROUND(65536.0f *
                    ((v1[5] - v0[5]) * ((float)iVar2 + (1.0 - fVar1)) * local_18 + v0[5]) -
                    0.5f);
    g_INT_01d80844 = g_INT_01d80844 + 1;
  }
  return;
}
