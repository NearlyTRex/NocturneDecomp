// Name: engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0046b4f0
// Address: 0046b4f0
// Address Range: [[0046b4f0, 0046b514]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_0046b4f0(CDemonRenderer *this_ptr,float intensity)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_0046b4f0(CDemonRenderer *this_ptr,float intensity)

{
  double dVar1;
  
  dVar1 = round((double)(intensity * (float)65536));
  engine_light_cpp_setAmbientLightLevel_FUN_004e25c0((int)ROUND(dVar1));
  return;
}
