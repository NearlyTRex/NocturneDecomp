// Name: FUN_00544440
// Address: 00544440
// Address Range: [[00544440, 0054446f]]
// Convention: unknown
// Signature: undefined4 FUN_00544440(int param_1)

#include "nocturne.h"

uint FUN_00544440(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x68))(param_1);
  if ((iVar1 != 0) && (*(int *)(0x01CC9450 + 4) == 0)) {
    return 0;
  }
  uVar2 = FUN_00426440(param_1);
  return uVar2;
}
