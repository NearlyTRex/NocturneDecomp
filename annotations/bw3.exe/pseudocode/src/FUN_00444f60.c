// Name: FUN_00444f60
// Address: 00444f60
// Address Range: [[00444f60, 00444fcf]]
// Convention: unknown
// Signature: int FUN_00444f60(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00444f60(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00488fd0(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005ddbc4;
  FUN_0054eae0(iVar3 + 0x158,0x5b98b0);
  *(uint *)(iVar3 + 0x326c) = 0x3fe00000;
  uVar1 = _DAT_005ddbac;
  *(uint *)(iVar3 + 0x3270) = 0x40600000;
  uVar2 = _DAT_005ddbb0;
  *(uint *)(iVar3 + 0xd05c) = 0;
  *(uint *)(iVar3 + 0x252c) = 0x3f490fdb;
  *(uint *)(iVar3 + 0x3274) = uVar1;
  *(uint *)(iVar3 + 0x3278) = uVar2;
  return iVar3;
}
