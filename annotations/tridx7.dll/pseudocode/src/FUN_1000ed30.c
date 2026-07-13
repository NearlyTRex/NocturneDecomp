// Name: FUN_1000ed30
// Address: 1000ed30
// Address Range: [[1000ed30, 1000f1df]]
// Convention: unknown
// Signature: void FUN_1000ed30(undefined1 param_1,undefined4 *param_2,int *param_3,int *param_4)

#include "nocturne.h"

void FUN_1000ed30(byte param_1,uint *param_2,int *param_3,int *param_4)

{
  int iVar1;
  byte *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_PTR_1001820c;
  switch(param_1) {
  case 0x25:
    *(byte *)*param_3 = 0x25;
    *param_3 = *param_3 + 1;
    *param_4 = *param_4 + -1;
    return;
  case 0x41:
    FUN_1000f2a0(*(uint *)(PTR_PTR_1001820c + param_2[6] * 4 + 0x1c),param_3,param_4);
    return;
  case 0x42:
    FUN_1000f2a0(*(uint *)(PTR_PTR_1001820c + param_2[4] * 4 + 0x68),param_3,param_4);
    return;
  case 0x48:
    DAT_10018214 = DAT_10018210;
    FUN_1000f2d0(param_2[2],2,param_3,param_4);
    return;
  case 0x49:
    DAT_10018214 = DAT_10018210;
    iVar4 = (int)param_2[2] % 0xc;
    if (iVar4 == 0) {
      iVar4 = 0xc;
    }
    FUN_1000f2d0(iVar4,2,param_3,param_4);
    return;
  case 0x4d:
    DAT_10018214 = DAT_10018210;
    FUN_1000f2d0(param_2[1],2,param_3,param_4);
    return;
  case 0x53:
    DAT_10018214 = DAT_10018210;
    FUN_1000f2d0(*param_2,2,param_3,param_4);
    return;
  case 0x55:
    iVar4 = param_2[6];
    goto LAB_1000eea0;
  case 0x57:
    if (param_2[6] == 0) {
      iVar4 = 6;
    }
    else {
      iVar4 = param_2[6] + -1;
    }
LAB_1000eea0:
    DAT_10018214 = DAT_10018210;
    iVar1 = param_2[7];
    if (iVar1 < iVar4) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar1 / 7;
      if (iVar4 <= iVar1 % 7) {
        iVar3 = iVar3 + 1;
      }
    }
    FUN_1000f2d0(iVar3,2,param_3,param_4);
    return;
  case 0x58:
    DAT_10018210 = 0;
    FUN_1000f3c0(*(uint *)(PTR_PTR_1001820c + 0xa8),param_2,param_3,param_4);
    return;
  case 0x59:
    DAT_10018214 = DAT_10018210;
    FUN_1000f2d0((((int)param_2[5] / 100) * 4 + 0x4c) * 0x19 + (int)param_2[5] % 100,4,param_3,
                 param_4);
    return;
  case 0x5a:
  case 0x7a:
    FUN_1000fff0();
    FUN_1000f2a0((&PTR_DAT_100185b4)[-(uint)(param_2[8] == 0)],param_3,param_4);
    return;
  case 0x61:
    FUN_1000f2a0(*(uint *)(PTR_PTR_1001820c + param_2[6] * 4),param_3,param_4);
    return;
  case 0x62:
    FUN_1000f2a0(*(uint *)(PTR_PTR_1001820c + param_2[4] * 4 + 0x38),param_3,param_4);
    return;
  case 99:
    if (DAT_10018210 == 0) {
      FUN_1000f3c0(*(uint *)(PTR_PTR_1001820c + 0xa0),param_2,param_3,param_4);
      if (*param_4 != 0) {
        *(byte *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 + -1;
        FUN_1000f3c0(*(uint *)(puVar2 + 0xa8),param_2,param_3,param_4);
        return;
      }
    }
    else {
      DAT_10018210 = 0;
      FUN_1000f3c0(*(uint *)(PTR_PTR_1001820c + 0xa4),param_2,param_3,param_4);
      if (*param_4 != 0) {
        *(byte *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 + -1;
        FUN_1000f3c0(*(uint *)(puVar2 + 0xa8),param_2,param_3,param_4);
        return;
      }
    }
    break;
  case 100:
    DAT_10018214 = DAT_10018210;
    FUN_1000f2d0(param_2[3],2,param_3,param_4);
    return;
  case 0x6a:
    DAT_10018214 = DAT_10018210;
    FUN_1000f2d0(param_2[7] + 1,3,param_3,param_4);
    return;
  case 0x6d:
    DAT_10018214 = DAT_10018210;
    FUN_1000f2d0(param_2[4] + 1,2,param_3,param_4);
    return;
  case 0x70:
    if ((int)param_2[2] < 0xc) {
      FUN_1000f2a0(*(uint *)(PTR_PTR_1001820c + 0x98),param_3,param_4);
      return;
    }
    FUN_1000f2a0(*(uint *)(PTR_PTR_1001820c + 0x9c),param_3,param_4);
    return;
  case 0x77:
    DAT_10018214 = DAT_10018210;
    FUN_1000f2d0(param_2[6],1,param_3,param_4);
    return;
  case 0x78:
    if (DAT_10018210 != 0) {
      DAT_10018210 = 0;
      FUN_1000f3c0(*(uint *)(PTR_PTR_1001820c + 0xa4),param_2,param_3,param_4);
      return;
    }
    FUN_1000f3c0(*(uint *)(PTR_PTR_1001820c + 0xa0),param_2,param_3,param_4);
    return;
  case 0x79:
    DAT_10018214 = DAT_10018210;
    FUN_1000f2d0((int)param_2[5] % 100,2,param_3,param_4);
  }
  return;
}
