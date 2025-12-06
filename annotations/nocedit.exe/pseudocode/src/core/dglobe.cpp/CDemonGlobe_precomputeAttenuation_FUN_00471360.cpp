// Name: core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
// Address: 00471360
// Address Range: [[00471360, 004713f9]]
// Convention: __cdecl
// Signature: void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(CDemonGlobe * this_ptr, float radius)

#include "nocturne.h"

void __cdecl
core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(CDemonGlobe *this_ptr,float radius)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  float in_stack_00000010;
  
  fVar3 = (float10)radius * (float10)256f;
  fVar4 = (float10)radius * (float10)radius * (float10)65536;
  this_ptr->radius = radius;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(this_ptr,radius));
  dVar5 = crt_math_c_round_FUN_005fe6b0(dVar5);
  iVar2 = (int)((ulonglong)dVar5 >> 0x20);
  *(int *)(iVar2 + 0x10) = (int)ROUND(fVar4);
  *(int *)(iVar2 + 0xc) = (int)ROUND(fVar3);
  if (*(int *)(iVar2 + 0x10) < 0x10000) {
    *(uint *)(iVar2 + 0x10) = 0x10000;
  }
  *(float *)(iVar2 + 0x18) = in_stack_00000010 * in_stack_00000010;
  iVar1 = *(int *)(iVar2 + 0x10) >> 0x10;
  fVar3 = ((float10)*(byte *)(iVar2 + 0x1c) * (float10)65536) / (float10)iVar1;
  *(float *)(iVar2 + 0x34) = 1.0 / in_stack_00000010;
  *(float *)(iVar2 + 0x38) = 1.0 / (in_stack_00000010 * in_stack_00000010);
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar2,iVar1));
  *(int *)((int)((ulonglong)dVar5 >> 0x20) + 0x14) = (int)ROUND(fVar3);
  return;
}
