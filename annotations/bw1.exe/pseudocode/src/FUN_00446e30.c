// Name: FUN_00446e30
// Address: 00446e30
// Address Range: [[00446e30, 0044708a]]
// Convention: unknown
// Signature: void FUN_00446e30(int param_1)

#include "nocturne.h"

void FUN_00446e30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  FUN_004a0520(param_1);
  FUN_0040b5f0(param_1 + 0xc1d0,"@speed" + 1);
  FUN_0040b7f0(param_1 + 0x158,"modelName");
  FUN_0040b870(param_1 + 0x158,"motion state");
  FUN_0040b440(param_1 + 0xc268,"fallEvent");
  if (0x00000003 < 3) {
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    FUN_0040b670(&uStack_1c,"mistState");
    FUN_0040b5f0(&uStack_18,"vanishTimer");
    FUN_0040b1c0(&uStack_28,"newPos");
    if (0x00000003 < 2) {
      return;
    }
  }
  else if (0x00000003 < 2) {
    return;
  }
  FUN_0040b440(param_1 + 0xc328,"deathEvent");
  FUN_0040b5f0(param_1 + 0xc38c,"recombineTime");
  FUN_0040b670(param_1 + 0xca58,"blownUp");
  FUN_0040b5f0(param_1 + 0xca5c,"param");
  FUN_0040b670(param_1 + 0xc394,"boxCount");
  FUN_0040b960(param_1 + 0x158,"partStatus");
  iVar1 = 0;
  if (*(int *)(param_1 + 0xc394) < 1) {
    return;
  }
  iStack_14 = param_1 + 0xc398;
  iStack_10 = param_1 + 0xc3d0;
  iVar3 = param_1 + 0xc3dc;
  iVar2 = param_1 + 0xc3c0;
  iStack_c = param_1 + 0xc3a4;
  iVar4 = param_1 + 0xc3b0;
  do {
    FUN_0040b1c0(iVar1 * 0x48 + iStack_14,"boxListPos");
    FUN_0040b1c0(iStack_c,"boxListOrient");
    FUN_0040b3a0(iVar4,"boxListDestOrient");
    FUN_0040b3a0(iVar2,"boxListStartOrient");
    FUN_0040b1c0(iStack_10,"sourcePos");
    iVar1 = iVar1 + 1;
    iVar4 = iVar4 + 0x48;
    iVar2 = iVar2 + 0x48;
    FUN_0040b6f0(iVar3,"boxListPart");
    iVar3 = iVar3 + 0x48;
    iStack_10 = iStack_10 + 0x48;
    iStack_c = iStack_c + 0x48;
  } while (iVar1 < *(int *)(param_1 + 0xc394));
  return;
}
