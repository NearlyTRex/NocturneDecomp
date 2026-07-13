// Name: FUN_00506940
// Address: 00506940
// Address Range: [[00506940, 00506a5d]]
// Convention: unknown
// Signature: undefined4 FUN_00506940(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00506940(int param_1,uint *param_2)

{
  uint *puVar1;
  byte local_4c [12];
  byte local_40 [12];
  byte local_34 [12];
  byte local_28 [12];
  byte local_1c [12];
  
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_34,_DAT_01e57218);
  if (param_2 != puVar1) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
  }
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_28,_DAT_01e5722c);
  if (param_2 + 3 != puVar1) {
    param_2[3] = *puVar1;
    param_2[4] = puVar1[1];
    param_2[5] = puVar1[2];
  }
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_1c,_DAT_01e57230);
  if (param_2 + 6 != puVar1) {
    param_2[6] = *puVar1;
    param_2[7] = puVar1[1];
    param_2[8] = puVar1[2];
  }
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_40,_DAT_01e5723c);
  if (param_2 + 9 != puVar1) {
    param_2[9] = *puVar1;
    param_2[10] = puVar1[1];
    param_2[0xb] = puVar1[2];
  }
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_4c,_DAT_01e57244);
  if (param_2 + 0xc == puVar1) {
    return 5;
  }
  param_2[0xc] = *puVar1;
  param_2[0xd] = puVar1[1];
  param_2[0xe] = puVar1[2];
  return 5;
}
