// Name: core_terrain.cpp_CTerrain_init_FUN_005492b0
// Address: 005492b0
// Address Range: [[005492b0, 005492ea]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_init_FUN_005492b0(CTerrain *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_terrain_cpp_CTerrain_init_FUN_005492b0(CTerrain *this_ptr)

{
  int this_ptr_00;
  
  this_ptr_00 = INT_005ba8ec;
  this_ptr->animation_counter = 0;
  core_ground_cpp_CGround_init_FUN_004b13d0((CGround *)this_ptr_00);
  core_ground_cpp_CGround_load_FUN_004b14d0((CGround *)INT_005ba8ec,"junk.jnk");
  _DAT_02dd10cc = 1;
  return;
}
