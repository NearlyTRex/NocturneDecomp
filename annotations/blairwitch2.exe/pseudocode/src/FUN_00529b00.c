// Name: FUN_00529b00
// Address: 00529b00
// Address Range: [[00529b00, 00529b21]]
// Convention: unknown
// Signature: void FUN_00529b00(int param_1)

#include "nocturne.h"

void FUN_00529b00(int param_1)

{
  FUN_00529990(param_1,*(uint *)(param_1 + 4));
  *(uint *)(param_1 + 0x48) = 0;
  *(uint *)(param_1 + 0x4c) = 0;
  return;
}
