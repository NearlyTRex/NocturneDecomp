// Name: FUN_00465330
// Address: 00465330
// Address Range: [[00465330, 00465368]]
// Convention: unknown
// Signature: void FUN_00465330(int param_1)

#include "nocturne.h"

void FUN_00465330(int param_1)

{
  if ((*(int *)(0x01D81080 + 0x1008) == 0) && (*(int *)(param_1 + 0x2e0) == 0)) {
    FUN_00463d80(param_1);
    FUN_0053ee00(0x01ED78C8,param_1);
    return;
  }
  return;
}
