// Name: FUN_005023e0
// Address: 005023e0
// Address Range: [[005023e0, 00502443]]
// Convention: unknown
// Signature: void FUN_005023e0(int *param_1)

#include "nocturne.h"

void FUN_005023e0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    if (*(int *)(0x01CB6900 + 0x230) == 0x29a) {
      *(uint *)(0x01CB6900 + 0x230) = 0;
    }
    iVar3 = 0x1d1c7cc;
    iVar2 = 0;
    do {
      puVar1 = (uint *)((int)&PTR_s_blairwitch_00_00618340 + iVar2);
      iVar2 = iVar2 + 4;
      FUN_0040d5a0(iVar3,*puVar1,0x280,0x11a);
      iVar3 = iVar3 + 0x14;
    } while (iVar2 != 300);
    *param_1 = 1;
  }
  return;
}
