// Name: FUN_004f8b40
// Address: 004f8b40
// Address Range: [[004f8b40, 004f8baf]]
// Convention: unknown
// Signature: int FUN_004f8b40(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004f8b40(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_0042ac20(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005e2a44;
  FUN_0054eae0(iVar3 + 0x158,0x5c916c);
  *(uint *)(iVar3 + 0x326c) = 0x3fe00000;
  uVar1 = _DAT_005e2a38;
  *(uint *)(iVar3 + 0x3270) = 0x40600000;
  uVar2 = _DAT_005e2a3c;
  *(uint *)(iVar3 + 0xcdd4) = 0;
  *(uint *)(iVar3 + 0x252c) = 0x3f490fdb;
  *(uint *)(iVar3 + 0x3274) = uVar1;
  *(uint *)(iVar3 + 0x3278) = uVar2;
  return iVar3;
}
