// Name: core_ground.cpp_CGround_getVertexIndex_FUN_004e7670
// Address: 004e7670
// Address Range: [[004e7670, 004e768c]]
// Convention: __cdecl
// Signature: int __cdecl core_ground_cpp_CGround_getVertexIndex_FUN_004e7670(CGround *this_ptr,int column,int row)

#include "nocturne.h"

int __cdecl core_ground_cpp_CGround_getVertexIndex_FUN_004e7670(CGround *this_ptr,int column,int row)

{
  return (this_ptr->grid_height * 2 + 2) * row + 0x20 + column;
}
