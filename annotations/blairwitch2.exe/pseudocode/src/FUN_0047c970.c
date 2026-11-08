// Name: FUN_0047c970
// Address: 0047c970
// Address Range: [[0047c970, 0047cb1a]]
// Convention: unknown
// Signature: undefined4 FUN_0047c970(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,byte param_6)

#include "nocturne.h"

uint FUN_0047c970(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,byte param_6)

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
  
  FUN_00481fc0(local_8d4);
  FUN_00481870(local_8d4,param_3,param_4);
  if (local_8d4[0] < 1) {
    uVar4 = FUN_0050fe80("No files found");
    FUN_0047be40(param_1,uVar4);
    uVar4 = 0;
  }
  else {
    FUN_00481190(local_8d4);
    iVar5 = -1;
    iVar2 = iVar5;
    if (((param_6 & 1) != 0) && (iVar3 = 0, 0 < local_8d4[0])) {
      do {
        FUN_00481250(local_8d4,local_314,iVar3,0);
        FUN_00481250(local_8d4,local_514,iVar3,1);
        FUN_004610a0(local_114,0,0,local_314,local_514);
        iVar1 = FUN_005b8130(local_114,param_5);
        iVar2 = iVar3;
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 1;
        iVar2 = iVar5;
      } while (iVar3 < local_8d4[0]);
    }
    iVar2 = FUN_00482250(local_8d4,param_2,iVar2,0);
    if (iVar2 < 0) {
      uVar4 = 0;
    }
    else {
      FUN_00481250(local_8d4,local_314,iVar2,0);
      FUN_00481250(local_8d4,local_514,iVar2,1);
      FUN_004610a0(param_5,0,0,local_314,local_514);
      uVar4 = 1;
    }
  }
  FUN_004820b0(local_8d4,0);
  return uVar4;
}
