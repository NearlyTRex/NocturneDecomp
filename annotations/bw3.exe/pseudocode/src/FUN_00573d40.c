// Name: FUN_00573d40
// Address: 00573d40
// Address Range: [[00573d40, 00573d53]]
// Convention: unknown
// Signature: undefined4 FUN_00573d40(int param_1)

#include "nocturne.h"

uint FUN_00573d40(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(uint *)(param_1 + 0x10);
}
