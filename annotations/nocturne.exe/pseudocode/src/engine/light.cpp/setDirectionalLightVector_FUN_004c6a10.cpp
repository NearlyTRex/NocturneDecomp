// Name: engine_light.cpp_setDirectionalLightVector_FUN_004c6a10
// Address: 004c6a10
// Address Range: [[004c6a10, 004c6a3e]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004c6a10(int dir_x,int dir_y,int dir_z)

#include "nocturne.h"

void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004c6a10(int dir_x,int dir_y,int dir_z)

{
  g_INT_01c039dc = dir_x;
  g_INT_01cc3668 = dir_y;
  g_INT_01c039e0 = dir_y;
  g_INT_01cc366c = dir_z;
  g_INT_01c039e4 = dir_z;
  g_INT_01cc3664 = dir_x;
  return;
}
