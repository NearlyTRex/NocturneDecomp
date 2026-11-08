// Name: FUN_0045ef40
// Address: 0045ef40
// Address Range: [[0045ef40, 0045efb1]]
// Convention: unknown
// Signature: void FUN_0045ef40(int param_1)

#include "nocturne.h"

void FUN_0045ef40(int param_1)

{
  int iVar1;
  
  FUN_0044fd00(param_1 + 0x2b4);
  FUN_00408a80(param_1);
  iVar1 = FUN_005b8c30(param_1 + 0x444,"defaultDoorOpen");
  if (iVar1 == 0) {
    FUN_005b7790(param_1 + 0x444,"%sOpen",param_1);
  }
  iVar1 = FUN_005b8c30(param_1 + 0x4a8,"defaultDoorClose");
  if (iVar1 != 0) {
    return;
  }
  FUN_005b7790(param_1 + 0x4a8,"%sClose",param_1);
  return;
}
