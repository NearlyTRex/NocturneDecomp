// Name: core_terrain.cpp_CTerrain_process_FUN_005724e0
// Address: 005724e0
// Address Range: [[005724e0, 0057250d]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_process_FUN_005724e0(CTerrain *this_ptr)

#include "nocturne.h"

void __cdecl core_terrain_cpp_CTerrain_process_FUN_005724e0(CTerrain *this_ptr)

{
  int iVar1;
  
  iVar1 = this_ptr->animation_counter +
          ((uint)((longlong)g_INT_01c5fad0 * 0x6270) >> 0x10 |
          (int)((ulonglong)((longlong)g_INT_01c5fad0 * 0x6270) >> 0x20) << 0x10);
  this_ptr->animation_counter = iVar1;
  if (iVar1 < 0x8000001) {
    return;
  }
  this_ptr->animation_counter = iVar1 + -0x8000000;
  return;
}
