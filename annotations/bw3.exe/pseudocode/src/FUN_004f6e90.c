// Name: FUN_004f6e90
// Address: 004f6e90
// Address Range: [[004f6e90, 004f6ec5]]
// Convention: unknown
// Signature: int FUN_004f6e90(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_004f6e90(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x143c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_005a3260(iVar1,param_2);
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar1 + 0x14c);
  }
  return iVar1;
}
