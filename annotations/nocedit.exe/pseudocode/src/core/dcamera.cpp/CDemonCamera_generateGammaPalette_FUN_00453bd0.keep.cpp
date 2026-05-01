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

  // Ghidra mistracked the FPU stack here: it modeled `FMUL ST3` (multiply by
  // 255 from g_CameraOutputScale, kept deep on the stack across the loop) as
  // `fVar3 * fVar5` where fVar5 was a save of `exp`. The asm clearly multiplies
  // pow_result * 255.0 — compiling the decompile as-rendered would produce the
  // wrong gamma palette at runtime.
  exp = (float10)((float)gamma_value * (float)1.52587890625e-05);
  for (i = 0; i < 0x100; i = i + 1) {
    uVar1 = (uint)ROUND(ROUND(pow((float10)i * (float10)0.0039215686274509803, exp) *
                              (float10)255.0));
    g_LightmapTexturePalette[i] = uVar1 << 0x18 | uVar1 << 0x10 | uVar1 << 8 | uVar1;
  }
  wincore_windll_cpp_setFogColor_FUN_005b7b80
            (g_LightmapTexturePalette[g_FogColorIndexR] & 0xff,
             g_LightmapTexturePalette[g_FogColorIndexG] & 0xff,
             g_LightmapTexturePalette[g_FogColorIndexB] & 0xff);
  return;
}
