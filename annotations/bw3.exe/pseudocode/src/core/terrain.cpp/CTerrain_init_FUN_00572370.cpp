// Name: core_terrain.cpp_CTerrain_init_FUN_00572370
// Address: 00572370
// Address Range: [[00572370, 005723aa]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_init_FUN_00572370(CTerrain *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_terrain_cpp_CTerrain_init_FUN_00572370(CTerrain *this_ptr)

{
  CGround *this_ptr_00;
  
  this_ptr_00 = g_CGroundPtr;
  *(uint *)this_ptr = 0;
  core_ground_cpp_CGround_init_FUN_004cfbd0(this_ptr_00);
  core_ground_cpp_CGround_load_FUN_004cfcd0(g_CGroundPtr,"junk.jnk");
  _DAT_02cfd8bc = 1;
  return;
}
