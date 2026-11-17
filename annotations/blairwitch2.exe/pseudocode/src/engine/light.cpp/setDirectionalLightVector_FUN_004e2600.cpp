// Name: engine_light.cpp_setDirectionalLightVector_FUN_004e2600
// Address: 004e2600
// Address Range: [[004e2600, 004e262e]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004e2600(int dir_x,int dir_y,int dir_z)

#include "nocturne.h"

void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004e2600(int dir_x,int dir_y,int dir_z)

{
  g_INT_01c38b90 = dir_x;
  g_INT_01d03508 = dir_y;
  g_INT_01c38b94 = dir_y;
  g_INT_01d0350c = dir_z;
  g_INT_01c38b98 = dir_z;
  g_INT_01d03504 = dir_x;
  return;
}
