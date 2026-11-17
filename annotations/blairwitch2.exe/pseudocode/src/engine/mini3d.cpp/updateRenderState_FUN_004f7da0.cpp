// Name: engine_mini3d.cpp_updateRenderState_FUN_004f7da0
// Address: 004f7da0
// Address Range: [[004f7da0, 004f7df0]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_updateRenderState_FUN_004f7da0(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_updateRenderState_FUN_004f7da0(void)

{
  g_BIT_INTEGER32_01c38b54.dword = g_INT_01d09858 | 0x205;
  g_INT_01c38b58 = 0;
  if (g_INT_01d09868 != 0) {
    g_BIT_INTEGER32_01c38b54.dword = g_INT_01d09858 | 0x20d;
  }
  if (g_INT_01d09864 == 0) {
    g_INT_01c38b4c = g_INT_01d0985c;
    return;
  }
  g_BIT_INTEGER32_01c38b54.dword = g_BIT_INTEGER32_01c38b54.dword | 0x122;
  g_INT_01c38b4c = g_INT_01d0985c;
  return;
}
