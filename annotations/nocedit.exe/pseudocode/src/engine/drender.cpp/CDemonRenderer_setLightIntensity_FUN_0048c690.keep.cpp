// Name: engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0048c690
// Address: 0048c690
// MANUAL RECONSTRUCTION
// Address Range: [[0048c690, 0048c6b4]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_0048c690(CDemonRenderer *this_ptr,float intensity)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_0048c690(CDemonRenderer *this_ptr,float intensity)

{
  engine_light_cpp_setAmbientLightLevel_FUN_00505490
            ((int)ROUND(ROUND(intensity * (float)65536)));
  return;
}
