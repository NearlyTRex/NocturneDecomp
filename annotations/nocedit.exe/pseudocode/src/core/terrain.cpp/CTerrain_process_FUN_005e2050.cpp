// Name: core_terrain.cpp_CTerrain_process_FUN_005e2050
// Address: 005e2050
// Address Range: [[005e2050, 005e207d]]
// Convention: __cdecl
// Signature: void core_terrain.cpp_CTerrain_process_FUN_005e2050(CTerrain * this_ptr)

#include "nocturne.h"

void __cdecl core_terrain_cpp_CTerrain_process_FUN_005e2050(CTerrain *this_ptr)

{
  int iVar1;
  
  iVar1 = this_ptr->animation_counter +
          ((uint)((longlong)g_GlobalDeltaTimeInt * 0x6270) >> 0x10 |
          (int)((ulonglong)((longlong)g_GlobalDeltaTimeInt * 0x6270) >> 0x20) << 0x10);
  this_ptr->animation_counter = iVar1;
  if (iVar1 < 0x8000001) {
    return;
  }
  this_ptr->animation_counter = iVar1 + -0x8000000;
  return;
}
