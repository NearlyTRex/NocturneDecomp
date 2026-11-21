// Name: engine_mini3d.cpp_allocVertexBuffer_FUN_004f5f10
// Address: 004f5f10
// Address Range: [[004f5f10, 004f5f6f]]
// Convention: __cdecl
// Signature: void * __cdecl engine_mini3d_cpp_allocVertexBuffer_FUN_004f5f10(int vertex_count)

#include "nocturne.h"

void * __cdecl engine_mini3d_cpp_allocVertexBuffer_FUN_004f5f10(int vertex_count)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = malloc(vertex_count * 0x20 + 0x20);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)((int)pvVar1 + 0x20U & 0xffffffe0);
    *(char *)((int)pvVar2 + -1) = (char)pvVar2 - (char)pvVar1;
    return pvVar2;
  }
  g_CurrentFilename = "..\\engine\\mini3d.cpp";
  g_CurrentLineNumber = 3570;
  core_main_c_displayErrorAndQuit_FUN_004e4500("CMini3D::allocVertexBuffer - Allocation of %d vertex failed");
  uRam0000001f = 0x20;
  return (void *)0x20;
}
