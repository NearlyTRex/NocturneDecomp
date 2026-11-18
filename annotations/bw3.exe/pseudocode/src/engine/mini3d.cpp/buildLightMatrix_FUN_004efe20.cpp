// Name: engine_mini3d.cpp_buildLightMatrix_FUN_004efe20
// Address: 004efe20
// Address Range: [[004efe20, 004f0167]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_buildLightMatrix_FUN_004efe20(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_buildLightMatrix_FUN_004efe20(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (g_PTR_01d76d00 != (byte *)0x0) {
    g_FLOAT_01d7f4f8 =
         *(float *)(g_PTR_01d76cfc + 8) * g_FLOAT_01d76c84 +
         *(float *)g_PTR_01d76cfc * g_FLOAT_01d76c6c +
         *(float *)(g_PTR_01d76cfc + 4) * g_FLOAT_01d76c78;
    g_FLOAT_01d7f4fc =
         *(float *)(g_PTR_01d76cfc + 8) * g_FLOAT_01d76c88 +
         *(float *)g_PTR_01d76cfc * g_FLOAT_01d76c70 +
         *(float *)(g_PTR_01d76cfc + 4) * g_FLOAT_01d76c7c;
    g_FLOAT_01d7f500 =
         *(float *)(g_PTR_01d76cfc + 8) * g_FLOAT_01d76c8c +
         *(float *)g_PTR_01d76cfc * g_FLOAT_01d76c74 +
         *(float *)(g_PTR_01d76cfc + 4) * g_FLOAT_01d76c80;
    g_FLOAT_01d7f508 =
         *(float *)(g_PTR_01d76cfc + 0x14) * g_FLOAT_01d76c84 +
         *(float *)(g_PTR_01d76cfc + 0x10) * g_FLOAT_01d76c78 +
         *(float *)(g_PTR_01d76cfc + 0xc) * g_FLOAT_01d76c6c;
    g_FLOAT_01d7f50c =
         *(float *)(g_PTR_01d76cfc + 0x14) * g_FLOAT_01d76c88 +
         *(float *)(g_PTR_01d76cfc + 0x10) * g_FLOAT_01d76c7c +
         *(float *)(g_PTR_01d76cfc + 0xc) * g_FLOAT_01d76c70;
    g_INT_01d7f504 = 0;
    g_FLOAT_01d7f510 =
         *(float *)(g_PTR_01d76cfc + 0x14) * g_FLOAT_01d76c8c +
         *(float *)(g_PTR_01d76cfc + 0x10) * g_FLOAT_01d76c80 +
         *(float *)(g_PTR_01d76cfc + 0xc) * g_FLOAT_01d76c74;
    fVar2 = -*(float *)(g_PTR_01d76cfc + 0x24);
    g_INT_01d7f514 = 0;
    g_INT_01d7f524 = 0;
    g_FLOAT_01d7f518 =
         *(float *)(g_PTR_01d76cfc + 0x20) * g_FLOAT_01d76c84 +
         *(float *)(g_PTR_01d76cfc + 0x1c) * g_FLOAT_01d76c78 +
         *(float *)(g_PTR_01d76cfc + 0x18) * g_FLOAT_01d76c6c;
    g_FLOAT_01d7f51c =
         *(float *)(g_PTR_01d76cfc + 0x20) * g_FLOAT_01d76c88 +
         *(float *)(g_PTR_01d76cfc + 0x1c) * g_FLOAT_01d76c7c +
         *(float *)(g_PTR_01d76cfc + 0x18) * g_FLOAT_01d76c70;
    fVar1 = (fVar2 * *(float *)g_PTR_01d76cfc -
            *(float *)(g_PTR_01d76cfc + 0x28) * *(float *)(g_PTR_01d76cfc + 0xc)) -
            *(float *)(g_PTR_01d76cfc + 0x2c) * *(float *)(g_PTR_01d76cfc + 0x18);
    g_FLOAT_01d7f520 =
         *(float *)(g_PTR_01d76cfc + 0x20) * g_FLOAT_01d76c8c +
         *(float *)(g_PTR_01d76cfc + 0x1c) * g_FLOAT_01d76c80 +
         *(float *)(g_PTR_01d76cfc + 0x18) * g_FLOAT_01d76c74;
    fVar3 = (fVar2 * *(float *)(g_PTR_01d76cfc + 4) -
            *(float *)(g_PTR_01d76cfc + 0x28) * *(float *)(g_PTR_01d76cfc + 0x10)) -
            *(float *)(g_PTR_01d76cfc + 0x2c) * *(float *)(g_PTR_01d76cfc + 0x1c);
    fVar2 = (fVar2 * *(float *)(g_PTR_01d76cfc + 8) -
            *(float *)(g_PTR_01d76cfc + 0x28) * *(float *)(g_PTR_01d76cfc + 0x14)) -
            *(float *)(g_PTR_01d76cfc + 0x2c) * *(float *)(g_PTR_01d76cfc + 0x20);
    g_INT_01d7f534 = 0x3f800000;
    g_FLOAT_01d7f528 =
         g_FLOAT_01d76c90 +
         fVar2 * g_FLOAT_01d76c84 + fVar3 * g_FLOAT_01d76c78 + fVar1 * g_FLOAT_01d76c6c;
    g_FLOAT_01d7f52c =
         g_FLOAT_01d76c94 +
         fVar2 * g_FLOAT_01d76c88 + fVar3 * g_FLOAT_01d76c7c + fVar1 * g_FLOAT_01d76c70;
    g_FLOAT_01d7f530 =
         g_FLOAT_01d76c98 +
         fVar2 * g_FLOAT_01d76c8c + fVar3 * g_FLOAT_01d76c80 + fVar1 * g_FLOAT_01d76c74;
    return;
  }
  g_FLOAT_01d7f4fc = (float)g_PTR_01d76d00;
  g_FLOAT_01d7f500 = (float)g_PTR_01d76d00;
  g_INT_01d7f504 = (int)g_PTR_01d76d00;
  g_FLOAT_01d7f508 = (float)g_PTR_01d76d00;
  g_FLOAT_01d7f510 = (float)g_PTR_01d76d00;
  g_INT_01d7f514 = (int)g_PTR_01d76d00;
  g_FLOAT_01d7f518 = (float)g_PTR_01d76d00;
  g_FLOAT_01d7f51c = (float)g_PTR_01d76d00;
  g_INT_01d7f524 = (int)g_PTR_01d76d00;
  g_FLOAT_01d7f4f8 = 1.0;
  g_FLOAT_01d7f50c = 1.0;
  g_FLOAT_01d7f520 = 1.0;
  g_INT_01d7f534 = 0x3f800000;
  g_FLOAT_01d7f528 = g_FLOAT_01d76c90 - *(float *)(g_PTR_01d76cfc + 0x24);
  g_FLOAT_01d7f52c = g_FLOAT_01d76c94 - *(float *)(g_PTR_01d76cfc + 0x28);
  g_FLOAT_01d7f530 = g_FLOAT_01d76c98 - *(float *)(g_PTR_01d76cfc + 0x2c);
  return;
}
