// Name: engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_004839f0
// Address: 004839f0
// Address Range: [[004839f0, 00483a14]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_004839f0(CDemonRenderer *this_ptr,float intensity)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_004839f0(CDemonRenderer *this_ptr,float intensity)

{
  double dVar1;
  
  dVar1 = round((double)(intensity * (float)65536));
  engine_light_cpp_setAmbientLightLevel_FUN_004ffa50((int)ROUND(dVar1));
  return;
}
