// Name: engine_mini3d.cpp_allocVertexList_FUN_004f38c0
// Address: 004f38c0
// Address Range: [[004f38c0, 004f3919]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_allocVertexList_FUN_004f38c0(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_allocVertexList_FUN_004f38c0(void)

{
  if (g_INT_01d09b78 != 0) {
    return;
  }
  g_INT_01d09b78 = (int)malloc(0x9c440);
  if ((void *)g_INT_01d09b78 == (void *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\mini3d.cpp";
    g_INT_01d046a4 = 0x692;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CMini3D::allocVertexList - Out of memory!");
  }
  g_FLOAT_PTR_01d09b7c = (float *)(g_INT_01d09b78 + 0x3fU & 0xffffffc0);
  g_FLOAT_PTR_01d09b80 = g_FLOAT_PTR_01d09b7c;
  return;
}
