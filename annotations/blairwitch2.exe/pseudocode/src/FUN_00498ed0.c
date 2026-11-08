// Name: FUN_00498ed0
// Address: 00498ed0
// Address Range: [[00498ed0, 00499268]]
// Convention: unknown
// Signature: void FUN_00498ed0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00498ed0(int param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  int aiStackY_1048 [999];
  uint uVar6;
  byte local_94 [4];
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int aiStack_5c [4];
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int aiStack_2c [4];
  int local_1c;
  int local_18;
  float local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar3 = 0;
  if ((*(uint *)(param_1 + 0xc) & 0x7fffffff) == 0) {
    return;
  }
  fVar4 = ((float10)1 - (float10)*(float *)(param_1 + 0xc)) * (float10)_DAT_005d551a;
  FUN_005b7ff0();
  local_18 = (int)ROUND(fVar4);
  FUN_0046ca00(DAT_0060b280,&DAT_00615244 + local_18 * 0x30);
  FUN_0046b2b0(DAT_0060b280,param_1);
  FUN_0046b670(DAT_0060b280);
  uVar6 = 0;
  local_60 = local_30;
  aiStack_5c[(uint)bVar3 * -2] = aiStack_2c[(uint)bVar3 * -2];
  aiStack_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       aiStack_2c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  FUN_0046b350(DAT_0060b280,&local_60,uVar6);
  fVar4 = (float10)*(float *)(param_1 + 0x10) * (float10)_DAT_005d5532 * (float10)_DAT_005d552a;
  fVar5 = -(float10)*(float *)(param_1 + 0x10) * (float10)_DAT_005d5522 * (float10)_DAT_005d552a;
  FUN_005b7ff0();
  iVar2 = FUN_005b7ff0();
  local_c = (int)ROUND(fVar4);
  local_10 = (int)ROUND(fVar5);
  if (iVar2 != 0) {
    local_c = -local_c;
    local_10 = -local_10;
  }
  local_8 = local_10;
  local_48 = (float)local_10;
  local_44 = *(float *)(param_1 + 0x10) * _DAT_005d553a * (float)_DAT_005d552a;
  local_40 = 0.0;
  aiStack_2c[2] = (int)ROUND(local_48 * _DAT_005f64e4);
  aiStack_2c[3] = (int)ROUND(local_44 * _DAT_005f64e4);
  local_1c = (int)ROUND(_DAT_005f64e4 * 0.0);
  local_14 = local_48;
  FUN_0055d723(*DAT_0060b280,aiStack_2c + 2);
  local_8 = local_c;
  local_48 = (float)local_c;
  aiStack_5c[2] = (int)ROUND(local_48 * _DAT_005f64e4);
  aiStack_5c[3] = (int)ROUND(local_44 * _DAT_005f64e4);
  local_4c = (int)ROUND(local_40 * _DAT_005f64e4);
  FUN_0055d723(*DAT_0060b280 + 0x30,aiStack_5c + 2);
  local_44 = -*(float *)(param_1 + 0x10) * (float)_DAT_005d5542 * (float)_DAT_005d552a;
  local_3c = (int)ROUND(local_48 * _DAT_005f64e4);
  local_38 = (int)ROUND(local_44 * _DAT_005f64e4);
  local_34 = (int)ROUND(local_40 * _DAT_005f64e4);
  FUN_0055d723(*DAT_0060b280 + 0x60,&local_3c);
  local_48 = local_14;
  local_6c = (int)ROUND(local_14 * _DAT_005f64e4);
  local_68 = (int)ROUND(local_44 * _DAT_005f64e4);
  local_64 = (int)ROUND(local_40 * _DAT_005f64e4);
  FUN_0055d723(*DAT_0060b280 + 0x90,&local_6c);
  piVar1 = DAT_0060b280;
  *(uint *)(*DAT_0060b280 + 0x18) = 0x20000;
  *(uint *)(*piVar1 + 0x1c) = 0x20000;
  *(uint *)(*piVar1 + 0x48) = 0xfe0000;
  *(uint *)(*piVar1 + 0x4c) = 0x20000;
  *(uint *)(*piVar1 + 0x78) = 0xfe0000;
  *(uint *)(*piVar1 + 0x7c) = 0xfe0000;
  *(uint *)(*piVar1 + 0xa8) = 0x20000;
  *(uint *)(*piVar1 + 0xac) = 0xfe0000;
  *(uint *)(*piVar1 + 0x2c) = 0x8000;
  *(uint *)(*piVar1 + 0x5c) = 0x8000;
  *(uint *)(*piVar1 + 0x8c) = 0x8000;
  *(uint *)(*piVar1 + 0xbc) = 0x8000;
  local_90 = 4;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_8c = 0;
  local_7c = 0;
  local_70 = 3;
  local_78 = 1;
  local_74 = 2;
  FUN_0046b8d0(piVar1,1);
  FUN_00469c60(DAT_0060b280,local_94,0x123);
  FUN_0046b8d0(DAT_0060b280,0);
  thunk_FUN_004e9810(DAT_0060b280);
  return;
}
