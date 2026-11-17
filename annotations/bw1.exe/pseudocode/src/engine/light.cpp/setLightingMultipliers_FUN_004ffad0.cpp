// Name: engine_light.cpp_setLightingMultipliers_FUN_004ffad0
// Address: 004ffad0
// Address Range: [[004ffad0, 004ffae2]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_setLightingMultipliers_FUN_004ffad0(int diffuse_multiplier,int specular_multiplier)

#include "nocturne.h"

void __cdecl engine_light_cpp_setLightingMultipliers_FUN_004ffad0(int diffuse_multiplier,int specular_multiplier)

{
  g_DiffuseLightMultiplier = diffuse_multiplier;
  g_SpecularLightMultiplier = specular_multiplier;
  return;
}
