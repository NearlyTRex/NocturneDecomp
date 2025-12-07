// Name: engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0048c690
// Address: 0048c690
// Address Range: [[0048c690, 0048c6b4]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0048c690(CDemonRenderer * this_ptr, float intensity)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_0048c690
          (CDemonRenderer *this_ptr,float intensity)

{
  double dVar1;
  
  dVar1 = crt_math_c_round_FUN_005fe6b0((double)(intensity * (float)65536));
  engine_light_cpp_setAmbientLightLevel_FUN_00505490((int)ROUND(dVar1));
  return;
}
