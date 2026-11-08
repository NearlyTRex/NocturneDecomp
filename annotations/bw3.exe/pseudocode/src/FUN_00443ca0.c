// Name: FUN_00443ca0
// Address: 00443ca0
// Address Range: [[00443ca0, 00443efa]]
// Convention: unknown
// Signature: void FUN_00443ca0(int param_1)

#include "nocturne.h"

void FUN_00443ca0(int param_1)

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
  
  FUN_00489120(param_1);
  FUN_0040b830(param_1 + 0xcdcc,"@speed" + 1);
  FUN_0040ba30(param_1 + 0x158,"modelName");
  FUN_0040bab0(param_1 + 0x158,"motion state");
  FUN_0040b680(param_1 + 0xd054,"fallEvent");
  if (0x00000003 < 3) {
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    FUN_0040b8b0(&uStack_1c,"mistState");
    FUN_0040b830(&uStack_18,"vanishTimer");
    FUN_0040b400(&uStack_28,"newPos");
    if (0x00000003 < 2) {
      return;
    }
  }
  else if (0x00000003 < 2) {
    return;
  }
  FUN_0040b680(param_1 + 0xd114,"deathEvent");
  FUN_0040b830(param_1 + 0xd178,"recombineTime");
  FUN_0040b8b0(param_1 + 0xd844,"blownUp");
  FUN_0040b830(param_1 + 0xd850,"param");
  FUN_0040b8b0(param_1 + 0xd180,"boxCount");
  FUN_0040bba0(param_1 + 0x158,"partStatus");
  iVar1 = 0;
  if (*(int *)(param_1 + 0xd180) < 1) {
    return;
  }
  iStack_14 = param_1 + 0xd184;
  iStack_10 = param_1 + 0xd1bc;
  iVar3 = param_1 + 0xd1c8;
  iVar2 = param_1 + 0xd1ac;
  iStack_c = param_1 + 0xd190;
  iVar4 = param_1 + 0xd19c;
  do {
    FUN_0040b400(iVar1 * 0x48 + iStack_14,"boxListPos");
    FUN_0040b400(iStack_c,"boxListOrient");
    FUN_0040b5e0(iVar4,"boxListDestOrient");
    FUN_0040b5e0(iVar2,"boxListStartOrient");
    FUN_0040b400(iStack_10,"sourcePos");
    iVar1 = iVar1 + 1;
    iVar4 = iVar4 + 0x48;
    iVar2 = iVar2 + 0x48;
    FUN_0040b930(iVar3,"boxListPart");
    iVar3 = iVar3 + 0x48;
    iStack_10 = iStack_10 + 0x48;
    iStack_c = iStack_c + 0x48;
  } while (iVar1 < *(int *)(param_1 + 0xd180));
  return;
}
