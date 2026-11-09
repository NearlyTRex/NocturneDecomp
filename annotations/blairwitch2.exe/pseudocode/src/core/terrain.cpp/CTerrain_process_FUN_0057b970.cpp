// Name: core_terrain.cpp_CTerrain_process_FUN_0057b970
// Address: 0057b970
// Address Range: [[0057b970, 0057b99d]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_process_FUN_0057b970(CTerrain *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_terrain_cpp_CTerrain_process_FUN_0057b970(CTerrain *this_ptr)

{
  int iVar1;
  
  iVar1 = *(int *)this_ptr +
          ((uint)((longlong)_DAT_01c2a370 * 0x6270) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c2a370 * 0x6270) >> 0x20) << 0x10);
  *(int *)this_ptr = iVar1;
  if (iVar1 < 0x8000001) {
    return;
  }
  *(int *)this_ptr = iVar1 + -0x8000000;
  return;
}
