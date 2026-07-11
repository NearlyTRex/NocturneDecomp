// Name: FUN_004e11c0
// Address: 004e11c0
// Address Range: [[004e11c0, 004e14e6]]
// Convention: unknown
// Signature: int FUN_004e11c0(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004e11c0(int param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float local_48;
  float local_44;
  byte local_40 [4];
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_24 = param_1 + 0x1c;
  local_1c = param_1 + 0x18;
  local_28 = param_1 + 8;
  local_20 = param_1 + 4;
  local_14 = 0;
  do {
    if (*param_2 <= (float)_DAT_0058b2ad) break;
    iVar3 = FUN_004e1500(param_1);
    if (iVar3 != 0) goto LAB_004e1213;
    local_48 = *param_2;
    iVar3 = 0;
    if (*(float *)(param_1 + 0x14) < 0.0) {
      iVar3 = FUN_004e1bd0(param_1,*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),
                           &local_48,local_40);
      switch(local_3c) {
      case 1:
      case 2:
        *(uint *)(param_1 + 4) = local_38;
        *(uint *)(param_1 + 8) = local_34;
        if (local_2c != 0) {
          iVar4 = FUN_004e1660(param_1);
          *(uint *)(param_1 + 0x28) = *(uint *)(iVar4 + 0x24);
        }
        break;
      case 3:
      case 4:
      case 5:
      case 6:
        FUN_004e1770(param_1,local_40);
        break;
      default:
        _DAT_01cc4800 = "..\\core\\motion.cpp";
        _DAT_01cc4804 = 0x1b7;
        FUN_004c8440("Invalid transition command returned by CMotionControler::advanceComplex: %d",local_3c);
      }
      goto LAB_004e1332;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      local_44 = (float)_DAT_0058b2b5 - *(float *)(param_1 + 0x14);
    }
    else {
      local_44 = *(float *)(param_1 + 0x14);
    }
    local_44 = local_44 / *(float *)(param_1 + 0x10);
    if (local_44 < 0.0) {
      local_44 = 0.0;
    }
    if (local_44 < local_48) {
      local_48 = local_44;
    }
    bVar1 = false;
    local_18 = 0;
    if (local_48 <= 0.0) goto switchD_004e12af_caseD_3;
    switch(*(uint *)(param_1 + 0xc)) {
    case 3:
      break;
    case 4:
      bVar1 = true;
      FUN_004e1d80(param_1,*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c),&local_48
                  );
      break;
    case 5:
      FUN_004e1d80(param_1,*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),&local_48);
      goto LAB_004e12bd;
    case 6:
      FUN_004e1d80(param_1,*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),&local_48);
      bVar1 = true;
      FUN_004e1d80(param_1,*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c),&local_48
                  );
      goto LAB_004e12bd;
    default:
      _DAT_01cc4800 = "..\\core\\motion.cpp";
      _DAT_01cc4804 = 0x17e;
      FUN_004c8440("CMotionController::advance: Tweening active but invalid tweenType: %d",*(uint *)(param_1 + 0xc));
    }
switchD_004e12af_caseD_3:
    if (local_18 != 0) {
LAB_004e12bd:
      iVar3 = FUN_004e1a20(param_1,local_20,local_28,local_48,*(uint *)(param_1 + 0x14));
    }
    if ((bVar1) &&
       (iVar4 = FUN_004e1a20(param_1,local_1c,local_24,local_48,1.0 - *(float *)(param_1 + 0x14)),
       iVar3 == 0)) {
      iVar3 = iVar4;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      fVar2 = local_48 * *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x14);
      *(float *)(param_1 + 0x14) = fVar2;
      if (((float)_DAT_0058b2bd < fVar2) && (FUN_004e1600(param_1), *(int *)(param_1 + 0x24) != 0))
      {
        iVar4 = FUN_004e1660(param_1);
        *(uint *)(param_1 + 0x28) = *(uint *)(iVar4 + 0x24);
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0x14) - local_48 * *(float *)(param_1 + 0x10);
      *(float *)(param_1 + 0x14) = fVar2;
      if (fVar2 < (float)_DAT_0058b2c5) {
        FUN_004e19f0(param_1);
      }
    }
LAB_004e1332:
    *param_2 = *param_2 - local_48;
    if ((*(int *)(param_1 + 0x2c) != 0) &&
       (*(int *)(*(int *)(param_1 + 0x2c) + 8) == *(int *)(param_1 + 4))) {
      *(uint *)(param_1 + 0x2c) = 0;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
LAB_004e1213:
    local_14 = local_14 + 1;
  } while (local_14 < 5);
  *param_2 = 0.0;
  return 0;
}
