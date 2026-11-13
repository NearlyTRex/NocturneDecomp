// Name: engine_mini3d.cpp_allocVertexBuffer_FUN_004f0460
// Address: 004f0460
// Address Range: [[004f0460, 004f04bf]]
// Convention: __cdecl
// Signature: void * __cdecl engine_mini3d_cpp_allocVertexBuffer_FUN_004f0460(int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl engine_mini3d_cpp_allocVertexBuffer_FUN_004f0460(int vertex_count)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = malloc(vertex_count * 0x20 + 0x20);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)((int)pvVar1 + 0x20U & 0xffffffe0);
    *(char *)((int)pvVar2 + -1) = (char)pvVar2 - (char)pvVar1;
    return pvVar2;
  }
  _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
  _DAT_01d71de4 = 0xddf;
  core_main_c_FUN_004e4330("CMini3D::allocVertexBuffer - Allocation of %d vertex failed",vertex_count);
  uRam0000001f = 0x20;
  return (void *)0x20;
}
