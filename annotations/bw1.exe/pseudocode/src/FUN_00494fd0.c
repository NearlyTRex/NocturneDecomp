// Name: FUN_00494fd0
// Address: 00494fd0
// Address Range: [[00494fd0, 0049517a]]
// Convention: unknown
// Signature: undefined4 FUN_00494fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,byte param_6)

#include "nocturne.h"

uint FUN_00494fd0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,byte param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_8d4 [240];
  byte local_514 [512];
  byte local_314 [512];
  byte local_114 [260];
  
  FUN_0049a620(local_8d4);
  FUN_00499ed0(local_8d4,param_3,param_4);
  if (local_8d4[0] < 1) {
    uVar4 = FUN_00531090("No files found");
    FUN_004943a0(param_1,uVar4);
    uVar4 = 0;
  }
  else {
    FUN_004997f0(local_8d4);
    iVar5 = -1;
    iVar2 = iVar5;
    if (((param_6 & 1) != 0) && (iVar3 = 0, 0 < local_8d4[0])) {
      do {
        FUN_004998b0(local_8d4,local_314,iVar3,0);
        FUN_004998b0(local_8d4,local_514,iVar3,1);
        FUN_004795b0(local_114,0,0,local_314,local_514);
        iVar1 = FUN_005c04e0(local_114,param_5);
        iVar2 = iVar3;
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 1;
        iVar2 = iVar5;
      } while (iVar3 < local_8d4[0]);
    }
    iVar2 = FUN_0049a8b0(local_8d4,param_2,iVar2,0);
    if (iVar2 < 0) {
      uVar4 = 0;
    }
    else {
      FUN_004998b0(local_8d4,local_314,iVar2,0);
      FUN_004998b0(local_8d4,local_514,iVar2,1);
      FUN_004795b0(param_5,0,0,local_314,local_514);
      uVar4 = 1;
    }
  }
  FUN_0049a710(local_8d4,0);
  return uVar4;
}
