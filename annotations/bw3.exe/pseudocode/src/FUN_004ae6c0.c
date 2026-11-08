// Name: FUN_004ae6c0
// Address: 004ae6c0
// Address Range: [[004ae6c0, 004ae70d]]
// Convention: unknown
// Signature: int FUN_004ae6c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004ae6c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (*(int *)(0x01ED78C8 + 0x14d164) <= iVar2) {
      return 0;
    }
    iVar1 = FUN_0040c840(*(uint *)(iVar3 + 0x14d168 + 0x01ED78C8),_DAT_01d1a118);
    if ((iVar1 != 0) && (param_1 == *(int *)(iVar1 + 0x2a08))) break;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return iVar1;
}
