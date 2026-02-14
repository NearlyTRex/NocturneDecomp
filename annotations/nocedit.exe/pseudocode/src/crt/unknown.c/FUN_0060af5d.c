// Name: crt_unknown.c_FUN_0060af5d
// Address: 0060af5d
// Address Range: [[0060af5d, 0060b079]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_0060af5d(int param_1,int *param_2,int param_3)

#include "nocturne.h"

int FUN_0060af5d(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int local_3c;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  *param_2 = *param_2 + 8;
  FUN_00603dc8();
  *(uint *)(param_3 + 0x28) = local_34;
  *(uint *)(param_3 + 0x2c) = local_30;
  *(uint *)(param_3 + 0x30) = local_2c;
  *(uint *)(param_3 + 0x34) = local_28;
  if (local_3c < 0) {
    iVar1 = *(int *)(param_3 + 0x20);
    *(int *)(param_3 + 0x20) = iVar1 + 1;
    *(byte *)(param_1 + iVar1) = 0x2d;
  }
  else if ((*(byte *)(param_3 + 0x1e) & 4) == 0) {
    if ((*(byte *)(param_3 + 0x1e) & 2) != 0) {
      iVar1 = *(int *)(param_3 + 0x20);
      *(int *)(param_3 + 0x20) = iVar1 + 1;
      *(byte *)(param_1 + iVar1) = 0x20;
    }
  }
  else {
    iVar1 = *(int *)(param_3 + 0x20);
    *(int *)(param_3 + 0x20) = iVar1 + 1;
    *(byte *)(param_1 + iVar1) = 0x2b;
  }
  return param_1;
}
