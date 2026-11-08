// Name: FUN_00513c30
// Address: 00513c30
// Address Range: [[00513c30, 00513c9b]]
// Convention: unknown
// Signature: int FUN_00513c30(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_00513c30(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x410) + -1;
  iVar4 = 0;
  if (-1 < iVar3) {
    do {
      while( true ) {
        iVar1 = (iVar4 + iVar3) / 2;
        iVar2 = FUN_005a3260(param_2,*(uint *)(*(int *)(param_1 + 0x414) + iVar1 * 0x14));
        if (iVar2 == 0) {
          return iVar1;
        }
        if (-1 < iVar2) break;
        iVar3 = iVar1 + -1;
        if (iVar3 < iVar4) {
          return -1;
        }
      }
      iVar4 = iVar1 + 1;
    } while (iVar4 <= iVar3);
  }
  return -1;
}
