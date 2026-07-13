// Name: FUN_0054bfd0
// Address: 0054bfd0
// Address Range: [[0054bfd0, 0054c03c]]
// Convention: unknown
// Signature: int FUN_0054bfd0(int param_1)

#include "nocturne.h"

int FUN_0054bfd0(int param_1)

{
  uint uVar1;
  int iVar2;
  byte local_1c [24];
  
  if (*(int *)(param_1 + 0xbee0) == 3) {
    return 0;
  }
  FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_1c,0);
  iVar2 = FUN_0041ceb0(uVar1);
  if (iVar2 != 0) {
    FUN_004544d0(param_1 + 0xbd28,*(uint *)(param_1 + 0xbd24),0xffffffff);
  }
  FUN_00409f60(param_1);
  return iVar2;
}
