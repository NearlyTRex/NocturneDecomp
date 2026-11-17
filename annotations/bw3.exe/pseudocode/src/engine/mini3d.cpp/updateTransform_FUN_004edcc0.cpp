// Name: engine_mini3d.cpp_updateTransform_FUN_004edcc0
// Address: 004edcc0
// Address Range: [[004edcc0, 004ede37]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_updateTransform_FUN_004edcc0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_updateTransform_FUN_004edcc0(void)

{
  float fVar1;
  
  if (g_INT_01d7977c != 0) {
    g_FLOAT_01d7f53c = *(float *)g_PTR_01d76cfc * g_FLOAT_01d76cb4;
    g_FLOAT_01d7f540 = *(float *)(g_PTR_01d76cfc + 4) * g_FLOAT_01d76cb8;
    g_FLOAT_01d7f54c = *(float *)(g_PTR_01d76cfc + 0xc) * g_FLOAT_01d76cb4;
    g_FLOAT_01d7f550 = *(float *)(g_PTR_01d76cfc + 0x10) * g_FLOAT_01d76cb8;
    g_FLOAT_01d7f55c = *(float *)(g_PTR_01d76cfc + 0x18) * g_FLOAT_01d76cb4;
    g_FLOAT_01d7f560 = *(float *)(g_PTR_01d76cfc + 0x1c) * g_FLOAT_01d76cb8;
    g_FLOAT_01d7f544 = *(float *)(g_PTR_01d76cfc + 8);
    fVar1 = -*(float *)(g_PTR_01d76cfc + 0x24);
    g_FLOAT_01d7f554 = *(float *)(g_PTR_01d76cfc + 0x14);
    g_FLOAT_01d7f564 = *(float *)(g_PTR_01d76cfc + 0x20);
    _DAT_01d7f548 = 0;
    _DAT_01d7f558 = 0;
    _DAT_01d7f568 = 0;
    g_FLOAT_01d7f56c =
         (fVar1 * g_FLOAT_01d7f53c - *(float *)(g_PTR_01d76cfc + 0x28) * g_FLOAT_01d7f54c) -
         *(float *)(g_PTR_01d76cfc + 0x2c) * g_FLOAT_01d7f55c;
    _DAT_01d7f578 = 0x3f800000;
    g_FLOAT_01d7f570 =
         (fVar1 * g_FLOAT_01d7f540 - *(float *)(g_PTR_01d76cfc + 0x28) * g_FLOAT_01d7f550) -
         *(float *)(g_PTR_01d76cfc + 0x2c) * g_FLOAT_01d7f560;
    g_FLOAT_01d7f574 =
         (fVar1 * g_FLOAT_01d7f544 - *(float *)(g_PTR_01d76cfc + 0x28) * g_FLOAT_01d7f554) -
         *(float *)(g_PTR_01d76cfc + 0x2c) * g_FLOAT_01d7f564;
    if ((g_APIDLL_setTransform != (byte *)0x0) && (g_INT_01c6cee8 != 0)) {
      (*(code *)g_APIDLL_setTransform)(&g_FLOAT_01d7f53c,g_FLOAT_01d76cac,g_FLOAT_01d76cb0);
      g_INT_01d7977c = 0;
      return;
    }
    g_INT_01d7977c = 0;
  }
  return;
}
