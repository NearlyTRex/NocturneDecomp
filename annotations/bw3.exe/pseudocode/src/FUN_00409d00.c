// Name: FUN_00409d00
// Address: 00409d00
// Address Range: [[00409d00, 00409d4f]]
// Convention: unknown
// Signature: undefined4 FUN_00409d00(int param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

uint FUN_00409d00(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x20) = *param_2;
  *(uint *)(param_1 + 0x24) = param_2[1];
  *(uint *)(param_1 + 0x28) = param_2[2];
  if ((uint *)(param_1 + 0x30) != param_3) {
    *(uint *)(param_1 + 0x30) = *param_3;
    *(uint *)(param_1 + 0x34) = param_3[1];
    *(uint *)(param_1 + 0x38) = param_3[2];
  }
  uVar1 = FUN_004088f0(param_1);
  return uVar1;
}
