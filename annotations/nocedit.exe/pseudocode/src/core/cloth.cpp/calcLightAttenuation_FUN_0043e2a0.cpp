// Name: core_cloth.cpp_calcLightAttenuation_FUN_0043e2a0
// Address: 0043e2a0
// Address Range: [[0043e2a0, 0043e2b0]]
// Convention: __cdecl
// Signature: int __cdecl core_cloth_cpp_calcLightAttenuation_FUN_0043e2a0(float dist_sq)

#include "nocturne.h"

int __cdecl core_cloth_cpp_calcLightAttenuation_FUN_0043e2a0(float dist_sq)

{
  return g_LightAttenuationMax - ((int)dist_sq >> 1);
}
