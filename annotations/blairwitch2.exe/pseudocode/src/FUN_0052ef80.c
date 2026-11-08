// Name: FUN_0052ef80
// Address: 0052ef80
// Address Range: [[0052ef80, 0052f29c]]
// Convention: unknown
// Signature: void FUN_0052ef80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052ef80(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_18;
  
  if (*(int *)(0x01CB6900 + 0x24) != 0) {
    if (*(int *)(0x01CB6900 + 0x228) != 0) {
      local_38 = FUN_0058e9e0();
    }
    local_28 = 0;
    _DAT_01fc9c68 = 0;
    if (0 < _DAT_01fc9608) {
      local_30 = 0;
      do {
        iVar3 = *(int *)(local_30 + 0x1fc960c);
        if (*(int *)(iVar3 + 0x1cb4) != 0) {
          uVar1 = *(uint *)(iVar3 + 0x140);
          FUN_0044a020(iVar3,0);
          FUN_0044ab60();
          if (*(int *)(iVar3 + 0x1cd0) != 0) {
            FUN_0052d0e0(param_1,*(uint *)(iVar3 + 0x140));
            FUN_005332f0(param_1);
            FUN_0052dc10(param_1);
            local_18 = 0;
            iVar4 = param_1;
            if (0 < *(int *)(param_1 + 0x15f6f8)) {
              do {
                iVar5 = 0;
                (**(code **)(*(int *)(*(int *)(iVar4 + 0x15f6fc) + 0x2b0) + 0x18))();
                if (0 < *(int *)(param_1 + 0x15acc8)) {
                  do {
                    FUN_005341b0(param_1,iVar5);
                    (**(code **)(*(int *)(*(int *)(iVar4 + 0x15f6fc) + 0x2b0) + 0x18))();
                    iVar5 = iVar5 + 1;
                    FUN_005342e0();
                  } while (iVar5 < *(int *)(param_1 + 0x15acc8));
                }
                FUN_0046b920(DAT_0060b280);
                local_18 = local_18 + 1;
                iVar4 = iVar4 + 4;
              } while (local_18 < *(int *)(param_1 + 0x15f6f8));
            }
            FUN_004c9440();
            FUN_0049c780();
          }
          FUN_0044a2d0();
          *(uint *)(iVar3 + 0x140) = uVar1;
        }
        local_30 = local_30 + 4;
        local_28 = local_28 + 1;
      } while (local_28 < _DAT_01fc9608);
    }
    local_24 = 0;
    if (0 < _DAT_01fc8e84) {
      local_2c = 0;
      do {
        iVar3 = *(int *)(&DAT_01fc8e88 + local_2c);
        if (*(int *)(iVar3 + 0x1cb4) != 0) {
          FUN_0044a020(iVar3,1);
          FUN_005332f0(param_1);
          iVar5 = 0;
          iVar4 = param_1;
          _DAT_01511ce4 = iVar3;
          if (0 < *(int *)(param_1 + 0x15f6f8)) {
            do {
              iVar3 = *(int *)(iVar4 + 0x15f6fc);
              iVar2 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x18))();
              if (iVar2 == 0) {
                *(byte *)(iVar3 + 0x144) = *(byte *)(iVar3 + 0x144) & 0xfd;
              }
              else {
                *(byte *)(iVar3 + 0x144) = *(byte *)(iVar3 + 0x144) | 0x22;
              }
              iVar5 = iVar5 + 1;
              FUN_0046b920(DAT_0060b280);
              iVar4 = iVar4 + 4;
            } while (iVar5 < *(int *)(param_1 + 0x15f6f8));
          }
          FUN_004c9440();
          FUN_0049c780();
          _DAT_01511ce4 = 0;
          FUN_0044a2d0();
        }
        local_2c = local_2c + 4;
        local_24 = local_24 + 1;
      } while (local_24 < _DAT_01fc8e84);
    }
    if (*(int *)(0x01CB6900 + 0x228) != 0) {
      iVar3 = FUN_0058e9e0();
      FUN_00436710(PTR_DAT_00609ed0,"@renderStaticLights : %3.2f ms\n" + 1,
                   ((double)(iVar3 - local_38) * _DAT_005e58a2 * _DAT_005e58aa * _DAT_005e58b2) /
                   (double)*(float *)(0x01CB6900 + 0x284));
      return;
    }
  }
  return;
}
