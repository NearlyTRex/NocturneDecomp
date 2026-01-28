// Name: core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0
// Address: 00453bd0
// Address Range: [[00453bd0, 00453c89]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0 (CDemonCamera *this_ptr,int gamma_value)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0
          (CDemonCamera *this_ptr,int gamma_value)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float10 exp;
  float10 fVar4;
  float10 extraout_ST1;
  float10 extraout_ST2;
  float10 extraout_ST3;
  double dVar5;
  
  iVar3 = 0;
  exp = (float10)((float)gamma_value * (float)1.52587890625e-05);
  fVar4 = (float10)0.0039215686274509803;
  iVar2 = 0;
  do {
    fVar4 = crt_math_c_pow_FUN_005ffd76((float10)iVar3 * fVar4,exp);
    exp = extraout_ST2;
    dVar5 = crt_math_c_round_FUN_005fe6b0((double)(fVar4 * extraout_ST3));
    uVar1 = (uint)ROUND(dVar5);
    iVar3 = iVar3 + 1;
    *(uint *)((int)g_LightmapTexturePalette + iVar2) =
         uVar1 << 0x18 | uVar1 << 0x10 | uVar1 << 8 | uVar1;
    iVar2 = iVar2 + 4;
    fVar4 = extraout_ST1;
  } while (iVar3 < 0x100);
  wincore_windll_cpp_setFogColor_FUN_005b7b80
            (g_LightmapTexturePalette[g_FogColorIndexR] & 0xff,
             g_LightmapTexturePalette[g_FogColorIndexG] & 0xff,
             g_LightmapTexturePalette[g_FogColorIndexB] & 0xff);
  return;
}
