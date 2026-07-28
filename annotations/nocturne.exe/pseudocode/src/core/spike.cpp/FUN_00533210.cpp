// Name: core_spike.cpp_FUN_00533210
// Address: 00533210
// Address Range: [[00533210, 00533526]]
// Convention: unknown
// Signature: void core_spike_cpp_FUN_00533210(int param_1,float param_2)

#include "nocturne.h"

void core_spike_cpp_FUN_00533210(int param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  uint local_50;
  uint local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  byte local_2c [24];
  float local_14;
  
  if ((*(int *)(param_1 + 0x2cc) == 0) || (*(int *)(param_1 + 0x2cc) == 1)) {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,(char *)(param_1 + 0x2e8));
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x2d4) = 1;
    }
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,(char *)(param_1 + 0x34c));
    if (iVar3 == 0) goto LAB_005333e2;
    *(uint *)(param_1 + 0x2d4) = 0;
LAB_00533279:
    if (*(int *)(param_1 + 0x2d0) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x2d0) == 2) {
      *(uint *)(param_1 + 0x2d0) = 3;
    }
  }
  else {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,(char *)(param_1 + 0x3b0));
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x2d4) = 1;
    }
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,(char *)(param_1 + 0x414));
    if (iVar3 == 0) {
LAB_005333e2:
      if (*(int *)(param_1 + 0x2d4) == 0) goto LAB_00533279;
    }
    else {
      *(uint *)(param_1 + 0x2d4) = 1;
    }
  }
  fVar5 = *(float *)(param_1 + 0x480) - param_2;
  *(float *)(param_1 + 0x480) = fVar5;
  if (0.0 < fVar5) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x2d0);
  *(uint *)(param_1 + 0x480) = 0;
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0x2d0) = 1;
    *(uint *)(param_1 + 0x554) = 0;
    goto LAB_005332db;
  }
  if (iVar3 == 1) {
    fVar5 = param_2 / *(float *)(param_1 + 0x478) + *(float *)(param_1 + 0x554);
    *(float *)(param_1 + 0x554) = fVar5;
    if (fVar5 <= 1.0) goto LAB_005332db;
    *(uint *)(param_1 + 0x2d0) = 2;
    *(uint *)(param_1 + 0x554) = 0x3f800000;
    if (*(int *)(param_1 + 0x2cc) == 2) {
LAB_00533455:
      *(uint *)(param_1 + 0x2d4) = 0;
      goto LAB_005332db;
    }
    if (*(int *)(param_1 + 0x2cc) != 1) {
      *(uint *)(param_1 + 0x480) = *(uint *)(param_1 + 0x54c);
      goto LAB_005332db;
    }
  }
  else {
    if (iVar3 == 2) {
      *(uint *)(param_1 + 0x554) = 0x3f800000;
      *(uint *)(param_1 + 0x2d0) = 3;
      goto LAB_005332db;
    }
    if ((iVar3 != 3) ||
       (fVar5 = *(float *)(param_1 + 0x554) - param_2 / *(float *)(param_1 + 0x47c),
       *(float *)(param_1 + 0x554) = fVar5, 0.0 <= fVar5)) goto LAB_005332db;
    *(uint *)(param_1 + 0x2d0) = 0;
    *(uint *)(param_1 + 0x554) = 0;
    if (*(int *)(param_1 + 0x2cc) == 2) goto LAB_00533455;
    if (*(int *)(param_1 + 0x2cc) != 1) {
      *(uint *)(param_1 + 0x480) = *(uint *)(param_1 + 0x54c);
      goto LAB_005332db;
    }
  }
  fVar5 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f400000,0x3fa00000);
  *(float *)(param_1 + 0x480) = fVar5 * *(float *)(param_1 + 0x54c);
LAB_005332db:
  pfVar1 = (float *)(param_1 + 0x20);
  local_38 = *pfVar1;
  local_34 = *(float *)(param_1 + 0x24);
  local_30 = *(float *)(param_1 + 0x28);
  local_48 = *(float *)(param_1 + 0x2e4) * *(float *)(param_1 + 0x554);
  local_50 = 0;
  local_4c = 0;
  local_14 = local_48;
  pfVar4 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                              (param_1,local_2c,&local_50);
  local_44 = *(float *)(param_1 + 0x2d8) + *pfVar4;
  local_40 = *(float *)(param_1 + 0x2dc) + pfVar4[1];
  local_3c = *(float *)(param_1 + 0x2e0) + pfVar4[2];
  *pfVar1 = local_44;
  *(float *)(param_1 + 0x24) = local_40;
  *(float *)(param_1 + 0x28) = local_3c;
  fVar2 = local_34 - *(float *)(param_1 + 0x24);
  fVar5 = local_30 - *(float *)(param_1 + 0x28);
  if (fVar5 * fVar5 + fVar2 * fVar2 + (local_38 - *pfVar1) * (local_38 - *pfVar1) <=
      (float)1.0000000000000001e-05) {
    return;
  }
  core_spike_cpp_FUN_00533750(param_1);
  return;
}
