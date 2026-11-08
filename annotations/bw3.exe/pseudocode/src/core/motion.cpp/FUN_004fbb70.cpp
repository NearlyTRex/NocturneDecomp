// Name: FUN_004fbb70
// Address: 004fbb70
// Address Range: [[004fbb70, 004fbefd]]
// Convention: unknown
// Signature: int FUN_004fbb70(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004fbb70(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float local_b0;
  float local_ac;
  byte local_a8 [100];
  byte local_44 [4];
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_2c = param_1 + 0x1c;
  local_24 = param_1 + 0x18;
  local_20 = param_1 + 8;
  local_28 = param_1 + 4;
  local_18 = 0;
  do {
    if (*param_2 <= (float)_DAT_005c9c94) break;
    iVar2 = FUN_004fbf20(param_1);
    if (iVar2 != 0) goto LAB_004fbbd2;
    local_b0 = *param_2;
    iVar2 = 0;
    if (*(float *)(param_1 + 0x14) < 0.0) {
      iVar2 = FUN_004fc680(param_1,*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),
                           &local_b0,local_44);
      switch(local_40) {
      case 1:
      case 2:
        *(uint *)(param_1 + 4) = local_3c;
        *(uint *)(param_1 + 8) = local_38;
        if (local_30 != 0) {
          iVar3 = FUN_004fc070(param_1);
          *(uint *)(param_1 + 0x28) = *(uint *)(iVar3 + 0x24);
        }
        break;
      case 3:
      case 4:
      case 5:
      case 6:
        FUN_004fc190(param_1,local_44);
        break;
      default:
        _DAT_01d71de0 = "..\\core\\motion.cpp";
        _DAT_01d71de4 = 0x1f6;
        FUN_004e4330("Invalid transition command returned by CMotionControler::advanceComplex: %d",local_40);
      }
      goto LAB_004fbd11;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      local_ac = (float)_DAT_005c9c9c - *(float *)(param_1 + 0x14);
    }
    else {
      local_ac = *(float *)(param_1 + 0x14);
    }
    local_ac = local_ac / *(float *)(param_1 + 0x10);
    if (local_ac < 0.0) {
      local_ac = 0.0;
    }
    if (local_ac < local_b0) {
      local_b0 = local_ac;
    }
    local_1c = 0;
    local_14 = 0;
    if (local_b0 <= 0.0) goto switchD_004fbc79_caseD_3;
    switch(*(uint *)(param_1 + 0xc)) {
    case 3:
      break;
    case 4:
      FUN_004fc850(param_1,*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c),&local_b0
                  );
      local_14 = 1;
      break;
    case 5:
      FUN_004fc850(param_1,*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),&local_b0);
      goto LAB_004fbc8a;
    case 6:
      FUN_004fc850(param_1,*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),&local_b0);
      FUN_004fc850(param_1,*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c),&local_b0
                  );
      local_14 = 1;
      goto LAB_004fbc8a;
    default:
      _DAT_01d71de0 = "..\\core\\motion.cpp";
      _DAT_01d71de4 = 0x1bd;
      FUN_004e4330("CMotionController::advance: Tweening active but invalid tweenType: %d",*(uint *)(param_1 + 0xc));
    }
switchD_004fbc79_caseD_3:
    if (local_1c != 0) {
LAB_004fbc8a:
      iVar2 = FUN_004fc4b0(param_1,local_28,local_20,local_b0,*(uint *)(param_1 + 0x14));
    }
    if ((local_14 != 0) &&
       (iVar3 = FUN_004fc4b0(param_1,local_24,local_2c,local_b0,1.0 - *(float *)(param_1 + 0x14)),
       iVar2 == 0)) {
      iVar2 = iVar3;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      fVar1 = local_b0 * *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x14);
      *(float *)(param_1 + 0x14) = fVar1;
      if (((float)_DAT_005c9ca4 < fVar1) && (FUN_004fc010(param_1), *(int *)(param_1 + 0x24) != 0))
      {
        iVar3 = FUN_004fc070(param_1);
        *(uint *)(param_1 + 0x28) = *(uint *)(iVar3 + 0x24);
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0x14) - local_b0 * *(float *)(param_1 + 0x10);
      *(float *)(param_1 + 0x14) = fVar1;
      if (fVar1 < (float)_DAT_005c9cac) {
        FUN_004fc480(param_1);
      }
    }
LAB_004fbd11:
    *param_2 = *param_2 - local_b0;
    if ((*(int *)(param_1 + 0x2c) != 0) &&
       (*(int *)(*(int *)(param_1 + 0x2c) + 8) == *(int *)(param_1 + 4))) {
      *(uint *)(param_1 + 0x2c) = 0;
    }
    if (iVar2 != 0) {
      FUN_005a28c0(local_a8,"signal%d",iVar2);
      FUN_0048c150(0x01C6E360,local_a8);
      return iVar2;
    }
LAB_004fbbd2:
    local_18 = local_18 + 1;
  } while (local_18 < 5);
  *param_2 = 0.0;
  return 0;
}
