// Name: FUN_00419c50
// Address: 00419c50
// Address Range: [[00419c50, 00419e92]]
// Convention: unknown
// Signature: int FUN_00419c50(int param_1)

#include "nocturne.h"

int FUN_00419c50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  FUN_00487ec0(param_1);
  FUN_0040b8e0(param_1 + 0x10a60,"@speed" + 1);
  FUN_0040bae0(param_1 + 0x2b4,"modelName");
  if (0x00000005 < 4) {
    FUN_0040b8e0(param_1 + 0x10a70,"guardDistance");
  }
  iVar1 = FUN_0040bb60(param_1 + 0x2b4,"motion state");
  if (1 < 0x00000005) {
    FUN_0040b730(param_1 + 0x10b0c,"deathEvent");
    FUN_0040b8e0(param_1 + 0x10b70,"recombineTime");
    FUN_0040b960(param_1 + 0x11118,"blownUp");
    FUN_0040b8e0(param_1 + 0x1111c,"param");
    FUN_0040b960(param_1 + 0x10b74,"boxCount");
    FUN_0040bc50(param_1 + 0x2b4,"partStatus");
    iVar5 = 0;
    iVar1 = param_1;
    if (0 < *(int *)(param_1 + 0x10b74)) {
      iVar2 = param_1 + 0x10b78;
      iVar3 = param_1 + 0x10bbc;
      iVar7 = param_1 + 0x10bb0;
      iVar8 = param_1 + 0x10b90;
      iVar4 = param_1 + 0x10ba0;
      iVar6 = param_1 + 0x10b84;
      do {
        FUN_0040b4b0(iVar5 * 0x48 + iVar2,"boxListPos",iVar2,iVar4,iVar3);
        FUN_0040b4b0(iVar6,"boxListOrient");
        FUN_0040b690(iVar8,"boxListDestOrient");
        FUN_0040b690(iVar4,"boxListStartOrient");
        FUN_0040b4b0(iVar7,"sourcePos");
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x48;
        iVar8 = iVar8 + 0x48;
        FUN_0040b9e0(iVar3,"boxListPart");
        iVar7 = iVar7 + 0x48;
        iVar3 = iVar3 + 0x48;
        iVar4 = iVar4 + 0x48;
      } while (iVar5 < *(int *)(param_1 + 0x10b74));
    }
  }
  if ((2 < 0x00000005) && (0x00000005 < 5)) {
    iVar1 = FUN_0040b8e0(param_1 + 0x10aec,"victimHeight");
    return iVar1;
  }
  return iVar1;
}
