// Name: crt_unknown.c_FUN_005b9bbc
// Address: 005b9bbc
// Address Range: [[005b9bbc, 005b9bf6]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005b9bbc(int *param_1)

#include "nocturne.h"

void FUN_005b9bbc(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 4) + (int)param_1;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar1 = FUN_005c0b3c(*(int *)(iVar1 + 4));
    if (iVar1 != 0) {
      return;
    }
    iVar1 = (int)param_1 + *(int *)(*param_1 + 4);
  }
  FUN_005c0b85(iVar1,2);
  return;
}
