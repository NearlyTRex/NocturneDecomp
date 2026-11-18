// Name: engine_mini3d.cpp_setupScanEdge_FUN_004f13a0
// Address: 004f13a0
// Address Range: [[004f13a0, 004f17c5]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setupScanEdge_FUN_004f13a0(float *v0,float *v1)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setupScanEdge_FUN_004f13a0(float *v0,float *v1)

{
  int iVar1;
  float fVar2;
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
  iVar1 = (pSVar5->base).y_min;
  if (iVar1 != (&g_SSoftwareEdge_01d80848)[iVar3].base.y_max) {
    if (iVar1 < g_INT_01d80d48) {
      g_INT_01d80d48 = iVar1;
    }
    iVar1 = (&g_SSoftwareEdge_01d80848)[iVar3].base.y_max;
    if (g_INT_01d80d4c < iVar1) {
      g_INT_01d80d4c = iVar1;
    }
    if ((int)(v1[6] - v0[6]) < 0x3f800000) {
      local_18 = 0.0;
    }
    else {
      local_18 = 1.0 / (v1[6] - v0[6]);
    }
    fVar2 = ((float)(pSVar5->base).y_min + (1.0 - v0[6])) * local_18;
    (&g_SSoftwareEdge_01d80848)[iVar3].base.x_gradient =
         (int)ROUND(65536.0f * (v1[5] - v0[5]) * local_18 - 0.5f);
    (&g_SSoftwareEdge_01d80848)[iVar3].base.x_current =
         (int)ROUND(65536.0f * ((v1[5] - v0[5]) * fVar2 + v0[5]) - 0.5f);
    (&g_SSoftwareEdge_01d80848)[iVar3].base.u_gradient =
         (int)ROUND(16777220.0f * (v1[7] - v0[7]) * local_18 - 0.5f);
    (&g_SSoftwareEdge_01d80848)[iVar3].base.u_current =
         (int)ROUND(16777220.0f * ((v1[7] - v0[7]) * fVar2 + v0[7]) - 0.5f);
    (&g_SSoftwareEdge_01d80848)[iVar3].base.v_gradient =
         (int)ROUND(16777220.0f * (v1[8] - v0[8]) * local_18 - 0.5f);
    (&g_SSoftwareEdge_01d80848)[iVar3].base.v_current =
         (int)ROUND(16777220.0f * ((v1[8] - v0[8]) * fVar2 + v0[8]) - 0.5f);
    (&g_SSoftwareEdge_01d80848)[iVar3].base.red_gradient =
         (int)ROUND(65535.0f * (v1[0xb] - v0[0xb]) * local_18 - 0.5f);
    (&g_SSoftwareEdge_01d80848)[iVar3].base.red_current =
         (int)ROUND(65535.0f * ((v1[0xb] - v0[0xb]) * fVar2 + v0[0xb]) - 0.5f);
    (&g_SSoftwareEdge_01d80848)[iVar3].base.alpha_gradient =
         (int)ROUND(65535.0f * (v1[0xd] - v0[0xd]) * local_18 - 0.5f);
    (&g_SSoftwareEdge_01d80848)[iVar3].base.alpha_current =
         (int)ROUND(65535.0f * ((v1[0xd] - v0[0xd]) * fVar2 + v0[0xd]) - 0.5f);
    *(int *)&(&g_SSoftwareEdge_01d80848)[iVar3].field_0x4c =
         (int)ROUND(65535.0f * (v1[0xc] - v0[0xc]) * local_18 - 0.5f);
    *(int *)&(&g_SSoftwareEdge_01d80848)[iVar3].field_0x48 =
         (int)ROUND(65535.0f * ((v1[0xc] - v0[0xc]) * fVar2 + v0[0xc]) - 0.5f);
    (&g_SSoftwareEdge_01d80848)[iVar3].base.depth_gradient =
         (int)ROUND(2.147484e+09f * (v1[3] - v0[3]) * local_18 - 0.5f);
    (&g_SSoftwareEdge_01d80848)[iVar3].base.depth_current =
         (int)ROUND(2.147484e+09f * ((v1[3] - v0[3]) * fVar2 + v0[3]) - 0.5f);
    (&g_SSoftwareEdge_01d80848)[iVar3].green_gradient =
         (int)ROUND(65535.0f * (v1[10] - v0[10]) * local_18 - 0.5f);
    (&g_SSoftwareEdge_01d80848)[iVar3].green_current =
         (int)ROUND(65535.0f * ((v1[10] - v0[10]) * fVar2 + v0[10]) - 0.5f);
    (&g_SSoftwareEdge_01d80848)[iVar3].blue_gradient =
         (int)ROUND(65535.0f * (v1[9] - v0[9]) * local_18 - 0.5f);
    (&g_SSoftwareEdge_01d80848)[iVar3].blue_current =
         (int)ROUND(65535.0f * ((v1[9] - v0[9]) * fVar2 + v0[9]) - 0.5f);
    g_INT_01d80844 = g_INT_01d80844 + 1;
  }
  return;
}
