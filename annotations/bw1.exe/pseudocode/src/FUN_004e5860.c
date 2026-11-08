// Name: FUN_004e5860
// Address: 004e5860
// Address Range: [[004e5860, 004e5bc5]]
// Convention: unknown
// Signature: void FUN_004e5860(undefined4 *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e5860(uint *param_1,int param_2)

{
  uint uVar1;
  float *pfVar2;
  uint *puVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  _DAT_01cd0e84 = 4;
  _DAT_01cd0e98 = 0;
  _DAT_01cd0e9c = 1;
  _DAT_01cd0ea0 = 2;
  _DAT_01cd0ea4 = 3;
  DAT_0062902c = 0x80000;
  _DAT_00629030 = 0x80000;
  _DAT_0062905c = 0xf80000;
  _DAT_0062908c = 0xf80000;
  DAT_00629090 = 0xf80000;
  _DAT_006290c0 = 0xf80000;
  _DAT_00629060 = 0x80000;
  _DAT_006290bc = 0x80000;
  puVar3 = &DAT_00629014;
  FUN_00483de0(DAT_00612560,param_1[0xe]);
  _DAT_01cd0e88 = 0;
  _DAT_01cd0e8c = 0;
  _DAT_01cd0e90 = 0;
  _DAT_01cd0e94 = 0;
  FUN_00484f00(DAT_00612560,&DAT_0061ee2c);
  pfVar2 = (float *)(param_1 + 2);
  do {
    local_1c = (int)ROUND(*pfVar2 * _DAT_006016a8);
    local_18 = (int)ROUND(pfVar2[1] * _DAT_006016a8);
    local_14 = (int)ROUND(pfVar2[2] * _DAT_006016a8);
    pfVar2 = pfVar2 + 3;
    FUN_0058043c(puVar3,&local_1c);
    puVar3 = puVar3 + 0xc;
  } while (pfVar2 != (float *)(param_1 + 0xe));
  if (param_1[0xf] == 0) {
    DAT_00629038 = 0x7ff;
    DAT_0062903c = 0x7ff;
    DAT_00629064 = 0x7ff;
    DAT_00629068 = 0x7ff;
    DAT_0062906c = 0x7ff;
    DAT_00629094 = 0x7ff;
    DAT_00629098 = 0x7ff;
    DAT_0062909c = 0x7ff;
    DAT_006290c4 = 0x7ff;
    DAT_006290c8 = 0x7ff;
    DAT_006290cc = 0x7ff;
    DAT_00629034 = 0x7ff;
    goto LAB_004e5a35;
  }
  uVar1 = param_1[1];
  if (uVar1 == 0) {
LAB_004e598c:
    DAT_00629034 = 0x2000;
    DAT_00629038 = 0;
  }
  else if (uVar1 < 2) {
    DAT_00629038 = 0x7f80;
    DAT_00629034 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004e598c;
    DAT_00629038 = 0;
    DAT_00629034 = 0;
  }
  DAT_0062903c = 0;
  uVar1 = param_1[1];
  if (uVar1 == 0) {
LAB_004e59be:
    DAT_00629064 = 0x2000;
    DAT_00629068 = 0;
  }
  else if (uVar1 < 2) {
    DAT_00629068 = 0x7f80;
    DAT_00629064 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004e59be;
    DAT_00629068 = 0;
    DAT_00629064 = 0;
  }
  DAT_0062906c = 0;
  uVar1 = param_1[1];
  if (uVar1 == 0) {
LAB_004e59f0:
    DAT_00629094 = 0x2000;
    DAT_00629098 = 0;
  }
  else if (uVar1 < 2) {
    DAT_00629098 = 0x7f80;
    DAT_00629094 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004e59f0;
    DAT_00629098 = 0;
    DAT_00629094 = 0;
  }
  DAT_0062909c = 0;
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      DAT_006290c8 = 0x7f80;
      DAT_006290cc = 0;
      DAT_006290c4 = 0;
      goto LAB_004e5a35;
    }
    if (uVar1 == 2) {
      DAT_006290c8 = 0;
      DAT_006290cc = 0;
      DAT_006290c4 = 0;
      goto LAB_004e5a35;
    }
  }
  DAT_006290c4 = 0x2000;
  DAT_006290c8 = 0;
  DAT_006290cc = 0;
LAB_004e5a35:
  FUN_00483050(DAT_00612560,0x1cd0e80);
  if (param_2 != 0) {
    *param_1 = 1;
    return;
  }
  return;
}
