// Name: FUN_004c0970
// Address: 004c0970
// Address Range: [[004c0970, 004c09bd]]
// Convention: unknown
// Signature: int FUN_004c0970(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c0970(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (*(int *)(0x01E82168 + 0x14d164) <= iVar2) {
      return 0;
    }
    iVar1 = FUN_0040c600(*(uint *)(iVar3 + 0x14d168 + 0x01E82168),_DAT_01cc80c0);
    if ((iVar1 != 0) && (param_1 == *(int *)(iVar1 + 0x2a08))) break;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return iVar1;
}
