// Name: engine_mini3d.cpp_updateTransform_FUN_004f3740
// Address: 004f3740
// Address Range: [[004f3740, 004f38b7]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_updateTransform_FUN_004f3740(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_updateTransform_FUN_004f3740(void)

{
  float fVar1;
  
  if (g_INT_01d0c398 != 0) {
    g_FLOAT_01d167ac = *(float *)g_PTR_01d09918 * g_FLOAT_01d098d4;
    g_FLOAT_01d167b0 = *(float *)(g_PTR_01d09918 + 4) * g_FLOAT_01d098d8;
    g_FLOAT_01d167bc = *(float *)(g_PTR_01d09918 + 0xc) * g_FLOAT_01d098d4;
    g_FLOAT_01d167c0 = *(float *)(g_PTR_01d09918 + 0x10) * g_FLOAT_01d098d8;
    g_FLOAT_01d167cc = *(float *)(g_PTR_01d09918 + 0x18) * g_FLOAT_01d098d4;
    g_FLOAT_01d167d0 = *(float *)(g_PTR_01d09918 + 0x1c) * g_FLOAT_01d098d8;
    g_FLOAT_01d167b4 = *(float *)(g_PTR_01d09918 + 8);
    fVar1 = -*(float *)(g_PTR_01d09918 + 0x24);
    g_FLOAT_01d167c4 = *(float *)(g_PTR_01d09918 + 0x14);
    g_FLOAT_01d167d4 = *(float *)(g_PTR_01d09918 + 0x20);
    _DAT_01d167b8 = 0;
    _DAT_01d167c8 = 0;
    _DAT_01d167d8 = 0;
    g_FLOAT_01d167dc =
         (fVar1 * g_FLOAT_01d167ac - *(float *)(g_PTR_01d09918 + 0x28) * g_FLOAT_01d167bc) -
         *(float *)(g_PTR_01d09918 + 0x2c) * g_FLOAT_01d167cc;
    _DAT_01d167e8 = 0x3f800000;
    g_FLOAT_01d167e0 =
         (fVar1 * g_FLOAT_01d167b0 - *(float *)(g_PTR_01d09918 + 0x28) * g_FLOAT_01d167c0) -
         *(float *)(g_PTR_01d09918 + 0x2c) * g_FLOAT_01d167d0;
    g_FLOAT_01d167e4 =
         (fVar1 * g_FLOAT_01d167b4 - *(float *)(g_PTR_01d09918 + 0x28) * g_FLOAT_01d167c4) -
         *(float *)(g_PTR_01d09918 + 0x2c) * g_FLOAT_01d167d4;
    if ((g_PTR_0264bc84 != (byte *)0x0) && (g_INT_01c37788 != 0)) {
      (*(code *)g_PTR_0264bc84)(&g_FLOAT_01d167ac,g_FLOAT_01d098cc,g_FLOAT_01d098d0);
      g_INT_01d0c398 = 0;
      return;
    }
    g_INT_01d0c398 = 0;
  }
  return;
}
