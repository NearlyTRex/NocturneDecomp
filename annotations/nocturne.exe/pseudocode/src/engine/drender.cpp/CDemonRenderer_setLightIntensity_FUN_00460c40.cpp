// Name: engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_00460c40
// Address: 00460c40
// Address Range: [[00460c40, 00460c64]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_00460c40(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_00460c40(uint param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)round((float10)param_2 * (float10)_DAT_0057dc5d);
  engine_light_cpp_setAmbientLightLevel_FUN_004c69d0((int)ROUND(fVar1));
  return;
}
