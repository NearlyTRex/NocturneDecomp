// Name: FUN_0047db70
// Address: 0047db70
// Address Range: [[0047db70, 0047dd1a]]
// Convention: unknown
// Signature: undefined4 FUN_0047db70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,byte param_6)

#include "nocturne.h"

uint FUN_0047db70(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,byte param_6)

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
  
  FUN_004831c0(local_8d4);
  FUN_00482a70(local_8d4,param_3,param_4);
  if (local_8d4[0] < 1) {
    uVar4 = FUN_00508960("No files found");
    FUN_0047cf40(param_1,uVar4);
    uVar4 = 0;
  }
  else {
    FUN_00482390(local_8d4);
    iVar5 = -1;
    iVar2 = iVar5;
    if (((param_6 & 1) != 0) && (iVar3 = 0, 0 < local_8d4[0])) {
      do {
        FUN_00482450(local_8d4,local_314,iVar3,0);
        FUN_00482450(local_8d4,local_514,iVar3,1);
        FUN_00465e80(local_114,0,0,local_314,local_514);
        iVar1 = FUN_005a3260(local_114,param_5);
        iVar2 = iVar3;
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 1;
        iVar2 = iVar5;
      } while (iVar3 < local_8d4[0]);
    }
    iVar2 = FUN_00483450(local_8d4,param_2,iVar2,0);
    if (iVar2 < 0) {
      uVar4 = 0;
    }
    else {
      FUN_00482450(local_8d4,local_314,iVar2,0);
      FUN_00482450(local_8d4,local_514,iVar2,1);
      FUN_00465e80(param_5,0,0,local_314,local_514);
      uVar4 = 1;
    }
  }
  FUN_004832b0(local_8d4,0);
  return uVar4;
}
