// Name: FUN_0041dcc0
// Address: 0041dcc0
// Address Range: [[0041dcc0, 0041e15b]]
// Convention: unknown
// Signature: void FUN_0041dcc0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041dcc0(float *param_1)

{
  int iVar1;
  int *piVar2;
  int local_b0 [24];
  byte local_50 [4];
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = 0;
  piVar2 = local_b0;
  do {
    FUN_0041cc70(param_1,&local_1c,iVar1);
    iVar1 = iVar1 + 1;
    *piVar2 = (int)ROUND(local_1c * _DAT_0059aa80);
    piVar2[1] = (int)ROUND(local_18 * _DAT_0059aa80);
    piVar2[2] = (int)ROUND(local_14 * _DAT_0059aa80);
    piVar2 = piVar2 + 3;
  } while (iVar1 < 8);
  FUN_0050c200(0x01E57284,8,local_b0);
  local_4c = 4;
  FUN_00460fa0(DAT_005ae704,1);
  FUN_00460fb0(DAT_005ae704,0);
  local_28 = (int)ROUND(*param_1 * _DAT_0059aa80);
  local_24 = (int)ROUND(param_1[1] * _DAT_0059aa80);
  local_20 = (int)ROUND(param_1[2] * _DAT_0059aa80);
  local_10 = (int)ROUND(param_1[3] * _DAT_0059aa80);
  local_c = (int)ROUND(param_1[4] * _DAT_0059aa80);
  local_8 = (int)ROUND(param_1[5] * _DAT_0059aa80);
  iVar1 = FUN_00461090(DAT_005ae704);
  piVar2 = DAT_005ae704;
  if (iVar1 == 0) {
    _DAT_01c02580 = iVar1;
    _DAT_01c02584 = iVar1;
    *(uint *)(*DAT_005ae704 + 0x20) = 0x7fff;
    *(uint *)(*piVar2 + 0x24) = 0;
    *(uint *)(*piVar2 + 0x28) = 0;
    *(uint *)(*piVar2 + 0x50) = 0;
    *(uint *)(*piVar2 + 0x54) = 0x7fff;
    *(uint *)(*piVar2 + 0x58) = 0;
    *(uint *)(*piVar2 + 0x80) = 0;
    *(uint *)(*piVar2 + 0x84) = 0;
    *(uint *)(*piVar2 + 0x88) = 0x7fff;
    *(uint *)(*piVar2 + 0xb0) = 0x7fff;
    *(uint *)(*piVar2 + 0xb4) = 0x7fff;
    *(uint *)(*piVar2 + 0xb8) = 0;
    *(uint *)(*piVar2 + 0xe0) = 0;
    *(uint *)(*piVar2 + 0xe4) = 0x7fff;
    *(uint *)(*piVar2 + 0xe8) = 0x7fff;
    *(uint *)(*piVar2 + 0x110) = 0x7fff;
    *(uint *)(*piVar2 + 0x114) = 0;
    *(uint *)(*piVar2 + 0x118) = 0x7fff;
    *(uint *)(*piVar2 + 0x140) = 0x7fff;
    *(uint *)(*piVar2 + 0x144) = 0x7fff;
    *(uint *)(*piVar2 + 0x148) = 0x7fff;
    *(uint *)(*piVar2 + 0x170) = 0;
    *(uint *)(*piVar2 + 0x174) = 0;
    *(uint *)(*piVar2 + 0x178) = 0;
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 4;
  local_30 = 6;
  local_3c = -local_28;
  local_2c = 2;
  FUN_0045f3c0(DAT_005ae704,local_50,0x2c4);
  local_48 = 1;
  local_3c = local_10;
  local_44 = 0;
  local_34 = 3;
  local_38 = 1;
  local_40 = 0;
  local_30 = 7;
  local_2c = 5;
  FUN_0045f3c0(DAT_005ae704,local_50,0x2c4);
  local_48 = 0;
  local_44 = 0xffffffff;
  local_40 = 0;
  local_38 = 0;
  local_34 = 1;
  local_3c = -local_24;
  local_30 = 5;
  local_2c = 4;
  FUN_0045f3c0(DAT_005ae704,local_50,0x2c4);
  local_48 = 0;
  local_44 = 1;
  local_40 = 0;
  local_38 = 2;
  local_34 = 6;
  local_3c = local_c;
  local_30 = 7;
  local_2c = 3;
  FUN_0045f3c0(DAT_005ae704,local_50,0x2c4);
  local_48 = 0;
  local_44 = 0;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_2c = 1;
  local_34 = 2;
  local_30 = 3;
  local_3c = -local_20;
  FUN_0045f3c0(DAT_005ae704,local_50,0x2c4);
  local_48 = 0;
  local_44 = 0;
  local_38 = 4;
  local_34 = 5;
  local_3c = local_8;
  local_40 = 1;
  local_30 = 7;
  local_2c = 6;
  FUN_0045f3c0(DAT_005ae704,local_50,0x2c4);
  return;
}
