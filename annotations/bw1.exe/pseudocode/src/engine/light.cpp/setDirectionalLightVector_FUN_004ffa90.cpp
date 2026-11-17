// Name: engine_light.cpp_setDirectionalLightVector_FUN_004ffa90
// Address: 004ffa90
// Address Range: [[004ffa90, 004ffabe]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004ffa90(int dir_x,int dir_y,int dir_z)

#include "nocturne.h"

void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004ffa90(int dir_x,int dir_y,int dir_z)

{
  g_LightDirectionX = dir_x;
  g_LightDirectionY2 = dir_y;
  g_LightDirectionY = dir_y;
  g_LightDirectionZ2 = dir_z;
  g_LightDirectionZ = dir_z;
  g_LightDirectionX2 = dir_x;
  return;
}
