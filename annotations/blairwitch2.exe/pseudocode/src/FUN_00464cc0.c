// Name: FUN_00464cc0
// Address: 00464cc0
// Address Range: [[00464cc0, 00464f09]]
// Convention: unknown
// Signature: int FUN_00464cc0(int param_1)

#include "nocturne.h"

int FUN_00464cc0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iStack_14;
  
  FUN_00487ec0(param_1);
  if (0x00000009 < 2) {
    FUN_0040b8e0(param_1 + 0x10a60,"?speed" + 1);
  }
  iVar1 = FUN_0040bae0(param_1 + 0x2b4,"modelName");
  if ((1 < 0x00000009) && (0x00000009 < 6)) {
    iVar1 = FUN_0040b8e0(param_1 + 0x10a70,"guardDistance");
  }
  if (((2 < 0x00000009) &&
      (iVar1 = FUN_0040b730(param_1 + 0x10b1c,"riseEvent"), 0x00000009 < 4)) &&
     (FUN_0040b960(&iStack_14,"initialState"), iVar1 = DAT_007bc038, DAT_007bc038 == 1)) {
    if (iStack_14 == 1) {
      pcVar4 = "vincoffin";
    }
    else {
      pcVar4 = "incoffin";
    }
    iVar1 = FUN_00503950(param_1 + 0x2b4,pcVar4,0);
  }
  if (3 < 0x00000009) {
    iVar1 = FUN_0040bb60(param_1 + 0x2b4,"motionState");
  }
  if (0x00000009 == 4) {
    iVar2 = 0;
    iVar1 = FUN_0040b960(param_1 + 0x2d0c,"clothCount");
    if (0 < *(int *)(param_1 + 0x2d0c)) {
      iVar3 = param_1 + 0x2d10;
      do {
        iVar2 = iVar2 + 1;
        iVar1 = FUN_0040b730(iVar3,0);
        iVar3 = iVar3 + 0x28;
      } while (iVar2 < *(int *)(param_1 + 0x2d0c));
    }
  }
  if (6 < 0x00000009) {
    iVar1 = FUN_0040b960(param_1 + 0x10b80,"freakyVoiceNumber");
  }
  if (7 < 0x00000009) {
    FUN_0040b960(param_1 + 0x10c20,"exploded");
    FUN_0040b960(param_1 + 0x10ba4,"partCount");
    iVar2 = 0;
    iVar1 = FUN_0040b8e0(param_1 + 0x10c24,"fadeTimer");
    if (0 < *(int *)(param_1 + 0x10ba4)) {
      iVar3 = param_1 + 0x10ba8;
      do {
        iVar2 = iVar2 + 1;
        iVar1 = FUN_0040b9e0(iVar3,"partList");
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(int *)(param_1 + 0x10ba4));
    }
  }
  if (8 < 0x00000009) {
    FUN_0040b960(param_1 + 0x10b84,"mistState");
    FUN_0040b8e0(param_1 + 0x10b88,"vanishTimer");
    iVar1 = FUN_0040b4b0(param_1 + 0x10b94,"newPos");
    return iVar1;
  }
  return iVar1;
}
