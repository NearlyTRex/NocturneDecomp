// Name: engine_light.cpp_setAmbientLightLevel_FUN_004c69d0
// Address: 004c69d0
// Address Range: [[004c69d0, 004c69f1]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_setAmbientLightLevel_FUN_004c69d0(int param_1)

#include "nocturne.h"

void __cdecl engine_light_cpp_setAmbientLightLevel_FUN_004c69d0(int param_1)

{
  if (-1 < param_1) {
    if (0xffff < param_1) {
      param_1 = 0xffff;
    }
    DAT_005bacd0 = param_1;
    return;
  }
  DAT_005bacd0 = 0;
  return;
}
