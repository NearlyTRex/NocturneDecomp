// Name: engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0046b4f0
// Address: 0046b4f0
// Address Range: [[0046b4f0, 0046b514]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_0046b4f0(CDemonRenderer *this_ptr,float intensity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_0046b4f0(CDemonRenderer *this_ptr,float intensity)

{
  double dVar1;
  
  dVar1 = round((double)(intensity * (float)_DAT_005d15bb));
  engine_light_cpp_setAmbientLightLevel_FUN_004e25c0((int)ROUND(dVar1));
  return;
}
