// Name: FUN_00573010
// Address: 00573010
// Address Range: [[00573010, 00573107]]
// Convention: unknown
// Signature: undefined4 FUN_00573010(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00573010(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1028 [1016];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float *local_20;
  int local_1c;
  int local_18;
  
  bVar3 = 0;
  local_20 = (float *)(param_1 + 0x20);
  local_18 = 0;
  local_1c = 0;
  do {
    if (*(int *)(0x01E661B8 + 0x14f0a8) <= local_1c) {
      return 0;
    }
    iVar1 = *(int *)(0x01E661B8 + local_18 + 0x14f0ac);
    if (iVar1 != param_1) {
      iVar2 = FUN_0040c840(iVar1,param_2);
      if (iVar2 != 0) {
        local_34 = *(float *)(iVar1 + 0x20) - *local_20;
        local_30 = *(float *)(iVar1 + 0x24) - local_20[1];
        local_2c = *(float *)(iVar1 + 0x28) - local_20[2];
        local_40 = local_34;
        *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8) =
             *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8);
        *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)((int)&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        local_3c = local_3c * (float)_DAT_005ec53a;
        if (SQRT(local_38 * local_38 + local_40 * local_40 + local_3c * local_3c) <
            *(float *)(param_1 + 0x10a70)) {
          *(int *)(param_1 + 0x10a78) = iVar1;
          return 1;
        }
      }
    }
    local_1c = local_1c + 1;
    local_18 = local_18 + 4;
  } while( true );
}
