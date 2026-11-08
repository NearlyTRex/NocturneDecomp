// Name: FUN_00465ca0
// Address: 00465ca0
// Address Range: [[00465ca0, 00465cdb]]
// Convention: unknown
// Signature: void FUN_00465ca0(int param_1)

#include "nocturne.h"

void FUN_00465ca0(int param_1)

{
  if (*(int *)(param_1 + 0x10c) == 0) {
    FUN_00465ce0(param_1);
    return;
  }
  FindClose(*(HANDLE *)(param_1 + 0x110));
  *(uint *)(param_1 + 0x10c) = 0;
  FUN_00465ce0(param_1);
  return;
}
