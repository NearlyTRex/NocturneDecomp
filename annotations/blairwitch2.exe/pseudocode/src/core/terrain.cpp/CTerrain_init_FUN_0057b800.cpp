// Name: core_terrain.cpp_CTerrain_init_FUN_0057b800
// Address: 0057b800
// Address Range: [[0057b800, 0057b83a]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_init_FUN_0057b800(CTerrain *this_ptr)

#include "nocturne.h"

void __cdecl core_terrain_cpp_CTerrain_init_FUN_0057b800(CTerrain *this_ptr)

{
  CGround *this_ptr_00;
  
  this_ptr_00 = g_CGroundPtr;
  this_ptr->animation_counter = 0;
  core_ground_cpp_CGround_init_FUN_004ca9c0(this_ptr_00);
  core_ground_cpp_CGround_load_FUN_004caac0(g_CGroundPtr,"junk.jnk");
  g_CTerrain_0265364c.initialized = 1;
  return;
}
