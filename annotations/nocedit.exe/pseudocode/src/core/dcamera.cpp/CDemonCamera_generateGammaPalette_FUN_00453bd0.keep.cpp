// Name: core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0
// Address: 00453bd0
// MANUAL RECONSTRUCTION
// Address Range: [[00453bd0, 00453c89]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0(CDemonCamera *this_ptr,int gamma_value)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0(CDemonCamera *this_ptr,int gamma_value)

{
  int i;
  float10 exp;
  uint uVar1;

  // The asm reads three camera-config constants at runtime — g_CameraGammaMultiplier
  // (@0x61a45a), g_CameraNormalizer (@0x61a462), g_CameraOutputScale (@0x61a46a) —
  // so reference them rather than baking their default values into the keep.
  // (Ghidra also mistracked the FPU stack, modeling the deep `FMUL ST3` by
  // g_CameraOutputScale as `fVar3 * fVar5`; the real op is pow_result * g_CameraOutputScale.)
  exp = (float10)((float)gamma_value * (float)g_CameraGammaMultiplier);
  for (i = 0; i < 0x100; i = i + 1) {
    uVar1 = (uint)ROUND(ROUND(pow((float10)i * (float10)g_CameraNormalizer, exp) *
                              (float10)g_CameraOutputScale));
    g_LightmapTexturePalette[i] = uVar1 << 0x18 | uVar1 << 0x10 | uVar1 << 8 | uVar1;
  }
  engine_special_cpp_setFogColor_FUN_005b7b80
            (g_LightmapTexturePalette[g_FogColorIndexR] & 0xff,
             g_LightmapTexturePalette[g_FogColorIndexG] & 0xff,
             g_LightmapTexturePalette[g_FogColorIndexB] & 0xff);
  return;
}
