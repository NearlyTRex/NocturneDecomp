// Name: engine_mini3d.cpp_updateRenderState_FUN_00516c60
// Address: 00516c60
// Address Range: [[00516c60, 00516cb0]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_updateRenderState_FUN_00516c60(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_updateRenderState_FUN_00516c60(void)

{
  g_BIT_INTEGER32_01c51d14.dword = g_INT_01d224b8 | 0x205;
  g_INT_01c51d18 = 0;
  if (g_INT_01d224c8 != 0) {
    g_BIT_INTEGER32_01c51d14.dword = g_INT_01d224b8 | 0x20d;
  }
  if (g_INT_01d224c4 == 0) {
    g_INT_01c51d0c = g_INT_01d224bc;
    return;
  }
  g_BIT_INTEGER32_01c51d14.dword = g_BIT_INTEGER32_01c51d14.dword | 0x122;
  g_INT_01c51d0c = g_INT_01d224bc;
  return;
}
