// Name: engine_light.cpp_setAmbientLightLevel_FUN_004c69d0
// Address: 004c69d0
// Address Range: [[004c69d0, 004c69f1]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_setAmbientLightLevel_FUN_004c69d0(int light_level)

#include "nocturne.h"

void __cdecl engine_light_cpp_setAmbientLightLevel_FUN_004c69d0(int light_level)

{
  if (-1 < light_level) {
    if (0xffff < light_level) {
      light_level = 0xffff;
    }
    DAT_005bacd0 = light_level;
    return;
  }
  DAT_005bacd0 = 0;
  return;
}
