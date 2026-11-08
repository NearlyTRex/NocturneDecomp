// Name: FUN_005b4300
// Address: 005b4300
// Address Range: [[005b4300, 005b44af]]
// Convention: unknown
// Signature: void FUN_005b4300(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005b4300(int param_1,uint param_2)

{
  byte bVar1;
  uint auStackY_1038 [949];
  byte local_150 [256];
  uint local_50;
  uint auStack_4c [2];
  byte local_44 [4];
  byte local_40 [4];
  byte local_3c [4];
  byte local_38 [4];
  byte local_34 [4];
  byte local_30 [4];
  uint local_2c;
  uint local_28 [2];
  byte local_20 [4];
  byte local_1c [4];
  byte local_18 [4];
  byte local_14 [4];
  uint local_10;
  
  bVar1 = 0;
  FUN_005b9600(local_150,0xff,param_2);
  FUN_005b8100(param_2,&DAT_005f1340,local_14);
  FUN_005b9600(local_150,0xff,param_2);
  FUN_005b8100(param_2," %f,%f,%f\n",local_20,local_1c,local_18);
  FUN_005b8100(param_2," %f,%f,%f\n",local_44,local_3c,local_40);
  FUN_005b8100(param_2," %f,%f,%f\n",local_38,local_34,local_30);
  FUN_005b8100(param_2,&DAT_005f1366,&local_10);
  FUN_005b1c80(param_1,local_20,local_44,local_38,local_10);
  FUN_005b8100(param_2," %f,%f,%f\n",param_1 + 0x4c,param_1 + 0x50,param_1 + 0x54);
  FUN_005b8100(param_2," %f,%f,%f\n",param_1 + 0x70,param_1 + 0x74,param_1 + 0x78);
  FUN_005b8100(param_2,&DAT_005f1381,param_1 + 0x254);
  FUN_00449530(param_1 + 0x18,param_1 + 0x4c);
  local_2c = local_50;
  local_28[(uint)bVar1 * -2] = auStack_4c[(uint)bVar1 * -2];
  *(uint *)(local_20 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + -4) =
       auStack_4c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if ((uint *)(param_1 + 0x40) == &local_2c) {
    return;
  }
  *(uint *)(param_1 + 0x40) = local_2c;
  *(uint *)(param_1 + 0x44) = local_28[0];
  *(uint *)(param_1 + 0x48) = local_28[1];
  return;
}
