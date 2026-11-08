// Name: FUN_004286d0
// Address: 004286d0
// Address Range: [[004286d0, 004287d4]]
// Convention: unknown
// Signature: int FUN_004286d0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004286d0(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_004a0410(param_1);
  *(byte ***)(iVar2 + 0x154) = &PTR_FUN_005fd484;
  FUN_00569f50(iVar2 + 0x158,"@carvedman1.dfm" + 1);
  *(uint *)(iVar2 + 0x2fec) = 0x3f000000;
  uVar3 = _DAT_005fd470;
  *(uint *)(iVar2 + 0x2ff0) = 0x3f800000;
  *(uint *)(iVar2 + 0xc278) = 0;
  uVar1 = _DAT_005fd474;
  *(uint *)(iVar2 + 0xc274) = 0;
  *(uint *)(iVar2 + 0x2ff4) = uVar3;
  *(uint *)(iVar2 + 0x2ff8) = uVar1;
  uVar3 = FUN_0040cc00(0x3e99999a,0x3f800000);
  *(uint *)(iVar2 + 0xc268) = uVar3;
  uVar3 = FUN_0040cc60(0,0xff);
  *(uint *)(iVar2 + 0xc270) = 0;
  *(uint *)(iVar2 + 0xc280) = 0;
  *(uint *)(iVar2 + 0xc2d4) = 0;
  *(uint *)(iVar2 + 0xc284) = 0;
  *(uint *)(iVar2 + 0xc2e4) = 0;
  *(uint *)(iVar2 + 0xc2e8) = 0;
  *(uint *)(iVar2 + 0xc2ec) = 0;
  *(uint *)(iVar2 + 0xc264) = 0;
  *(uint *)(iVar2 + 0x252c) = 0x40490fdb;
  *(uint *)(iVar2 + 0xc26c) = uVar3;
  return iVar2;
}
