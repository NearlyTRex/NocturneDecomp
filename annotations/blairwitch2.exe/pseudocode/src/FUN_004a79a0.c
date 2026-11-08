// Name: FUN_004a79a0
// Address: 004a79a0
// Address Range: [[004a79a0, 004a79ed]]
// Convention: unknown
// Signature: int FUN_004a79a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a79a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (*(int *)(0x01E661B8 + 0x14d164) <= iVar2) {
      return 0;
    }
    iVar1 = FUN_0040c8f0(*(uint *)(iVar3 + 0x14d168 + 0x01E661B8),_DAT_01caf628);
    if ((iVar1 != 0) && (param_1 == *(int *)(iVar1 + 0x2b64))) break;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return iVar1;
}
