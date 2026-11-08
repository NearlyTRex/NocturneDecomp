// Name: FUN_0055dad0
// Address: 0055dad0
// Address Range: [[0055dad0, 0055dbe1]]
// Convention: unknown
// Signature: int FUN_0055dad0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0055dad0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = FUN_004a0410(param_1);
  *(byte ***)(iVar4 + 0x154) = &PTR_FUN_006051b4;
  FUN_00569f50(iVar4 + 0x158,"shadowbeast.dfm");
  *(uint *)(iVar4 + 0x2fec) = 0x3f800000;
  *(uint *)(iVar4 + 0x2ff0) = 0x40000000;
  *(uint *)(iVar4 + 0xc30c) = 1;
  *(uint *)(iVar4 + 0xc268) = 0;
  *(uint *)(iVar4 + 0xc290) = 1;
  *(uint *)(iVar4 + 0xc2b8) = 0;
  *(uint *)(iVar4 + 0xc2bc) = 0x40a00000;
  *(uint *)(iVar4 + 0xc2c0) = 0;
  *(uint *)(iVar4 + 0xc2c4) = 0;
  *(uint *)(iVar4 + 0xc2cc) = 0;
  *(uint *)(iVar4 + 0xc300) = 0x3f800000;
  *(uint *)(iVar4 + 0xc2c8) = 0;
  *(uint *)(iVar4 + 0xc2f0) = 0;
  *(uint *)(iVar4 + 0xc2e8) = 0;
  *(uint *)(iVar4 + 0xc2ec) = 0;
  uVar1 = _DAT_00605194;
  *(uint *)(iVar4 + 0xc2f8) = 0;
  uVar2 = _DAT_00605198;
  *(uint *)(iVar4 + 0xc2f4) = 0x41200000;
  uVar3 = _DAT_0060519c;
  *(uint *)(iVar4 + 0xc304) = 0;
  *(uint *)(iVar4 + 0xc308) = 0;
  *(uint *)(iVar4 + 0x2ff4) = uVar1;
  *(uint *)(iVar4 + 0x2ff8) = uVar2;
  *(uint *)(iVar4 + 0xc2d0) = uVar3;
  return iVar4;
}
