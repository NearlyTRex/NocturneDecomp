// Name: engine_light.cpp_setAmbientLightLevel_FUN_00505490
// Address: 00505490
// Address Range: [[00505490, 005054b1]]
// Convention: __cdecl
// Signature: void engine_light.cpp_setAmbientLightLevel_FUN_00505490(int light_level)

#include "nocturne.h"

void __cdecl engine_light_cpp_setAmbientLightLevel_FUN_00505490(int light_level)

{
  if (-1 < light_level) {
    if (0xffff < light_level) {
      light_level = 0xffff;
    }
    g_AmbientLightLevel = light_level;
    return;
  }
  g_AmbientLightLevel = 0;
  return;
}
