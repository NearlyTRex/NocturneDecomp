// Name: engine_mini3d.cpp_disableClipping_FUN_004f5d90
// Address: 004f5d90
// Address Range: [[004f5d90, 004f5db6]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_disableClipping_FUN_004f5d90(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_disableClipping_FUN_004f5d90(void)

{
  g_INT_01d0c39c = 0;
  if ((g_APIDLL_getTextureHandle != (byte *)0x0) && (g_INT_01c37788 != 0)) {
    (*(code *)g_APIDLL_getTextureHandle)(0);
    return;
  }
  return;
}
