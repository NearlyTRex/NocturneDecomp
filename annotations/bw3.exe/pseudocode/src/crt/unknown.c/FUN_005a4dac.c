// Name: crt_unknown.c_FUN_005a4dac
// Address: 005a4dac
// Address Range: [[005a4dac, 005a4de6]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a4dac(int *param_1)

#include "nocturne.h"

void FUN_005a4dac(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 4) + (int)param_1;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar1 = FUN_005abc3c(*(int *)(iVar1 + 4));
    if (iVar1 != 0) {
      return;
    }
    iVar1 = (int)param_1 + *(int *)(*param_1 + 4);
  }
  FUN_005abc85(iVar1,2);
  return;
}
