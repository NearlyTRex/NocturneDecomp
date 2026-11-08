// Name: FUN_0050c990
// Address: 0050c990
// Address Range: [[0050c990, 0050cc74]]
// Convention: unknown
// Signature: void FUN_0050c990(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050c990(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_14;
  
  local_14 = 0;
  if (param_1 != 0) {
    FUN_0057d6a0(0x02C82A60);
    FUN_00521c50(0x1d1e380);
  }
  iVar3 = 0x1d20a30;
  FUN_004cbf10(0x01CCF390);
  iVar1 = 0;
  do {
    *(int *)(iVar1 + 0x1d21030) = iVar3;
    iVar1 = iVar1 + 4;
    iVar3 = iVar3 + 0x100;
  } while (iVar1 != 0x18);
  do {
    FUN_004cbf20(0x01CCF390);
    iVar1 = 0x01E82168;
    *(uint *)(0x01E82168 + 0x15ae84) = 1;
    FUN_00555770(iVar1,50000,50000,0x10000);
    *(uint *)(0x01E82168 + 0x15ae94) = 0xdac;
    FUN_00521e40(0x1d1e380);
    *(uint *)(0x01E82168 + 0x15ae84) = 0;
    uVar2 = FUN_00531090("Graphic options");
    FUN_005bfb40(0x1d20a30,uVar2);
    uVar2 = FUN_00531090("Sound options");
    FUN_005bfb40(0x1d20b30,uVar2);
    uVar2 = FUN_00531090("Control options");
    FUN_005bfb40(0x1d20c30,uVar2);
    if (*(int *)(0x01CCF390 + 0xe4) == 1) {
      uVar2 = FUN_00531090("Puzzle difficulty: Hard");
      FUN_005bfb40(0x1d20d30,uVar2);
    }
    else {
      uVar2 = FUN_00531090("Puzzle difficulty: Normal");
      FUN_005bfb40(0x1d20d30,uVar2);
      *(uint *)(0x01CCF390 + 0xe4) = 0;
    }
    if (*(int *)(0x01CCF390 + 0xe8) == 1) {
      uVar2 = FUN_00531090("Combat difficulty: Hard");
      FUN_005bfb40(0x1d20e30,uVar2);
    }
    else {
      uVar2 = FUN_00531090("Combat difficulty: Normal");
      FUN_005bfb40(0x1d20e30,uVar2);
      *(uint *)(0x01CCF390 + 0xe8) = 0;
    }
    uVar2 = FUN_00531090("Credits");
    FUN_005bfb40(0x1d20f30,uVar2);
    *(uint *)(0x01CCF390 + 0xd4) = 9;
    uVar2 = FUN_00531090("Option Menu");
    uVar2 = FUN_00509e20(0x1d21030,6,&local_14,0x32,uVar2);
    FUN_005acff0();
    switch(uVar2) {
    case 0:
      FUN_0050aa90();
      break;
    case 1:
      FUN_0050ba70();
      break;
    case 2:
      _DAT_01d1ee90 = *(int *)(0x01CCF390 + 0xd0);
      FUN_0050b470();
      if (_DAT_01d1ee90 != *(int *)(0x01CCF390 + 0xd0)) {
        FUN_0050d640();
      }
      break;
    case 5:
      FUN_004d8e50(0x01CCF390);
      FUN_0057d6a0(0x02C82A60);
    }
    iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
  } while (iVar1 == 0);
  if (param_1 == 0) {
    FUN_004f5760();
    return;
  }
  FUN_00521d50(0x1d1e380);
  FUN_0057d800(0x02C82A60);
  FUN_004f5760();
  return;
}
