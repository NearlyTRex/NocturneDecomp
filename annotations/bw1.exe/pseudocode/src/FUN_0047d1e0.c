// Name: FUN_0047d1e0
// Address: 0047d1e0
// Address Range: [[0047d1e0, 0047d429]]
// Convention: unknown
// Signature: int FUN_0047d1e0(int param_1)

#include "nocturne.h"

int FUN_0047d1e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iStack_14;
  
  FUN_004a0520(param_1);
  if (0x00000009 < 2) {
    FUN_0040b5f0(param_1 + 0xc1d0,"?speed" + 1);
  }
  iVar1 = FUN_0040b7f0(param_1 + 0x158,"modelName");
  if ((1 < 0x00000009) && (0x00000009 < 6)) {
    iVar1 = FUN_0040b5f0(param_1 + 0xc1e0,"guardDistance");
  }
  if (((2 < 0x00000009) &&
      (iVar1 = FUN_0040b440(param_1 + 0xc28c,"riseEvent"), 0x00000009 < 4)) &&
     (FUN_0040b670(&iStack_14,"initialState"), iVar1 = DAT_007c3038, DAT_007c3038 == 1)) {
    if (iStack_14 == 1) {
      pcVar4 = "vincoffin";
    }
    else {
      pcVar4 = "incoffin";
    }
    iVar1 = FUN_00524ae0(param_1 + 0x158,pcVar4,0);
  }
  if (3 < 0x00000009) {
    iVar1 = FUN_0040b870(param_1 + 0x158,"motionState");
  }
  if (0x00000009 == 4) {
    iVar2 = 0;
    iVar1 = FUN_0040b670(param_1 + 0x2ca0,"clothCount");
    if (0 < *(int *)(param_1 + 0x2ca0)) {
      iVar3 = param_1 + 0x2ca4;
      do {
        iVar2 = iVar2 + 1;
        iVar1 = FUN_0040b440(iVar3,0);
        iVar3 = iVar3 + 0x28;
      } while (iVar2 < *(int *)(param_1 + 0x2ca0));
    }
  }
  if (6 < 0x00000009) {
    iVar1 = FUN_0040b670(param_1 + 0xc2f0,"freakyVoiceNumber");
  }
  if (7 < 0x00000009) {
    FUN_0040b670(param_1 + 0xc408,"exploded");
    FUN_0040b670(param_1 + 0xc314,"partCount");
    iVar2 = 0;
    iVar1 = FUN_0040b5f0(param_1 + 0xc40c,"fadeTimer");
    if (0 < *(int *)(param_1 + 0xc314)) {
      iVar3 = param_1 + 0xc318;
      do {
        iVar2 = iVar2 + 1;
        iVar1 = FUN_0040b6f0(iVar3,"partList");
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(int *)(param_1 + 0xc314));
    }
  }
  if (8 < 0x00000009) {
    FUN_0040b670(param_1 + 0xc2f4,"mistState");
    FUN_0040b5f0(param_1 + 0xc2f8,"vanishTimer");
    iVar1 = FUN_0040b1c0(param_1 + 0xc304,"newPos");
    return iVar1;
  }
  return iVar1;
}
