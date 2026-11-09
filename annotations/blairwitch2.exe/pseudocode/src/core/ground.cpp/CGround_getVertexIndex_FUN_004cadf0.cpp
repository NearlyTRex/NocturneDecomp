// Name: core_ground.cpp_CGround_getVertexIndex_FUN_004cadf0
// Address: 004cadf0
// Address Range: [[004cadf0, 004cae0c]]
// Convention: __cdecl
// Signature: int __cdecl core_ground_cpp_CGround_getVertexIndex_FUN_004cadf0(CGround *this_ptr,int column,int row)

#include "nocturne.h"

int __cdecl core_ground_cpp_CGround_getVertexIndex_FUN_004cadf0(CGround *this_ptr,int column,int row)

{
  return (*(int *)&this_ptr->field_0x14 * 2 + 2) * row + 0x20 + column;
}
