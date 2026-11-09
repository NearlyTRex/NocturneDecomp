// Name: core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860
// Address: 00448860
// Address Range: [[00448860, 004488f9]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860(CDemonGlobe *this_ptr,float radius)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860(CDemonGlobe *this_ptr,float radius)

{
  int extraout_EDX;
  int extraout_EDX_00;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)radius * (float10)_DAT_005cf002;
  fVar2 = (float10)radius * (float10)radius * (float10)_DAT_005cf00a;
  *(float *)(this_ptr + 0x30) = radius;
  round();
  round();
  *(int *)(extraout_EDX + 0x10) = (int)ROUND(fVar2);
  *(int *)(extraout_EDX + 0xc) = (int)ROUND(fVar1);
  if (*(int *)(extraout_EDX + 0x10) < 0x10000) {
    *(uint *)(extraout_EDX + 0x10) = 0x10000;
  }
  *(float *)(extraout_EDX + 0x18) = radius * radius;
  fVar1 = ((float10)*(byte *)(extraout_EDX + 0x1c) * (float10)_DAT_005cf00a) /
          (float10)(*(int *)(extraout_EDX + 0x10) >> 0x10);
  *(float *)(extraout_EDX + 0x34) = 1.0 / radius;
  *(float *)(extraout_EDX + 0x38) = 1.0 / (radius * radius);
  round();
  *(int *)(extraout_EDX_00 + 0x14) = (int)ROUND(fVar1);
  return;
}
