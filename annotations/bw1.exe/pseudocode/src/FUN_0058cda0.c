// Name: FUN_0058cda0
// Address: 0058cda0
// Address Range: [[0058cda0, 0058ce18]]
// Convention: unknown
// Signature: void FUN_0058cda0(int param_1)

#include "nocturne.h"

void FUN_0058cda0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1ff78) != 0) {
    if (*(int *)(param_1 + 0x1ff5c) != 4) {
      FUN_00494340(0x01C3EB54,"@actionPending = %d\nstranger.cpp line %d" + 1,*(int *)(param_1 + 0x1ff5c),
                   0xdba);
    }
    iVar1 = FUN_0040c600(*(uint *)(param_1 + 0x1ff78),DAT_007c33e0);
    if (iVar1 != 0) {
      FUN_0040e210(iVar1,param_1 + 0x1fae8);
    }
    *(uint *)(param_1 + 0x1ff5c) = 1;
    *(uint *)(param_1 + 0x1ff78) = 0;
  }
  return;
}
