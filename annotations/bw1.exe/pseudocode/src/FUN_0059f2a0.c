// Name: FUN_0059f2a0
// Address: 0059f2a0
// Address Range: [[0059f2a0, 0059f2f4]]
// Convention: unknown
// Signature: undefined4 FUN_0059f2a0(undefined4 param_1)

#include "nocturne.h"

uint FUN_0059f2a0(uint param_1)

{
  int iVar1;
  uint uVar2;
  byte *puStack_108;
  uint uStack_104;
  byte auStack_100 [252];
  uint uStack_4;
  
  uStack_104 = 0x2b8;
  puStack_108 = (byte *)0x0;
  FUN_005bfb70(param_1);
  puStack_108 = auStack_100;
  uStack_104 = 0x100;
  iVar1 = Ordinal_57();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_0059f1a0(&puStack_108,uStack_4);
  return uVar2;
}
