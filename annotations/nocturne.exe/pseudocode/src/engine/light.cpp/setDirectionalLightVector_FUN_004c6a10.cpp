// Name: engine_light.cpp_setDirectionalLightVector_FUN_004c6a10
// Address: 004c6a10
// Address Range: [[004c6a10, 004c6a3e]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004c6a10(int dir_x,int dir_y,int dir_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004c6a10(int dir_x,int dir_y,int dir_z)

{
  _DAT_01c039dc = dir_x;
  _DAT_01cc3668 = dir_y;
  _DAT_01c039e0 = dir_y;
  _DAT_01cc366c = dir_z;
  _DAT_01c039e4 = dir_z;
  _DAT_01cc3664 = dir_x;
  return;
}
