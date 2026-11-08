// Name: FUN_0053da90
// Address: 0053da90
// Address Range: [[0053da90, 0053de08]]
// Convention: unknown
// Signature: bool FUN_0053da90(undefined4 param_1,float *param_2,undefined4 param_3,float *param_4,undefined4 param_5)

#include "nocturne.h"

bool FUN_0053da90(uint param_1,float *param_2,uint param_3,float *param_4,uint param_5)

{
  float *pfVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1044 [906];
  float *pfVar4;
  byte local_200 [12];
  byte local_1f4 [12];
  byte local_1e8 [12];
  byte local_1dc [12];
  byte local_1d0 [12];
  byte local_1c4 [12];
  byte local_1b8 [12];
  byte local_1ac [56];
  byte local_174 [56];
  byte local_13c [56];
  byte local_104 [56];
  byte local_cc [56];
  byte local_94 [56];
  float local_5c;
  float afStack_58 [4];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  uint local_38;
  float local_2c [3];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar3 = 0;
  pfVar1 = (float *)&stack0xfffffdf4;
  iVar2 = 0;
  FUN_005a30d7(&stack0xfffffdf4,8,&DAT_005db0f0);
  do {
    FUN_0041d8b0(param_3,iVar2);
    pfVar4 = afStack_58 + 0xb;
    local_2c[0] = (float)local_38;
    afStack_58[(uint)bVar3 * -2 + 0xc] = afStack_58[(uint)bVar3 * -2 + 9];
    afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
         afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
    FUN_0045b800(param_5,pfVar4);
    local_44 = local_5c;
    afStack_58[(uint)bVar3 * -2 + 6] = afStack_58[(uint)bVar3 * -2];
    afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
         afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    local_20 = local_44 + *param_4;
    local_1c = local_40 + param_4[1];
    local_18 = local_3c + param_4[2];
    afStack_58[2] = local_44 + *param_4;
    afStack_58[(uint)bVar3 * -2 + 3] = afStack_58[(uint)bVar3 * -2 + 0xf];
    afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
         afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10];
    if (pfVar1 != afStack_58 + 2) {
      *pfVar1 = afStack_58[2];
      pfVar1[1] = afStack_58[3];
      pfVar1[2] = local_48;
    }
    iVar2 = iVar2 + 1;
    pfVar1 = pfVar1 + 3;
  } while (iVar2 < 8);
  local_14 = *param_2;
  FUN_00478a50(local_cc,&stack0xfffffdf4,local_1dc,local_1c4);
  FUN_00479050(local_cc,param_2);
  FUN_00478a50(local_cc,&stack0xfffffdf4,local_1c4,local_1f4);
  FUN_00479050(local_cc,param_2);
  FUN_00478a50(local_104,local_200,local_1e8,local_1b8);
  FUN_00479050(local_104,param_2);
  FUN_00478a50(local_104,local_200,local_1b8,local_1d0);
  FUN_00479050(local_104,param_2);
  FUN_00478a50(local_13c,&stack0xfffffdf4,local_200,local_1d0);
  FUN_00479050(local_13c,param_2);
  FUN_00478a50(local_13c,&stack0xfffffdf4,local_1d0,local_1dc);
  FUN_00479050(local_13c,param_2);
  FUN_00478a50(local_1ac,local_1f4,local_1c4,local_1b8);
  FUN_00479050(local_1ac,param_2);
  FUN_00478a50(local_1ac,local_1f4,local_1b8,local_1e8);
  FUN_00479050(local_1ac,param_2);
  FUN_00478a50(local_174,&stack0xfffffdf4,local_1f4,local_1e8);
  FUN_00479050(local_174,param_2);
  FUN_00478a50(local_174,&stack0xfffffdf4,local_1e8,local_200);
  FUN_00479050(local_174,param_2);
  FUN_00478a50(local_94,local_1dc,local_1d0,local_1b8);
  FUN_00479050(local_94,param_2);
  FUN_00478a50(local_94,local_1dc,local_1b8,local_1c4);
  FUN_00479050(local_94,param_2);
  return *param_2 < local_14;
}
