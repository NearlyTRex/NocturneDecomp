// Name: shape_meshlod.cpp_getNextTriangleVertexIndex_FUN_0051eed0
// Address: 0051eed0
// Address Range: [[0051eed0, 0051eedc]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_getNextTriangleVertexIndex_FUN_0051eed0(int vertex_index)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_getNextTriangleVertexIndex_FUN_0051eed0(int vertex_index)

{
  int iVar1;
  
  iVar1 = vertex_index + 1;
  if (2 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}
