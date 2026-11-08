// Name: FUN_00548750
// Address: 00548750
// Address Range: [[00548750, 005487d3]]
// Convention: unknown
// Signature: void FUN_00548750(int param_1)

#include "nocturne.h"

void FUN_00548750(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  
  uVar1 = FUN_005501e0(param_1 + 0x355c);
  iVar3 = 0;
  FUN_0054a2c0(param_1,uVar1);
  if (0 < *(int *)(param_1 + 0xb8)) {
    local_14 = param_1 + 0xc0;
    do {
      iVar2 = 0;
      iVar4 = local_14;
      if (0 < *(int *)(param_1 + 0xbc)) {
        do {
          iVar2 = iVar2 + 1;
          FUN_0046e5e0(DAT_005f2afc,iVar4);
          iVar4 = iVar4 + 0x48;
        } while (iVar2 < *(int *)(param_1 + 0xbc));
      }
      iVar3 = iVar3 + 1;
      local_14 = local_14 + 0x240;
    } while (iVar3 < *(int *)(param_1 + 0xb8));
  }
  return;
}
