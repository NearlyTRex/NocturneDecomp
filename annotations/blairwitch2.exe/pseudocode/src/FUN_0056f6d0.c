// Name: FUN_0056f6d0
// Address: 0056f6d0
// Address Range: [[0056f6d0, 0056fe48]]
// Convention: unknown
// Signature: void FUN_0056f6d0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0056fddb) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056f6d0(int param_1,float param_2)

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
  iVar4 = FUN_004244b0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  fStack_28 = param_2 * *(float *)(param_1 + 0x10a60);
  while (0.0 < fStack_28) {
    uVar9 = FUN_005030c0(param_1 + 0x2b4,&stack0xffffffd8);
    FUN_0042aa00(param_1,uVar9);
  }
  *(uint *)(param_1 + 0x12d54) = 0;
  *(uint *)(param_1 + 0x12d50) = *(uint *)(param_1 + 0x12d54);
  *(uint *)(param_1 + 0x12d4c) = *(uint *)(param_1 + 0x12d50);
  fStack_28 = param_2 * *(float *)(param_1 + 0x10a60);
  while (0.0 < fStack_28) {
    FUN_005030c0(param_1 + 0x10af8,&stack0xffffffd8);
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x10a60));
  iStack_1c = param_1 + 0x2b4;
  iVar4 = FUN_005035c0(iStack_1c);
  uVar2 = *(uint *)(iVar4 + 0x24);
  iVar4 = FUN_004287f0(param_1,param_2);
  if (iVar4 == 0) {
    if (uVar2 == 0) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
      iVar4 = *(int *)(param_1 + 0x10a78);
      if (iVar4 == 0) {
        iVar4 = FUN_00488970(param_1,param_2);
        if (iVar4 != 0) {
          FUN_00503620(iStack_1c,1,1);
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
            *(float *)(param_1 + 0x10a70)) {
          FUN_00503620(iStack_1c,1,1);
        }
      }
    }
    else if ((uVar2 < 2) || (uVar2 == 2)) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
      if (*(int *)(param_1 + 0x10a78) == 0) {
        iVar4 = FUN_00488970(param_1,param_2);
        if (iVar4 == 0) {
          FUN_00503620(param_1 + 0x2b4,0,1);
        }
        else {
          FUN_00503620(param_1 + 0x2b4,1,1);
        }
      }
      else {
        *(uint *)(param_1 + 0x2510) = 0;
        *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
        *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
        uStack_58 = 0;
        uStack_50 = 0x3FC00000;
        uStack_54 = 0;
        uVar9 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))
                          (*(int *)(param_1 + 0x10a78),&stack0xffffffa8,0x3f000000,0x3e32b8c2);
        iVar4 = FUN_00423000(param_1,*(int *)(param_1 + 0x10a78) + 0x20,uVar9);
        if (-1 < iVar4) {
          iVar4 = *(int *)(param_1 + 0x10a78);
          fStack_4c = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_48 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_44 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_94 = fStack_4c;
          *(float *)((int)&stack0xffffff70 + (uint)bVar8 * -8) =
               (&stack0xffffffb8)[(uint)bVar8 * 0xfffffffe];
          *(uint *)((int)&stack0xffffff74 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               *(uint *)((int)&stack0xffffffbc + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          if ((SQRT(fStack_8c * fStack_8c + fStack_94 * fStack_94 + fStack_90 * fStack_90) <
               _DAT_005fc3d4) && (*(int *)(param_1 + 0x12f70) == 0)) {
            *(uint *)(param_1 + 0x12f70) = 1;
            *(uint *)(param_1 + 0x12f74) = 0;
            FUN_00551050(*(uint *)(param_1 + 0x12f68));
            *(uint *)(param_1 + 0x12f6c) = 0x461c3f9a;
            (**(code **)(*(int *)(param_1 + 0x2b0) + 0x38))(param_1,"succubus-morph.wav");
          }
        }
      }
    }
    goto LAB_0056f82c;
  }
  uVar2 = *(uint *)(param_1 + 0x27ac);
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_0056f801:
      uVar9 = 1;
    }
    else {
LAB_0056fba2:
      uVar9 = 0;
    }
    FUN_00503620(param_1 + 0x2b4,uVar9,1);
  }
  else {
    if (uVar2 < 3) goto LAB_0056f801;
    if (uVar2 != 3) goto LAB_0056fba2;
    FUN_00503620(iStack_1c,0,1);
    FUN_00436710(PTR_DAT_00609ed0,">%s confused while walking to scriptDest!\n" + 1,param_1);
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
LAB_0056f82c:
  if (0.0 < *(float *)(param_1 + 0x10a74)) {
    *(float *)(param_1 + 0x10a74) = *(float *)(param_1 + 0x10a74) - param_2;
  }
  iVar4 = FUN_00424430(param_1);
  if (iVar4 != 0) {
    FUN_00423a10(param_1,param_2);
    fStack_88 = *(float *)(param_1 + 0x2588) * param_2;
    fStack_84 = *(float *)(param_1 + 0x258c) * param_2;
    fStack_80 = *(float *)(param_1 + 0x2590) * param_2;
    fStack_ac = fStack_88;
    *(uint *)((int)&stack0xffffff58 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffff7c + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffff5c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffff80 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    fStack_34 = fStack_ac + *(float *)(param_1 + 0x257c);
    fStack_30 = fStack_a8 + *(float *)(param_1 + 0x2580);
    fStack_2c = fStack_a4 + *(float *)(param_1 + 0x2584);
    fStack_70 = fStack_34;
    *(uint *)((int)&stack0xffffff94 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffffd0 + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffff98 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffffd4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    fStack_7c = fStack_70 + *(float *)(param_1 + 0x2508);
    fStack_78 = fStack_6c + *(float *)(param_1 + 0x250c);
    fStack_74 = fStack_68 + *(float *)(param_1 + 0x2510);
    fStack_64 = fStack_7c;
    *(uint *)((int)&stack0xffffffa0 + (uint)bVar8 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffff88 + (uint)bVar8 * -8);
    *(uint *)(&stack0xffffffa4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffff8c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    *(uint *)(param_1 + 0x2510) = 0;
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x2510);
    FUN_00423a60(param_1,&stack0xffffff9c);
  }
  FUN_00424470(param_1);
  FUN_00544f00(param_1 + 0x2b4);
  FUN_00429e90(param_1,param_2);
  uStack_20 = FUN_005035c0(param_1 + 0x2b4);
  uStack_24 = *(uint *)(param_1 + 700);
  FUN_00503950(param_1 + 0x10af8,uStack_20,uStack_24);
  FUN_00544ee0(param_1 + 0x10af8);
  if ((*(int *)(param_1 + 0x12f70) != 0) &&
     (fVar3 = *(float *)(param_1 + 0x12f74) + param_2, *(float *)(param_1 + 0x12f74) = fVar3,
     _DAT_005fc3d8 < fVar3)) {
    iVar5 = FUN_005b8be2(0x10b2c);
    iVar4 = 0;
    if (iVar5 != 0) {
      iVar4 = FUN_004d37f0(iVar5);
    }
    uVar9 = 0x01D182F0;
    iStack_18 = iVar4;
    if (iVar4 != 0) {
      *(uint *)(param_1 + 0x70) = 2;
      FUN_004fcda0(uVar9,iVar4);
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
      pcVar7 = (char *)(iStack_18 + 0x2d10);
      *(uint *)(iStack_18 + 0x2d0c) = 1;
      do {
        cVar1 = *pcVar6;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      (**(code **)(*(int *)(iStack_18 + 0x2b0) + 8))(iStack_18);
      iVar4 = iStack_18 + 0x2b4;
      FUN_00503950(iVar4,uStack_20,uStack_24);
      FUN_00544ee0(iVar4);
      iVar4 = iStack_18;
      *(uint *)(iStack_18 + 0x108) = *(uint *)(param_1 + 0x108);
      uVar9 = 0x01D182F0;
      *(uint *)(iStack_18 + 0x10c) = *(uint *)(param_1 + 0x10c);
      *(uint *)(iStack_18 + 0x110) = *(uint *)(param_1 + 0x110);
      FUN_004fc200(uVar9,iStack_18);
      uVar9 = *(uint *)(param_1 + 0x12f40);
      *(uint *)(param_1 + 0x12f40) = *(uint *)(iVar4 + 0x2ea0);
      *(uint *)(iVar4 + 0x2ea0) = uVar9;
    }
  }
  if (*(int *)(param_1 + 0x2828) != 0) {
    FUN_005b1780(param_1 + 0x12dac,param_1 + 0x20,param_1 + 0x30,param_2,
                 *(uint *)(param_1 + 0x2574),param_1 + 0x10af8);
  }
  iVar4 = FUN_0048e340(0x01C38BC0,"succubusShutUp");
  if (iVar4 == 0) {
    iVar4 = FUN_00550b70(*(uint *)(param_1 + 0x12f68));
    if ((iVar4 == 0) &&
       (param_2 = *(float *)(param_1 + 0x12f6c) - param_2, *(float *)(param_1 + 0x12f6c) = param_2,
       param_2 < 0.0)) {
      uStack_14 = FUN_0040cf60(0x40a00000,0x41200000);
      *(uint *)(param_1 + 0x12f6c) = uStack_14;
      uVar9 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"succubus-horny-?.wav")
      ;
      *(uint *)(param_1 + 0x12f68) = uVar9;
      return;
    }
    return;
  }
  FUN_00551050(*(uint *)(param_1 + 0x12f68));
  return;
}
