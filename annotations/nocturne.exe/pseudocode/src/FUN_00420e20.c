// Name: FUN_00420e20
// Address: 00420e20
// Address Range: [[00420e20, 00420eae]]
// Convention: unknown
// Signature: undefined4 FUN_00420e20(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_00420e20(int param_1,uint *param_2)

{
  uint *puVar1;
  byte local_1c [12];
  byte local_10 [12];
  
  if (*(int *)(param_1 + *(int *)(param_1 + 0xbd44) * 4 + 0x2290) != 0) {
    puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_10,DAT_00764b2c);
    if (param_2 != puVar1) {
      *param_2 = *puVar1;
      param_2[1] = puVar1[1];
      param_2[2] = puVar1[2];
    }
    return 1;
  }
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_1c,DAT_00764b50);
  if (param_2 != puVar1) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
  }
  return 1;
}
