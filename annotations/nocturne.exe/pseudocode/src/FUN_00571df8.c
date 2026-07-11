// Name: FUN_00571df8
// Address: 00571df8
// Address Range: [[00571df8, 00571e74]]
// Convention: unknown
// Signature: void FUN_00571df8(int param_1,uint param_2,uint param_3,int param_4)

#include "nocturne.h"

void FUN_00571df8(int param_1,uint param_2,uint param_3,int param_4)

{
  uint *puVar1;
  byte bVar2;
  
  if ((*(byte *)(param_1 + 0x24) & 2) != 0) {
    FUN_00571ef0(*(uint *)(param_1 + 4));
  }
  if ((param_2 != 0) && (param_2 < param_3)) {
    *(uint *)(param_1 + 4) = param_2;
    *(uint *)(param_1 + 8) = param_3;
    puVar1 = (uint *)(param_1 + 0x24);
    *(byte *)puVar1 = *(byte *)puVar1 & 0xfd;
    *puVar1 = *puVar1 | (uint)(param_4 != 0) * 2;
    *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xfe;
    return;
  }
  *(uint *)(param_1 + 4) = 0;
  bVar2 = *(byte *)(param_1 + 0x24) & 0xfc;
  *(byte *)(param_1 + 0x24) = bVar2;
  *(uint *)(param_1 + 8) = 0;
  *(byte *)(param_1 + 0x24) = bVar2 | 1;
  return;
}
