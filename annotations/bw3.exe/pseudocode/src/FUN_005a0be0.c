// Name: FUN_005a0be0
// Address: 005a0be0
// Address Range: [[005a0be0, 005a1729]]
// Convention: unknown
// Signature: void FUN_005a0be0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a0be0(int param_1,float param_2)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  uint *puVar7;
  char *pcVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  byte bVar12;
  float afStackY_1170 [1001];
  char *pcVar13;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  uint uStack_17c;
  float fStack_178;
  uint uStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  uint uStack_164;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  uint uStack_14c;
  uint uStack_140;
  uint uStack_134;
  uint uStack_128;
  float fStack_124;
  uint uStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  uint uStack_110;
  uint uStack_104;
  uint uStack_f8;
  uint uStack_ec;
  uint uStack_e0;
  uint uStack_d4;
  float fStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_a4;
  uint uStack_98;
  float fStack_8c;
  uint uStack_80;
  uint uStack_74;
  uint uStack_68;
  uint uStack_5c;
  float fStack_58;
  uint uStack_54;
  uint uStack_50;
  float fStack_4c;
  uint uStack_48;
  uint uStack_44;
  float fStack_40;
  uint uStack_3c;
  uint uStack_38;
  float fStack_34;
  uint uStack_30;
  uint uStack_1c;
  float fStack_18;
  
  bVar12 = 0;
  iVar4 = FUN_0042cd70(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x33fb4) == 0) {
    iVar4 = FUN_0040c4f0("CExorcism");
    *(int *)(param_1 + 0x33fd0) = iVar4;
    (*(code *)**(uint **)(iVar4 + 0x154))(iVar4);
    pcVar8 = "Bible";
    pcVar13 = *(char **)(param_1 + 0x33fd0);
    do {
      cVar1 = *pcVar8;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    iVar4 = *(int *)(param_1 + 0x33fd0);
    *(uint *)(iVar4 + 0x20) = *(uint *)(param_1 + 0x20);
    *(uint *)(iVar4 + 0x24) = *(uint *)(param_1 + 0x24);
    *(uint *)(iVar4 + 0x28) = *(uint *)(param_1 + 0x28);
    *(uint *)(iVar4 + 0x2c) = *(uint *)(param_1 + 0x2c);
    if (*(int *)(param_1 + 0x33fd0) != 0) {
      *(uint *)(*(int *)(param_1 + 0x33fd0) + 0xfc) = 1;
      *(uint *)(*(int *)(param_1 + 0x33fd0) + 0xf8) = 0;
    }
    FUN_004319d0(param_1,0,*(uint *)(param_1 + 0x33fd0),0,0);
    FUN_004f6930(0x01D81080,*(uint *)(param_1 + 0x33fd0));
    *(uint *)(param_1 + 0x33fb4) = 1;
  }
  if (*(int *)(param_1 + 0x33fc4) == 0) {
    FUN_00433c60(param_1,param_2);
  }
  fStack_18c = param_2 * *(float *)(param_1 + 0x33fac);
  uStack_1c = 1;
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a4);
  while (0.0 < fStack_18c) {
    uVar5 = FUN_004fbb70(param_1 + 0x158,&stack0xfffffe74);
    FUN_00433fb0(param_1,uVar5);
  }
  iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if ((((1 < iVar4) && (*(int *)(param_1 + 0x70) == 1)) &&
      (iVar4 = *(int *)(param_1 + 0x33fa8), iVar4 == 0)) && (*(int *)(param_1 + 0xdc) == 0)) {
    FUN_0054dbd0(param_1 + 0x158,0);
    puVar7 = &stack0xffffff20;
    uStack_e0 = uStack_a4;
    *(uint *)((int)&stack0xffffff24 + (uint)bVar12 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff60 + (uint)bVar12 * -8);
    *(uint *)(&stack0xffffff28 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
         *(uint *)(&stack0xffffff64 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
    FUN_00408b80(param_1,puVar7);
    puVar7 = &stack0xfffffecc;
    uStack_134 = uStack_98;
    *(uint *)((int)&stack0xfffffed0 + (uint)bVar12 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff6c + (uint)bVar12 * -8);
    uVar5 = 0x01D22E44;
    *(uint *)(&stack0xfffffed4 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
         *(uint *)(&stack0xffffff70 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
    FUN_004cec40(uVar5,puVar7,iVar4);
    uStack_1c = 1;
    *(uint *)(param_1 + 0x33fa8) = 1;
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0x33fac));
  iVar4 = FUN_00431660(param_1,param_2);
  iVar9 = param_1 + 0x158;
  if (iVar4 == 0) {
    iVar4 = FUN_004fc070(iVar9);
    iVar4 = *(int *)(iVar4 + 0x24);
    fVar6 = (float)FUN_004fc930(iVar9);
    fStack_18 = fVar6;
    uVar5 = FUN_004fc320(iVar9);
    iVar9 = FUN_005a3d00(uVar5,"APPEAR");
    if ((iVar9 == 0) && (*(int *)(param_1 + 0x33fc4) < 1)) {
      *(uint *)(param_1 + 0x33fc4) = 1;
      *(uint *)(param_1 + 0xfc) = 1;
      *(uint *)(param_1 + 0xf8) = 0;
      *(uint *)(param_1 + 0x33fc8) = *(uint *)(param_1 + 0x206c4);
    }
    iVar9 = FUN_005a3d00(uVar5,"DISAPPEAR");
    if ((iVar9 == 0) && (*(int *)(param_1 + 0x33fc4) != 0)) {
      *(uint *)(param_1 + 0x33fc4) = 0;
      *(uint *)(param_1 + 0xfc) = 1;
      *(uint *)(param_1 + 0xf8) = 0;
      *(uint *)(param_1 + 0x33fc8) = *(uint *)(param_1 + 0x206c4);
    }
    if (iVar4 == 0x95) {
      if ((1.0 < (double)fVar6) && ((double)fVar6 < _DAT_005da5fe)) {
        FUN_0054dcc0(param_1 + 0x158,*(uint *)(param_1 + 0x33fbc));
        puVar7 = &stack0xffffff44;
        uStack_bc = uStack_110;
        *(uint *)((int)&stack0xffffff48 + (uint)bVar12 * 0xfffffffe * 4) =
             *(uint *)(&stack0xfffffef4 + (uint)bVar12 * -8);
        *(uint *)(&stack0xffffff4c + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
             *(uint *)(&stack0xfffffef8 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
        FUN_00408b80(param_1,puVar7);
        uStack_50 = uStack_104;
        (&stack0xffffffb4)[(uint)bVar12 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffff00 + (uint)bVar12 * -8);
        *(uint *)((int)&stack0xffffffb8 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
             *(uint *)(&stack0xffffff04 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
        if (&stack0xfffffe84 != &stack0xffffffb0) {
          uStack_17c = uStack_50;
          fStack_178 = fStack_4c;
          uStack_174 = uStack_48;
        }
        FUN_004a3af0(0x01C73654,&stack0xfffffe84,&DAT_02cfd900,1,0,4);
        FUN_0054dcc0(param_1 + 0x158,*(uint *)(param_1 + 0x33fb8));
        puVar7 = &stack0xffffff98;
        uStack_68 = uStack_ec;
        *(uint *)((int)&stack0xffffff9c + (uint)bVar12 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff18 + (uint)bVar12 * -8);
        *(uint *)(&stack0xffffffa0 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
             *(uint *)(&stack0xffffff1c + (uint)bVar12 * -8 + (uint)bVar12 * -8);
        FUN_00408b80(param_1,puVar7);
        uStack_128 = uStack_f8;
        (&stack0xfffffedc)[(uint)bVar12 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffff0c + (uint)bVar12 * -8);
        *(uint *)((int)&stack0xfffffee0 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
             *(uint *)(&stack0xffffff10 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
        if (&stack0xfffffe84 != &stack0xfffffed8) {
          uStack_17c = uStack_128;
          fStack_178 = fStack_124;
          uStack_174 = uStack_120;
        }
        FUN_004a3af0(0x01C73654,&stack0xfffffe84,&DAT_02cfd900,1,0,4);
      }
      if ((1.0 < (double)fVar6) && ((double)fVar6 < _DAT_005da606)) {
        puVar7 = (uint *)(param_1 + 0x20);
        fVar10 = 1.4013e-45;
        do {
          if (&stack0xffffff2c != puVar7) {
            uStack_d4 = *puVar7;
            fStack_d0 = *(float *)(param_1 + 0x24);
            uStack_cc = *(uint *)(param_1 + 0x28);
          }
          if (&stack0xffffffbc != puVar7) {
            uStack_44 = *puVar7;
            fStack_40 = *(float *)(param_1 + 0x24);
            uStack_3c = *(uint *)(param_1 + 0x28);
          }
          fVar3 = (float)(int)fVar10 * (float)_DAT_005da60e;
          fVar11 = (float)((int)fVar10 + 1);
          fStack_40 = fVar3 + (float)_DAT_005da62e + fStack_40;
          fStack_d0 = fVar3 + (float)_DAT_005da60e + fStack_d0;
          fStack_18 = fVar10;
          FUN_004a3c50(0x01C73654,&stack0xffffffbc,&stack0xffffff2c,0,0x3f400000,0x3f400000,3,
                       0x3e800000,0xffff);
          fVar10 = fVar11;
        } while ((int)fVar11 < 0xb);
        FUN_0054dcc0(param_1 + 0x158,*(uint *)(param_1 + 0x33fbc));
        puVar7 = &stack0xffffff8c;
        uStack_74 = uStack_80;
        *(uint *)((int)&stack0xffffff90 + (uint)bVar12 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff84 + (uint)bVar12 * -8);
        *(uint *)(&stack0xffffff94 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
             *(uint *)(&stack0xffffff88 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
        FUN_00408b80(param_1,puVar7);
        uStack_5c = uStack_164;
        (&stack0xffffffa8)[(uint)bVar12 * 0xfffffffe] =
             (float)*(uint *)(&stack0xfffffea0 + (uint)bVar12 * -8);
        *(uint *)((int)&stack0xffffffac + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
             *(uint *)(&stack0xfffffea4 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
        if (&stack0xffffff2c != &stack0xffffffa4) {
          uStack_d4 = uStack_5c;
          fStack_d0 = fStack_58;
          uStack_cc = uStack_54;
        }
        if (&stack0xffffffbc != (uint *)(param_1 + 0x20)) {
          uStack_44 = *(uint *)(param_1 + 0x20);
          fStack_40 = *(float *)(param_1 + 0x24);
          uStack_3c = *(uint *)(param_1 + 0x28);
        }
        fStack_40 = fStack_40 + _DAT_005da616;
        FUN_004a3c50(0x01C73654,&stack0xffffffbc,&stack0xffffff2c,0,0x3f400000,0x3f400000,3,
                     0x3e800000,0xffff);
        FUN_0054dcc0(param_1 + 0x158,*(uint *)(param_1 + 0x33fb8));
        uStack_140 = uStack_14c;
        *(uint *)((int)&stack0xfffffec4 + (uint)bVar12 * 0xfffffffe * 4) =
             *(uint *)(&stack0xfffffeb8 + (uint)bVar12 * -8);
        *(uint *)(&stack0xfffffec8 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
             *(uint *)(&stack0xfffffebc + (uint)bVar12 * -8 + (uint)bVar12 * -8);
        FUN_00408b80(param_1,&stack0xfffffec0);
        uStack_38 = uStack_c8;
        (&stack0xffffffcc)[(uint)bVar12 * 0xfffffffe] =
             (float)*(uint *)((int)&stack0xffffff3c + (uint)bVar12 * 0xfffffffe * 4);
        *(uint *)((int)&stack0xffffffd0 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
             *(uint *)(&stack0xffffff40 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
        if (&stack0xffffff2c != &stack0xffffffc8) {
          uStack_d4 = uStack_38;
          fStack_d0 = fStack_34;
          uStack_cc = uStack_30;
        }
        if (&stack0xffffffbc != (uint *)(param_1 + 0x20)) {
          uStack_44 = *(uint *)(param_1 + 0x20);
          fStack_40 = *(float *)(param_1 + 0x24);
          uStack_3c = *(uint *)(param_1 + 0x28);
        }
        fStack_40 = fStack_40 + _DAT_005da616;
        FUN_004a3c50(0x01C73654,&stack0xffffffbc,&stack0xffffff2c,0,0x3f400000,0x3f400000,3,
                     0x3e800000,0xffff);
      }
      if ((((float)_DAT_005da61e < fVar6) && ((double)fVar6 < _DAT_005da5fe)) &&
         (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x33fd0) + 0x154) + 0xe8))
                            (*(int *)(param_1 + 0x33fd0)), iVar4 != 0)) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x33fd0) + 0x154) + 0xe4))
                  (*(int *)(param_1 + 0x33fd0));
      }
      if (((float)_DAT_005da626 < fVar6) && (*(int *)(param_1 + 0x33fc0) < 6)) {
        *(int *)(param_1 + 0x33fc0) = *(int *)(param_1 + 0x33fc0) + 1;
        FUN_004fc3f0(param_1 + 0x158,"indian_cast",0x428c0000);
      }
    }
    goto LAB_005a0ed4;
  }
  uVar2 = *(uint *)(param_1 + 0x273c);
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_005a0e97:
      pcVar13 = &DAT_005da5d4;
    }
    else {
LAB_005a10e8:
      pcVar13 = "STAND";
    }
    FUN_004fc160(param_1 + 0x158,pcVar13,1);
  }
  else if (uVar2 < 3) {
    uVar5 = FUN_004fc310(iVar9,&DAT_005da5d0,0);
    iVar4 = FUN_004fba50(uVar5);
    if (iVar4 < 0) goto LAB_005a0e97;
    FUN_004fc0d0(iVar9,iVar4,1);
  }
  else {
    if (uVar2 != 3) goto LAB_005a10e8;
    FUN_004fc160(iVar9,"STAND",1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
LAB_005a0ed4:
  if (0.0 < *(float *)(param_1 + 0x33fc8)) {
    *(float *)(param_1 + 0x33fc8) = *(float *)(param_1 + 0x33fc8) - param_2;
  }
  if (*(float *)(param_1 + 0x33fc8) < 0.0) {
    *(uint *)(param_1 + 0x33fc8) = 0;
  }
  FUN_0042c1e0(param_1,param_2);
  fStack_11c = *(float *)(param_1 + 0x2518) * param_2;
  fStack_118 = *(float *)(param_1 + 0x251c) * param_2;
  fStack_114 = *(float *)(param_1 + 0x2520) * param_2;
  fStack_b0 = fStack_11c;
  *(uint *)((int)&stack0xffffff54 + (uint)bVar12 * -8) =
       *(uint *)((int)&stack0xfffffee8 + (uint)bVar12 * -8);
  *(uint *)((int)&stack0xffffff58 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
       *(uint *)((int)&stack0xfffffeec + (uint)bVar12 * -8 + (uint)bVar12 * -8);
  fStack_188 = fStack_b0 + *(float *)(param_1 + 0x250c);
  fStack_184 = fStack_ac + *(float *)(param_1 + 0x2510);
  fStack_180 = fStack_a8 + *(float *)(param_1 + 0x2514);
  fStack_170 = fStack_188;
  (&stack0xfffffe94)[(uint)bVar12 * 0xfffffffe] = (&stack0xfffffe7c)[(uint)bVar12 * 0xfffffffe];
  *(uint *)((int)&stack0xfffffe98 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
       *(uint *)((int)&stack0xfffffe80 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
  fStack_158 = fStack_170 + *(float *)(param_1 + 0x249c);
  fStack_154 = fStack_16c + *(float *)(param_1 + 0x24a0);
  fStack_150 = fStack_168 + *(float *)(param_1 + 0x24a4);
  fStack_8c = fStack_158;
  *(uint *)((int)&stack0xffffff78 + (uint)bVar12 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xfffffeac + (uint)bVar12 * -8);
  *(uint *)(&stack0xffffff7c + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
       *(uint *)((int)&stack0xfffffeb0 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
  *(uint *)(param_1 + 0x2514) = 0;
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  FUN_0042c230(param_1,&stack0xffffff74);
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00432330(param_1,param_2,uStack_1c);
  FUN_00433350(param_1,param_2);
  return;
}
