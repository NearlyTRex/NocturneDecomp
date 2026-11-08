// Name: FUN_0041c580
// Address: 0041c580
// Address Range: [[0041c580, 0041c680]]
// Convention: unknown
// Signature: int FUN_0041c580(int param_1)

#include "nocturne.h"

int FUN_0041c580(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_38 [6];
  uint local_20 [6];
  
  bVar4 = 0;
  iVar1 = FUN_0044fd20(param_1 + 0x2b4);
  if ((*(int *)(iVar1 + 0x110) < 1) ||
     ((iVar1 = FUN_0046b960(DAT_0060b280), iVar1 == 0 && (*(int *)(param_1 + 0xfc) != 0)))) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x750) == 0) && (iVar1 = FUN_0046b960(DAT_0060b280), iVar1 != 0)) {
    return 0;
  }
  FUN_0046b2b0(0x01BA5C50,param_1 + 0x20);
  FUN_0046b350(0x01BA5C50,param_1 + 0x30,0);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar2 = local_38;
  puVar3 = local_20;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_0041a840(local_20);
  if (iVar1 != 0) {
    FUN_0044fcc0(param_1 + 0x2b4,*(uint *)(param_1 + 0x46c),0xffffffff);
  }
  thunk_FUN_004e9810(0x01BA5C50);
  return iVar1;
}
