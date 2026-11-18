// Name: engine_mini3d.cpp_allocVertexList_FUN_00512670
// Address: 00512670
// Address Range: [[00512670, 005126c9]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_allocVertexList_FUN_00512670(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_allocVertexList_FUN_00512670(void)

{
  if (g_INT_01d227dc != 0) {
    return;
  }
  g_INT_01d227dc = (int)malloc(0x9c440);
  if ((void *)g_INT_01d227dc == (void *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\mini3d.cpp";
    g_INT_01d1d404 = 0x67d;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CMini3D::allocVertexList - Out of memory!");
  }
  g_FLOAT_PTR_01d227e0 = (float *)(g_INT_01d227dc + 0x3fU & 0xffffffc0);
  g_FLOAT_PTR_01d227e4 = g_FLOAT_PTR_01d227e0;
  return;
}
