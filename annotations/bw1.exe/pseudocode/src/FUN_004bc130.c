// Name: FUN_004bc130
// Address: 004bc130
// Address Range: [[004bc130, 004bc1a1]]
// Convention: unknown
// Signature: bool FUN_004bc130(int param_1,int param_2)

#include "nocturne.h"

bool FUN_004bc130(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *(uint *)(param_1 + 0x140) = *(uint *)(param_2 + 0x10);
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x150)) {
    do {
      iVar1 = FUN_004bbd10(*(uint *)(iVar2 + 0x154),param_2);
      if (iVar1 == 0) {
        return false;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x150));
  }
  iVar2 = FUN_004bb290(param_2,&DAT_005dfc39);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x144) = *(int *)(param_2 + 0x10) - *(int *)(param_1 + 0x140);
  }
  return iVar2 != 0;
}
