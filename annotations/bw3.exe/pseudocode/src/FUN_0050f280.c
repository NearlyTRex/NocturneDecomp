// Name: FUN_0050f280
// Address: 0050f280
// Address Range: [[0050f280, 0050f29e]]
// Convention: unknown
// Signature: int FUN_0050f280(int param_1)

#include "nocturne.h"

int FUN_0050f280(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0x1c) + 1) * 4 +
         *(int *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c) * 4);
}
