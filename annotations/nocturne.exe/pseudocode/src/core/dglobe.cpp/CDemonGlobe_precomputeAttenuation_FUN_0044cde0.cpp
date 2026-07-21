// Name: core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0
// Address: 0044cde0
// Address Range: [[0044cde0, 0044ce79]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0(int param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  float unaff_retaddr;
  
  fVar1 = (float10)_DAT_0057c379;
  fVar2 = (float10)_DAT_0057c381;
  *(float *)(param_1 + 0x30) = param_2;
  fVar1 = (float10)round((float10)param_2 * fVar1);
  fVar2 = (float10)round((float10)param_2 * (float10)param_2 * fVar2);
  *(int *)(param_1 + 0x10) = (int)ROUND(fVar2);
  *(int *)(param_1 + 0xc) = (int)ROUND(fVar1);
  if (*(int *)(param_1 + 0x10) < 0x10000) {
    *(uint *)(param_1 + 0x10) = 0x10000;
  }
  *(float *)(param_1 + 0x18) = unaff_retaddr * unaff_retaddr;
  fVar1 = (float10)_DAT_0057c381;
  *(float *)(param_1 + 0x34) = 1.0 / unaff_retaddr;
  *(float *)(param_1 + 0x38) = 1.0 / (unaff_retaddr * unaff_retaddr);
  fVar1 = (float10)round
                             (((float10)*(byte *)(param_1 + 0x1c) * fVar1) /
                              (float10)(*(int *)(param_1 + 0x10) >> 0x10));
  *(int *)(param_1 + 0x14) = (int)ROUND(fVar1);
  return;
}
