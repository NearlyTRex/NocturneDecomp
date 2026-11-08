// Name: FUN_00579240
// Address: 00579240
// Address Range: [[00579240, 005792d2]]
// Convention: unknown
// Signature: int FUN_00579240(undefined4 *param_1,undefined4 param_2,undefined1 *param_3,undefined4 *param_4)

#include "nocturne.h"

int FUN_00579240(uint *param_1,uint param_2,byte *param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  byte *puStack_3c;
  uint uStack_38;
  byte *puStack_34;
  uint *puStack_30;
  byte local_2c [24];
  uint local_14;
  
  bVar4 = 0;
  puStack_34 = local_2c;
  if (param_4 == (uint *)0x0) {
    puStack_30 = param_4;
    puStack_34 = param_3;
    uStack_38 = param_2;
    puStack_3c = (byte *)*param_1;
    iVar1 = Ordinal_16();
  }
  else {
    puStack_30 = &local_14;
    uStack_38 = 0;
    puStack_3c = param_3;
    local_14 = 0x10;
    iVar1 = Ordinal_17(*param_1,param_2);
    if (0 < iVar1) {
      puVar2 = (uint *)FUN_00578e80(local_2c,&puStack_3c);
      *param_4 = *puVar2;
      param_4[(uint)bVar4 * -2 + 1] = puVar2[(uint)bVar4 * -2 + 1];
    }
  }
  if (iVar1 == 0) {
    iVar1 = -2;
  }
  else if ((iVar1 == -1) && (iVar3 = Ordinal_111(), iVar3 == 0x2733)) {
    return 0;
  }
  return iVar1;
}
