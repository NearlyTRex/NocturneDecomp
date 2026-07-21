// Name: core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080
// Address: 00452080
// Address Range: [[00452080, 00452106]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080(int param_1,uint param_2)

{
  float10 fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *(uint *)(param_1 + 0x2fa8) = param_2;
  if (0x100 < *(int *)(param_1 + 0x1cc0)) {
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0x4520b3;
    fVar1 = (float10)round
                               ((float10)*(float *)(param_1 + 0x2fa8) * (float10)_DAT_0057c94e);
    core_dlight_cpp_CDemonLight_applyFilter_FUN_004501c0
              (param_1,(&DAT_005ad53c)[(int)ROUND(fVar1)],0,uVar2,uVar3,uVar4);
    return;
  }
  uVar3 = 0;
  uVar2 = 0x4520e8;
  fVar1 = (float10)round
                             ((float10)*(float *)(param_1 + 0x2fa8) * (float10)_DAT_0057c946);
  core_dlight_cpp_CDemonLight_applyFilter_FUN_004501c0
            (param_1,(&DAT_005ad51c)[(int)ROUND(fVar1)],0,uVar2,uVar3);
  return;
}
