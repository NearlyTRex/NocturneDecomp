// Name: FUN_004d90a0
// Address: 004d90a0
// Address Range: [[004d90a0, 004d90d5]]
// Convention: unknown
// Signature: int FUN_004d90a0(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_004d90a0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x514);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_00564520(iVar1,param_2);
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar1 + 0x144);
  }
  return iVar1;
}
