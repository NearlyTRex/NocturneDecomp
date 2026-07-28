// Name: engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_00460c40
// Address: 00460c40
// Address Range: [[00460c40, 00460c64]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_00460c40(CDemonRenderer *this_ptr,float intensity)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_00460c40(CDemonRenderer *this_ptr,float intensity)

{
  double dVar1;
  
  dVar1 = round((double)(intensity * (float)65536));
  engine_light_cpp_setAmbientLightLevel_FUN_004c69d0((int)ROUND(dVar1));
  return;
}
