// Name: FUN_00516a10
// Address: 00516a10
// Address Range: [[00516a10, 00516a8d]]
// Convention: unknown
// Signature: int FUN_00516a10(undefined4 param_1)

#include "nocturne.h"

int FUN_00516a10(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00553d90(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_FUN_005a1c34;
  FUN_00454580(iVar1 + 0x150,"shoveit.kfm");
  *(uint *)(iVar1 + 0x2d8) = 7;
  *(uint *)(iVar1 + 0x564) = 0xffffffff;
  *(uint *)(iVar1 + 0x560) = 0;
  *(uint *)(iVar1 + 0x2d0) = 0;
  *(uint *)(iVar1 + 0x2d4) = 0;
  *(uint *)(iVar1 + 0x2dc) = 0;
  *(uint *)(iVar1 + 0x2e0) = 0x40a00000;
  *(uint *)(iVar1 + 0x2e4) = 0;
  return iVar1;
}
