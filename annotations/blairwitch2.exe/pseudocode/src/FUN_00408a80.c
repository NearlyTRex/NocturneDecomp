// Name: FUN_00408a80
// Address: 00408a80
// Address Range: [[00408a80, 00408abf] [00408ac1, 00408ad1]]
// Convention: unknown
// Signature: undefined4 FUN_00408a80(int param_1)

#include "nocturne.h"

uint FUN_00408a80(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(uint *)(param_1 + 0x114) = 0;
  *(uint *)(param_1 + 0x11c) = 0;
  FUN_00408ae0(param_1);
  iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0xcc))(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_005121a0(iVar1,param_1 + 0x20,1);
  return uVar2;
}
