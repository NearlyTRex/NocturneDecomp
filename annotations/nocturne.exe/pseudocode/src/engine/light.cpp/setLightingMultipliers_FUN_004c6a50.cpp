// Name: engine_light.cpp_setLightingMultipliers_FUN_004c6a50
// Address: 004c6a50
// Address Range: [[004c6a50, 004c6a62]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_setLightingMultipliers_FUN_004c6a50(int diffuse_multiplier,int specular_multiplier)

#include "nocturne.h"

void __cdecl engine_light_cpp_setLightingMultipliers_FUN_004c6a50(int diffuse_multiplier,int specular_multiplier)

{
  DAT_005bacd8 = diffuse_multiplier;
  DAT_005bacdc = specular_multiplier;
  return;
}
