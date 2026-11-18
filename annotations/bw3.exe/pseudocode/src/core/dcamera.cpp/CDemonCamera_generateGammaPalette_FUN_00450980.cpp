// Name: core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00450980
// Address: 00450980
// Address Range: [[00450980, 00450a39]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00450980(CDemonCamera *this_ptr,int gamma_value)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00450980(CDemonCamera *this_ptr,int gamma_value)

{
  uint uVar1;
  float10 fVar2;
  int iVar3;
  int iVar4;
  float10 exp;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  
  iVar4 = 0;
  exp = (float10)((float)gamma_value * (float)1.52587890625e-05);
  fVar5 = (float10)0.0039215686274509803;
  iVar3 = 0;
  do {
    fVar2 = exp;
    fVar7 = exp;
    fVar6 = pow((float10)iVar4 * fVar5,exp);
    exp = fVar5;
    fVar5 = fVar2;
    dVar8 = round((double)(fVar6 * fVar7));
    uVar1 = (uint)ROUND(dVar8);
    iVar4 = iVar4 + 1;
    *(uint *)((int)g_LightmapTexturePalette + iVar3) =
         uVar1 << 0x18 | uVar1 << 0x10 | uVar1 << 8 | uVar1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 0x100);
  engine_special_cpp_setFogColor_FUN_005661b0
            (g_LightmapTexturePalette[g_FogColorIndexR] & 0xff,
             g_LightmapTexturePalette[g_FogColorIndexG] & 0xff,
             g_LightmapTexturePalette[g_FogColorIndexB] & 0xff);
  return;
}
