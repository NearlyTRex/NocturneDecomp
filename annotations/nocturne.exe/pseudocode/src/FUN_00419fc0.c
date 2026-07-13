// Name: FUN_00419fc0
// Address: 00419fc0
// Address Range: [[00419fc0, 0041a0e3]]
// Convention: unknown
// Signature: undefined4 FUN_00419fc0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_00419fc0(int param_1,uint *param_2)

{
  uint *puVar1;
  byte local_48 [12];
  byte local_3c [12];
  byte local_30 [12];
  byte local_24 [12];
  byte local_18 [12];
  
  if (*(int *)(param_1 + 0xc344) != 0) {
    return 0;
  }
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_30,DAT_00764794);
  if (param_2 != puVar1) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
  }
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_24,DAT_007647a8);
  if (param_2 + 3 != puVar1) {
    param_2[3] = *puVar1;
    param_2[4] = puVar1[1];
    param_2[5] = puVar1[2];
  }
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_18,DAT_007647ac);
  if (param_2 + 6 != puVar1) {
    param_2[6] = *puVar1;
    param_2[7] = puVar1[1];
    param_2[8] = puVar1[2];
  }
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_3c,DAT_007647b8);
  if (param_2 + 9 != puVar1) {
    param_2[9] = *puVar1;
    param_2[10] = puVar1[1];
    param_2[0xb] = puVar1[2];
  }
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_48,DAT_007647bc);
  if (param_2 + 0xc != puVar1) {
    param_2[0xc] = *puVar1;
    param_2[0xd] = puVar1[1];
    param_2[0xe] = puVar1[2];
  }
  return 5;
}
