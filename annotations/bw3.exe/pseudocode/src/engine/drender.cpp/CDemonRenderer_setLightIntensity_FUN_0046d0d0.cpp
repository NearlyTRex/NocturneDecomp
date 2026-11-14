// Name: engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0046d0d0
// Address: 0046d0d0
// Address Range: [[0046d0d0, 0046d0f4]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_0046d0d0(CDemonRenderer *this_ptr,float intensity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_0046d0d0(CDemonRenderer *this_ptr,float intensity)

{
  float10 fVar1;
  
  fVar1 = (float10)intensity * (float10)_DAT_005bc54b;
  round();
  engine_light_cpp_setAmbientLightLevel_FUN_004e0b10((int)ROUND(fVar1));
  return;
}
