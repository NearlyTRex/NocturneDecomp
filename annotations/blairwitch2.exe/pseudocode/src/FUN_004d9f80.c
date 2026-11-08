// Name: FUN_004d9f80
// Address: 004d9f80
// Address Range: [[004d9f80, 004d9feb]]
// Convention: unknown
// Signature: int FUN_004d9f80(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d9f80(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0x1cf0208;
  iVar4 = 0;
  iVar1 = FUN_004d9db0(param_1);
  if (0 < _DAT_01cf0200) {
    do {
      iVar2 = FUN_005b8130(iVar1 + 0x78,iVar3);
      if (iVar2 == 0) {
        return iVar3 + 0x200;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x300;
    } while (iVar4 < _DAT_01cf0200);
  }
  FUN_005b7790(0x1cee2b0,"Add to dict: %s",iVar1 + 0x78);
  return 0x1cee2b0;
}
