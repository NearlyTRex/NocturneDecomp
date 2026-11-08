// Name: FUN_00579820
// Address: 00579820
// Address Range: [[00579820, 00579874]]
// Convention: unknown
// Signature: undefined4 FUN_00579820(undefined4 param_1)

#include "nocturne.h"

uint FUN_00579820(uint param_1)

{
  int iVar1;
  uint uVar2;
  byte *puStack_108;
  uint uStack_104;
  byte auStack_100 [252];
  uint uStack_4;
  
  uStack_104 = 0x2b8;
  puStack_108 = (byte *)0x0;
  FUN_005b77c0(param_1);
  puStack_108 = auStack_100;
  uStack_104 = 0x100;
  iVar1 = Ordinal_57();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_00579720(&puStack_108,uStack_4);
  return uVar2;
}
