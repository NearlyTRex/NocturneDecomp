// Name: engine_light.cpp_setDirectionalLightVector_FUN_004e0b50
// Address: 004e0b50
// Address Range: [[004e0b50, 004e0b7e]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004e0b50(int dir_x,int dir_y,int dir_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004e0b50(int dir_x,int dir_y,int dir_z)

{
  _DAT_01c6e2f0 = dir_x;
  _DAT_01d70c3c = dir_y;
  _DAT_01c6e2f4 = dir_y;
  _DAT_01d70c40 = dir_z;
  _DAT_01c6e2f8 = dir_z;
  _DAT_01d70c38 = dir_x;
  return;
}
