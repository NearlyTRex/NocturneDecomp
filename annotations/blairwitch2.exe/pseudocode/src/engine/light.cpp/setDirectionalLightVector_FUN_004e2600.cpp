// Name: engine_light.cpp_setDirectionalLightVector_FUN_004e2600
// Address: 004e2600
// Address Range: [[004e2600, 004e262e]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004e2600(int dir_x,int dir_y,int dir_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004e2600(int dir_x,int dir_y,int dir_z)

{
  _DAT_01c38b90 = dir_x;
  _DAT_01d03508 = dir_y;
  _DAT_01c38b94 = dir_y;
  _DAT_01d0350c = dir_z;
  _DAT_01c38b98 = dir_z;
  _DAT_01d03504 = dir_x;
  return;
}
