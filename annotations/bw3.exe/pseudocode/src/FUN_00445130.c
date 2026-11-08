// Name: FUN_00445130
// Address: 00445130
// Address Range: [[00445130, 004456a9]]
// Convention: unknown
// Signature: void FUN_00445130(int param_1,float param_2)

#include "nocturne.h"

void FUN_00445130(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float afStackY_10b8 [997];
  uint *puVar5;
  float *pfVar6;
  uint uVar7;
  byte auStack_10c [4];
  uint uStack_108;
  int iStack_d8;
  int iStack_d4;
  uint uStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  uint uStack_b8;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float afStack_a0 [3];
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint uStack_88;
  float afStack_7c [3];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float afStack_64 [3];
  uint uStack_58;
  float afStack_54 [5];
  float afStack_40 [3];
  uint uStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar4 = 0;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_1c = param_2 * *(float *)(param_1 + 0xcdcc);
  iVar2 = param_1 + 0x158;
  while (0.0 < fStack_1c) {
    uVar7 = FUN_004fbb70(iVar2,afStack_54 + 0xe);
    FUN_00433fb0(param_1,uVar7);
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
  iVar3 = FUN_004fc070(iVar2);
  uVar7 = *(uint *)(iVar3 + 0x24);
  iVar3 = FUN_00431660(param_1,param_2);
  if (iVar3 == 0) {
    switch(uVar7) {
    case 0:
      iVar3 = FUN_00489ff0(param_1,param_2);
      if (iVar3 == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
        if (*(int *)(param_1 + 0xcde4) != 0) {
          iVar2 = FUN_00560af0(0x02CF5680,*(uint *)(param_1 + 0xd05c));
          if (iVar2 == 0) {
            uVar7 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"cow?.wav");
            *(uint *)(param_1 + 0xd05c) = uVar7;
          }
          FUN_004fc0d0(param_1 + 0x158,1,1);
        }
      }
      else {
        FUN_004fc0d0(iVar2,1,1);
      }
      break;
    case 1:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      uVar7 = 0x40900000;
      if (*(int *)(param_1 + 0xcde4) == 0) {
        iVar3 = FUN_00489ff0(param_1,param_2);
        if (iVar3 == 0) {
          FUN_004fc0d0(iVar2,0,1);
        }
      }
      else {
        uStack_18 = 0x40900000;
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        afStack_64[0] = 0.0;
        afStack_64[1] = 0.0;
        afStack_64[2] = (float)uVar7;
        uVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                          (*(int *)(param_1 + 0xcde4),afStack_cc + 0x1a,0x3f000000,0x3e32b8c2);
        iVar3 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xcde4) + 0x20,uVar7);
        if (iVar3 < 0) {
          FUN_00441ff0(PTR_DAT_005f1690,"%s gave up chase - I'm confused\n",param_1);
          FUN_004fc0d0(iVar2,0,1);
        }
        else if ((0 < iVar3) && (*(float *)(param_1 + 0xcde0) <= 0.0)) {
          FUN_004fc0d0(iVar2,2,1);
          *(uint *)(param_1 + 0xcde0) = 0x40200000;
        }
      }
      break;
    case 2:
      FUN_0042abb0(auStack_10c);
      uStack_108 = FUN_0040ce40(0x40e00000,0x41700000);
      iStack_d8 = param_1;
      iStack_d4 = param_1;
      uStack_14 = uStack_108;
      FUN_00583260(&DAT_02cfd900,param_1 + 0xfd8 + *(int *)(param_1 + 0xd058) * 0x30,0x3f333333,
                   auStack_10c);
      puVar5 = &uStack_58;
      uStack_58 = uStack_d0;
      afStack_54[(uint)bVar4 * -2] = afStack_cc[(uint)bVar4 * -2];
      afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      FUN_00408b80(param_1,puVar5);
      pfVar6 = afStack_cc + 0xb;
      afStack_a0[0] = (float)uStack_88;
      afStack_cc[(uint)bVar4 * -2 + 0xc] = afStack_cc[(uint)bVar4 * -2 + 0x12];
      iVar2 = param_1;
      afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
           afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
      FUN_004893f0(iVar2,pfVar6);
      break;
    case 5:
      if ((*(int *)(param_1 + 0xcdd0) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_0054dbd0(iVar2,0);
        pfVar6 = afStack_54 + 5;
        afStack_40[0] = (float)uStack_34;
        afStack_54[(uint)bVar4 * -2 + 6] = afStack_54[(uint)bVar4 * -2 + 9];
        afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
             afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
        FUN_00408b80(param_1,pfVar6);
        uVar7 = 0;
        afStack_54[2] = (float)uStack_b8;
        afStack_54[(uint)bVar4 * -2 + 3] = afStack_cc[(uint)bVar4 * -2 + 6];
        afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
             afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
        FUN_004cec40(0x01D22E44,afStack_54 + 2,uVar7);
        *(uint *)(param_1 + 0xcdd0) = 1;
      }
    }
    goto switchD_004456a3_caseD_3;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00445202:
      uVar7 = 1;
    }
    else {
LAB_004453e7:
      uVar7 = 0;
    }
    FUN_004fc0d0(param_1 + 0x158,uVar7,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00445202;
    if (uVar1 != 3) goto LAB_004453e7;
    FUN_004fc0d0(iVar2,0,1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_004456a3_caseD_3:
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
  }
  iVar2 = FUN_0042ccf0(param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0xcde4);
    if ((iVar2 != 0) &&
       (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0xf4))(iVar2), iVar2 == param_1)) {
      FUN_0053ec10(0x01ED78C8,*(uint *)(param_1 + 0xcde4));
    }
    FUN_0042c1e0(param_1,param_2);
    afStack_cc[2] = *(float *)(param_1 + 0x2518) * param_2;
    afStack_cc[3] = *(float *)(param_1 + 0x251c) * param_2;
    fStack_bc = *(float *)(param_1 + 0x2520) * param_2;
    fStack_70 = afStack_cc[2];
    afStack_cc[(uint)bVar4 * -2 + 0x18] = afStack_cc[(uint)bVar4 * -2 + 3];
    afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19] =
         afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    fStack_94 = fStack_70 + *(float *)(param_1 + 0x250c);
    fStack_90 = fStack_6c + *(float *)(param_1 + 0x2510);
    fStack_8c = fStack_68 + *(float *)(param_1 + 0x2514);
    fStack_28 = fStack_94;
    afStack_54[(uint)bVar4 * -2 + 0xc] = afStack_cc[(uint)bVar4 * -2 + 0xf];
    afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
         afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
    fStack_ac = fStack_28 + *(float *)(param_1 + 0x249c);
    fStack_a8 = fStack_24 + *(float *)(param_1 + 0x24a0);
    fStack_a4 = fStack_20 + *(float *)(param_1 + 0x24a4);
    afStack_7c[0] = fStack_ac;
    afStack_cc[(uint)bVar4 * -2 + 0x15] = afStack_cc[(uint)bVar4 * -2 + 9];
    afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16] =
         afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042c230(param_1,afStack_cc + 0x14);
  }
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00433350(param_1,param_2);
  return;
}
