// Name: core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
// Address: 00471360
// Address Range: [[00471360, 004713f9]]
// Convention: __cdecl
// Signature: void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(CDemonGlobe * this_ptr, float radius)

#include "nocturne.h"

void __cdecl
core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(CDemonGlobe *this_ptr,float radius)

{
  float fVar1;
  int extraout_EDX;
  int extraout_EDX_00;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  float unaff_retaddr;
  
  fVar1 = radius * 256f;
  fVar2 = (float10)radius * (float10)radius * (float10)65536;
  this_ptr->radius = radius;
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)fVar1);
  fVar3 = (float10)dVar4;
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)fVar2);
  *(int *)(extraout_EDX + 0x10) = (int)ROUND(dVar4);
  *(int *)(extraout_EDX + 0xc) = (int)ROUND(fVar3);
  if (*(int *)(extraout_EDX + 0x10) < 0x10000) {
    *(uint *)(extraout_EDX + 0x10) = 0x10000;
  }
  *(float *)(extraout_EDX + 0x18) = unaff_retaddr * unaff_retaddr;
  dVar4 = (double)*(byte *)(extraout_EDX + 0x1c) * 65536;
  *(float *)(extraout_EDX + 0x34) = 1.0 / unaff_retaddr;
  *(float *)(extraout_EDX + 0x38) = 1.0 / (unaff_retaddr * unaff_retaddr);
  dVar4 = crt_math_c_round_FUN_005fe6b0(dVar4 / (double)(*(int *)(extraout_EDX + 0x10) >> 0x10));
  *(int *)(extraout_EDX_00 + 0x14) = (int)ROUND(dVar4);
  return;
}
