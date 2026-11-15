// Name: core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00454830
// Address: 00454830
// Address Range: [[00454830, 004548e9]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00454830(CDemonCamera *this_ptr,int gamma_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00454830(CDemonCamera *this_ptr,int gamma_value)

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
  exp = (float10)((float)gamma_value * (float)_DAT_005d7a0f);
  fVar5 = (float10)_DAT_005d7a17;
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
    *(uint *)(&DAT_00b8189c + iVar3) = uVar1 << 0x18 | uVar1 << 0x10 | uVar1 << 8 | uVar1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 0x100);
  engine_special_cpp_setFogColor_FUN_005828e0
            (*(uint *)(&DAT_00b8189c + DAT_00611230 * 4) & 0xff,
             *(uint *)(&DAT_00b8189c + DAT_00611234 * 4) & 0xff,
             *(uint *)(&DAT_00b8189c + DAT_00611238 * 4) & 0xff);
  return;
}
