// Name: FUN_0051b6c0
// Address: 0051b6c0
// Address Range: [[0051b6c0, 0051b6f5]]
// Convention: unknown
// Signature: int FUN_0051b6c0(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_0051b6c0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1118);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_005c04e0(iVar1,param_2);
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar1 + 0x14c);
  }
  return iVar1;
}
