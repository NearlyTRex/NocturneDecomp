// Name: engine_light.cpp_setAmbientLightLevel_FUN_004ffa50
// Address: 004ffa50
// Address Range: [[004ffa50, 004ffa71]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_setAmbientLightLevel_FUN_004ffa50(int light_level)

#include "nocturne.h"

void __cdecl engine_light_cpp_setAmbientLightLevel_FUN_004ffa50(int light_level)

{
  if (-1 < light_level) {
    if (0xffff < light_level) {
      light_level = 0xffff;
    }
    DAT_0061f310 = light_level;
    return;
  }
  DAT_0061f310 = 0;
  return;
}
