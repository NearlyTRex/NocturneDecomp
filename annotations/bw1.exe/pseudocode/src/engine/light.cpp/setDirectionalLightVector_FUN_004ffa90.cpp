// Name: engine_light.cpp_setDirectionalLightVector_FUN_004ffa90
// Address: 004ffa90
// Address Range: [[004ffa90, 004ffabe]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004ffa90(int dir_x,int dir_y,int dir_z)

#include "nocturne.h"

void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004ffa90(int dir_x,int dir_y,int dir_z)

{
  g_INT_01c51d50 = dir_x;
  g_INT_01d1c224 = dir_y;
  g_INT_01c51d54 = dir_y;
  g_INT_01d1c228 = dir_z;
  g_INT_01c51d58 = dir_z;
  g_INT_01d1c220 = dir_x;
  return;
}
