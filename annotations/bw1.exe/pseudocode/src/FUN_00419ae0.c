// Name: FUN_00419ae0
// Address: 00419ae0
// Address Range: [[00419ae0, 00419afe]]
// Convention: unknown
// Signature: undefined4 FUN_00419ae0(int param_1)

#include "nocturne.h"

uint FUN_00419ae0(int param_1)

{
  if ((*(int *)(param_1 + 0x158) == 0) && (*(int *)(param_1 + 0xcc4) == 0)) {
    return 3;
  }
  return 0;
}
