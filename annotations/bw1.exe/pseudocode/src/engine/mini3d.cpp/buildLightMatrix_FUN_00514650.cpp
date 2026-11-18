// Name: engine_mini3d.cpp_buildLightMatrix_FUN_00514650
// Address: 00514650
// Address Range: [[00514650, 00514997]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_buildLightMatrix_FUN_00514650(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_buildLightMatrix_FUN_00514650(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (g_PTR_01d22580 != (byte *)0x0) {
    g_FLOAT_01d2ad78 =
         *(float *)(g_PTR_01d2257c + 8) * g_FLOAT_01d22504 +
         *(float *)g_PTR_01d2257c * g_FLOAT_01d224ec +
         *(float *)(g_PTR_01d2257c + 4) * g_FLOAT_01d224f8;
    g_FLOAT_01d2ad7c =
         *(float *)(g_PTR_01d2257c + 8) * g_FLOAT_01d22508 +
         *(float *)g_PTR_01d2257c * g_FLOAT_01d224f0 +
         *(float *)(g_PTR_01d2257c + 4) * g_FLOAT_01d224fc;
    g_FLOAT_01d2ad80 =
         *(float *)(g_PTR_01d2257c + 8) * g_FLOAT_01d2250c +
         *(float *)g_PTR_01d2257c * g_FLOAT_01d224f4 +
         *(float *)(g_PTR_01d2257c + 4) * g_FLOAT_01d22500;
    g_FLOAT_01d2ad88 =
         *(float *)(g_PTR_01d2257c + 0x14) * g_FLOAT_01d22504 +
         *(float *)(g_PTR_01d2257c + 0x10) * g_FLOAT_01d224f8 +
         *(float *)(g_PTR_01d2257c + 0xc) * g_FLOAT_01d224ec;
    g_FLOAT_01d2ad8c =
         *(float *)(g_PTR_01d2257c + 0x14) * g_FLOAT_01d22508 +
         *(float *)(g_PTR_01d2257c + 0x10) * g_FLOAT_01d224fc +
         *(float *)(g_PTR_01d2257c + 0xc) * g_FLOAT_01d224f0;
    g_INT_01d2ad84 = 0;
    g_FLOAT_01d2ad90 =
         *(float *)(g_PTR_01d2257c + 0x14) * g_FLOAT_01d2250c +
         *(float *)(g_PTR_01d2257c + 0x10) * g_FLOAT_01d22500 +
         *(float *)(g_PTR_01d2257c + 0xc) * g_FLOAT_01d224f4;
    fVar2 = -*(float *)(g_PTR_01d2257c + 0x24);
    g_INT_01d2ad94 = 0;
    g_INT_01d2ada4 = 0;
    g_FLOAT_01d2ad98 =
         *(float *)(g_PTR_01d2257c + 0x20) * g_FLOAT_01d22504 +
         *(float *)(g_PTR_01d2257c + 0x1c) * g_FLOAT_01d224f8 +
         *(float *)(g_PTR_01d2257c + 0x18) * g_FLOAT_01d224ec;
    g_FLOAT_01d2ad9c =
         *(float *)(g_PTR_01d2257c + 0x20) * g_FLOAT_01d22508 +
         *(float *)(g_PTR_01d2257c + 0x1c) * g_FLOAT_01d224fc +
         *(float *)(g_PTR_01d2257c + 0x18) * g_FLOAT_01d224f0;
    fVar1 = (fVar2 * *(float *)g_PTR_01d2257c -
            *(float *)(g_PTR_01d2257c + 0x28) * *(float *)(g_PTR_01d2257c + 0xc)) -
            *(float *)(g_PTR_01d2257c + 0x2c) * *(float *)(g_PTR_01d2257c + 0x18);
    g_FLOAT_01d2ada0 =
         *(float *)(g_PTR_01d2257c + 0x20) * g_FLOAT_01d2250c +
         *(float *)(g_PTR_01d2257c + 0x1c) * g_FLOAT_01d22500 +
         *(float *)(g_PTR_01d2257c + 0x18) * g_FLOAT_01d224f4;
    fVar3 = (fVar2 * *(float *)(g_PTR_01d2257c + 4) -
            *(float *)(g_PTR_01d2257c + 0x28) * *(float *)(g_PTR_01d2257c + 0x10)) -
            *(float *)(g_PTR_01d2257c + 0x2c) * *(float *)(g_PTR_01d2257c + 0x1c);
    fVar2 = (fVar2 * *(float *)(g_PTR_01d2257c + 8) -
            *(float *)(g_PTR_01d2257c + 0x28) * *(float *)(g_PTR_01d2257c + 0x14)) -
            *(float *)(g_PTR_01d2257c + 0x2c) * *(float *)(g_PTR_01d2257c + 0x20);
    g_INT_01d2adb4 = 0x3f800000;
    g_FLOAT_01d2ada8 =
         g_FLOAT_01d22510 +
         fVar2 * g_FLOAT_01d22504 + fVar3 * g_FLOAT_01d224f8 + fVar1 * g_FLOAT_01d224ec;
    g_FLOAT_01d2adac =
         g_FLOAT_01d22514 +
         fVar2 * g_FLOAT_01d22508 + fVar3 * g_FLOAT_01d224fc + fVar1 * g_FLOAT_01d224f0;
    g_FLOAT_01d2adb0 =
         g_FLOAT_01d22518 +
         fVar2 * g_FLOAT_01d2250c + fVar3 * g_FLOAT_01d22500 + fVar1 * g_FLOAT_01d224f4;
    return;
  }
  g_FLOAT_01d2ad7c = (float)g_PTR_01d22580;
  g_FLOAT_01d2ad80 = (float)g_PTR_01d22580;
  g_INT_01d2ad84 = (int)g_PTR_01d22580;
  g_FLOAT_01d2ad88 = (float)g_PTR_01d22580;
  g_FLOAT_01d2ad90 = (float)g_PTR_01d22580;
  g_INT_01d2ad94 = (int)g_PTR_01d22580;
  g_FLOAT_01d2ad98 = (float)g_PTR_01d22580;
  g_FLOAT_01d2ad9c = (float)g_PTR_01d22580;
  g_INT_01d2ada4 = (int)g_PTR_01d22580;
  g_FLOAT_01d2ad78 = 1.0;
  g_FLOAT_01d2ad8c = 1.0;
  g_FLOAT_01d2ada0 = 1.0;
  g_INT_01d2adb4 = 0x3f800000;
  g_FLOAT_01d2ada8 = g_FLOAT_01d22510 - *(float *)(g_PTR_01d2257c + 0x24);
  g_FLOAT_01d2adac = g_FLOAT_01d22514 - *(float *)(g_PTR_01d2257c + 0x28);
  g_FLOAT_01d2adb0 = g_FLOAT_01d22518 - *(float *)(g_PTR_01d2257c + 0x2c);
  return;
}
