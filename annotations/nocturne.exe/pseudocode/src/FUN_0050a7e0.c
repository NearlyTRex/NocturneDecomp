// Name: FUN_0050a7e0
// Address: 0050a7e0
// Address Range: [[0050a7e0, 0050a96b]]
// Convention: unknown
// Signature: void FUN_0050a7e0(int param_1)

#include "nocturne.h"

void FUN_0050a7e0(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte auStack_44 [24];
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  int local_14;
  
  iVar5 = *(int *)(param_1 + 0x15f2fc) + -1;
  if (-1 < iVar5) {
    local_14 = iVar5 * 4 + param_1;
    do {
      iVar1 = *(int *)(local_14 + 0x15f300);
      if (*(int *)(iVar1 + 0xfc) == 0) {
        *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) & 0xf7;
      }
      else {
        puVar2 = (uint *)(**(code **)(*(int *)(iVar1 + 0x14c) + 0x14))(iVar1,auStack_44);
        if (&uStack_2c != puVar2) {
          uStack_2c = *puVar2;
          uStack_28 = puVar2[1];
          uStack_24 = puVar2[2];
        }
        if (&uStack_20 != puVar2 + 3) {
          uStack_20 = puVar2[3];
          uStack_1c = puVar2[4];
          uStack_18 = puVar2[5];
        }
        FUN_0050adc0(param_1,iVar1 + 0x20,iVar1 + 0x30,&uStack_2c,&uStack_20,iVar1 + 0x3c);
        FUN_0050e340(param_1,*(uint *)(iVar1 + 0x108),*(uint *)(iVar1 + 0x10c),
                     *(uint *)(iVar1 + 0x110));
        iVar3 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0xc))(iVar1);
        if (iVar3 == 0) {
          *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) & 0xf7;
        }
        else {
          *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) | 8;
        }
        iVar3 = 0;
        FUN_00461050(DAT_005ae704,1);
        if (0 < *(int *)(param_1 + 0x15a8cc)) {
          do {
            FUN_0050e080(param_1,iVar3,0);
            iVar4 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0xc))(iVar1);
            if (iVar4 != 0) {
              *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) | 8;
            }
            FUN_00461050(DAT_005ae704,1);
            iVar3 = iVar3 + 1;
            FUN_0050e190(param_1);
          } while (iVar3 < *(int *)(param_1 + 0x15a8cc));
        }
        FUN_0050e340(param_1,0x10000,0x10000,0x10000);
      }
      local_14 = local_14 + -4;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}
