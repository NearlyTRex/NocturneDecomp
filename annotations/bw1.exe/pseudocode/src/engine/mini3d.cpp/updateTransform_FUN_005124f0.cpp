// Name: engine_mini3d.cpp_updateTransform_FUN_005124f0
// Address: 005124f0
// Address Range: [[005124f0, 00512667]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_updateTransform_FUN_005124f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_updateTransform_FUN_005124f0(void)

{
  float fVar1;
  
  if (g_INT_01d24ffc != 0) {
    g_FLOAT_01d2adbc = *(float *)g_PTR_01d2257c * g_FLOAT_01d22534;
    g_FLOAT_01d2adc0 = *(float *)(g_PTR_01d2257c + 4) * g_FLOAT_01d22538;
    g_FLOAT_01d2adcc = *(float *)(g_PTR_01d2257c + 0xc) * g_FLOAT_01d22534;
    g_FLOAT_01d2add0 = *(float *)(g_PTR_01d2257c + 0x10) * g_FLOAT_01d22538;
    g_FLOAT_01d2addc = *(float *)(g_PTR_01d2257c + 0x18) * g_FLOAT_01d22534;
    g_FLOAT_01d2ade0 = *(float *)(g_PTR_01d2257c + 0x1c) * g_FLOAT_01d22538;
    g_FLOAT_01d2adc4 = *(float *)(g_PTR_01d2257c + 8);
    fVar1 = -*(float *)(g_PTR_01d2257c + 0x24);
    g_FLOAT_01d2add4 = *(float *)(g_PTR_01d2257c + 0x14);
    g_FLOAT_01d2ade4 = *(float *)(g_PTR_01d2257c + 0x20);
    _DAT_01d2adc8 = 0;
    _DAT_01d2add8 = 0;
    _DAT_01d2ade8 = 0;
    g_FLOAT_01d2adec =
         (fVar1 * g_FLOAT_01d2adbc - *(float *)(g_PTR_01d2257c + 0x28) * g_FLOAT_01d2adcc) -
         *(float *)(g_PTR_01d2257c + 0x2c) * g_FLOAT_01d2addc;
    _DAT_01d2adf8 = 0x3f800000;
    g_FLOAT_01d2adf0 =
         (fVar1 * g_FLOAT_01d2adc0 - *(float *)(g_PTR_01d2257c + 0x28) * g_FLOAT_01d2add0) -
         *(float *)(g_PTR_01d2257c + 0x2c) * g_FLOAT_01d2ade0;
    g_FLOAT_01d2adf4 =
         (fVar1 * g_FLOAT_01d2adc4 - *(float *)(g_PTR_01d2257c + 0x28) * g_FLOAT_01d2add4) -
         *(float *)(g_PTR_01d2257c + 0x2c) * g_FLOAT_01d2ade4;
    if ((g_PTR_02c83454 != (byte *)0x0) && (g_INT_01c50948 != 0)) {
      (*(code *)g_PTR_02c83454)(&g_FLOAT_01d2adbc,g_FLOAT_01d2252c,g_FLOAT_01d22530);
      g_INT_01d24ffc = 0;
      return;
    }
    g_INT_01d24ffc = 0;
  }
  return;
}
