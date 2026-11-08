// Name: FUN_00435180
// Address: 00435180
// Address Range: [[00435180, 004351a6]]
// Convention: unknown
// Signature: undefined4 FUN_00435180(int param_1)

#include "nocturne.h"

uint FUN_00435180(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 4) != 0)) &&
     (piVar1 = *(int **)(param_1 + 8), piVar1 != (int *)0x0)) {
    uVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
    return uVar2;
  }
  return 0;
}
