// Name: FUN_00437b80
// Address: 00437b80
// Address Range: [[00437b80, 00437dda]]
// Convention: unknown
// Signature: void FUN_00437b80(int param_1)

#include "nocturne.h"

void FUN_00437b80(int param_1)

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
  
  FUN_00487ec0(param_1);
  FUN_0040b8e0(param_1 + 0x10a60,"@speed" + 1);
  FUN_0040bae0(param_1 + 0x2b4,"modelName");
  FUN_0040bb60(param_1 + 0x2b4,"motion state");
  FUN_0040b730(param_1 + 0x10af8,"fallEvent");
  if (0x00000003 < 3) {
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    FUN_0040b960(&uStack_1c,"mistState");
    FUN_0040b8e0(&uStack_18,"vanishTimer");
    FUN_0040b4b0(&uStack_28,"newPos");
    if (0x00000003 < 2) {
      return;
    }
  }
  else if (0x00000003 < 2) {
    return;
  }
  FUN_0040b730(param_1 + 0x10ba8,"deathEvent");
  FUN_0040b8e0(param_1 + 0x10c0c,"recombineTime");
  FUN_0040b960(param_1 + 0x112d8,"blownUp");
  FUN_0040b8e0(param_1 + 0x112dc,"param");
  FUN_0040b960(param_1 + 0x10c14,"boxCount");
  FUN_0040bc50(param_1 + 0x2b4,"partStatus");
  iVar1 = 0;
  if (*(int *)(param_1 + 0x10c14) < 1) {
    return;
  }
  iStack_14 = param_1 + 0x10c18;
  iStack_10 = param_1 + 0x10c50;
  iVar3 = param_1 + 0x10c5c;
  iVar2 = param_1 + 0x10c40;
  iStack_c = param_1 + 0x10c24;
  iVar4 = param_1 + 0x10c30;
  do {
    FUN_0040b4b0(iVar1 * 0x48 + iStack_14,"boxListPos");
    FUN_0040b4b0(iStack_c,"boxListOrient");
    FUN_0040b690(iVar4,"boxListDestOrient");
    FUN_0040b690(iVar2,"boxListStartOrient");
    FUN_0040b4b0(iStack_10,"sourcePos");
    iVar1 = iVar1 + 1;
    iVar4 = iVar4 + 0x48;
    iVar2 = iVar2 + 0x48;
    FUN_0040b9e0(iVar3,"boxListPart");
    iVar3 = iVar3 + 0x48;
    iStack_10 = iStack_10 + 0x48;
    iStack_c = iStack_c + 0x48;
  } while (iVar1 < *(int *)(param_1 + 0x10c14));
  return;
}
