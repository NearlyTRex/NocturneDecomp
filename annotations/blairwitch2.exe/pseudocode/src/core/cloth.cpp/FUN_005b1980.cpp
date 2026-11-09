// Name: core_cloth.cpp_FUN_005b1980
// Address: 005b1980
// Address Range: [[005b1980, 005b19af]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_005b1980(CCloth *this_ptr,int vertex_index)

#include "nocturne.h"

void __cdecl core_cloth_cpp_FUN_005b1980(CCloth *this_ptr,int vertex_index)

{
  *(uint *)(this_ptr + vertex_index * 0x11c + 0x470) = 0xffffffff;
  *(uint *)(this_ptr + vertex_index * 0x11c + 0x40c) = 0;
  return;
}
