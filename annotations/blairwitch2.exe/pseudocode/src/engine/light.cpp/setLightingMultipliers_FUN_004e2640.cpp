// Name: engine_light.cpp_setLightingMultipliers_FUN_004e2640
// Address: 004e2640
// Address Range: [[004e2640, 004e2652]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_setLightingMultipliers_FUN_004e2640(int diffuse_multiplier,int specular_multiplier)

#include "nocturne.h"

void __cdecl engine_light_cpp_setLightingMultipliers_FUN_004e2640(int diffuse_multiplier,int specular_multiplier)

{
  DAT_00617e48 = diffuse_multiplier;
  DAT_00617e4c = specular_multiplier;
  return;
}
