// Name: FUN_00485c50
// Address: 00485c50
// Address Range: [[00485c50, 00485cbf]]
// Convention: unknown
// Signature: int FUN_00485c50(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00485c50(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_004a0410(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005ff4a4;
  FUN_00569f50(iVar3 + 0x158,"drone.dfm");
  *(uint *)(iVar3 + 0x2fec) = 0x3f400000;
  uVar1 = _DAT_005ff48c;
  *(uint *)(iVar3 + 0x2ff0) = 0x3fc00000;
  uVar2 = _DAT_005ff490;
  *(uint *)(iVar3 + 0x27a0) = 1;
  *(uint *)(iVar3 + 0x2538) = 0x42960000;
  *(uint *)(iVar3 + 0x2ff4) = uVar1;
  *(uint *)(iVar3 + 0x2ff8) = uVar2;
  return iVar3;
}
