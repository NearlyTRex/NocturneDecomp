// Name: engine_light.cpp_setAmbientLightLevel_FUN_004e25c0
// Address: 004e25c0
// Address Range: [[004e25c0, 004e25e1]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_setAmbientLightLevel_FUN_004e25c0(int light_level)

#include "nocturne.h"

void __cdecl engine_light_cpp_setAmbientLightLevel_FUN_004e25c0(int light_level)

{
  if (-1 < light_level) {
    if (0xffff < light_level) {
      light_level = 0xffff;
    }
    DAT_00617e40 = light_level;
    return;
  }
  DAT_00617e40 = 0;
  return;
}
