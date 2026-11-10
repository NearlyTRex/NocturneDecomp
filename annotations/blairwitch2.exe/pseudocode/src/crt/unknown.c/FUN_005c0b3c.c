// Name: crt_unknown.c_FUN_005c0b3c
// Address: 005c0b3c
// Address Range: [[005c0b3c, 005c0b84]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c0b3c(int param_1)

#include "nocturne.h"

int FUN_005c0b3c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x2c) != -1) {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x28) + 0x20))(param_1);
    uVar1 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = 0xffffffff;
    *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xfe;
    iVar3 = FUN_005c4080(uVar1);
    if ((iVar3 == 0) && (iVar2 != -1)) {
      return param_1;
    }
  }
  return 0;
}
