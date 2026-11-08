// Name: FUN_00492b80
// Address: 00492b80
// Address Range: [[00492b80, 00492b93]]
// Convention: unknown
// Signature: bool FUN_00492b80(int param_1)

#include "nocturne.h"

bool FUN_00492b80(int param_1)

{
  return *(int *)(param_1 + 0x430) == 0;
}
