// Name: FUN_00592320
// Address: 00592320
// Address Range: [[00592320, 00592a97]]
// Convention: unknown
// Signature: void FUN_00592320(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00592a2a) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00592320(int param_1,float param_2)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  float afStackY_1094 [1012];
  uint uVar9;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  
  bVar8 = 0;
  iVar4 = FUN_0042e1a0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_28 = param_2 * *(float *)(param_1 + 0xc1d0);
  while (0.0 < fStack_28) {
    uVar9 = FUN_00524270(param_1 + 0x158,&stack0xffffffd8);
    FUN_00434a80(param_1,uVar9);
  }
  *(uint *)(param_1 + 0xe5b4) = 0;
  *(uint *)(param_1 + 0xe5b0) = *(uint *)(param_1 + 0xe5b4);
  *(uint *)(param_1 + 0xe5ac) = *(uint *)(param_1 + 0xe5b0);
  fStack_28 = param_2 * *(float *)(param_1 + 0xc1d0);
  while (0.0 < fStack_28) {
    FUN_00524270(param_1 + 0xc268,&stack0xffffffd8);
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
  iStack_1c = param_1 + 0x158;
  iVar4 = FUN_00524770(iStack_1c);
  uVar2 = *(uint *)(iVar4 + 0x24);
  iVar4 = FUN_00432240(param_1,param_2);
  if (iVar4 == 0) {
    if (uVar2 == 0) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar4 = *(int *)(param_1 + 0xc1e8);
      if (iVar4 == 0) {
        iVar4 = FUN_004a0fe0(param_1,param_2);
        if (iVar4 != 0) {
          FUN_005247c0(iStack_1c,1,1);
        }
      }
      else {
        fStack_a0 = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
        fStack_9c = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
        fStack_98 = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
        fStack_40 = fStack_a0;
        *(uint *)((int)&stack0xffffffc4 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffff64 + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xffffffc8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffff68 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        if (SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c) <
            *(float *)(param_1 + 0xc1e0)) {
          FUN_005247c0(iStack_1c,1,1);
        }
      }
    }
    else if ((uVar2 < 2) || (uVar2 == 2)) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      if (*(int *)(param_1 + 0xc1e8) == 0) {
        iVar4 = FUN_004a0fe0(param_1,param_2);
        if (iVar4 == 0) {
          FUN_005247c0(param_1 + 0x158,0,1);
        }
        else {
          FUN_005247c0(param_1 + 0x158,1,1);
        }
      }
      else {
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        uStack_58 = 0;
        uStack_50 = 0x3FC00000;
        uStack_54 = 0;
        uVar9 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))
                          (*(int *)(param_1 + 0xc1e8),&stack0xffffffa8,0x3f000000,0x3e32b8c2);
        iVar4 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc1e8) + 0x20,uVar9);
        if (-1 < iVar4) {
          iVar4 = *(int *)(param_1 + 0xc1e8);
          fStack_4c = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_48 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_44 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_94 = fStack_4c;
          *(float *)((int)&stack0xffffff70 + (uint)bVar8 * -8) =
               (&stack0xffffffb8)[(uint)bVar8 * 0xfffffffe];
          *(uint *)((int)&stack0xffffff74 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               *(uint *)((int)&stack0xffffffbc + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          if ((SQRT(fStack_8c * fStack_8c + fStack_94 * fStack_94 + fStack_90 * fStack_90) <
               _DAT_00606274) && (*(int *)(param_1 + 0xe7d0) == 0)) {
            *(uint *)(param_1 + 0xe7d0) = 1;
            *(uint *)(param_1 + 0xe7d4) = 0;
            FUN_00573a80(*(uint *)(param_1 + 0xe7c8));
            *(uint *)(param_1 + 0xe7cc) = 0x461c3f9a;
            (**(code **)(*(int *)(param_1 + 0x154) + 0x30))(param_1,"succubus-morph.wav");
          }
        }
      }
    }
    goto LAB_0059247c;
  }
  uVar2 = *(uint *)(param_1 + 0x273c);
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_00592451:
      uVar9 = 1;
    }
    else {
LAB_005927f1:
      uVar9 = 0;
    }
    FUN_005247c0(param_1 + 0x158,uVar9,1);
  }
  else {
    if (uVar2 < 3) goto LAB_00592451;
    if (uVar2 != 3) goto LAB_005927f1;
    FUN_005247c0(iStack_1c,0,1);
    FUN_00445430(PTR_DAT_00611100,">%s confused while walking to scriptDest!\n" + 1,param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
LAB_0059247c:
  if (0.0 < *(float *)(param_1 + 0xc1e4)) {
    *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
  }
  iVar4 = FUN_0042e120(param_1);
  if (iVar4 != 0) {
    FUN_0042d700(param_1,param_2);
    fStack_88 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_84 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_80 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_ac = fStack_88;
    *(uint *)((int)&stack0xffffff58 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffff7c + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffff5c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffff80 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    fStack_34 = fStack_ac + *(float *)(param_1 + 0x250c);
    fStack_30 = fStack_a8 + *(float *)(param_1 + 0x2510);
    fStack_2c = fStack_a4 + *(float *)(param_1 + 0x2514);
    fStack_70 = fStack_34;
    *(uint *)((int)&stack0xffffff94 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffffd0 + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffff98 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffffd4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    fStack_7c = fStack_70 + *(float *)(param_1 + 0x249c);
    fStack_78 = fStack_6c + *(float *)(param_1 + 0x24a0);
    fStack_74 = fStack_68 + *(float *)(param_1 + 0x24a4);
    fStack_64 = fStack_7c;
    *(uint *)((int)&stack0xffffffa0 + (uint)bVar8 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffff88 + (uint)bVar8 * -8);
    *(uint *)(&stack0xffffffa4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffff8c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(float *)(param_1 + 0x24a0) = *(float *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a4);
    FUN_0042d750(param_1,&stack0xffffff9c);
  }
  FUN_0042e160(param_1);
  FUN_005675a0(param_1 + 0x158);
  FUN_00433e80(param_1,param_2);
  uStack_20 = FUN_00524770(param_1 + 0x158);
  uStack_24 = *(uint *)(param_1 + 0x160);
  FUN_00524ae0(param_1 + 0xc268,uStack_20,uStack_24);
  FUN_00567580(param_1 + 0xc268);
  if ((*(int *)(param_1 + 0xe7d0) != 0) &&
     (fVar3 = *(float *)(param_1 + 0xe7d4) + param_2, *(float *)(param_1 + 0xe7d4) = fVar3,
     _DAT_00606278 < fVar3)) {
    iVar5 = FUN_005c0f32(0xc29c);
    iVar4 = 0;
    if (iVar5 != 0) {
      iVar4 = FUN_004efa10(iVar5);
    }
    uVar9 = 0x01D2C900;
    iStack_18 = iVar4;
    if (iVar4 != 0) {
      *(uint *)(param_1 + 0x70) = 2;
      FUN_0051bd60(uVar9,iVar4);
      *(uint *)(iVar4 + 0x20) = *(uint *)(param_1 + 0x20);
      *(uint *)(iVar4 + 0x24) = *(uint *)(param_1 + 0x24);
      *(uint *)(iVar4 + 0x28) = *(uint *)(param_1 + 0x28);
      *(uint *)(iVar4 + 0x2c) = *(uint *)(param_1 + 0x2c);
      if ((uint *)(iVar4 + 0x30) != (uint *)(param_1 + 0x30)) {
        *(uint *)(iVar4 + 0x30) = *(uint *)(param_1 + 0x30);
        *(uint *)(iVar4 + 0x34) = *(uint *)(param_1 + 0x34);
        *(uint *)(iVar4 + 0x38) = *(uint *)(param_1 + 0x38);
      }
      pcVar6 = "hdwing.cth";
      pcVar7 = (char *)(iStack_18 + 0x2ca4);
      *(uint *)(iStack_18 + 0x2ca0) = 1;
      do {
        cVar1 = *pcVar6;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      (*(code *)**(uint **)(iStack_18 + 0x154))(iStack_18);
      iVar4 = iStack_18 + 0x158;
      FUN_00524ae0(iVar4,uStack_20,uStack_24);
      FUN_00567580(iVar4);
      iVar4 = iStack_18;
      *(uint *)(iStack_18 + 0x108) = *(uint *)(param_1 + 0x108);
      uVar9 = 0x01D2C900;
      *(uint *)(iStack_18 + 0x10c) = *(uint *)(param_1 + 0x10c);
      *(uint *)(iStack_18 + 0x110) = *(uint *)(param_1 + 0x110);
      FUN_0051b160(uVar9,iStack_18);
      uVar9 = *(uint *)(param_1 + 0xe7a0);
      *(uint *)(param_1 + 0xe7a0) = *(uint *)(iVar4 + 0x2e34);
      *(uint *)(iVar4 + 0x2e34) = uVar9;
    }
  }
  if (*(int *)(param_1 + 0x27bc) != 0) {
    FUN_00441fa0(param_1 + 0xe60c,param_1 + 0x20,param_1 + 0x30,param_2,
                 *(uint *)(param_1 + 0x2504),param_1 + 0xc268);
  }
  iVar4 = FUN_004a6c30(0x01C51D80,"succubusShutUp");
  if (iVar4 == 0) {
    iVar4 = FUN_005735a0(*(uint *)(param_1 + 0xe7c8));
    if ((iVar4 == 0) &&
       (param_2 = *(float *)(param_1 + 0xe7cc) - param_2, *(float *)(param_1 + 0xe7cc) = param_2,
       param_2 < 0.0)) {
      uStack_14 = FUN_0040cc00(0x40a00000,0x41200000);
      *(uint *)(param_1 + 0xe7cc) = uStack_14;
      uVar9 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"succubus-horny-?.wav")
      ;
      *(uint *)(param_1 + 0xe7c8) = uVar9;
      return;
    }
    return;
  }
  FUN_00573a80(*(uint *)(param_1 + 0xe7c8));
  return;
}
