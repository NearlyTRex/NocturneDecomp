// Name: FUN_0043cca0
// Address: 0043cca0
// Address Range: [[0043cca0, 0043ccba]]
// Convention: unknown
// Signature: undefined4 FUN_0043cca0(int param_1)

#include "nocturne.h"

uint FUN_0043cca0(int param_1)

{
  if ((*(int *)(param_1 + 0x70) == 1) && (*(int *)(param_1 + 0x2cc) == 0)) {
    return 1;
  }
  return 0;
}
