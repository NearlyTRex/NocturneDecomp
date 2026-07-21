// Name: core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_00468af0
// Address: 00468af0
// Address Range: [[00468af0, 00468cf5]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_00468af0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00468c48) */
/* WARNING: Removing unreachable block (ram,0x00468c54) */
/* WARNING: Removing unreachable block (ram,0x00468c68) */
/* WARNING: Removing unreachable block (ram,0x00468c72) */
/* WARNING: Removing unreachable block (ram,0x00468c7b) */
/* WARNING: Removing unreachable block (ram,0x00468c84) */
/* WARNING: Removing unreachable block (ram,0x00468c3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_00468af0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int unaff_EBX;
  int unaff_EDI;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  _DAT_014b89ec = _DAT_02dd1188;
  _DAT_014b8a08 = _DAT_02dd118c;
  _DAT_014b8a00 = _DAT_02dd1184;
  _DAT_014b89fc = _DAT_02dd118c;
  _DAT_014b89f4 = _DAT_02dd1184;
  _DAT_014b89f0 = _DAT_02dd118c;
  _DAT_014b89e8 = _DAT_02dd1184;
  if (*(float *)(param_2 + 0x18) <= 0.0) {
    fVar3 = (((float10)*(float *)(param_2 + 0x10) + (float10)*(float *)(param_2 + 0x18)) -
            (float10)*(float *)(param_1 + 0x10)) - (float10)*(float *)(param_2 + 0x20);
    fVar4 = (float10)1 / (float10)*(float *)(param_1 + 0x28);
    fVar5 = (float10)*(float *)(param_2 + 0x10);
  }
  else {
    fVar3 = ((float10)*(float *)(param_2 + 0x10) - (float10)*(float *)(param_1 + 0x10)) -
            (float10)*(float *)(param_2 + 0x20);
    fVar4 = (float10)1 / (float10)*(float *)(param_1 + 0x28);
    fVar5 = (float10)*(float *)(param_2 + 0x10) + (float10)*(float *)(param_2 + 0x18);
  }
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_2 + 0x20);
  _DAT_014b89f8 = _DAT_014b89ec;
  _DAT_014b8a04 = _DAT_014b89ec;
  round(fVar3 * fVar4);
  round(((fVar5 - (float10)fVar1) + (float10)fVar2) * fVar4);
  fVar3 = (float10)1 / (float10)*(float *)(unaff_EBX + 0x2c);
  fVar1 = *(float *)(param_2 + 0x24);
  fVar2 = *(float *)(unaff_EBX + 0x14);
  round
            (((float10)*(float *)(param_2 + 0x28) - (float10)*(float *)(unaff_EBX + 0x14)) * fVar3);
  round(((float10)fVar1 - (float10)fVar2) * fVar3);
  if (*(float *)(param_2 + 0x1c) <= 0.0) {
    fVar3 = (((float10)*(float *)(param_2 + 0x14) + (float10)*(float *)(param_2 + 0x1c)) -
            (float10)*(float *)(unaff_EDI + 0x18)) - (float10)*(float *)(param_2 + 0x20);
    fVar4 = (float10)1 / (float10)*(float *)(unaff_EDI + 0x30);
    fVar5 = (float10)*(float *)(param_2 + 0x14);
  }
  else {
    fVar3 = ((float10)*(float *)(param_2 + 0x14) - (float10)*(float *)(unaff_EDI + 0x18)) -
            (float10)*(float *)(param_2 + 0x20);
    fVar4 = (float10)1 / (float10)*(float *)(unaff_EDI + 0x30);
    fVar5 = (float10)*(float *)(param_2 + 0x14) + (float10)*(float *)(param_2 + 0x1c);
  }
  fVar1 = *(float *)(unaff_EDI + 0x18);
  fVar2 = *(float *)(param_2 + 0x20);
  round(fVar3 * fVar4);
  round(((fVar5 - (float10)fVar1) + (float10)fVar2) * fVar4);
  return;
}
