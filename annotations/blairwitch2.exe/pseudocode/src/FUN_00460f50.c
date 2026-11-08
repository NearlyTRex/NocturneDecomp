// Name: FUN_00460f50
// Address: 00460f50
// Address Range: [[00460f50, 00460f8b]]
// Convention: unknown
// Signature: void FUN_00460f50(int param_1)

#include "nocturne.h"

void FUN_00460f50(int param_1)

{
  if (*(int *)(param_1 + 0x10c) == 0) {
    FUN_00460f90(param_1);
    return;
  }
  FindClose(*(HANDLE *)(param_1 + 0x110));
  *(uint *)(param_1 + 0x10c) = 0;
  FUN_00460f90(param_1);
  return;
}
