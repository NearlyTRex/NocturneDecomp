// Name: FUN_004c4cc0
// Address: 004c4cc0
// Address Range: [[004c4cc0, 004c4d02]]
// Convention: unknown
// Signature: void FUN_004c4cc0(int param_1)

#include "nocturne.h"

void FUN_004c4cc0(int param_1)

{
  ulonglong uVar1;
  
  if (*(int *)(param_1 + 0x2fc) == 0) {
    return;
  }
  uVar1 = FUN_005567c0(*(int *)(param_1 + 0x2fc),1);
  *(ulonglong *)(param_1 + 0x300) = uVar1;
  return;
}
