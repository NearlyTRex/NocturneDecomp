// Name: engine_light.cpp_setAmbientLightLevel_FUN_004e0b10
// Address: 004e0b10
// Address Range: [[004e0b10, 004e0b31]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_setAmbientLightLevel_FUN_004e0b10(int light_level)

#include "nocturne.h"

void __cdecl engine_light_cpp_setAmbientLightLevel_FUN_004e0b10(int light_level)

{
  if (-1 < light_level) {
    if (0xffff < light_level) {
      light_level = 0xffff;
    }
    DAT_006002c4 = light_level;
    return;
  }
  DAT_006002c4 = 0;
  return;
}
