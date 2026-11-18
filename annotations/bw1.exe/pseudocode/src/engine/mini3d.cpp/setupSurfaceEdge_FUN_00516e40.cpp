// Name: engine_mini3d.cpp_setupSurfaceEdge_FUN_00516e40
// Address: 00516e40
// Address Range: [[00516e40, 00516f7e]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setupSurfaceEdge_FUN_00516e40(float *v0,float *v1)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setupSurfaceEdge_FUN_00516e40(float *v0,float *v1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  SSoftwareEdge *pSVar5;
  float local_18;
  
  pfVar4 = v1;
  iVar3 = g_INT_01d2c0c4;
  pSVar5 = &g_SSoftwareEdge_01d2c0c8 + g_INT_01d2c0c4;
  if (v1[6] < v0[6]) {
    v1 = v0;
    v0 = pfVar4;
  }
  (pSVar5->base).y_min = (int)ROUND(v0[6] - 0.5f);
  (&g_SSoftwareEdge_01d2c0c8)[iVar3].base.y_max = (int)ROUND(v1[6] - 0.5f);
  iVar2 = (pSVar5->base).y_min;
  if (iVar2 != (&g_SSoftwareEdge_01d2c0c8)[iVar3].base.y_max) {
    if (iVar2 < g_INT_01d2c5c8) {
      g_INT_01d2c5c8 = iVar2;
    }
    iVar2 = (&g_SSoftwareEdge_01d2c0c8)[iVar3].base.y_max;
    if (g_INT_01d2c5cc < iVar2) {
      g_INT_01d2c5cc = iVar2;
    }
    if ((int)(v1[6] - v0[6]) < 0x3f800000) {
      local_18 = 0.0;
    }
    else {
      local_18 = 1.0 / (v1[6] - v0[6]);
    }
    fVar1 = v0[6];
    iVar2 = (pSVar5->base).y_min;
    (&g_SSoftwareEdge_01d2c0c8)[iVar3].base.x_gradient =
         (int)ROUND(65536.0f * (v1[5] - v0[5]) * local_18 - 0.5f);
    (&g_SSoftwareEdge_01d2c0c8)[iVar3].base.x_current =
         (int)ROUND(65536.0f *
                    ((v1[5] - v0[5]) * ((float)iVar2 + (1.0 - fVar1)) * local_18 + v0[5]) -
                    0.5f);
    g_INT_01d2c0c4 = g_INT_01d2c0c4 + 1;
  }
  return;
}
