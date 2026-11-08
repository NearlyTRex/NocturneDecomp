// Name: FUN_00520d20
// Address: 00520d20
// Address Range: [[00520d20, 00520d98]]
// Convention: unknown
// Signature: void FUN_00520d20(int param_1)

#include "nocturne.h"

void FUN_00520d20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20b98) != 0) {
    if (*(int *)(param_1 + 0x20b64) != 4) {
      FUN_0047cee0(0x01C5B0E4,"?actionPending = %d\nprye.cpp line %d" + 1,*(int *)(param_1 + 0x20b64),
                   0x108a);
    }
    iVar1 = FUN_0040c840(*(uint *)(param_1 + 0x20b98),DAT_007dfe14);
    if (iVar1 != 0) {
      FUN_0040e720(iVar1,param_1 + 0x206e8);
    }
    *(uint *)(param_1 + 0x20b64) = 1;
    *(uint *)(param_1 + 0x20b98) = 0;
  }
  return;
}
