// Name: core_ground.cpp_CGround_getVertexIndex_FUN_004ef380
// Address: 004ef380
// Address Range: [[004ef380, 004ef39c]]
// Convention: __cdecl
// Signature: int core_ground.cpp_CGround_getVertexIndex_FUN_004ef380(CGround * this_ptr, int column, int row)

#include "nocturne.h"

int __cdecl
core_ground_cpp_CGround_getVertexIndex_FUN_004ef380(CGround *this_ptr,int column,int row)

{
  return (this_ptr->grid_height * 2 + 2) * row + 0x20 + column;
}
