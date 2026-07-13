// Name: FUN_0043d0a0
// Address: 0043d0a0
// Address Range: [[0043d0a0, 0043d11e]]
// Convention: unknown
// Signature: int FUN_0043d0a0(int param_1)

#include "nocturne.h"

int FUN_0043d0a0(int param_1)

{
  uint uVar1;
  int iVar2;
  byte local_24 [24];
  uint uStack_c;
  
  FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_24,0);
  iVar2 = FUN_0041ceb0(uVar1);
  if (iVar2 == 0) {
    FUN_00409f60(param_1);
    return 0;
  }
  uStack_c = FUN_0043d810(param_1,0xffffffff);
  FUN_004544d0(param_1 + 0x150,uStack_c);
  FUN_00409f60(param_1);
  return iVar2;
}
