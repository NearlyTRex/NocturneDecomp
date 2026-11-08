// Name: FUN_00575760
// Address: 00575760
// Address Range: [[00575760, 005757f3]]
// Convention: unknown
// Signature: int FUN_00575760(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00575760(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_005899d0(param_1);
  *(byte **)(iVar2 + 0x2b0) = &DAT_005fce74;
  FUN_0044fd70(iVar2 + 0x2b4,"tommygun.kfm");
  *(uint *)(iVar2 + 0x434) = 0;
  *(uint *)(iVar2 + 0x438) = 0;
  *(uint *)(iVar2 + 0x43c) = 4;
  *(uint *)(iVar2 + 0x440) = 1;
  *(uint *)(iVar2 + 0x444) = 0x42c80000;
  *(uint *)(iVar2 + 0x448) = 1;
  *(uint *)(iVar2 + 0x6d8) = 0;
  uVar1 = _DAT_005fce6c;
  *(uint *)(iVar2 + 0x6dc) = 0;
  *(uint *)(iVar2 + 0x6d4) = 0;
  *(uint *)(iVar2 + 0x6c0) = uVar1;
  return iVar2;
}
