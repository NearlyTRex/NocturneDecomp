// Name: crt_unknown.c_FUN_005c16c8
// Address: 005c16c8
// Address Range: [[005c16c8, 005c17c4]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c16c8(int param_1,int param_2)

#include "nocturne.h"

int FUN_005c16c8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = FUN_005c1690(param_2 + 0x76c);
    if (iVar1 == 0) {
      iVar1 = *(int *)(&DAT_006013f4 + *(int *)(param_1 + 0x10) * 2);
      iVar2 = *(int *)(&DAT_006013f2 + *(int *)(param_1 + 0x10) * 2);
    }
    else {
      iVar1 = *(int *)(&DAT_0060140e + *(int *)(param_1 + 0x10) * 2);
      iVar2 = *(int *)(&DAT_0060140c + *(int *)(param_1 + 0x10) * 2);
    }
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 1;
    local_24 = *(uint *)(param_1 + 0x10);
    local_20 = param_2;
    local_14 = 0;
    FUN_005c43e0(&local_34);
    iVar4 = ((*(int *)(param_1 + 0x18) - local_1c) + 7) % 7;
    if (*(int *)(param_1 + 0xc) == 5) {
      iVar3 = 4;
      if ((iVar1 >> 0x10) - (iVar2 >> 0x10) < iVar4 + 0x1d) {
        iVar3 = *(int *)(param_1 + 0xc) + -2;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0xc) + -1;
    }
    return iVar3 * 7 + local_18 + iVar4;
  }
  if (*(int *)(param_1 + 0x20) != 1) {
    return *(int *)(param_1 + 0x1c);
  }
  return *(int *)(param_1 + 0x1c) + -1;
}
