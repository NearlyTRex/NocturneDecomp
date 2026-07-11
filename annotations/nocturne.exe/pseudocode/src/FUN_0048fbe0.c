// Name: FUN_0048fbe0
// Address: 0048fbe0
// Address Range: [[0048fbe0, 0048fc2d]]
// Convention: unknown
// Signature: int FUN_0048fbe0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0048fbe0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (*(int *)(0x01E57284 + 0x14cd6c) <= iVar2) {
      return 0;
    }
    iVar1 = FUN_0040d890(*(uint *)(iVar3 + 0x14cd70 + 0x01E57284),_DAT_01c70750);
    if ((iVar1 != 0) && (param_1 == *(int *)(iVar1 + 0x2a00))) break;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return iVar1;
}
