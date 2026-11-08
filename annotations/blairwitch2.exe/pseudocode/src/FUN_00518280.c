// Name: FUN_00518280
// Address: 00518280
// Address Range: [[00518280, 0051830c]]
// Convention: unknown
// Signature: void FUN_00518280(int param_1)

#include "nocturne.h"

void FUN_00518280(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00408a80(param_1);
  if (*(char *)(param_1 + 0x44c) != '\0') {
    FUN_00438af0(param_1 + 0x46c,param_1 + 0x44c);
    *(uint *)(param_1 + 0x474) = 0;
  }
  FUN_00518310(param_1);
  FUN_0044fd00(param_1 + 0x2b4);
  iVar2 = param_1;
  do {
    while (iVar1 = *(int *)(iVar2 + 0x678), iVar1 != 0) {
      *(uint *)(iVar2 + 0x678) = 0;
      FUN_00519a60(param_1,iVar1);
      iVar2 = iVar2 + 0x34;
      if (iVar2 == param_1 + 0x208) {
        return;
      }
    }
    iVar2 = iVar2 + 0x34;
  } while (iVar2 != param_1 + 0x208);
  return;
}
