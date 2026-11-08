// Name: FUN_00573af0
// Address: 00573af0
// Address Range: [[00573af0, 00573b5f]]
// Convention: unknown
// Signature: undefined4 FUN_00573af0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_00573af0(int param_1,int param_2)

{
  int iVar1;
  
  if ((((-1 < param_2) && (param_2 < 0x100)) && (*(int *)(param_1 + 4) != 0)) &&
     (0 < *(int *)(param_1 + 0x10))) {
    iVar1 = *(int *)(param_1 + 0x10) + -1;
    *(int *)(param_1 + 0x10) = iVar1;
    if (((param_2 == 10) && (*(int *)(param_1 + 0x28) == 0)) && (0 < iVar1)) {
      iVar1 = FUN_00573b90(param_1,iVar1);
      if (iVar1 == 10) {
        iVar1 = FUN_00573b90(param_1,*(int *)(param_1 + 0x10) + -1);
        if (iVar1 == 0xd) {
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
          return 1;
        }
      }
    }
    return 1;
  }
  return 0;
}
