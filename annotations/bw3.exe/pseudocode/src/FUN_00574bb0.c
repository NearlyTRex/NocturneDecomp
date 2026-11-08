// Name: FUN_00574bb0
// Address: 00574bb0
// Address Range: [[00574bb0, 00574c1e]]
// Convention: unknown
// Signature: undefined4 FUN_00574bb0(int param_1,undefined1 param_2)

#include "nocturne.h"

uint FUN_00574bb0(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      return 0xffffffff;
    }
    iVar2 = *(int *)(param_1 + 0xc) + 0x4000;
    iVar1 = FUN_005a3e50(*(uint *)(param_1 + 4),iVar2);
    if (iVar1 == 0) {
      return 0xfffffffe;
    }
    *(int *)(param_1 + 4) = iVar1;
    *(int *)(param_1 + 8) = iVar2;
  }
  *(byte *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc)) = param_2;
  iVar2 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar2;
  if (*(int *)(param_1 + 0x10) <= iVar2) {
    *(int *)(param_1 + 0x10) = iVar2;
  }
  return 0;
}
