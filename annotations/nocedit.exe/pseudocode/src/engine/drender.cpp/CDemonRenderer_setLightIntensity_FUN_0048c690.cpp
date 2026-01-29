// Name: engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0048c690
// Address: 0048c690
// Address Range: [[0048c690, 0048c6b4]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_0048c690 (CDemonRenderer *this_ptr,float intensity)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_0048c690
          (CDemonRenderer *this_ptr,float intensity)

{
  double dVar1;
  
  dVar1 = round((double)(intensity * (float)65536));
  engine_light_cpp_setAmbientLightLevel_FUN_00505490((int)ROUND(dVar1));
  return;
}
