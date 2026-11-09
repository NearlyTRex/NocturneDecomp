// Name: core_terrain.cpp_CTerrain_process_FUN_005724e0
// Address: 005724e0
// Address Range: [[005724e0, 0057250d]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_process_FUN_005724e0(CTerrain *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_terrain_cpp_CTerrain_process_FUN_005724e0(CTerrain *this_ptr)

{
  int iVar1;
  
  iVar1 = *(int *)this_ptr +
          ((uint)((longlong)_DAT_01c5fad0 * 0x6270) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c5fad0 * 0x6270) >> 0x20) << 0x10);
  *(int *)this_ptr = iVar1;
  if (iVar1 < 0x8000001) {
    return;
  }
  *(int *)this_ptr = iVar1 + -0x8000000;
  return;
}
