// Name: FUN_0049f310
// Address: 0049f310
// Address Range: [[0049f310, 0049fdef]]
// Convention: unknown
// Signature: void FUN_0049f310(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049f310(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float afStackY_1158 [997];
  ulonglong uVar13;
  ulonglong uVar14;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  float fStack_128;
  uint uStack_124;
  float fStack_120;
  float fStack_11c;
  uint uStack_118;
  float fStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  float fStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_ec;
  float fStack_e0;
  float fStack_dc;
  uint uStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  uint uStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  uint uStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_3c;
  float fStack_38;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  
  bVar8 = 0;
  iVar5 = *(int *)(param_1 + 0x4b0);
  iVar2 = FUN_005c0f80();
  if ((iVar2 != 0) && (iVar2 = FUN_004a6c30(), iVar2 != 0)) {
    iVar5 = 1;
    *(uint *)(param_1 + 0x3ec) = 1;
    *(uint *)(param_1 + 0x168) = 1;
    *(uint *)(param_1 + 0x46c) = *(uint *)(param_1 + 0x234);
    FUN_0054f060();
  }
  iVar2 = FUN_004a6c30();
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x168) = 0;
    *(uint *)(param_1 + 0x3ec) = 0;
  }
  if (*(int *)(param_1 + 0x158) == 10) {
    iVar5 = 0;
    iVar2 = FUN_00574010((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                         (double)*(float *)(param_1 + 0x28),*(uint *)(param_1 + 0x3f4));
    if (((iVar2 == 0) || (iVar5 = 1, *(int *)(0x01CCF390 + 0x1c) != 0)) ||
       (iVar2 = FUN_005c1210(param_1 + 0x3f8,&DAT_005dc970,3), iVar2 != 0)) {
      if (iVar5 != 0) goto LAB_0049f3c7;
    }
    else {
      iVar5 = 0;
    }
    FUN_00573a80(*(uint *)(param_1 + 0x45c));
  }
LAB_0049f3c7:
  if (*(int *)(param_1 + 0x168) == 0) {
    FUN_00573a80(*(uint *)(param_1 + 0x45c));
    goto LAB_0049f4cb;
  }
  fVar1 = *(float *)(param_1 + 0x464) + param_2;
  *(float *)(param_1 + 0x464) = fVar1;
  if ((fVar1 < *(float *)(param_1 + 0x468)) ||
     (*(float *)(param_1 + 0x464) = *(float *)(param_1 + 0x464) - *(float *)(param_1 + 0x468),
     iVar5 == 0)) goto LAB_0049f4cb;
  switch(*(uint *)(param_1 + 0x158)) {
  case 0:
    FUN_004b59e0(0x01C57074,param_1 + 0x20,0,0x4000,0x10000,0,0xffff);
    goto LAB_0049f448;
  case 1:
    iVar5 = 0;
    do {
      if (&stack0xfffffed8 != (float *)(param_1 + 0x20)) {
        fStack_128 = *(float *)(param_1 + 0x20);
        uStack_124 = *(uint *)(param_1 + 0x24);
        fStack_120 = *(float *)(param_1 + 0x28);
      }
      fStack_18 = (float)FUN_0040cc00();
      fStack_128 = fStack_18 * *(float *)(param_1 + 0x15c) + fStack_128;
      fStack_18 = (float)FUN_0040cc00();
      fStack_120 = fStack_18 * *(float *)(param_1 + 0x164) + fStack_120;
      uStack_134 = 0;
      uStack_130 = *(uint *)(param_1 + 0x160);
      iVar5 = iVar5 + 1;
      uStack_12c = 0;
      FUN_004b5b30(0x01C57074,&stack0xfffffed8,0x3f800000,&stack0xfffffecc,0xffff);
    } while (iVar5 < 4);
    break;
  case 4:
    fStack_3c = (float)FUN_0040cc00();
    fStack_18 = fStack_3c;
    fStack_18 = (float)FUN_0040cc00();
    fStack_38 = *(float *)(param_1 + 0x3c4);
    fVar9 = (float10)fcos((float10)fStack_3c);
    fVar10 = (float10)fcos((float10)fStack_18);
    fVar11 = (float10)fsin((float10)fStack_3c);
    fVar12 = (float10)fsin((float10)fStack_18);
    fStack_148 = (float)((float10)fStack_38 * fVar11);
    fStack_14c = (float)((float10)fStack_38 * fVar10 * fVar9);
    fStack_144 = (float)(fVar12 * (float10)fStack_38 * fVar9);
    FUN_00468900(param_1 + 0x248);
    FUN_004b5eb0();
    break;
  case 5:
    FUN_004a02e0(param_1);
    uVar4 = 1;
    uVar14 = CONCAT44(2,param_1 + 0x30);
    uVar13 = CONCAT44(&stack0xffffff50,0x01C57074);
    uStack_b0 = uStack_74;
    *(uint *)((int)&stack0xffffff54 + (uint)bVar8 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff90 + (uint)bVar8 * -8);
    *(uint *)(&stack0xffffff58 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xffffff94 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    FUN_004b6f80(uVar13,uVar14,uVar4);
    iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    fStack_bc = *(float *)(iVar5 + 0x20) - *(float *)(param_1 + 0x20);
    fStack_b8 = *(float *)(iVar5 + 0x24) - *(float *)(param_1 + 0x24);
    fStack_b4 = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28);
    fStack_8c = fStack_bc;
    *(uint *)((int)&stack0xffffff78 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffff48 + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffff7c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffff4c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    if (SQRT(fStack_84 * fStack_84 + fStack_8c * fStack_8c + fStack_88 * fStack_88) <
        (float)_DAT_005dc98f) {
      FUN_00408bb0();
      uStack_f8 = uStack_ec;
      *(uint *)((int)&stack0xffffff0c + (uint)bVar8 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff18 + (uint)bVar8 * -8);
      *(uint *)(&stack0xffffff10 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           *(uint *)(&stack0xffffff1c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      FUN_004308a0();
    }
    break;
  case 6:
    iVar5 = param_1 + 0x20;
    FUN_004b72d0(0x01C57074,iVar5,0);
    FUN_004b72d0(0x01C57074,iVar5,0);
    FUN_004b72d0(0x01C57074,iVar5,0);
    FUN_004b72d0(0x01C57074,iVar5,0);
    break;
  case 7:
    puVar6 = (uint *)(param_1 + 0x20);
    FUN_004b6fe0(0x01C57074,puVar6,*(uint *)(param_1 + 0x160),0,
                 *(float *)(param_1 + 0x15c) * (float)_DAT_005dc987);
    if (&stack0xfffffefc != puVar6) {
      uStack_104 = *puVar6;
      fStack_100 = *(float *)(param_1 + 0x24);
      uStack_fc = *(uint *)(param_1 + 0x28);
    }
    fStack_100 = *(float *)(param_1 + 0x160) * (float)_DAT_005dc987 + fStack_100;
    FUN_0045e970();
    iVar5 = FUN_0040cc60();
    *(int *)(param_1 + 0x4ac) = iVar5;
    iVar5 = (iVar5 + (iVar5 >> 0x1f) * -0x100) - (uint)((iVar5 >> 0x1f) << 7 < 0);
    iVar2 = iVar5 >> 0x1f;
    *(char *)(param_1 + 0x48c) =
         (char)((int)(((iVar5 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
    goto LAB_0049f48d;
  case 8:
    FUN_004b59e0(0x01C57074,param_1 + 0x20,0,0x4000,0x10000,1,0xffff);
    break;
  case 9:
    iVar5 = *(int *)(param_1 + 0x3f0);
    if (iVar5 != 0) {
      (**(code **)(*(int *)(iVar5 + 0x154) + 0x1c))(iVar5);
      puVar6 = (uint *)&stack0xfffffe60;
      puVar7 = &stack0xfffffe78;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      fStack_d4 = fStack_188 + fStack_17c;
      fStack_d0 = fStack_184 + fStack_178;
      fStack_cc = fStack_180 + fStack_174;
      fStack_80 = fStack_188 + fStack_17c;
      *(float *)((int)&stack0xffffff84 + (uint)bVar8 * -8) =
           (&stack0xffffff30)[(uint)bVar8 * 0xfffffffe];
      *(uint *)((int)&stack0xffffff88 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           *(uint *)((int)&stack0xffffff34 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      fStack_68 = fStack_80 * _DAT_005dc97f;
      fStack_64 = fStack_7c * _DAT_005dc97f;
      fStack_60 = fStack_78 * _DAT_005dc97f;
      fStack_5c = fStack_80 * _DAT_005dc97f;
      *(uint *)(&stack0xffffffa8 + (uint)bVar8 * -8) =
           *(uint *)((int)&stack0xffffff9c + (uint)bVar8 * -8);
      *(uint *)(&stack0xffffffac + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           *(uint *)((int)&stack0xffffffa0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      FUN_00408ac0();
      fStack_140 = fStack_170;
      (&stack0xfffffec4)[(uint)bVar8 * 0xfffffffe] =
           (float)*(uint *)(&stack0xfffffe94 + (uint)bVar8 * -8);
      *(uint *)((int)&stack0xfffffec8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           *(uint *)(&stack0xfffffe98 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      iVar5 = *(int *)(param_1 + 0x3f0);
      fStack_c8 = *(float *)(iVar5 + 0x20) + fStack_140;
      fStack_c4 = *(float *)(iVar5 + 0x24) + fStack_13c;
      fStack_c0 = *(float *)(iVar5 + 0x28) + fStack_138;
      fStack_98 = fStack_c8;
      (&stack0xffffff6c)[(uint)bVar8 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff3c + (uint)bVar8 * -8);
      *(uint *)((int)&stack0xffffff70 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           *(uint *)((int)&stack0xffffff40 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      if (&stack0xffffff20 != &stack0xffffff68) {
        fStack_e0 = fStack_98;
        fStack_dc = fStack_94;
        uStack_d8 = uStack_90;
      }
      FUN_004b7060();
    }
    break;
  case 0xb:
    uStack_15c = 0;
    uStack_160 = 0;
    uStack_164 = 0;
    fStack_18 = (float)FUN_0040cc00();
    fStack_20 = fStack_18 - *(float *)(param_1 + 0x4b8);
    fStack_18 = (float)FUN_0040cc00();
    fStack_11c = *(float *)(param_1 + 0x20) + fStack_20;
    uStack_118 = *(uint *)(param_1 + 0x24);
    fStack_114 = (fStack_18 - *(float *)(param_1 + 0x4b8)) + *(float *)(param_1 + 0x28);
    uVar4 = *(uint *)(param_1 + 0x3c8);
    uVar3 = FUN_00468900();
    FUN_004b5f00(0x01C57074,&stack0xfffffee4,&stack0xfffffe9c,uVar3,uVar4);
    fStack_11c = *(float *)(param_1 + 0x20);
    uStack_118 = *(uint *)(param_1 + 0x28);
    fStack_114 = (float)uStack_118;
    break;
  case 0xc:
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_10c = 0x42000000;
    FUN_004b5fa0(0x01C57074,param_1 + 0x20,&stack0xfffffef0,*(uint *)(param_1 + 0x3d4),
                 *(uint *)(param_1 + 0x3d8),*(uint *)(param_1 + 0x3d0),
                 *(uint *)(param_1 + 0x3dc),*(uint *)(param_1 + 0x3cc),
                 *(uint *)(param_1 + 0x3e0));
LAB_0049f448:
    FUN_0045e970();
    iVar5 = FUN_0040cc60();
    *(int *)(param_1 + 0x4ac) = iVar5;
    iVar5 = (iVar5 + (iVar5 >> 0x1f) * -0x100) - (uint)((iVar5 >> 0x1f) << 7 < 0);
    iVar2 = iVar5 >> 0x1f;
    *(char *)(param_1 + 0x48c) =
         (char)((int)(((iVar5 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
LAB_0049f48d:
    FUN_0045e9c0();
    *(uint *)(param_1 + 0x490) = 0;
    FUN_00551960();
    break;
  case 0xd:
    puVar6 = (uint *)(param_1 + 0x24 + (uint)bVar8 * -8);
    uStack_158 = *(uint *)(param_1 + 0x20);
    *(uint *)((int)&stack0xfffffeac + (uint)bVar8 * 0xfffffffe * 4) = *puVar6;
    *(uint *)(&stack0xfffffeb0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         puVar6[(uint)bVar8 * -2 + 1];
    puVar6 = (uint *)(param_1 + 0x34 + (uint)bVar8 * -8);
    fStack_a4 = *(float *)(param_1 + 0x30);
    (&stack0xffffff60)[(uint)bVar8 * 0xfffffffe] = (float)*puVar6;
    *(uint *)((int)&stack0xffffff64 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         puVar6[(uint)bVar8 * -2 + 1];
    fStack_24 = *(float *)(param_1 + 0x4bc) * _DAT_005dc977;
    fStack_a4 = fStack_a4 * fStack_24;
    fStack_a0 = fStack_a0 * fStack_24;
    fStack_9c = fStack_9c * fStack_24;
    FUN_004e6060(0x01CD0E3C,&stack0xfffffea8,&stack0xffffff5c,3,0);
  }
  if (((*(char *)(param_1 + 0x3f8) != '\0') &&
      (iVar5 = FUN_005735a0(*(uint *)(param_1 + 0x45c)), iVar5 == 0)) &&
     ((*(int *)(param_1 + 0x460) != 1 || (*(int *)(param_1 + 0x4b4) == 0)))) {
    uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
    *(uint *)(param_1 + 0x45c) = uVar4;
  }
LAB_0049f4cb:
  *(uint *)(param_1 + 0x4b4) = *(uint *)(param_1 + 0x168);
  if (*(int *)(param_1 + 0x3ec) != 0) {
    if (*(int *)(param_1 + 0x3e4) == 0) {
      if ((0.0 < *(float *)(param_1 + 0x234)) &&
         (param_2 = *(float *)(param_1 + 0x46c) - param_2, *(float *)(param_1 + 0x46c) = param_2,
         param_2 <= 0.0)) {
        *(uint *)(param_1 + 0x46c) = 0;
        *(uint *)(param_1 + 0x168) = 0;
        return;
      }
    }
    else if (*(int *)(param_1 + 0x168) == 0) {
      param_2 = *(float *)(param_1 + 0x46c) - param_2;
      *(float *)(param_1 + 0x46c) = param_2;
      if (param_2 <= 0.0) {
        *(uint *)(param_1 + 0x168) = 1;
        *(uint *)(param_1 + 0x46c) = *(uint *)(param_1 + 0x234);
        return;
      }
    }
    else {
      param_2 = *(float *)(param_1 + 0x46c) - param_2;
      *(float *)(param_1 + 0x46c) = param_2;
      if (param_2 <= 0.0) {
        *(uint *)(param_1 + 0x168) = 0;
        *(uint *)(param_1 + 0x46c) = *(uint *)(param_1 + 1000);
        return;
      }
    }
  }
  return;
}
