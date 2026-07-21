// Name: core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00447a70
// Address: 00447a70
// Address Range: [[00447a70, 00447b29]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00447a70(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00447a70(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  iVar3 = 0;
  fVar4 = (float10)((float)param_2 * (float)_DAT_0057bafb);
  fVar5 = (float10)_DAT_0057bb03;
  iVar2 = 0;
  do {
    fVar7 = fVar4;
    fVar8 = fVar4;
    fVar6 = (float10)pow((float10)iVar3 * fVar5);
    fVar4 = fVar5;
    fVar5 = fVar7;
    fVar7 = (float10)round(fVar6 * fVar8);
    uVar1 = (uint)ROUND(fVar7);
    iVar3 = iVar3 + 1;
    *(uint *)(&DAT_00b0e1fc + iVar2) = uVar1 << 0x18 | uVar1 << 0x10 | uVar1 << 8 | uVar1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 0x100);
  wincore_windll_cpp_setFogColor_FUN_00532af0
            (*(uint *)(&DAT_00b0e1fc + DAT_005ad450 * 4) & 0xff,
             *(uint *)(&DAT_00b0e1fc + DAT_005ad454 * 4) & 0xff,
             *(uint *)(&DAT_00b0e1fc + DAT_005ad458 * 4) & 0xff);
  return;
}
