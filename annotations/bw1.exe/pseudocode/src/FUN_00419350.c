// Name: FUN_00419350
// Address: 00419350
// Address Range: [[00419350, 004193b5]]
// Convention: unknown
// Signature: void FUN_00419350(int param_1)

#include "nocturne.h"

void FUN_00419350(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00408850(param_1);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x18c)) {
    iVar2 = param_1 + 400;
    do {
      iVar1 = iVar1 + 1;
      FUN_00484f00(DAT_00612560,iVar2);
      iVar2 = iVar2 + 0x18;
    } while (iVar1 < *(int *)(param_1 + 0x18c));
  }
  if ((*(int *)(param_1 + 0xcb4) == 0) && (*(int *)(param_1 + 0x74c) == 0)) {
    return;
  }
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
