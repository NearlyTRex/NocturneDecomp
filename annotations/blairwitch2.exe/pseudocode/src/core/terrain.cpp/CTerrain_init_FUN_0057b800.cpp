// Name: core_terrain.cpp_CTerrain_init_FUN_0057b800
// Address: 0057b800
// Address Range: [[0057b800, 0057b83a]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_init_FUN_0057b800(CTerrain *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_terrain_cpp_CTerrain_init_FUN_0057b800(CTerrain *this_ptr)

{
  CGround *this_ptr_00;
  
  this_ptr_00 = g_CGroundPtr;
  *(uint *)this_ptr = 0;
  core_ground_cpp_CGround_init_FUN_004ca9c0(this_ptr_00);
  core_ground_cpp_CGround_load_FUN_004caac0(g_CGroundPtr,"junk.jnk");
  _DAT_02653650 = 1;
  return;
}
