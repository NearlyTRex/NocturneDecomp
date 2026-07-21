// Name: core_water.cpp_CWater_captureTextures_FUN_005507d0
// Address: 005507d0
// Address Range: [[005507d0, 005507f6]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_captureTextures_FUN_005507d0(void)

#include "nocturne.h"

void __cdecl core_water_cpp_CWater_captureTextures_FUN_005507d0(void)

{
  byte *puVar1;
  
  puVar1 = &DAT_005c11f4;
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,puVar1);
    puVar1 = puVar1 + 0x18;
  } while (puVar1 != &DAT_005c1374);
  return;
}
