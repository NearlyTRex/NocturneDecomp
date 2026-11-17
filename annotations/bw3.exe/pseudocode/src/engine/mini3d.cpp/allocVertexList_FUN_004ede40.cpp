// Name: engine_mini3d.cpp_allocVertexList_FUN_004ede40
// Address: 004ede40
// Address Range: [[004ede40, 004ede99]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_allocVertexList_FUN_004ede40(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_allocVertexList_FUN_004ede40(void)

{
  if (g_INT_01d76f5c != 0) {
    return;
  }
  g_INT_01d76f5c = (int)malloc(0x9c440);
  if ((void *)g_INT_01d76f5c == (void *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\engine\\mini3d.cpp";
    g_INT_01d71de4 = 0x67d;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CMini3D::allocVertexList - Out of memory!");
  }
  g_FLOAT_PTR_01d76f60 = (float *)(g_INT_01d76f5c + 0x3fU & 0xffffffc0);
  g_FLOAT_PTR_01d76f64 = g_FLOAT_PTR_01d76f60;
  return;
}
