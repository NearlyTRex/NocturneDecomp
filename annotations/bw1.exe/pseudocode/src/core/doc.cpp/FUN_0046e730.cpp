// Name: core_doc.cpp_FUN_0046e730
// Address: 0046e730
// Address Range: [[0046e730, 0046ea3b]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0046e730(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_0046e730(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_2c;
  
  *(uint *)(param_1 + 0x20054) = 0;
  *(uint *)(param_1 + 0x20050) = *(uint *)(param_1 + 0x20054);
  *(uint *)(param_1 + 0x2004c) = *(uint *)(param_1 + 0x20050);
  fVar3 = (float)core_motion_cpp_FUN_00524a40(param_1 + 0x158,0);
  if ((fVar3 <= 0.0) || (1.0 <= *(float *)(param_1 + 0x20028))) {
    *(uint *)(param_1 + 0x20024) = 0;
    *(uint *)(param_1 + 0x20058) = 0xffffffff;
    *(uint *)(param_1 + 0x2002c) = 0;
    *(uint *)(param_1 + 0x20030) = 0;
    *(uint *)(param_1 + 0x20028) = 0;
    return;
  }
  if (fVar3 < 1.0) {
    fVar3 = (1.0 - fVar3) * param_2 * (float)_DAT_005d9ffc;
    if (fVar3 <= ABS(*(float *)(param_1 + 0x20024))) {
      if (0.0 <= *(float *)(param_1 + 0x20024)) {
        *(float *)(param_1 + 0x20024) = *(float *)(param_1 + 0x20024) - fVar3;
      }
      else {
        *(float *)(param_1 + 0x20024) = *(float *)(param_1 + 0x20024) + fVar3;
      }
    }
    else {
      *(uint *)(param_1 + 0x20024) = 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x20058);
  *(uint *)(param_1 + 0x20058) = _DAT_01b68864;
  if (*(float *)(param_1 + 0x20024) < 0.0) {
    *(uint *)(param_1 + 0x20058) = _DAT_01b68868;
  }
  if (*(float *)(param_1 + 0x20028) <= (float)_DAT_005da004) {
    *(uint *)(param_1 + 0x20030) = 0;
  }
  else {
    *(float *)(param_1 + 0x20030) = *(float *)(param_1 + 0x20030) + param_2;
  }
  if ((*(float *)(param_1 + 0x2002c) <= 0.0) &&
     (((float)_DAT_005da00c <= *(float *)(param_1 + 0x20028) ||
      (1.0 < *(float *)(param_1 + 0x20030))))) {
    *(float *)(param_1 + 0x2002c) = (1.0 - *(float *)(param_1 + 0x20028)) * 1.6;
  }
  if (*(float *)(param_1 + 0x2002c) <= 0.0) {
    local_2c = ABS(*(float *)(param_1 + 0x20024) * _DAT_005da014);
    if (iVar1 != *(int *)(param_1 + 0x20058)) {
      local_2c = 0.0;
    }
    if (1.0 < local_2c) {
      local_2c = 1.0;
    }
    fVar3 = (local_2c - *(float *)(param_1 + 0x20028)) + *(float *)(param_1 + 0x20028);
    *(float *)(param_1 + 0x20028) = fVar3;
    if ((float)_DAT_005da01c < fVar3) {
      *(int *)(param_1 + 0x20058) = iVar1;
      return;
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x2002c);
    fVar2 = fVar3 - param_2;
    *(float *)(param_1 + 0x2002c) = fVar2;
    if (0.0 < fVar2) {
      param_2 = param_2 / fVar3;
    }
    else {
      param_2 = 1.0 - *(float *)(param_1 + 0x20028);
      *(uint *)(param_1 + 0x2002c) = 0;
    }
    fVar3 = *(float *)(param_1 + 0x20028);
    fVar2 = fVar3 + param_2;
    *(float *)(param_1 + 0x20028) = fVar2;
    if (fVar2 < 1.0) {
      *(float *)(param_1 + 0x20024) =
           *(float *)(param_1 + 0x20024) - (*(float *)(param_1 + 0x20024) * param_2) / (1.0 - fVar3)
      ;
      return;
    }
    *(uint *)(param_1 + 0x20024) = 0;
    *(uint *)(param_1 + 0x2002c) = 0;
    *(uint *)(param_1 + 0x20030) = 0;
    *(uint *)(param_1 + 0x20028) = 0x3f800000;
  }
  return;
}
