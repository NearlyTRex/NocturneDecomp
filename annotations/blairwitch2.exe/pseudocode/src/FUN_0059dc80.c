// Name: FUN_0059dc80
// Address: 0059dc80
// Address Range: [[0059dc80, 0059dcae]]
// Convention: unknown
// Signature: void FUN_0059dc80(int param_1)

#include "nocturne.h"

void FUN_0059dc80(int param_1)

{
  if (*(int *)(param_1 + 0x83c) == 0) {
    FUN_0059da70(param_1);
    return;
  }
  FUN_0059d960(param_1,*(int *)(param_1 + 0x83c));
  FUN_0059da70(param_1);
  return;
}
