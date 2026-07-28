// Name: core_terrain.cpp_CTerrain_process_FUN_00549410
// Address: 00549410
// Address Range: [[00549410, 0054943d]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_process_FUN_00549410(CTerrain *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_terrain_cpp_CTerrain_process_FUN_00549410(CTerrain *this_ptr)

{
  int iVar1;
  
  iVar1 = this_ptr->animation_counter +
          ((uint)((longlong)_DAT_01bd1d80 * 0x6270) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01bd1d80 * 0x6270) >> 0x20) << 0x10);
  this_ptr->animation_counter = iVar1;
  if (iVar1 < 0x8000001) {
    return;
  }
  this_ptr->animation_counter = iVar1 + -0x8000000;
  return;
}
