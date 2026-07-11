// Name: FUN_00456d40
// Address: 00456d40
// Address Range: [[00456d40, 00456d7b]]
// Convention: unknown
// Signature: void FUN_00456d40(int param_1)

#include "nocturne.h"

void FUN_00456d40(int param_1)

{
  if (*(int *)(param_1 + 0x10c) == 0) {
    FUN_00456d80(param_1);
    return;
  }
  FindClose(*(HANDLE *)(param_1 + 0x110));
  *(uint *)(param_1 + 0x10c) = 0;
  FUN_00456d80(param_1);
  return;
}
