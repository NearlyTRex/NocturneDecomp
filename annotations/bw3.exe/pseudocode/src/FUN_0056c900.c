// Name: FUN_0056c900
// Address: 0056c900
// Address Range: [[0056c900, 0056c9f7]]
// Convention: unknown
// Signature: undefined4 FUN_0056c900(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0056c900(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1028 [1016];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float *pfStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar3 = 0;
  pfStack_20 = (float *)(param_1 + 0x20);
  iStack_18 = 0;
  iStack_1c = 0;
  do {
    if (*(int *)(0x01ED78C8 + 0x14f0a8) <= iStack_1c) {
      return 0;
    }
    iVar1 = *(int *)(0x01ED78C8 + iStack_18 + 0x14f0ac);
    if (iVar1 != param_1) {
      iVar2 = FUN_0040c790(iVar1,param_2);
      if (iVar2 != 0) {
        fStack_34 = *(float *)(iVar1 + 0x20) - *pfStack_20;
        fStack_30 = *(float *)(iVar1 + 0x24) - pfStack_20[1];
        fStack_2c = *(float *)(iVar1 + 0x28) - pfStack_20[2];
        fStack_40 = fStack_34;
        *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8) =
             *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8);
        *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)((int)&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        fStack_3c = fStack_3c * (float)_DAT_005d6553;
        if (SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c) <
            *(float *)(param_1 + 0xcddc)) {
          *(int *)(param_1 + 0xcde4) = iVar1;
          return 1;
        }
      }
    }
    iStack_1c = iStack_1c + 1;
    iStack_18 = iStack_18 + 4;
  } while( true );
}
