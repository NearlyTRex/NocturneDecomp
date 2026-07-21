// Name: core_dlight.cpp_captureLightTextures_FUN_004504e0
// Address: 004504e0
// Address Range: [[004504e0, 0045051a]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_captureLightTextures_FUN_004504e0(void)

#include "nocturne.h"

void __cdecl core_dlight_cpp_captureLightTextures_FUN_004504e0(void)

{
  byte *puVar1;
  
  puVar1 = &DAT_005ae488;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,&DAT_005ae470);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,puVar1);
    puVar1 = puVar1 + 0x30;
  } while (puVar1 != &DAT_005ae638);
  return;
}
