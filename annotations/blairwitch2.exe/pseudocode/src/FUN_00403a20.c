// Name: FUN_00403a20
// Address: 00403a20
// Address Range: [[00403a20, 00403a3f]]
// Convention: unknown
// Signature: void FUN_00403a20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403a20(int param_1)

{
  _DAT_01c35e64 =
       FUN_004e28b0(*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),
                    *(uint *)(param_1 + 0x10));
  return;
}
