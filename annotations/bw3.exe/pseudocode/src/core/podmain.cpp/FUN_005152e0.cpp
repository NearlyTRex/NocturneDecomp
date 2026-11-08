// Name: FUN_005152e0
// Address: 005152e0
// Address Range: [[005152e0, 00515463]]
// Convention: unknown
// Signature: void FUN_005152e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005152e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char acStack_328 [276];
  byte auStack_214 [256];
  byte auStack_114 [256];
  int iStack_14;
  
  iVar1 = FUN_005a43ec("pod.ini",&DAT_005cca00);
  if (iVar1 == 0) {
    FUN_00465b60(acStack_328);
    FUN_00465ba0(acStack_328,"*.pod");
    while (acStack_328[0] != '\0') {
      iVar1 = (**(code **)(*(int *)(param_1 + 0x194) + 0xc))(param_1,acStack_328,auStack_114);
      if (iVar1 == 0) {
        _DAT_01d71de0 = "..\\core\\podmain.cpp";
        _DAT_01d71de4 = 0x39;
        FUN_004e4330("Can't mount %s: %s",acStack_328,auStack_114);
      }
      FUN_00465c20(acStack_328);
    }
    FUN_00465ca0(acStack_328);
    FUN_00465b80(acStack_328,0);
    return;
  }
  FUN_005a3230(iVar1,&DAT_005cca38,&iStack_14);
  iVar3 = 0;
  if (0 < iStack_14) {
    do {
      FUN_005a3230(iVar1,&DAT_005cca3c,auStack_214);
      iVar2 = (**(code **)(*(int *)(param_1 + 0x194) + 0xc))(param_1,auStack_214,auStack_114);
      if (iVar2 == 0) {
        _DAT_01d71de4 = 0x45;
        _DAT_01d71de0 = "..\\core\\podmain.cpp";
        FUN_004e4330("Can't mount %s: %s",auStack_214,auStack_114);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iStack_14);
  }
  FUN_005a3a90(iVar1);
  return;
}
