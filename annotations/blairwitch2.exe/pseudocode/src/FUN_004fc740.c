// Name: FUN_004fc740
// Address: 004fc740
// Address Range: [[004fc740, 004fc775]]
// Convention: unknown
// Signature: int FUN_004fc740(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_004fc740(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1114);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_005b8130(iVar1,param_2);
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar1 + 0x14c);
  }
  return iVar1;
}
