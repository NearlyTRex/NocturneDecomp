// Name: FUN_0051f330
// Address: 0051f330
// Address Range: [[0051f330, 0051f4a6]]
// Convention: unknown
// Signature: void FUN_0051f330(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051f330(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte local_80 [100];
  int local_1c;
  int local_18;
  uint local_14;
  
  if (*(float *)(param_1 + 0xc280) <= 0.0) {
    iVar5 = 0;
    local_1c = param_2 + 0x60;
    iVar4 = param_2 * 4;
    do {
      iVar1 = 0x01CCF390;
      iVar3 = *(int *)(iVar4 + 0x1d33bec) + 1;
      *(int *)(iVar4 + 0x1d33bec) = iVar3;
      if (((*(int *)(iVar1 + 0x1c) != 0) || (param_2 != 1)) || (iVar3 != 6)) {
        FUN_005bfb40(local_80,"mobster-cheese-%c-%c-%d.wav",*(byte *)(param_1 + 0xc27c),
                     local_1c,*(uint *)(iVar4 + 0x1d33bec));
        local_14 = FUN_0057d9e0(0x02C82A60,local_80);
        *(uint *)(param_1 + 0xc280) = local_14;
        if (0.0 < *(float *)(param_1 + 0xc280)) break;
        *(uint *)(iVar4 + 0x1d33bec) = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    if (0.0 < *(float *)(param_1 + 0xc280)) {
      *(float *)(param_1 + 0xc280) = *(float *)(param_1 + 0xc280) + _DAT_005e9f82;
      iVar4 = FUN_005735a0(*(uint *)(param_1 + 0xc308));
      if (iVar4 == 0) {
        iVar5 = 0;
        iVar4 = 0;
        local_18 = 0;
        while( true ) {
          if (*(int *)(0x01E82168 + 0x150fec) <= iVar5) {
            uVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,local_80);
            *(uint *)(param_1 + 0xc300) = uVar2;
            return;
          }
          iVar1 = FUN_0040c600(*(uint *)(0x01E82168 + local_18 + 0x150ff0),_DAT_01d33c68);
          if (((iVar1 != 0) && (iVar1 = FUN_005735a0(*(uint *)(iVar1 + 0xc300)), iVar1 != 0))
             && (iVar4 = iVar4 + 1, 3 < iVar4)) break;
          local_18 = local_18 + 4;
          iVar5 = iVar5 + 1;
        }
      }
    }
  }
  return;
}
