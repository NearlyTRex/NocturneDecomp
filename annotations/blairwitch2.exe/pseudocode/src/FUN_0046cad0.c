// Name: FUN_0046cad0
// Address: 0046cad0
// Address Range: [[0046cad0, 0046cb3d]]
// Convention: unknown
// Signature: undefined4 FUN_0046cad0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0046cad0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_2 + 0x13) & 0x80) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 4) == 0) {
    FUN_0051c720(param_2,1);
  }
  iVar1 = (*(int *)(param_2 + 0x10) >> 0x10) * 4;
  iVar2 = (*(int *)(param_2 + 0x14) >> 0x10) * 4;
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_2 + 8) < *(int *)(*(int *)(&DAT_01c2b64c + iVar2) + iVar1)) {
      return 0;
    }
  }
  else if (*(int *)(param_2 + 8) < *(int *)(*(int *)(&DAT_01c2a38c + iVar2) + iVar1)) {
    return 0;
  }
  return 1;
}
