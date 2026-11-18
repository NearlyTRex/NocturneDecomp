// Name: engine_mini3d.cpp_buildLightMatrix_FUN_004f5900
// Address: 004f5900
// Address Range: [[004f5900, 004f5c47]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_buildLightMatrix_FUN_004f5900(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_buildLightMatrix_FUN_004f5900(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (g_PTR_01d0991c != (byte *)0x0) {
    g_FLOAT_01d12118 =
         *(float *)(g_PTR_01d09918 + 8) * g_FLOAT_01d098a4 +
         *(float *)g_PTR_01d09918 * g_FLOAT_01d0988c +
         *(float *)(g_PTR_01d09918 + 4) * g_FLOAT_01d09898;
    g_FLOAT_01d1211c =
         *(float *)(g_PTR_01d09918 + 8) * g_FLOAT_01d098a8 +
         *(float *)g_PTR_01d09918 * g_FLOAT_01d09890 +
         *(float *)(g_PTR_01d09918 + 4) * g_FLOAT_01d0989c;
    g_FLOAT_01d12120 =
         *(float *)(g_PTR_01d09918 + 8) * g_FLOAT_01d098ac +
         *(float *)g_PTR_01d09918 * g_FLOAT_01d09894 +
         *(float *)(g_PTR_01d09918 + 4) * g_FLOAT_01d098a0;
    g_FLOAT_01d12128 =
         *(float *)(g_PTR_01d09918 + 0x14) * g_FLOAT_01d098a4 +
         *(float *)(g_PTR_01d09918 + 0x10) * g_FLOAT_01d09898 +
         *(float *)(g_PTR_01d09918 + 0xc) * g_FLOAT_01d0988c;
    g_FLOAT_01d1212c =
         *(float *)(g_PTR_01d09918 + 0x14) * g_FLOAT_01d098a8 +
         *(float *)(g_PTR_01d09918 + 0x10) * g_FLOAT_01d0989c +
         *(float *)(g_PTR_01d09918 + 0xc) * g_FLOAT_01d09890;
    g_INT_01d12124 = 0;
    g_FLOAT_01d12130 =
         *(float *)(g_PTR_01d09918 + 0x14) * g_FLOAT_01d098ac +
         *(float *)(g_PTR_01d09918 + 0x10) * g_FLOAT_01d098a0 +
         *(float *)(g_PTR_01d09918 + 0xc) * g_FLOAT_01d09894;
    fVar2 = -*(float *)(g_PTR_01d09918 + 0x24);
    g_INT_01d12134 = 0;
    g_INT_01d12144 = 0;
    g_FLOAT_01d12138 =
         *(float *)(g_PTR_01d09918 + 0x20) * g_FLOAT_01d098a4 +
         *(float *)(g_PTR_01d09918 + 0x1c) * g_FLOAT_01d09898 +
         *(float *)(g_PTR_01d09918 + 0x18) * g_FLOAT_01d0988c;
    g_FLOAT_01d1213c =
         *(float *)(g_PTR_01d09918 + 0x20) * g_FLOAT_01d098a8 +
         *(float *)(g_PTR_01d09918 + 0x1c) * g_FLOAT_01d0989c +
         *(float *)(g_PTR_01d09918 + 0x18) * g_FLOAT_01d09890;
    fVar1 = (fVar2 * *(float *)g_PTR_01d09918 -
            *(float *)(g_PTR_01d09918 + 0x28) * *(float *)(g_PTR_01d09918 + 0xc)) -
            *(float *)(g_PTR_01d09918 + 0x2c) * *(float *)(g_PTR_01d09918 + 0x18);
    g_FLOAT_01d12140 =
         *(float *)(g_PTR_01d09918 + 0x20) * g_FLOAT_01d098ac +
         *(float *)(g_PTR_01d09918 + 0x1c) * g_FLOAT_01d098a0 +
         *(float *)(g_PTR_01d09918 + 0x18) * g_FLOAT_01d09894;
    fVar3 = (fVar2 * *(float *)(g_PTR_01d09918 + 4) -
            *(float *)(g_PTR_01d09918 + 0x28) * *(float *)(g_PTR_01d09918 + 0x10)) -
            *(float *)(g_PTR_01d09918 + 0x2c) * *(float *)(g_PTR_01d09918 + 0x1c);
    fVar2 = (fVar2 * *(float *)(g_PTR_01d09918 + 8) -
            *(float *)(g_PTR_01d09918 + 0x28) * *(float *)(g_PTR_01d09918 + 0x14)) -
            *(float *)(g_PTR_01d09918 + 0x2c) * *(float *)(g_PTR_01d09918 + 0x20);
    g_INT_01d12154 = 0x3f800000;
    g_FLOAT_01d12148 =
         g_FLOAT_01d098b0 +
         fVar2 * g_FLOAT_01d098a4 + fVar3 * g_FLOAT_01d09898 + fVar1 * g_FLOAT_01d0988c;
    g_FLOAT_01d1214c =
         g_FLOAT_01d098b4 +
         fVar2 * g_FLOAT_01d098a8 + fVar3 * g_FLOAT_01d0989c + fVar1 * g_FLOAT_01d09890;
    g_FLOAT_01d12150 =
         g_FLOAT_01d098b8 +
         fVar2 * g_FLOAT_01d098ac + fVar3 * g_FLOAT_01d098a0 + fVar1 * g_FLOAT_01d09894;
    return;
  }
  g_FLOAT_01d1211c = (float)g_PTR_01d0991c;
  g_FLOAT_01d12120 = (float)g_PTR_01d0991c;
  g_INT_01d12124 = (int)g_PTR_01d0991c;
  g_FLOAT_01d12128 = (float)g_PTR_01d0991c;
  g_FLOAT_01d12130 = (float)g_PTR_01d0991c;
  g_INT_01d12134 = (int)g_PTR_01d0991c;
  g_FLOAT_01d12138 = (float)g_PTR_01d0991c;
  g_FLOAT_01d1213c = (float)g_PTR_01d0991c;
  g_INT_01d12144 = (int)g_PTR_01d0991c;
  g_FLOAT_01d12118 = 1.0;
  g_FLOAT_01d1212c = 1.0;
  g_FLOAT_01d12140 = 1.0;
  g_INT_01d12154 = 0x3f800000;
  g_FLOAT_01d12148 = g_FLOAT_01d098b0 - *(float *)(g_PTR_01d09918 + 0x24);
  g_FLOAT_01d1214c = g_FLOAT_01d098b4 - *(float *)(g_PTR_01d09918 + 0x28);
  g_FLOAT_01d12150 = g_FLOAT_01d098b8 - *(float *)(g_PTR_01d09918 + 0x2c);
  return;
}
