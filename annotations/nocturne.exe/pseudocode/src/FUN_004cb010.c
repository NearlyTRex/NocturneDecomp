// Name: FUN_004cb010
// Address: 004cb010
// Address Range: [[004cb010, 004cb2c4]]
// Convention: unknown
// Signature: void FUN_004cb010(int param_1,int param_2,float param_3)

#include "nocturne.h"

void FUN_004cb010(int param_1,int param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  float *pfVar12;
  byte local_3c [12];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_28 = param_3 * 255.0f;
  local_14 = local_28 / 2.0f;
  pfVar12 = (float *)(param_1 + 0xa98 + param_2 * 0xb8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_3c,pfVar12 + 9);
  uVar6 = core_manpuz_cpp_updateGemHumChannel_FUN_004caef0
                    (pfVar12 + 3,pfVar12[6],local_14,pfVar12 + 0x2b,
                     "manpuz-chargegemloop-red.wav",local_3c);
  uVar7 = core_manpuz_cpp_updateGemHumChannel_FUN_004caef0
                    (pfVar12 + 4,pfVar12[7],local_14,pfVar12 + 0x2c,
                     "manpuz-chargegemloop-green.wav",local_3c);
  uVar8 = core_manpuz_cpp_updateGemHumChannel_FUN_004caef0
                    (pfVar12 + 5,pfVar12[8],local_14,pfVar12 + 0x2d,
                     "manpuz-chargegemloop-blue.wav",local_3c);
  pfVar12[8] = 0.0;
  pfVar12[7] = pfVar12[8];
  pfVar12[6] = pfVar12[7];
  core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_004cae20
            (param_1,param_2,&local_30,&local_2c,&local_24);
  local_14 = local_28 / 2.0f;
  local_20 = local_30 - *pfVar12;
  bVar5 = 1;
  if (local_20 < -local_14) {
    fVar2 = *pfVar12 - local_14;
LAB_004cb140:
    *pfVar12 = fVar2;
    bVar5 = 0;
  }
  else {
    if (local_14 < local_20) {
      fVar2 = *pfVar12 + local_14;
      goto LAB_004cb140;
    }
    *pfVar12 = local_30;
  }
  pfVar1 = pfVar12 + 1;
  local_18 = local_2c - *pfVar1;
  if (-local_14 <= local_18) {
    if (local_14 < local_18) {
      fVar2 = *pfVar1 + local_14;
      goto LAB_004cb16e;
    }
    *pfVar1 = local_2c;
    bVar4 = 1;
  }
  else {
    fVar2 = *pfVar1 - local_14;
LAB_004cb16e:
    *pfVar1 = fVar2;
    bVar4 = 0;
  }
  pfVar1 = pfVar12 + 2;
  local_1c = local_24 - *pfVar1;
  if (-local_14 <= local_1c) {
    if (local_1c <= local_14) {
      *pfVar1 = local_24;
      bVar3 = 1;
      goto LAB_004cb1a0;
    }
    fVar2 = *pfVar1 + local_14;
  }
  else {
    fVar2 = *pfVar1 - local_14;
  }
  *pfVar1 = fVar2;
  bVar3 = 0;
LAB_004cb1a0:
  if ((((((bool)(bVar5 & bVar4 & bVar3)) && ((uVar6 & 1 & uVar7 & uVar8) != 0)) &&
       (piVar11 = (int *)(param_1 + 0x5e8 + param_2 * 100), *piVar11 != 0)) &&
      (((piVar11[2] & 0x7fffffffU) == 0 && ((piVar11[1] & 0x7fffffffU) == 0)))) &&
     (((float)piVar11[0x13] == pfVar12[3] &&
      (((float)piVar11[0x14] == pfVar12[4] && ((float)piVar11[0x15] == pfVar12[5])))))) {
    uVar9 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0(param_1,param_2);
    iVar10 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_004cba40(param_1,uVar9);
    if (iVar10 == 0) {
      core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004cb5a0(param_1,param_2);
      return;
    }
    uVar9 = core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004cb8e0(param_1,param_2);
    iVar10 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_004cba40(param_1,uVar9);
    if (iVar10 == 0) {
      core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004cb740(param_1,param_2);
      return;
    }
  }
  return;
}
