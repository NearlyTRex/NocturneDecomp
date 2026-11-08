// Name: FUN_0041d0d0
// Address: 0041d0d0
// Address Range: [[0041d0d0, 0041d312]]
// Convention: unknown
// Signature: int FUN_0041d0d0(int param_1)

#include "nocturne.h"

int FUN_0041d0d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  FUN_004a0520(param_1);
  FUN_0040b5f0(param_1 + 0xc1d0,"@speed" + 1);
  FUN_0040b7f0(param_1 + 0x158,"modelName");
  if (0x00000005 < 4) {
    FUN_0040b5f0(param_1 + 0xc1e0,"guardDistance");
  }
  iVar1 = FUN_0040b870(param_1 + 0x158,"motion state");
  if (1 < 0x00000005) {
    FUN_0040b440(param_1 + 0xc27c,"deathEvent");
    FUN_0040b5f0(param_1 + 0xc2e0,"recombineTime");
    FUN_0040b670(param_1 + 0xc888,"blownUp");
    FUN_0040b5f0(param_1 + 0xc88c,"param");
    FUN_0040b670(param_1 + 0xc2e4,"boxCount");
    FUN_0040b960(param_1 + 0x158,"partStatus");
    iVar5 = 0;
    iVar1 = param_1;
    if (0 < *(int *)(param_1 + 0xc2e4)) {
      iVar2 = param_1 + 0xc2e8;
      iVar3 = param_1 + 0xc32c;
      iVar7 = param_1 + 0xc320;
      iVar8 = param_1 + 0xc300;
      iVar4 = param_1 + 0xc310;
      iVar6 = param_1 + 0xc2f4;
      do {
        FUN_0040b1c0(iVar5 * 0x48 + iVar2,"boxListPos",iVar2,iVar4,iVar3);
        FUN_0040b1c0(iVar6,"boxListOrient");
        FUN_0040b3a0(iVar8,"boxListDestOrient");
        FUN_0040b3a0(iVar4,"boxListStartOrient");
        FUN_0040b1c0(iVar7,"sourcePos");
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x48;
        iVar8 = iVar8 + 0x48;
        FUN_0040b6f0(iVar3,"boxListPart");
        iVar7 = iVar7 + 0x48;
        iVar3 = iVar3 + 0x48;
        iVar4 = iVar4 + 0x48;
      } while (iVar5 < *(int *)(param_1 + 0xc2e4));
    }
  }
  if ((2 < 0x00000005) && (0x00000005 < 5)) {
    iVar1 = FUN_0040b5f0(param_1 + 0xc25c,"victimHeight");
    return iVar1;
  }
  return iVar1;
}
