// Name: FUN_00514a70
// Address: 00514a70
// Address Range: [[00514a70, 005151eb]]
// Convention: unknown
// Signature: void FUN_00514a70(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00514a70(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_148 [256];
  int local_48;
  byte local_44 [4];
  byte local_40 [4];
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    FUN_00564b20(local_148,0xff,param_2);
  }
  FUN_00563350(param_2,"%[^\n]\n",param_1 + 4);
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    FUN_00564b20(local_148,0xff,param_2);
  }
  FUN_00563350(param_2,"%f,%f,%f\n",param_1 + 0x104,param_1 + 0x108,param_1 + 0x10c);
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    FUN_00564b20(local_148,0xff,param_2);
  }
  FUN_00563350(param_2,"%f,%f,%f\n",param_1 + 0x110,param_1 + 0x118,param_1 + 0x114);
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    FUN_00564b20(local_148,0xff,param_2);
  }
  FUN_00563350(param_2,&DAT_00590d64,param_1 + 0x11c);
  if (*(int *)(0x01E57284 + 0x15a8c4) < 0x15) {
    *(uint *)(param_1 + 0x120) = 0x3f800000;
  }
  else {
    FUN_00564b20(local_148,0xff,param_2);
    FUN_00563350(param_2,&DAT_00590d68,param_1 + 0x120);
  }
  if (*(int *)(0x01E57284 + 0x15a8c4) < 0x16) {
    *(uint *)(param_1 + 0x124) = 0x3f800000;
  }
  else {
    FUN_00564b20(local_148,0xff,param_2);
    FUN_00563350(param_2,&DAT_00590d6c,param_1 + 0x124);
  }
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    FUN_00564b20(local_148,0xff,param_2);
  }
  FUN_00563350(param_2,&DAT_00590d70,param_1);
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    FUN_00564b20(local_148,0xff,param_2);
  }
  FUN_00563350(param_2,"%f,%f,%f,%f,%f\n",param_1 + 0x11c4,param_1 + 0x11c8,param_1 + 0x11cc,
               param_1 + 0x11d0,param_1 + 0x11d4);
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    FUN_00564b20(local_148,0xff,param_2);
  }
  FUN_00563350(param_2,"%d,%d\n",param_1 + 0x1808,param_1 + 0x180c);
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    FUN_00564b20(local_148,0xff,param_2);
  }
  FUN_00563350(param_2,&DAT_00590d8b,param_1 + 0x11ec);
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    FUN_00564b20(local_148,0xff,param_2);
  }
  if (*(int *)(0x01E57284 + 0x15a8c4) < 9) {
    *(uint *)(param_1 + 0x11f0) = 1;
  }
  else {
    FUN_00563350(param_2,&DAT_00590d8f,param_1 + 0x11f0);
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x11ec)) {
    local_28 = param_1 + 0x1774;
    iVar2 = param_1 + 0x16f4;
    local_14 = param_1 + 0x11f4;
    local_18 = param_1;
    do {
      local_1c = iVar3 * 4;
      if (*(int *)(0x01E57284 + 0x15a8c4) < 0x10) {
        FUN_00563350(param_2,"%f,%s\n",iVar2,local_14);
        *(uint *)(param_1 + 0x1774 + local_1c) = 0;
      }
      else {
        FUN_00563350(param_2,"%f,%d,%s\n",iVar2,local_28 + local_1c,local_14);
      }
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      local_14 = local_14 + 0x28;
      iVar1 = local_18 + 4;
      *(uint *)(local_18 + 0x1810) = 0;
      local_18 = iVar1;
    } while (iVar3 < *(int *)(param_1 + 0x11ec));
  }
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    FUN_00564b20(local_148,0xff,param_2);
  }
  FUN_00563350(param_2,&DAT_00590da4,param_1 + 0x1890);
  if (*(int *)(0x01E57284 + 0x15a8c4) < 0x13) {
    *(uint *)(param_1 + 0x17f8) = 0;
    *(uint *)(param_1 + 0x17fc) = 0;
    *(uint *)(param_1 + 0x1800) = 0;
    *(uint *)(param_1 + 0x1804) = 0;
    *(uint *)(param_1 + 0x17f4) = 0;
  }
  else {
    FUN_00564b20(local_148,0xff,param_2);
    FUN_00563350(param_2,"%d,%d,%d,%d,%d\n",param_1 + 0x17f4,param_1 + 0x17f8,
                 param_1 + 0x17fc,param_1 + 0x1800,param_1 + 0x1804);
  }
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    FUN_00564b20(local_148,0xff,param_2);
  }
  FUN_00563350(param_2,"%f,%f\n",param_1 + 0x11e0,param_1 + 0x11e4);
  FUN_00564b20(local_148,0xff,param_2);
  if (*(int *)(0x01E57284 + 0x15a8c4) < 0xb) {
    local_20 = 100;
    if (6 < *(int *)(0x01E57284 + 0x15a8c4)) {
      if (*(int *)(0x01E57284 + 0x15a8c4) < 0x1a) {
        local_20 = 200;
      }
      else {
        local_20 = 0xfa;
      }
    }
    if (local_20 != 0) {
      local_24 = param_1 + 0x224;
      local_20 = local_20 << 4;
      iVar2 = 0;
      iVar3 = param_1;
      do {
        if (*(int *)(0x01E57284 + 0x15a8c4) < 2) {
          FUN_00563350(param_2,&DAT_00590dbf,local_44);
          *(byte *)(iVar3 + 0x128) = local_44[0];
          iVar1 = param_1 + iVar2;
          *(uint *)(iVar1 + 0x224) = 1;
          *(uint *)(iVar1 + 0x228) = 0x13e;
          *(uint *)(iVar1 + 0x22c) = 1;
          *(uint *)(iVar1 + 0x230) = 0xee;
        }
        else {
          iVar1 = local_24 + iVar2;
          FUN_00563350(param_2,"%d,%d,%d,%d,%d\n",local_40,iVar1,iVar1 + 4,iVar1 + 8,
                       iVar1 + 0xc);
          *(byte *)(iVar3 + 0x128) = local_40[0];
        }
        iVar2 = iVar2 + 0x10;
        iVar3 = iVar3 + 1;
      } while (iVar2 < local_20);
    }
  }
  else {
    FUN_00563cc0(param_1 + 0x128,0,0xfa);
    FUN_00563cc0(param_1 + 0x224,0,4000);
    FUN_00563350(param_2,&DAT_00590dd3,&local_48);
    iVar3 = 0;
    if (0 < local_48) {
      do {
        FUN_00563350(param_2,"%d,%d,%d,%d,%d\n",&local_3c,&local_38,&local_30,&local_34,
                     &local_2c);
        if (0xf9 < local_3c) {
          _DAT_01cc4800 = "..\\core\\setutil.cpp";
          _DAT_01cc4804 = 0x2a5;
          FUN_004c8440("Invalid camera number in visiblilty list!");
        }
        *(byte *)(param_1 + 0x128 + local_3c) = 1;
        *(uint *)(local_3c * 0x10 + 0x224 + param_1) = local_38;
        *(uint *)(param_1 + local_3c * 0x10 + 0x228) = local_30;
        *(uint *)(param_1 + local_3c * 0x10 + 0x22c) = local_34;
        *(uint *)(param_1 + local_3c * 0x10 + 0x230) = local_2c;
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_48);
    }
  }
  *(float *)(param_1 + 0x11d8) = *(float *)(param_1 + 0x11d4) * *(float *)(param_1 + 0x11d4);
  *(float *)(param_1 + 0x11dc) = 1.0 / *(float *)(param_1 + 0x11d4);
  return;
}
