// Name: FUN_005112b0
// Address: 005112b0
// Address Range: [[005112b0, 0051133c]]
// Convention: unknown
// Signature: void FUN_005112b0(int param_1)

#include "nocturne.h"

void FUN_005112b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00408890(param_1);
  if (*(char *)(param_1 + 0x2f0) != '\0') {
    FUN_00444970(param_1 + 0x310,param_1 + 0x2f0);
    *(uint *)(param_1 + 0x318) = 0;
  }
  FUN_00511340(param_1);
  FUN_00462580(param_1 + 0x158);
  iVar2 = param_1;
  do {
    while (iVar1 = *(int *)(iVar2 + 0x51c), iVar1 != 0) {
      *(uint *)(iVar2 + 0x51c) = 0;
      FUN_00512aa0(param_1,iVar1);
      iVar2 = iVar2 + 0x34;
      if (iVar2 == param_1 + 0x208) {
        return;
      }
    }
    iVar2 = iVar2 + 0x34;
  } while (iVar2 != param_1 + 0x208);
  return;
}
