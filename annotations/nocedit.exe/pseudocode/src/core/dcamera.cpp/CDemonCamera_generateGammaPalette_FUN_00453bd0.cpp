// Name: core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0
// Address: 00453bd0
// Address Range: [[00453bd0, 00453c89]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0(CDemonCamera * this_ptr, int gamma_value)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0
          (CDemonCamera *this_ptr,int gamma_value)

{
  uint uVar1;
  int extraout_ECX;
  int iVar2;
  int extraout_EDX;
  float10 exp;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  
  iVar2 = 0;
  exp = (float10)((float)gamma_value * (float)1.52587890625e-05);
  fVar3 = (float10)0.0039215686274509803;
  do {
    fVar5 = fVar3;
    fVar6 = exp;
    fVar4 = crt_math_c_pow_FUN_005ffd76((float10)iVar2 * fVar3,exp);
    fVar3 = exp;
    exp = fVar5;
    dVar7 = crt_math_c_round_FUN_005fe6b0((double)(fVar4 * fVar6));
    uVar1 = (uint)ROUND(dVar7);
    iVar2 = extraout_EDX + 1;
    *(uint *)((int)g_LightmapTexturePalette + extraout_ECX) =
         uVar1 << 0x18 | uVar1 << 0x10 | uVar1 << 8 | uVar1;
  } while (iVar2 < 0x100);
  wincore_windll_cpp_setFogColor_FUN_005b7b80
            (g_LightmapTexturePalette[g_FogColorIndexR] & 0xff,
             g_LightmapTexturePalette[g_FogColorIndexG] & 0xff,
             g_LightmapTexturePalette[g_FogColorIndexB] & 0xff);
  return;
}
