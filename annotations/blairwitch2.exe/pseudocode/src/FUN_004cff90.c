// Name: FUN_004cff90
// Address: 004cff90
// Address Range: [[004cff90, 004d006a]]
// Convention: unknown
// Signature: void FUN_004cff90(int param_1,int param_2)

#include "nocturne.h"

void FUN_004cff90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + param_2 * 0x78 + 0x2620);
  if (iVar1 != 0) {
    iVar2 = FUN_005b8c30(iVar1,"?63Ravinammo01" + 1);
    if (iVar2 == 0) {
      FUN_00490f80(0x01C38BC0,"searchedravine",1);
    }
    iVar2 = FUN_005b8c30(iVar1,"63Ravinammo02");
    if (iVar2 == 0) {
      FUN_00490f80(0x01C38BC0,"searchedravine",1);
    }
    iVar2 = FUN_005b8c30(iVar1,"63Ravinfood01");
    if (iVar2 == 0) {
      FUN_00490f80(0x01C38BC0,"searchedravine",1);
    }
    FUN_004dadb0(param_1 + 0x2437c,iVar1,1,0);
    *(uint *)(param_1 + 0x2620 + param_2 * 0x78) = 0;
  }
  return;
}
