// Name: engine_mini3d.cpp_addBatchTriangle_FUN_004f6870
// Address: 004f6870
// Address Range: [[004f6870, 004f6960]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_addBatchTriangle_FUN_004f6870(float *v0,float *v1,float *v2)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_addBatchTriangle_FUN_004f6870(float *v0,float *v1,float *v2)

{
  short sVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  byte bVar5;
  
  bVar5 = 0;
  if ((v2[5] - v1[5]) * (v1[6] - v0[6]) < (v1[5] - v0[5]) * (v2[6] - v1[6])) {
    if ((9999 < g_INT_01d0d2e8 + g_INT_01d0d2ec + 3) || (9999 < g_INT_01d0d2f0 + 3)) {
      engine_mini3d_cpp_flushTriangleBatch_FUN_004f6970();
    }
    pfVar2 = g_FLOAT_PTR_01d09b7c + (g_INT_01d0d2e8 + g_INT_01d0d2ec) * 0x10;
    pfVar4 = pfVar2;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = *v0;
      v0 = v0 + (uint)bVar5 * -2 + 1;
      pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    }
    pfVar4 = pfVar2 + 0x10;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = *v1;
      v1 = v1 + (uint)bVar5 * -2 + 1;
      pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    }
    sVar1 = (short)g_INT_01d0d2ec;
    pfVar4 = pfVar2 + 0x20;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = *v2;
      v2 = v2 + (uint)bVar5 * -2 + 1;
      pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    }
    g_SHORT_ARRAY_01d0d2f6[g_INT_01d0d2f0] = sVar1 + 1;
    g_INT_01d0d2f0 = g_INT_01d0d2f0 + 3;
    *(short *)((int)&g_INT_01d0d2f0 + g_INT_01d0d2f0 * 2 + 2) = sVar1 + 2;
    g_INT_01d0d2ec = g_INT_01d0d2ec + 3;
    *(short *)((int)&g_INT_01d0d2ec + g_INT_01d0d2f0 * 2 + 2) = sVar1;
  }
  return;
}
