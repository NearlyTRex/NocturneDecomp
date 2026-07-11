// Name: FUN_00549010
// Address: 00549010
// Address Range: [[00549010, 0054908a]]
// Convention: unknown
// Signature: int FUN_00549010(undefined4 *param_1,undefined4 param_2,undefined1 *param_3,undefined4 *param_4)

#include "nocturne.h"

int FUN_00549010(uint *param_1,uint param_2,byte *param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  uint uStack_44;
  uint uStack_40;
  byte *puStack_3c;
  uint uStack_38;
  byte *puStack_34;
  uint *puStack_30;
  byte local_2c [24];
  uint local_14;
  
  bVar3 = 0;
  puStack_34 = local_2c;
  if (param_4 == (uint *)0x0) {
    puStack_30 = param_4;
    puStack_34 = param_3;
    uStack_38 = param_2;
    puStack_3c = (byte *)*param_1;
    uStack_40 = 0x549036;
    iVar1 = Ordinal_16();
  }
  else {
    puStack_30 = &local_14;
    uStack_38 = 0;
    puStack_3c = param_3;
    local_14 = 0x10;
    uStack_40 = param_2;
    uStack_44 = *param_1;
    iVar1 = Ordinal_17();
    if (0 < iVar1) {
      puVar2 = (uint *)FUN_00548d50(&puStack_34,&uStack_44);
      *param_4 = *puVar2;
      param_4[(uint)bVar3 * -2 + 1] = puVar2[(uint)bVar3 * -2 + 1];
      return iVar1;
    }
  }
  return iVar1;
}
