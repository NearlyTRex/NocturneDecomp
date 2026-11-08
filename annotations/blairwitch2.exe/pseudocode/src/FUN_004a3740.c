// Name: FUN_004a3740
// Address: 004a3740
// Address Range: [[004a3740, 004a37b8]]
// Convention: unknown
// Signature: undefined4 FUN_004a3740(int param_1,int param_2)

#include "nocturne.h"

uint FUN_004a3740(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *(uint *)(param_1 + 0x140) = *(uint *)(param_2 + 0x10);
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x150)) {
    do {
      iVar1 = FUN_004a32e0(*(uint *)(iVar2 + 0x154),param_2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x150));
  }
  iVar2 = FUN_004a28b0(param_2,&DAT_005d5dc8);
  if (-1 < iVar2) {
    *(int *)(param_1 + 0x144) = *(int *)(param_2 + 0x10) - *(int *)(param_1 + 0x140);
    return 1;
  }
  return 0;
}
