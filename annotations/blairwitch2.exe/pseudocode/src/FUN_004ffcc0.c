// Name: FUN_004ffcc0
// Address: 004ffcc0
// Address Range: [[004ffcc0, 0050007b]]
// Convention: unknown
// Signature: void FUN_004ffcc0(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ffcc0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int local_1c;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = FUN_005b849c();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = *(int *)(param_1 + 0x10b9c);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0x10ba0);
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0x10ba4);
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0x10ba8);
      break;
    case 4:
      iVar2 = *(int *)(param_1 + 0x10bc4);
      break;
    case 5:
      iVar2 = *(int *)(param_1 + 0x10bc0);
      break;
    default:
      goto switchD_004ffcf9_default;
    }
    *param_2 = iVar2;
  }
switchD_004ffcf9_default:
  iVar2 = *param_2;
  if (((((iVar2 != *(int *)(param_1 + 0x10b9c)) && (iVar2 != *(int *)(param_1 + 0x10ba0))) &&
       (iVar2 != *(int *)(param_1 + 0x10ba4))) &&
      ((iVar2 != *(int *)(param_1 + 0x10ba8) && (iVar2 != *(int *)(param_1 + 0x10bc0))))) &&
     (iVar2 != *(int *)(param_1 + 0x10bc4))) goto LAB_004fff5a;
  if (*(int *)(param_1 + 0x10bc0) == *param_2) {
    fVar3 = (float)FUN_0040cf60(0,0x3f800000);
    if ((float)_DAT_005deecd <= fVar3) {
      if (_DAT_005deed5 <= (double)fVar3) goto LAB_004ffd53;
      iVar2 = *(int *)(param_1 + 0x10ba4);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x10b9c);
    }
    *param_2 = iVar2;
  }
LAB_004ffd53:
  local_1c = param_2[0xb];
  if (*(int *)(param_1 + 0x10bc4) == *param_2) {
    local_1c = 0x3d4ccccd;
  }
  if (*(int *)(param_1 + 0x10bc0) == *param_2) {
    local_1c = 0x3d75c28f;
  }
  if (*(int *)(0x01CB6900 + 0x1fc) != 0) {
    local_1c = 0x3f800000;
  }
  if (*(int *)(0x01CB6900 + 0x14) == 0) {
    local_1c = 0;
  }
  iVar2 = FUN_0040d060(local_1c);
  if (iVar2 != 0) {
    uVar4 = FUN_004154f0(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,0);
    FUN_004277e0(param_1,uVar4,*param_2,0);
    if (*param_2 == *(int *)(param_1 + 0x10b9c)) {
      FUN_004277e0(param_1,uVar4,*(uint *)(param_1 + 0x10ba0),0);
    }
    if (*(int *)(param_1 + 0x10ba4) == *param_2) {
      FUN_004277e0(param_1,uVar4,*(uint *)(param_1 + 0x10ba8),0);
    }
    if (*(int *)(param_1 + 0x10bc0) == *param_2) {
      piVar1 = param_2 + 3;
      FUN_00427770(param_1,*(uint *)(param_1 + 0x10ba4),piVar1,0);
      FUN_00427770(param_1,*(uint *)(param_1 + 0x10ba8),piVar1,0);
      FUN_00427770(param_1,*(uint *)(param_1 + 0x10b9c),piVar1,0);
      FUN_00427770(param_1,*(uint *)(param_1 + 0x10ba0),piVar1,0);
      FUN_00427770(param_1,*(uint *)(param_1 + 0x10bc4),piVar1,0);
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,1,0);
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,0,0);
    }
    FUN_0042b260(param_1,"limb?.wav");
    FUN_00416700(uVar4);
    if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10bc4) * 4) == 0) {
      param_2[1] = 0x461c3c00;
    }
    param_2[2] = (int)((float)param_2[2] * (float)_DAT_005deedd);
    if ((*param_2 == *(int *)(param_1 + 0x10ba4)) || (*param_2 == *(int *)(param_1 + 0x10ba8))) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,1,0);
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,0,0);
    }
    if ((*param_2 == *(int *)(param_1 + 0x10b9c)) || (*param_2 == *(int *)(param_1 + 0x10ba0))) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,0,0);
    }
  }
LAB_004fff5a:
  iVar2 = *param_2;
  if (iVar2 == *(int *)(param_1 + 0x10bc4)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005deeed);
    return;
  }
  if ((iVar2 != *(int *)(param_1 + 0x10bbc)) && (iVar2 != *(int *)(param_1 + 0x10bc0))) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005deee5);
    return;
  }
  param_2[1] = param_2[1];
  return;
}
