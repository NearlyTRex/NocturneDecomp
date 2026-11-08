// Name: FUN_004e6f20
// Address: 004e6f20
// Address Range: [[004e6f20, 004e7214]]
// Convention: unknown
// Signature: void FUN_004e6f20(int param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e6f20(int param_1,int param_2,float param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1084 [970];
  uint uStack_104;
  int *piStack_100;
  float *pfStack_fc;
  double dStack_f8;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float afStack_84 [3];
  uint uStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float afStack_50 [5];
  uint auStack_3c [3];
  uint uStack_30;
  uint uStack_24;
  int *piStack_18;
  int *piStack_14;
  
  bVar6 = 0;
  piStack_14 = (int *)(param_1 + 0x74c + param_2 * 100);
  bVar1 = false;
  if (*piStack_14 == 0) {
    pfStack_fc = (float *)param_2;
    piStack_100 = (int *)param_1;
    uStack_104 = 0x4e71bf;
    iVar3 = FUN_004e7570();
    piVar2 = (int *)(iVar3 * 100 + param_1 + 0x74c);
    bVar1 = true;
    if ((*piVar2 == 0) || ((float)piVar2[2] <= 0.0)) goto LAB_004e6f62;
  }
  else {
LAB_004e6f62:
    if (bVar1) {
      param_3 = *(float *)(param_1 + 0x15ec + param_2 * 4) + param_3;
      goto LAB_004e6f77;
    }
  }
  param_3 = *(float *)(param_1 + 0x15ec + param_2 * 4) - param_3;
LAB_004e6f77:
  *(float *)(param_1 + 0x15ec + param_2 * 4) = param_3;
  iVar3 = param_2 * 4 + param_1;
  dStack_f8 = (double)*(float *)(iVar3 + 0x15ec);
  if (0.0 < dStack_f8) {
    if (1.0 < dStack_f8) {
      *(uint *)(iVar3 + 0x15ec) = 0x3f800000;
    }
    pfStack_fc = (float *)(param_1 + 0x740);
    piStack_100 = piStack_14 + 9;
    uStack_104 = 0x4e6fda;
    piStack_18 = piStack_100;
    FUN_00449530();
    piVar2 = piStack_14;
    fStack_6c = fStack_9c;
    afStack_98[(uint)bVar6 * -2 + 0xc] = afStack_98[(uint)bVar6 * -2];
    afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    afStack_98[2] = (float)piVar2[3] + fStack_6c;
    afStack_98[3] = (float)piVar2[4] + fStack_68;
    fStack_88 = (float)piVar2[5] + fStack_64;
    pfStack_fc = &fStack_54;
    fStack_54 = (float)piVar2[3] + fStack_6c;
    afStack_50[(uint)bVar6 * -2] = afStack_98[(uint)bVar6 * -2 + 3];
    afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    piStack_100 = (int *)param_1;
    uStack_104 = 0x4e7042;
    FUN_00408d70();
    fStack_60 = 0.0;
    afStack_84[0] = (float)uStack_78;
    afStack_98[(uint)bVar6 * -2 + 6] = afStack_98[(uint)bVar6 * -2 + 9];
    afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    fStack_5c = (*(float *)(param_1 + 0x72c) - *(float *)(param_1 + 0x744)) * _DAT_005dc5f1;
    pfStack_fc = afStack_98 + 0xe;
    fStack_58 = -(*(float *)(param_1 + 0x1668) * _DAT_005dc5ed + *(float *)(param_1 + 0x748) +
                 *(float *)(param_1 + 0x730)) * _DAT_005dc5f1;
    piStack_100 = piStack_18;
    uStack_104 = 0x4e70d1;
    FUN_00449530();
    pfStack_fc = afStack_50 + 2;
    afStack_50[2] = (float)uStack_30;
    afStack_50[(uint)bVar6 * -2 + 3] = afStack_50[(uint)bVar6 * -2 + 9];
    afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    piStack_100 = (int *)param_1;
    uStack_104 = 0x4e70fa;
    FUN_00408cf0();
    auStack_3c[0] = uStack_24;
    afStack_50[(uint)bVar6 * -2 + 6] = afStack_50[(uint)bVar6 * -2 + 0xc];
    afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    pfStack_fc = (float *)0x01E661B8;
    piStack_100 = (int *)0x4e7113;
    FUN_00537e00();
    pfStack_fc = (float *)&uStack_f0;
    piStack_100 = (int *)0x4e7120;
    FUN_0049dae0();
    uStack_e8 = 2;
    param_1 = param_1 + param_2 * 4;
    uStack_ec = 0x3da3d70a;
    uStack_e4 = *(uint *)(param_1 + 0x155c);
    uStack_e0 = *(uint *)(param_1 + 0x158c);
    uStack_dc = *(uint *)(param_1 + 0x15bc);
    pfStack_fc = (float *)0x0;
    uStack_f0 = *(uint *)(param_1 + 0x15ec);
    uStack_d8 = 0;
    uStack_d4 = 0;
    puVar4 = &uStack_f0;
    puVar5 = (uint *)&stack0xfffffeb0;
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    FUN_0049db20(0x01C3DEB4,afStack_98 + 5,afStack_50 + 5);
    pfStack_fc = (float *)0x01E661B8;
    piStack_100 = (int *)0x4e71ab;
    FUN_00537e00();
    return;
  }
  *(uint *)(iVar3 + 0x15ec) = 0;
  return;
}
