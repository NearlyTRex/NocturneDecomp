// Name: FUN_00543190
// Address: 00543190
// Address Range: [[00543190, 005431ab]]
// Convention: unknown
// Signature: undefined4 FUN_00543190(int param_1,int param_2)

#include "nocturne.h"

uint FUN_00543190(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc00) < 2) {
    return 0;
  }
  return *(uint *)(param_1 + 0x26fc + param_2 * 4);
}
