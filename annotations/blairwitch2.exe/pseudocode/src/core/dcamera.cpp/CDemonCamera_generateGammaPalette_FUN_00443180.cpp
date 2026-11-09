// Name: core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00443180
// Address: 00443180
// Address Range: [[00443180, 00443239]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00443180(CDemonCamera *this_ptr,int gamma_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00443180(CDemonCamera *this_ptr,int gamma_value)

{
  uint uVar1;
  int extraout_ECX;
  int iVar2;
  int extraout_EDX;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar2 = 0;
  fVar3 = (float10)((float)gamma_value * (float)_DAT_005ce746);
  fVar4 = (float10)_DAT_005ce74e;
  do {
    fVar5 = (float10)iVar2 * fVar4;
    fVar6 = fVar4;
    fVar4 = fVar3;
    pow();
    fVar5 = fVar5 * fVar4;
    fVar4 = fVar3;
    fVar3 = fVar6;
    round();
    uVar1 = (uint)ROUND(fVar5);
    iVar2 = extraout_EDX + 1;
    *(uint *)(&DAT_00b6639c + extraout_ECX) = uVar1 << 0x18 | uVar1 << 0x10 | uVar1 << 8 | uVar1;
  } while (iVar2 < 0x100);
  engine_special_cpp_setFogColor_FUN_0055fe90
            (*(uint *)(&DAT_00b6639c + DAT_00609fa4 * 4) & 0xff,
             *(uint *)(&DAT_00b6639c + DAT_00609fa8 * 4) & 0xff,
             *(uint *)(&DAT_00b6639c + DAT_00609fac * 4) & 0xff);
  return;
}
