// Name: engine_light.cpp_setDirectionalLightVector_FUN_004e0b50
// Address: 004e0b50
// Address Range: [[004e0b50, 004e0b7e]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004e0b50(int dir_x,int dir_y,int dir_z)

#include "nocturne.h"

void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004e0b50(int dir_x,int dir_y,int dir_z)

{
  g_INT_01c6e2f0 = dir_x;
  g_INT_01d70c3c = dir_y;
  g_INT_01c6e2f4 = dir_y;
  g_INT_01d70c40 = dir_z;
  g_INT_01c6e2f8 = dir_z;
  g_INT_01d70c38 = dir_x;
  return;
}
