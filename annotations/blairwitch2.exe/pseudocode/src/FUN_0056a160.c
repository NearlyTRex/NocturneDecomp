// Name: FUN_0056a160
// Address: 0056a160
// Address Range: [[0056a160, 0056a1d8]]
// Convention: unknown
// Signature: void FUN_0056a160(int param_1)

#include "nocturne.h"

void FUN_0056a160(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x25608) != 0) {
    if (*(int *)(param_1 + 0x256a4) != 4) {
      FUN_0047bdf0(0x01C25594,"@actionPending = %d\nstranger.cpp line %d" + 1,*(int *)(param_1 + 0x256a4),
                   0xd45);
    }
    iVar1 = FUN_0040c8f0(*(uint *)(param_1 + 0x25608),DAT_007bc3e0);
    if (iVar1 != 0) {
      FUN_0040e670(iVar1,param_1 + 0x2437c);
    }
    *(uint *)(param_1 + 0x256a4) = 1;
    *(uint *)(param_1 + 0x25608) = 0;
  }
  return;
}
