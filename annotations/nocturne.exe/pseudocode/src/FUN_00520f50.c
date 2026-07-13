// Name: FUN_00520f50
// Address: 00520f50
// Address Range: [[00520f50, 005210ad]]
// Convention: unknown
// Signature: undefined4 FUN_00520f50(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00520f50(int param_1,uint *param_2)

{
  uint *puVar1;
  byte local_48 [12];
  byte local_3c [12];
  byte local_30 [12];
  byte local_24 [12];
  byte local_18 [12];
  
  if (*(int *)(param_1 + 0xbd64) == 3) {
    return 0;
  }
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_30,_DAT_02da8a74);
  if (param_2 != puVar1) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
  }
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_24,_DAT_02da8a88);
  if (param_2 + 3 != puVar1) {
    param_2[3] = *puVar1;
    param_2[4] = puVar1[1];
    param_2[5] = puVar1[2];
  }
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_48,_DAT_02da8a8c);
  if (param_2 + 6 != puVar1) {
    param_2[6] = *puVar1;
    param_2[7] = puVar1[1];
    param_2[8] = puVar1[2];
  }
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_3c,_DAT_02da8a98);
  if (param_2 + 9 != puVar1) {
    param_2[9] = *puVar1;
    param_2[10] = puVar1[1];
    param_2[0xb] = puVar1[2];
  }
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_18,_DAT_02da8aa0);
  if (param_2 + 0xc != puVar1) {
    param_2[0xc] = *puVar1;
    param_2[0xd] = puVar1[1];
    param_2[0xe] = puVar1[2];
  }
  return 5;
}
