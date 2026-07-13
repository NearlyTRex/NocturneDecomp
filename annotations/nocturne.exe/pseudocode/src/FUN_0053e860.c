// Name: FUN_0053e860
// Address: 0053e860
// Address Range: [[0053e860, 0053ecba]]
// Convention: unknown
// Signature: void FUN_0053e860(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053e860(int param_1,int param_2)

{
  float fVar1;
  byte *puVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  ulonglong uVar6;
  byte local_34 [12];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (*(int *)(0x01C775EC + 0x1d0) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01C775EC + 0x22c) == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  FUN_004b5920();
  if ((0.0 < *(float *)(param_1 + 0xbc8c)) && (0xb < *(int *)(param_2 + 0x30))) {
    *(uint *)(param_2 + 4) = 0;
    return;
  }
  *(uint *)(param_1 + 0xbc8c) = _DAT_005a26f8;
  iVar3 = FUN_0040d7e0(*(uint *)(param_2 + 0x38),"CBugs");
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0xbc8c) = 0x3e19999a;
  }
  iVar3 = 0x01C775EC;
  *(float *)(param_1 + 0x2434) = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  puVar2 = PTR_DAT_005ad350;
  if (((*(int *)(iVar3 + 200) != 0) && (0xb < *(int *)(param_2 + 0x30))) &&
     (*(float *)(param_1 + 0x2434) <= 0.0)) {
    *(uint *)(param_1 + 0x2434) = 0;
    FUN_0043ac60(puVar2,"Using auto health\n");
    FUN_004c3350();
    FUN_0043ac60(PTR_DAT_005ad350,"hit points: %3.2f\n",(double)*(float *)(param_1 + 0x2434))
    ;
  }
  local_24 = 0.0;
  local_20 = 1.0;
  local_28 = 0.0;
  if (*(int *)(param_2 + 0x34) != 0) {
    pfVar4 = (float *)FUN_0040a290(param_1,local_34,*(int *)(param_2 + 0x34) + 0x20);
    if (&local_28 != pfVar4) {
      local_28 = *pfVar4;
      local_20 = pfVar4[2];
    }
    local_1c = SQRT(local_20 * local_20 + local_28 * local_28);
    local_24 = 0.0;
    if (local_1c <= 0.0) {
      local_28 = 0.0;
      local_20 = 0.0;
    }
    else {
      fVar1 = 1.0 / local_1c;
      local_28 = local_28 * fVar1;
      local_24 = fVar1 * 0.0;
      local_20 = local_20 * fVar1;
    }
  }
  local_18 = *(float *)(param_2 + 4) * (float)_DAT_00595d97;
  if (local_18 < (float)_DAT_00595d9f) {
    local_18 = 0.75;
  }
  if (1.0 < local_18) {
    local_18 = 1.0;
  }
  local_28 = local_28 * local_18;
  local_24 = local_24 * local_18;
  local_20 = local_20 * local_18;
  FUN_004940d0(0x01C70F74,local_28,local_20);
  if (*(float *)(param_1 + 0x2434) <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    (**(code **)(*(int *)(param_1 + 0x14c) + 0xe8))();
    iVar3 = FUN_004e1660();
    if (*(int *)(iVar3 + 0x24) != 0x29) {
      iVar3 = FUN_004e1660();
      if (*(int *)(iVar3 + 0x24) != 0x28) {
        if ((*(int *)(param_1 + 0x1fa14) == 0) && (*(int *)(param_1 + 0x1fa90) == 0)) {
          if (*(int *)(param_2 + 0x30) == 1) {
            uVar6 = 0x100000027;
          }
          else {
            uVar5 = 1;
            local_14 = (float)FUN_0040dda0(0,0x42c80000,1);
            uVar6 = CONCAT44(uVar5,(local_14 <= _DAT_00595da7) + 0x25);
          }
        }
        else {
          uVar6 = 0x10000000f;
          *(uint *)(param_1 + 0x1fa14) = 0;
          *(uint *)(param_1 + 0x1fa90) = 0;
        }
        FUN_004e16b0(param_1 + 0x150,uVar6);
        FUN_00527230();
        if (*(int *)(param_2 + 0x30) != 1) {
          uVar5 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                            (param_1,"stranger_die??.wav");
          *(uint *)(param_1 + 0x1fcd0) = uVar5;
        }
        FUN_004b0670(0x01C78C7C,param_1,0x32,0x42480000,0);
      }
    }
    if (*(int *)(param_1 + 0x1fa94) == *(int *)(param_1 + 0x24ac)) {
      *(uint *)(param_1 + 0x1fa94) = 0;
    }
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,0,0);
    if (*(int *)(param_1 + 0x24f0) == *(int *)(param_1 + 0x1fa94)) {
      *(uint *)(param_1 + 0x1fa94) = 0;
    }
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,1,0);
    goto LAB_0053eb7b;
  }
  if (*(float *)(param_2 + 4) <= 0.0) goto LAB_0053eb7b;
  if (((*(int *)(param_2 + 0x30) != 0x69) && (*(int *)(param_1 + 0x1fa14) == 0)) &&
     ((*(int *)(param_1 + 0x1fa90) == 0 && (*(int *)(param_1 + 0x1faa0) == 0)))) {
    iVar3 = FUN_0040d890(*(uint *)(param_2 + 0x34),_DAT_02dd1008);
    if (iVar3 != 0) {
      iVar3 = FUN_0040dea0();
      if (iVar3 == 0) goto LAB_0053ec87;
    }
    FUN_004e16b0(param_1 + 0x150,0x24,1);
  }
LAB_0053ec87:
  iVar3 = FUN_00526c50();
  if (iVar3 == 0) {
    uVar5 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"stranger_hit??.wav");
    *(uint *)(param_1 + 0x1fcd0) = uVar5;
  }
LAB_0053eb7b:
  if (0.0 < *(float *)(param_2 + 4)) {
    FUN_004a3a90();
  }
  FUN_00428510(param_1,param_2);
  return;
}
