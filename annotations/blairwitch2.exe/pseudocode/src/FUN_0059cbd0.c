// Name: FUN_0059cbd0
// Address: 0059cbd0
// Address Range: [[0059cbd0, 0059ccb3]]
// Convention: unknown
// Signature: int FUN_0059cbd0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0059cbd0(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_005899d0(param_1);
  *(uint *)(iVar2 + 0x2b0) = 0x5fe8e4;
  FUN_0044fd70(iVar2 + 0x2b4,"lantern.kfm");
  FUN_0044fd00(iVar2 + 0x2b4);
  *(uint *)(iVar2 + 0x434) = 0;
  *(uint *)(iVar2 + 0x438) = 0;
  *(uint *)(iVar2 + 0x43c) = 0xc;
  *(uint *)(iVar2 + 0x440) = 0;
  *(uint *)(iVar2 + 0x444) = 0;
  *(uint *)(iVar2 + 0x448) = 0;
  *(uint *)(iVar2 + 0x6c4) = 0;
  *(uint *)(iVar2 + 0x6d0) = 1;
  *(uint *)(iVar2 + 0xfc) = 1;
  *(uint *)(iVar2 + 0x6d4) = 0;
  *(uint *)(iVar2 + 0x700) = 0;
  *(uint *)(iVar2 + 0x6f8) = 0;
  uVar1 = _DAT_005fe8dc;
  *(uint *)(iVar2 + 0x704) = 0x1cb3950;
  *(uint *)(iVar2 + 0x6fc) = 0;
  *(uint *)(iVar2 + 0x6c0) = uVar1;
  FUN_00449d90(*(uint *)(iVar2 + 0x704));
  return iVar2;
}
