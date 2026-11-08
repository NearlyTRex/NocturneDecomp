// Name: FUN_00419070
// Address: 00419070
// Address Range: [[00419070, 004192b2]]
// Convention: unknown
// Signature: int FUN_00419070(int param_1)

#include "nocturne.h"

int FUN_00419070(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  FUN_00489120(param_1);
  FUN_0040b830(param_1 + 0xcdcc,"@speed" + 1);
  FUN_0040ba30(param_1 + 0x158,"modelName");
  if (0x00000005 < 4) {
    FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  }
  iVar1 = FUN_0040bab0(param_1 + 0x158,"motion state");
  if (1 < 0x00000005) {
    FUN_0040b680(param_1 + 0xd07c,"deathEvent");
    FUN_0040b830(param_1 + 0xd0e0,"recombineTime");
    FUN_0040b8b0(param_1 + 0xd0e4,"blownUp");
    FUN_0040b830(param_1 + 0xd694,"param");
    FUN_0040b8b0(param_1 + 0xd0e8,"boxCount");
    FUN_0040bba0(param_1 + 0x158,"partStatus");
    iVar5 = 0;
    iVar1 = param_1;
    if (0 < *(int *)(param_1 + 0xd0e8)) {
      iVar2 = param_1 + 0xd0f0;
      iVar3 = param_1 + 0xd134;
      iVar7 = param_1 + 0xd128;
      iVar8 = param_1 + 0xd108;
      iVar4 = param_1 + 0xd118;
      iVar6 = param_1 + 0xd0fc;
      do {
        FUN_0040b400(iVar5 * 0x48 + iVar2,"boxListPos",iVar2,iVar4,iVar3);
        FUN_0040b400(iVar6,"boxListOrient");
        FUN_0040b5e0(iVar8,"boxListDestOrient");
        FUN_0040b5e0(iVar4,"boxListStartOrient");
        FUN_0040b400(iVar7,"sourcePos");
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x48;
        iVar8 = iVar8 + 0x48;
        FUN_0040b930(iVar3,"boxListPart");
        iVar7 = iVar7 + 0x48;
        iVar3 = iVar3 + 0x48;
        iVar4 = iVar4 + 0x48;
      } while (iVar5 < *(int *)(param_1 + 0xd0e8));
    }
  }
  if ((2 < 0x00000005) && (0x00000005 < 5)) {
    iVar1 = FUN_0040b830(param_1 + 0xce58,"victimHeight");
    return iVar1;
  }
  return iVar1;
}
