// Name: core_cloth.cpp_FUN_004421a0
// Address: 004421a0
// Address Range: [[004421a0, 004421cf]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_004421a0(CCloth *this_ptr,int vertex_index)

#include "nocturne.h"

void __cdecl core_cloth_cpp_FUN_004421a0(CCloth *this_ptr,int vertex_index)

{
  *(uint *)(this_ptr + vertex_index * 0x11c + 0x470) = 0xffffffff;
  *(uint *)(this_ptr + vertex_index * 0x11c + 0x40c) = 0;
  return;
}
