// Name: engine_light.cpp_setLightingMultipliers_FUN_00505510
// Address: 00505510
// Address Range: [[00505510, 00505522]]
// Convention: __cdecl
// Signature: void engine_light.cpp_setLightingMultipliers_FUN_00505510(int diffuse_multiplier, int specular_multiplier)

#include "nocturne.h"

void __cdecl
engine_light_cpp_setLightingMultipliers_FUN_00505510(int diffuse_multiplier,int specular_multiplier)

{
  g_DiffuseLightMultiplier = diffuse_multiplier;
  g_SpecularLightMultiplier = specular_multiplier;
  return;
}
