// Name: core_terrain.cpp_CTerrain_init_FUN_005492b0
// Address: 005492b0
// Address Range: [[005492b0, 005492ea]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_init_FUN_005492b0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_terrain_cpp_CTerrain_init_FUN_005492b0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0x01CADF80;
  *param_1 = 0;
  core_ground_cpp_CGround_init_FUN_004b13d0(uVar1);
  core_ground_cpp_CGround_load_FUN_004b14d0(0x01CADF80,"junk.jnk");
  _DAT_02dd10cc = 1;
  return;
}
