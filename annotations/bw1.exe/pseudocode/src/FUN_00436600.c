// Name: FUN_00436600
// Address: 00436600
// Address Range: [[00436600, 00436bd5]]
// Convention: unknown
// Signature: undefined4 FUN_00436600(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00436600(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  float *pfVar7;
  byte bVar8;
  byte auStack_d4 [4];
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint auStack_ac [6];
  uint auStack_94 [6];
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar8 = 0;
  iVar2 = FUN_00483e60(DAT_00612560);
  if (iVar2 == 0) {
    FUN_004087b0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar4 = auStack_ac;
    puVar6 = auStack_94;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    uVar3 = FUN_004207b0(auStack_94);
    *(uint *)(param_1 + 0x574) = uVar3;
    FUN_004087f0(param_1);
    if (*(int *)(param_1 + 0x574) != 0) {
      FUN_00484f00(DAT_00612560,param_1 + 0x16c);
      FUN_00483d80(DAT_00612560,0);
      uStack_d0 = 4;
      uStack_c0 = 0;
      uStack_c4 = 0;
      uStack_c8 = 0;
      uStack_cc = 0;
      uStack_bc = 0;
      uStack_b8 = 1;
      uStack_b4 = 2;
      uStack_b0 = 3;
      FUN_00483de0(DAT_00612560,0xffff);
      FUN_00483dd0(DAT_00612560,0);
      pfVar7 = (float *)(param_1 + 0x28c);
      pfVar5 = (float *)(param_1 + 0x2b0);
      for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x158) + -1; iVar2 = iVar2 + 1) {
        iStack_4c = (int)ROUND(*pfVar7 * _DAT_005fd790);
        iStack_48 = (int)ROUND(pfVar7[1] * _DAT_005fd790);
        iStack_44 = (int)ROUND(pfVar7[2] * _DAT_005fd790);
        FUN_0058043c(*DAT_00612560,&iStack_4c);
        iStack_7c = (int)ROUND(*pfVar7 * _DAT_005fd790);
        iStack_78 = (int)ROUND(pfVar7[1] * _DAT_005fd790);
        iStack_74 = (int)ROUND(pfVar7[2] * _DAT_005fd790);
        FUN_0058043c(*DAT_00612560 + 0x30,&iStack_7c);
        iStack_58 = (int)ROUND(*pfVar5 * _DAT_005fd790);
        iStack_54 = (int)ROUND(pfVar5[1] * _DAT_005fd790);
        iStack_50 = (int)ROUND(pfVar5[2] * _DAT_005fd790);
        FUN_0058043c(*DAT_00612560 + 0x60,&iStack_58);
        iStack_28 = (int)ROUND(*pfVar5 * _DAT_005fd790);
        iStack_24 = (int)ROUND(pfVar5[1] * _DAT_005fd790);
        iStack_20 = (int)ROUND(pfVar5[2] * _DAT_005fd790);
        FUN_0058043c(*DAT_00612560 + 0x90,&iStack_28);
        piVar1 = DAT_00612560;
        *(int *)(*DAT_00612560 + 4) = *(int *)(*DAT_00612560 + 4) + -0x40;
        *(int *)(*piVar1 + 0x34) = *(int *)(*piVar1 + 0x34) + 0x40;
        *(int *)(*piVar1 + 100) = *(int *)(*piVar1 + 100) + 0x40;
        *(int *)(*piVar1 + 0x94) = *(int *)(*piVar1 + 0x94) + -0x40;
        *(uint *)(*piVar1 + 0x10) = 0x80000000;
        *(uint *)(*piVar1 + 0x40) = 0x80000000;
        *(uint *)(*piVar1 + 0x70) = 0x80000000;
        *(uint *)(*piVar1 + 0xa0) = 0x80000000;
        *(uint *)(*piVar1 + 0x18) = 0x80000;
        *(uint *)(*piVar1 + 0x1c) = 0x80000;
        *(uint *)(*piVar1 + 0x48) = 0x80000;
        *(uint *)(*piVar1 + 0x4c) = 0xf80000;
        *(uint *)(*piVar1 + 0x78) = 0xf80000;
        *(uint *)(*piVar1 + 0x7c) = 0xf80000;
        *(uint *)(*piVar1 + 0xa8) = 0xf80000;
        *(uint *)(*piVar1 + 0xac) = 0x80000;
        iStack_70 = (int)ROUND(*pfVar7 * _DAT_005fd790);
        iStack_6c = (int)ROUND(pfVar7[1] * _DAT_005fd790);
        iStack_68 = (int)ROUND(pfVar7[2] * _DAT_005fd790);
        FUN_00552a70(0x01E82168,&iStack_70,0,0,2);
        iStack_70 = (int)ROUND(*pfVar5 * _DAT_005fd790);
        iStack_6c = (int)ROUND(pfVar5[1] * _DAT_005fd790);
        iStack_68 = (int)ROUND(pfVar5[2] * _DAT_005fd790);
        FUN_00552a70(0x01E82168,&iStack_70,0,2,2);
        FUN_00483050(DAT_00612560,auStack_d4);
        iStack_64 = (int)ROUND(*pfVar7 * _DAT_005fd790);
        iStack_60 = (int)ROUND(pfVar7[1] * _DAT_005fd790);
        iStack_5c = (int)ROUND(pfVar7[2] * _DAT_005fd790);
        FUN_0058043c(*DAT_00612560,&iStack_64);
        iStack_34 = (int)ROUND(*pfVar7 * _DAT_005fd790);
        iStack_30 = (int)ROUND(pfVar7[1] * _DAT_005fd790);
        iStack_2c = (int)ROUND(pfVar7[2] * _DAT_005fd790);
        FUN_0058043c(*DAT_00612560 + 0x30,&iStack_34);
        iStack_1c = (int)ROUND(*pfVar5 * _DAT_005fd790);
        iStack_18 = (int)ROUND(pfVar5[1] * _DAT_005fd790);
        iStack_14 = (int)ROUND(pfVar5[2] * _DAT_005fd790);
        FUN_0058043c(*DAT_00612560 + 0x60,&iStack_1c);
        iStack_40 = (int)ROUND(*pfVar5 * _DAT_005fd790);
        iStack_3c = (int)ROUND(pfVar5[1] * _DAT_005fd790);
        iStack_38 = (int)ROUND(pfVar5[2] * _DAT_005fd790);
        FUN_0058043c(*DAT_00612560 + 0x90,&iStack_40);
        piVar1 = DAT_00612560;
        *(int *)*DAT_00612560 = *(int *)*DAT_00612560 + -0x40;
        *(int *)(*piVar1 + 0x30) = *(int *)(*piVar1 + 0x30) + 0x40;
        *(int *)(*piVar1 + 0x60) = *(int *)(*piVar1 + 0x60) + 0x40;
        *(int *)(*piVar1 + 0x90) = *(int *)(*piVar1 + 0x90) + -0x40;
        *(uint *)(*piVar1 + 0x10) = 0x80000000;
        *(uint *)(*piVar1 + 0x40) = 0x80000000;
        *(uint *)(*piVar1 + 0x70) = 0x80000000;
        *(uint *)(*piVar1 + 0xa0) = 0x80000000;
        *(uint *)(*piVar1 + 0x18) = 0x80000;
        *(uint *)(*piVar1 + 0x1c) = 0x80000;
        *(uint *)(*piVar1 + 0x48) = 0x80000;
        *(uint *)(*piVar1 + 0x4c) = 0xf80000;
        *(uint *)(*piVar1 + 0x78) = 0xf80000;
        *(uint *)(*piVar1 + 0x7c) = 0xf80000;
        *(uint *)(*piVar1 + 0xa8) = 0xf80000;
        *(uint *)(*piVar1 + 0xac) = 0x80000;
        iStack_70 = (int)ROUND(*pfVar7 * _DAT_005fd790);
        iStack_6c = (int)ROUND(pfVar7[1] * _DAT_005fd790);
        iStack_68 = (int)ROUND(pfVar7[2] * _DAT_005fd790);
        FUN_00552a70(0x01E82168,&iStack_70,0,0,2);
        iStack_70 = (int)ROUND(*pfVar5 * _DAT_005fd790);
        iStack_6c = (int)ROUND(pfVar5[1] * _DAT_005fd790);
        iStack_68 = (int)ROUND(pfVar5[2] * _DAT_005fd790);
        FUN_00552a70(0x01E82168,&iStack_70,0,2,2);
        pfVar7 = pfVar7 + 9;
        pfVar5 = pfVar5 + 9;
        FUN_00483050(DAT_00612560,auStack_d4);
      }
      return 1;
    }
  }
  return 0;
}
