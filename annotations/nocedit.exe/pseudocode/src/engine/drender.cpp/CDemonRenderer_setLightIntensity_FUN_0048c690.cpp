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
  uint in_EAX;
  uint in_EDX;
  float10 fVar1;
  
  fVar1 = (float10)intensity * (float10)65536;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,in_EAX));
  engine_light_cpp_setAmbientLightLevel_FUN_00505490((int)ROUND(fVar1));
  return;
}
