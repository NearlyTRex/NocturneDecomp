// Name: FUN_00511880
// Address: 00511880
// Address Range: [[00511880, 00511984]]
// Convention: unknown
// Signature: void FUN_00511880(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

#include "nocturne.h"

void FUN_00511880(int param_1,uint param_2,uint param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14ecb0)) {
    local_14 = param_4 + 3;
    local_10 = param_4 + 4;
    local_1c = param_4 + 7;
    local_18 = param_4 + 8;
    local_20 = param_4 + 9;
    iVar2 = param_1;
    do {
      local_5c = *param_4;
      local_58 = param_4[1];
      local_54 = param_4[2];
      local_50 = *local_14;
      local_4c = *local_10;
      local_48 = param_4[5];
      local_44 = param_4[6];
      local_40 = *local_1c;
      local_3c = *local_18;
      local_38 = *local_20;
      local_34 = param_4[10];
      local_30 = param_4[0xb];
      local_2c = param_4[0xc];
      local_28 = param_4[0xd];
      local_24 = param_4[0xe];
      (**(code **)(*(int *)(*(int *)(iVar2 + 0x14ecb4) + 0x14c) + 0xfc))
                (*(int *)(iVar2 + 0x14ecb4),param_2,param_3,&local_5c,0);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x14ecb0));
  }
  return;
}
