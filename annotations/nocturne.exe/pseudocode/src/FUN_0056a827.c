// Name: FUN_0056a827
// Address: 0056a827
// Address Range: [[0056a827, 0056aa25]]
// Convention: unknown
// Signature: void FUN_0056a827(uint *param_1,char *param_2,uint param_3,uint param_4,char *param_5)

#include "nocturne.h"

void FUN_0056a827(uint *param_1,char *param_2,uint param_3,uint param_4,char *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint local_14;
  
  local_14 = *param_1;
  uVar1 = param_4 + 1;
  uVar3 = 0;
  if ((param_1[2] & 4) != 0) {
    if (((int)param_3 < (int)local_14) && ((param_1[2] & 0x10) == 0)) {
      local_14 = param_3;
    }
    local_14 = local_14 - uVar1;
    if ((int)local_14 < 0) {
      local_14 = 0;
    }
  }
  if ((int)uVar1 < 1) {
    if ((param_1[2] & 8) == 0) {
      *param_5 = '0';
      uVar3 = 1;
      if ((0 < (int)local_14) || ((param_1[2] & 0x10) != 0)) {
        uVar3 = 2;
        param_5[1] = '.';
      }
    }
    param_1[7] = uVar3;
    param_4 = uVar1;
    if (-local_14 != uVar1 && (int)local_14 <= (int)-uVar1) {
      param_4 = -local_14;
    }
    param_1[6] = param_4;
    local_14 = local_14 + param_4;
    param_1[8] = param_4;
    param_1[8] = -param_4;
    if ((int)local_14 < (int)param_3) {
      param_3 = local_14;
    }
    pcVar4 = param_5 + uVar3;
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(uint *)pcVar4 = *(uint *)param_2;
      param_2 = param_2 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *pcVar4 = *param_2;
      param_2 = param_2 + 1;
      pcVar4 = pcVar4 + 1;
    }
    param_1[9] = param_3;
    local_14 = local_14 - param_3;
    uVar3 = uVar3 + param_3;
  }
  else {
    if ((int)uVar1 <= (int)param_3) {
      pcVar4 = param_2;
      pcVar5 = param_5;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)pcVar5 = *(uint *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
      param_3 = param_3 - uVar1;
      param_1[6] = uVar1;
      uVar3 = uVar1;
      if ((param_1[2] & 8) == 0) {
        if ((0 < (int)local_14) || ((param_1[2] & 0x10) != 0)) {
          param_5[uVar1] = '.';
          uVar3 = param_4 + 2;
        }
      }
      else if (*param_5 == '0') {
        param_1[6] = 0;
      }
      if ((int)local_14 < (int)param_3) {
        param_3 = local_14;
      }
      pcVar4 = param_2 + uVar1;
      pcVar5 = param_5 + uVar3;
      for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(uint *)pcVar5 = *(uint *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
      uVar3 = uVar3 + param_3;
      param_1[7] = uVar3;
      param_1[8] = local_14 - param_3;
      goto LAB_0056aa18;
    }
    pcVar4 = param_5;
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(uint *)pcVar4 = *(uint *)param_2;
      param_2 = param_2 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar4 = *param_2;
      param_2 = param_2 + 1;
      pcVar4 = pcVar4 + 1;
    }
    param_1[7] = param_3;
    param_1[8] = uVar1 - param_3;
    param_1[6] = uVar1;
    uVar3 = param_3;
    if (((param_1[2] & 8) == 0) && ((0 < (int)local_14 || ((param_1[2] & 0x10) != 0)))) {
      param_5[param_3] = '.';
      uVar3 = param_3 + 1;
      param_1[9] = 1;
    }
  }
  param_1[10] = local_14;
LAB_0056aa18:
  param_5[uVar3] = '\0';
  return;
}
