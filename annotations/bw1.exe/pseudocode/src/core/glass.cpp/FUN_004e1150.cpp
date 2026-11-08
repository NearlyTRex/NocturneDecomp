// Name: FUN_004e1150
// Address: 004e1150
// Address Range: [[004e1150, 004e19b7]]
// Convention: unknown
// Signature: void FUN_004e1150(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e1150(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  float *pfVar4;
  int extraout_EDX;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float afStackY_1120 [1013];
  float fStack_138;
  float fStack_12c;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  uint uStack_110;
  uint uStack_10c;
  float fStack_108;
  float fStack_104;
  uint uStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  uint uStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint uStack_98;
  uint uStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  uint uStack_58;
  float fStack_54;
  uint uStack_50;
  uint uStack_4c;
  float fStack_48;
  uint uStack_44;
  uint uStack_40;
  float fStack_3c;
  int iStack_30;
  int iStack_2c;
  float fStack_28;
  int iStack_24;
  float fStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar9 = 0;
  FUN_00408850(param_1);
  FUN_00484f00(DAT_00612560,param_1 + 0x164);
  if (*(int *)(param_1 + 0x1e8) != 0) {
    uStack_40 = 0;
    uStack_44 = 0;
    fStack_48 = *(float *)(param_1 + 0x158) * _DAT_005e3f0c;
    FUN_0045f690(param_1 + 0x3c,&stack0xffffffb8);
    fStack_e4 = fStack_3c;
    (&stack0xffffff20)[(uint)bVar9 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffffc8 + (uint)bVar9 * 0xfffffffe * 4);
    *(uint *)((int)&stack0xffffff24 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)(&stack0xffffffcc + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    fStack_fc = *(float *)(param_1 + 0x20) + fStack_e4;
    fStack_f8 = *(float *)(param_1 + 0x24) + fStack_e0;
    fStack_f4 = *(float *)(param_1 + 0x28) + fStack_dc;
    fStack_d8 = fStack_fc;
    (&stack0xffffff2c)[(uint)bVar9 * 0xfffffffe] = (&stack0xffffff08)[(uint)bVar9 * 0xfffffffe];
    *(uint *)((int)&stack0xffffff30 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffff0c + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    if (&stack0xffffff10 != &stack0xffffff28) {
      fStack_f0 = fStack_d8;
      fStack_ec = fStack_d4;
      uStack_e8 = uStack_d0;
    }
    fStack_48 = -fStack_48;
    FUN_0045f690(param_1 + 0x3c,&stack0xffffffb8);
    fStack_6c = fStack_c0;
    *(uint *)((int)&stack0xffffff98 + (uint)bVar9 * -8) =
         *(uint *)(&stack0xffffff44 + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xffffff9c + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)(&stack0xffffff48 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    fStack_78 = *(float *)(param_1 + 0x20) + fStack_6c;
    fStack_74 = *(float *)(param_1 + 0x24) + fStack_68;
    fStack_70 = *(float *)(param_1 + 0x28) + fStack_64;
    fStack_54 = fStack_78;
    (&stack0xffffffb0)[(uint)bVar9 * 0xfffffffe] =
         *(uint *)((int)&stack0xffffff8c + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xffffffb4 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    if (&stack0xffffff64 != &stack0xffffffac) {
      fStack_9c = fStack_54;
      uStack_98 = uStack_50;
      uStack_94 = uStack_4c;
    }
    uStack_44 = *(uint *)(param_1 + 0x15c);
    FUN_0045f690(param_1 + 0x3c,&stack0xffffffb8);
    fStack_b4 = fStack_138;
    *(uint *)((int)&stack0xffffff50 + (uint)bVar9 * -8) =
         *(uint *)(&stack0xfffffecc + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xffffff54 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)(&stack0xfffffed0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    fStack_cc = *(float *)(param_1 + 0x20) + fStack_b4;
    fStack_c8 = *(float *)(param_1 + 0x24) + fStack_b0;
    fStack_c4 = *(float *)(param_1 + 0x28) + fStack_ac;
    fStack_84 = fStack_cc;
    (&stack0xffffff80)[(uint)bVar9 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffff38 + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xffffff84 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffff3c + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    if (&stack0xfffffef8 != &stack0xffffff7c) {
      fStack_108 = fStack_84;
      fStack_104 = fStack_80;
      uStack_100 = uStack_7c;
    }
    fStack_48 = -fStack_48;
    FUN_0045f690(param_1 + 0x3c,&stack0xffffffb8);
    fStack_120 = fStack_12c;
    *(uint *)((int)&stack0xfffffee4 + (uint)bVar9 * -8) =
         *(uint *)(&stack0xfffffed8 + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xfffffee8 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)(&stack0xfffffedc + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    fStack_a8 = *(float *)(param_1 + 0x20) + fStack_120;
    fStack_a4 = *(float *)(param_1 + 0x24) + fStack_11c;
    fStack_a0 = *(float *)(param_1 + 0x28) + fStack_118;
    fStack_60 = fStack_a8;
    (&stack0xffffffa4)[(uint)bVar9 * 0xfffffffe] =
         *(uint *)((int)&stack0xffffff5c + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xffffffa8 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffff60 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    if (&stack0xfffffeec != &stack0xffffffa0) {
      fStack_114 = fStack_60;
      uStack_110 = uStack_5c;
      uStack_10c = uStack_58;
    }
    FUN_00518820(param_1 + 0x1ec,&stack0xffffff10,&stack0xffffff64,&stack0xfffffef8,&stack0xfffffeec
                );
  }
  fVar10 = (float10)*(float *)(param_1 + 0x158) * (float10)_DAT_005e3f14;
  FUN_005c03a0();
  iStack_14 = (int)ROUND(fVar10);
  *(int *)(param_1 + 0xb2c) = iStack_14 + 1;
  if (4 < iStack_14 + 1) {
    *(uint *)(param_1 + 0xb2c) = 4;
  }
  fVar10 = (float10)*(float *)(param_1 + 0x15c) * (float10)_DAT_005e3f14;
  FUN_005c03a0();
  iStack_14 = (int)ROUND(fVar10);
  *(int *)(param_1 + 0xb30) = iStack_14 + 1;
  if (4 < iStack_14 + 1) {
    *(uint *)(param_1 + 0xb30) = 4;
  }
  iVar3 = *(int *)(param_1 + 0xb2c) * *(int *)(param_1 + 0xb30);
  *(int *)(param_1 + 0xb34) = (*(int *)(param_1 + 0xb2c) + 1) * (*(int *)(param_1 + 0xb30) + 1);
  *(int *)(param_1 + 0xb38) = iVar3;
  if ((0x19 < *(int *)(param_1 + 0xb34)) || (0x10 < iVar3)) {
    _DAT_01d1d400 = "..\\core\\glass.cpp";
    _DAT_01d1d404 = 0x86;
    FUN_005030e0("CGlass::setup - Too many verticies(%d) or faces(%d)!",*(uint *)(param_1 + 0xb34),
                 *(uint *)(param_1 + 0xb38));
  }
  fStack_20 = *(float *)(param_1 + 0x158) / (float)*(int *)(param_1 + 0xb2c);
  fStack_28 = *(float *)(param_1 + 0x15c) / (float)*(int *)(param_1 + 0xb30);
  iVar3 = 0;
  fStack_90 = 0.0;
  fStack_8c = 0.0;
  fStack_88 = 0.0;
  iStack_2c = param_1 + 0x38c;
  for (iStack_1c = 0; iStack_1c < *(int *)(param_1 + 0xb30) + 1; iStack_1c = iStack_1c + 1) {
    fStack_90 = -*(float *)(param_1 + 0x158) * (float)_DAT_005e3f14;
    pfVar4 = (float *)(iVar3 * 0xc + iStack_2c);
    for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0xb2c) + 1; iVar6 = iVar6 + 1) {
      if (pfVar4 != &stack0xffffff70) {
        *pfVar4 = fStack_90;
        pfVar4[1] = fStack_8c;
        pfVar4[2] = fStack_88;
      }
      fVar10 = (float10)_DAT_005e3f1c;
      fVar11 = (float10)_DAT_005e3f24;
      fVar12 = ((float10)iVar6 / (float10)*(int *)(param_1 + 0xb2c)) * fVar10 + fVar11;
      iStack_14 = iVar6;
      FUN_005c03a0();
      *(int *)(extraout_ECX + 0x5e4) = (int)ROUND(fVar12);
      iStack_14 = *(int *)(param_1 + 0xb30) - iStack_1c;
      fVar11 = fVar11 + ((float10)iStack_14 / (float10)*(int *)(param_1 + 0xb30)) * fVar10;
      FUN_005c03a0();
      iStack_14 = (int)ROUND(fVar11);
      pfVar4 = (float *)(extraout_EDX + 0xc);
      *(int *)(extraout_ECX_00 + 0x644) = iStack_14;
      iVar3 = iVar3 + 1;
      fStack_90 = fStack_90 + fStack_20;
    }
    fStack_8c = fStack_8c + fStack_28;
  }
  iStack_18 = 0;
  iStack_30 = 0;
  if (0 < *(int *)(param_1 + 0xb30)) {
    iStack_24 = param_1 + 0x6ac;
    do {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0xb2c)) {
        iVar6 = iStack_30 * 0x48 + iStack_24;
        do {
          *(uint *)(iVar6 + 4) = 4;
          *(uint *)(iVar6 + 0x14) = 0;
          uVar2 = *(uint *)(iVar6 + 0x14);
          *(uint *)(iVar6 + 0x10) = uVar2;
          *(uint *)(iVar6 + 0xc) = uVar2;
          *(uint *)(iVar6 + 8) = uVar2;
          iVar5 = (*(int *)(param_1 + 0xb2c) + 1) * iStack_18 + iVar3;
          *(int *)(iVar6 + 0x18) = iVar5;
          *(uint *)(iVar6 + 0x1c) = *(uint *)(param_1 + 0x5e4 + iVar5 * 4);
          *(uint *)(iVar6 + 0x20) = *(uint *)(param_1 + 0x648 + iVar5 * 4);
          *(int *)(iVar6 + 0x24) = iVar5 + 1;
          *(uint *)(iVar6 + 0x28) = *(uint *)(param_1 + 0x5e8 + iVar5 * 4);
          *(uint *)(iVar6 + 0x2c) = *(uint *)(param_1 + 0x64c + iVar5 * 4);
          *(int *)(iVar6 + 0x30) = *(int *)(param_1 + 0xb2c) + iVar5 + 2;
          *(uint *)(iVar6 + 0x34) =
               *(uint *)(param_1 + 0x5ec + (*(int *)(param_1 + 0xb2c) + iVar5) * 4);
          *(uint *)(iVar6 + 0x38) =
               *(uint *)(param_1 + 0x650 + (*(int *)(param_1 + 0xb2c) + iVar5) * 4);
          *(int *)(iVar6 + 0x3c) = *(int *)(param_1 + 0xb2c) + iVar5 + 1;
          *(uint *)(iVar6 + 0x40) =
               *(uint *)(param_1 + 0x5e8 + (*(int *)(param_1 + 0xb2c) + iVar5) * 4);
          *(uint *)(iVar6 + 0x44) =
               *(uint *)(param_1 + 0x64c + (iVar5 + *(int *)(param_1 + 0xb2c)) * 4);
          iVar3 = iVar3 + 1;
          iStack_30 = iStack_30 + 1;
          iVar6 = iVar6 + 0x48;
        } while (iVar3 < *(int *)(param_1 + 0xb2c));
      }
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < *(int *)(param_1 + 0xb30));
  }
  *(uint *)(param_1 + 0xfc) = (uint)(*(int *)(param_1 + 0x17c) < 0xfde9);
  iVar3 = FUN_005c04e0(param_1 + 0x184,"none");
  if (iVar3 == 0) {
    *(byte *)(param_1 + 0x184) = 0;
  }
  *(uint *)(param_1 + 0x104) = 0;
  if (*(char *)(param_1 + 0x184) == '\0') {
    *(uint *)(param_1 + 0x104) = 1;
  }
  *(uint *)(param_1 + 0xb3c) = 0;
  if (*(int *)(param_1 + 0x370) != 0) {
    pcVar8 = (char *)(param_1 + 0x37c);
    iVar3 = FUN_005c0f80(pcVar8,"7YEARS.RAW");
    if (iVar3 == 0) {
      iVar3 = FUN_005c04e0(param_1 + 0x16c,"factwin.raw");
      if (iVar3 == 0) {
        pcVar7 = "factwinx.raw";
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      iVar3 = FUN_005c04e0(param_1 + 0x16c,"dockwin.raw");
      if (iVar3 == 0) {
        pcVar7 = "dockwinx.raw";
        pcVar8 = (char *)(param_1 + 0x37c);
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      iVar3 = FUN_005c04e0(param_1 + 0x16c,"windo10.raw");
      if (iVar3 == 0) {
        pcVar7 = "windo10x.raw";
        pcVar8 = (char *)(param_1 + 0x37c);
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      iVar3 = FUN_005c04e0(param_1 + 0x16c,"windo11.raw");
      if (iVar3 == 0) {
        pcVar7 = "windo11x.raw";
        pcVar8 = (char *)(param_1 + 0x37c);
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') {
            return;
          }
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
        return;
      }
    }
  }
  return;
}
