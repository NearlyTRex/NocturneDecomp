// Name: core_marquee.cpp_CMarquee_computeBoundingBox_FUN_004cc1b0
// Address: 004cc1b0
// Address Range: [[004cc1b0, 004cc2d3]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_computeBoundingBox_FUN_004cc1b0(int param_1)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_computeBoundingBox_FUN_004cc1b0(int param_1)

{
  int *piVar1;
  int iVar2;
  byte auStack_2c [12];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  *(uint *)(param_1 + 0x180) = 0x461c3f9a;
  *(uint *)(param_1 + 0x184) = 0x461c3f9a;
  *(uint *)(param_1 + 0x188) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x18c) = 0xc61c3f9a;
  *(uint *)(param_1 + 400) = 0xc61c3f9a;
  piVar1 = (int *)(param_1 + 0x19c);
  *(uint *)(param_1 + 0x17c) = 0x461c3f9a;
  iVar2 = 0;
  if (*piVar1 < 1) {
    return;
  }
  do {
    local_14 = (float)iVar2;
    local_10 = iVar2;
    core_course_cpp_CCourse_evaluate_FUN_0043b800(piVar1,local_14,&local_20,auStack_2c);
    if (local_20 < *(float *)(param_1 + 0x17c)) {
      *(float *)(param_1 + 0x17c) = local_20;
    }
    if (*(float *)(param_1 + 0x188) < local_20) {
      *(float *)(param_1 + 0x188) = local_20;
    }
    if (local_1c < *(float *)(param_1 + 0x180)) {
      *(float *)(param_1 + 0x180) = local_1c;
    }
    if (*(float *)(param_1 + 0x18c) < local_1c) {
      *(float *)(param_1 + 0x18c) = local_1c;
    }
    if (local_18 < *(float *)(param_1 + 0x184)) {
      *(float *)(param_1 + 0x184) = local_18;
    }
    if (*(float *)(param_1 + 400) < local_18) {
      *(float *)(param_1 + 400) = local_18;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *piVar1);
  return;
}
