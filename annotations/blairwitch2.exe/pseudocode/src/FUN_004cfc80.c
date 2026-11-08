// Name: FUN_004cfc80
// Address: 004cfc80
// Address Range: [[004cfc80, 004cfd5b]]
// Convention: unknown
// Signature: undefined4 FUN_004cfc80(int param_1)

#include "nocturne.h"

uint FUN_004cfc80(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x24978 + *(int *)(param_1 + 0x247e4) * 4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_0040c840(iVar1,"N@CHealthItem" + 2);
  if (iVar1 == 0) {
    iVar1 = FUN_0040c840(*(uint *)(param_1 + 0x24978 + *(int *)(param_1 + 0x247e4) * 4),
                         "CAmmo");
    if (iVar1 == 0) {
      iVar1 = FUN_0040c840(*(uint *)(param_1 + 0x24978 + *(int *)(param_1 + 0x247e4) * 4),
                           "CBoxActor");
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x154))(param_1);
        if (iVar1 != 0) {
          return 0;
        }
        iVar1 = FUN_004cfb00(param_1);
        if (iVar1 != 0) {
          return 0;
        }
        uVar2 = FUN_004dc8c0(param_1 + 0x2437c,
                             *(uint *)(param_1 + 0x24978 + *(int *)(param_1 + 0x247e4) * 4));
        return uVar2;
      }
    }
  }
  uVar2 = FUN_004dc8c0(param_1 + 0x2437c,
                       *(uint *)(param_1 + 0x24978 + *(int *)(param_1 + 0x247e4) * 4));
  return uVar2;
}
