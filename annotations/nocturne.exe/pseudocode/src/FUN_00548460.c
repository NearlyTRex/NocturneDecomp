// Name: FUN_00548460
// Address: 00548460
// Address Range: [[00548460, 005484f9]]
// Convention: unknown
// Signature: undefined4 FUN_00548460(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_00548460(int param_1,uint param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  byte auStack_30 [24];
  byte local_18 [16];
  
  if (*(int *)(param_1 + 0x16c) == 3) {
    pfVar1 = (float *)FUN_0040a290(param_1,local_18,param_3);
    pfVar2 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_30);
    if ((((*pfVar2 <= *pfVar1) && (pfVar2[1] <= pfVar1[1])) && (pfVar2[2] <= pfVar1[2])) &&
       (((*pfVar1 <= pfVar2[3] && (pfVar1[1] <= pfVar2[4])) && (pfVar1[2] <= pfVar2[5])))) {
      return 0;
    }
  }
  return 0xbf800000;
}
