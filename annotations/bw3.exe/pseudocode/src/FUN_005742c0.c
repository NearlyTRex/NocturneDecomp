// Name: FUN_005742c0
// Address: 005742c0
// Address Range: [[005742c0, 005742ec]]
// Convention: unknown
// Signature: uint FUN_005742c0(int param_1)

#include "nocturne.h"

uint FUN_005742c0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    return 0xffffffff;
  }
  return (uint)*(byte *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc));
}
