// Name: FUN_00470750
// Address: 00470750
// Address Range: [[00470750, 004707c8]]
// Convention: unknown
// Signature: void FUN_00470750(int param_1)

#include "nocturne.h"

void FUN_00470750(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1ff78) != 0) {
    if (*(int *)(param_1 + 0x1ff5c) != 4) {
      FUN_00494340(0x01C3EB54,"?actionPending = %d\ndoc.cpp line %d" + 1,*(int *)(param_1 + 0x1ff5c),
                   0xe77);
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
