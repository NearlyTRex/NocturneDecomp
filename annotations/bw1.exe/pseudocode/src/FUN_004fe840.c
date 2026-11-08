// Name: FUN_004fe840
// Address: 004fe840
// Address Range: [[004fe840, 004fe9b5]]
// Convention: unknown
// Signature: void FUN_004fe840(undefined4 *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void FUN_004fe840(uint *param_1,uint param_2,int param_3)

{
  byte local_18 [20];
  
  param_1[2] = 0;
  param_1[3] = 1;
  *param_1 = 0;
  param_1[0x44] = param_3;
  param_1[1] = param_2;
  if (param_3 == 0) {
    FUN_0057dc40();
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0x280;
    param_1[0x48] = 0x1e0;
  }
  else {
    param_1[0x46] = 0;
    param_1[0x47] = 0xc0;
    param_1[0x48] = 0xc0;
    param_1[0x45] = 0x1bf;
  }
  param_1[0x49] = 0xff;
  param_1[0x4a] = 0xff;
  param_1[0x4b] = 0xff;
  FUN_004668a0(0x1d1be4c,"moon.kfm");
  FUN_00484f00(DAT_00612560,&DAT_0061f2e4);
  FUN_0040d0a0(local_18);
  FUN_0040d220(local_18,"load1",0x280,0x1e0);
  FUN_0040d4b0(local_18,0,0,0xffff);
  param_1[0x45] = 0x1e4;
  param_1[0x46] = 0x16;
  param_1[0x47] = 0x3c;
  param_1[0x48] = 0x3c;
  param_1[0x44] = 1;
  param_1[0x49] = 0xd7;
  param_1[0x4a] = 0xdc;
  param_1[0x4b] = 0xe0;
  FUN_0040d0c0(local_18,0);
  return;
}
