// Name: FUN_00572f50
// Address: 00572f50
// Address Range: [[00572f50, 00572f82]]
// Convention: unknown
// Signature: undefined4 FUN_00572f50(int param_1)

#include "nocturne.h"

uint FUN_00572f50(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x78))(param_1);
  if ((iVar1 != 0) && (*(int *)(0x01D182F0 + 0x1008) == 0)) {
    return 0;
  }
  uVar2 = FUN_004254b0(param_1);
  return uVar2;
}
