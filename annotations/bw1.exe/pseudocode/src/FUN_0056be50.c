// Name: FUN_0056be50
// Address: 0056be50
// Address Range: [[0056be50, 0056bee7]]
// Convention: unknown
// Signature: int FUN_0056be50(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0056be50(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_004a0410(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_00605964;
  FUN_00569f50(iVar3 + 0x158,0x5f2857);
  *(uint *)(iVar3 + 0xc268) = 0;
  *(uint *)(iVar3 + 0xc26c) = 0x42c80000;
  *(uint *)(iVar3 + 0x2fec) = 0x3f19999a;
  *(uint *)(iVar3 + 0x2ff0) = 0x3f666666;
  *(uint *)(iVar3 + 0xc29c) = 0;
  uVar1 = _DAT_0060594c;
  *(uint *)(iVar3 + 0xc2a0) = 0;
  uVar2 = _DAT_00605950;
  *(uint *)(iVar3 + 0xc2a4) = 0;
  *(uint *)(iVar3 + 0xc2a8) = 1;
  *(uint *)(iVar3 + 0x2ff4) = uVar1;
  *(uint *)(iVar3 + 0x2ff8) = uVar2;
  return iVar3;
}
