// Name: core_ground.cpp_CGround_getVertexIndex_FUN_004d0000
// Address: 004d0000
// Address Range: [[004d0000, 004d001c]]
// Convention: __cdecl
// Signature: int __cdecl core_ground_cpp_CGround_getVertexIndex_FUN_004d0000(CGround *this_ptr,int column,int row)

#include "nocturne.h"

int __cdecl core_ground_cpp_CGround_getVertexIndex_FUN_004d0000(CGround *this_ptr,int column,int row)

{
  return (*(int *)&this_ptr->field_0x14 * 2 + 2) * row + 0x20 + column;
}
