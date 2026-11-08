// Name: FUN_00516250
// Address: 00516250
// Address Range: [[00516250, 0051626e]]
// Convention: unknown
// Signature: int FUN_00516250(int param_1)

#include "nocturne.h"

int FUN_00516250(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0x1c) + 1) * 4 +
         *(int *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c) * 4);
}
