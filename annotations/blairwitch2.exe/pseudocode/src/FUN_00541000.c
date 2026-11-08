// Name: FUN_00541000
// Address: 00541000
// Address Range: [[00541000, 00541019]]
// Convention: unknown
// Signature: int FUN_00541000(int param_1)

#include "nocturne.h"

int FUN_00541000(int param_1)

{
  return (*(int *)(param_1 + 0x1d1f8) * 0x10 + 0x18) * *(int *)(param_1 + 0x1e00c);
}
