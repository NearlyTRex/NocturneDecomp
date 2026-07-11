// Name: FUN_00447d10
// Address: 00447d10
// Address Range: [[00447d10, 00447dc7]]
// Convention: unknown
// Signature: void FUN_00447d10(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void FUN_00447d10(int param_1,uint param_2,int param_3)

{
  byte local_108 [256];
  
  FUN_00564b20(local_108,0xff,param_2);
  FUN_00563350(param_2,"%d,%d,%d\n",param_1,param_1 + 4,param_1 + 8);
  FUN_00564b20(local_108,0xff,param_2);
  FUN_00563350(param_2,"%f,%f,%f\n",param_1 + 0xc,param_1 + 0x10,param_1 + 0x14);
  FUN_00563350(param_2,"%f,%f\n",param_1 + 0x18,param_1 + 0x1c);
  if (param_3 < 0x1a) {
    *(uint *)(param_1 + 0x20) = 0x42480000;
    return;
  }
  FUN_00563350(param_2,&DAT_0057bb2e,param_1 + 0x20);
  return;
}
