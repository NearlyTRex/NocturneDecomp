// Name: engine_light.cpp_setDirectionalLightVector_FUN_005054d0
// Address: 005054d0
// Address Range: [[005054d0, 005054fe]]
// Convention: __cdecl
// Signature: void engine_light.cpp_setDirectionalLightVector_FUN_005054d0(int dir_x, int dir_y, int dir_z)

#include "nocturne.h"

void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_005054d0(int dir_x,int dir_y,int dir_z)

{
  g_LightDirectionX = dir_x;
  g_LightDirectionY2 = dir_y;
  g_LightDirectionY = dir_y;
  g_LightDirectionZ2 = dir_z;
  g_LightDirectionZ = dir_z;
  g_LightDirectionX2 = dir_x;
  return;
}
