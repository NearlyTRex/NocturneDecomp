// Name: FUN_0058d3c0
// Address: 0058d3c0
// Address Range: [[0058d3c0, 0058d90d]]
// Convention: unknown
// Signature: undefined4 FUN_0058d3c0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0058d3c0(int param_1)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  float afStackY_1108 [998];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_118;
  float local_114;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f0;
  float fStack_ec;
  float local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_a8;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float afStack_8c [4];
  float fStack_7c;
  uint uStack_78;
  uint uStack_6c;
  uint uStack_60;
  uint uStack_5c;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int local_28;
  float fStack_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar5 = 0;
  *(uint *)(param_1 + 0x20000) = 0;
  local_14 = (float)FUN_00434590(param_1,0);
  if ((float)_DAT_005f6d79 <= local_14) {
    if ((*(int *)(param_1 + 0x25b0) == 0) && (*(int *)(param_1 + 0x2628) == 0)) {
      local_28 = param_1 + 0x20;
      local_1c = 0;
      for (local_20 = 0; local_20 < *(int *)(0x01E82168 + 0x14d164); local_20 = local_20 + 1) {
        iVar2 = FUN_0040c600(*(uint *)(0x01E82168 + local_1c + 0x14d168),_DAT_01d1bcdc);
        local_18 = iVar2;
        if ((iVar2 != 0) &&
           (ABS(*(float *)(param_1 + 0x24) - (*(float *)(iVar2 + 0x24) + *(float *)(iVar2 + 0x2d8)))
            <= (float)_DAT_005f6d89)) {
          FUN_00408bb0(iVar2,local_28);
          local_f0 = local_114;
          (&stack0xffffff14)[(uint)bVar5 * 0xfffffffe] =
               (float)*(uint *)(&stack0xfffffef0 + (uint)bVar5 * -8);
          *(uint *)((int)&stack0xffffff18 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xfffffef4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          if ((ABS(local_e8) <= (float)_DAT_005f6d91) && (local_e8 <= 0.0)) {
            (**(code **)(*(int *)(iVar2 + 0x154) + 0x1c))(iVar2);
            puVar3 = (uint *)&stack0xfffffeb0;
            puVar4 = &stack0xfffffec8;
            for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
              puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
            }
            if (fStack_12c < local_f0) {
              if (fStack_12c + 1.0 < local_f0) goto LAB_0058d44b;
              local_f0 = fStack_12c;
            }
            if (local_f0 < local_138) {
              if (local_f0 < local_138 + (float)_DAT_005f6d99) goto LAB_0058d44b;
              local_f0 = local_138;
            }
            fStack_9c = local_138 + fStack_12c;
            fStack_98 = fStack_134 + fStack_128;
            fStack_94 = fStack_130 + fStack_124;
            fStack_cc = local_138 + fStack_12c;
            *(uint *)((int)&stack0xffffff38 + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffff68 + (uint)bVar5 * -8);
            *(uint *)((int)&stack0xffffff3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffff6c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
            fStack_108 = fStack_cc * _DAT_005f6d81;
            fStack_104 = fStack_c8 * _DAT_005f6d81;
            fStack_100 = fStack_c4 * _DAT_005f6d81;
            fStack_120 = fStack_cc * _DAT_005f6d81;
            *(uint *)(&stack0xfffffee4 + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xfffffefc + (uint)bVar5 * -8);
            *(uint *)((int)&stack0xfffffee8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffff00 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
            local_e8 = fStack_118;
            FUN_00408b40(local_18,&stack0xffffff10);
            afStack_8c[2] = fStack_a8;
            afStack_8c[(uint)bVar5 * 0xfffffffe + 3] =
                 (float)*(uint *)(&stack0xffffff5c + (uint)bVar5 * -8);
            afStack_8c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 4] =
                 (float)*(uint *)(&stack0xffffff60 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
            if (&stack0xffffff10 != afStack_8c + 2) {
              local_f0 = afStack_8c[2];
              fStack_ec = afStack_8c[3];
              local_e8 = fStack_7c;
            }
            fStack_ec = fStack_ec + *(float *)(local_18 + 0x2d8);
            fStack_38 = *(float *)(param_1 + 0x44);
            fStack_34 = *(float *)(param_1 + 0x50);
            fStack_3c = *(float *)(param_1 + 0x5c);
            fStack_30 = *(float *)(local_18 + 0x44);
            fStack_2c = *(float *)(local_18 + 0x50);
            fStack_24 = *(float *)(local_18 + 0x5c);
            fVar6 = (float10)fcos((float10)_DAT_005f6da1);
            fVar1 = ABS(fStack_3c * fStack_24 + fStack_38 * fStack_30 + fStack_34 * fStack_2c);
            if (fVar6 <= (float10)fVar1) {
              FUN_00408bb0(param_1,local_18 + 0x20);
              uStack_d8 = uStack_78;
              *(float *)((int)&stack0xffffff2c + (uint)bVar5 * 0xfffffffe * 4) =
                   afStack_8c[(uint)bVar5 * 0xfffffffe + 6];
              *(float *)((int)&stack0xffffff30 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                   afStack_8c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 7];
              if (0.0 < fStack_d0) {
                FUN_00445430(PTR_DAT_00611100,"?Ladder dot : %f\n" + 1,(double)fVar1);
                *(int *)(param_1 + 0x20000) = local_18;
                FUN_005247c0(param_1 + 0x158,0x38,1);
                *(uint *)(param_1 + 0xc1e4) = 0;
                uStack_e0 = *(uint *)(local_18 + 0x2d8);
                uStack_e4 = 0;
                uStack_dc = 0xbfc00000;
                FUN_00408b40(local_18,&stack0xffffff1c);
                fStack_c0 = fStack_b4;
                *(uint *)((int)&stack0xffffff44 + (uint)bVar5 * -8) =
                     *(uint *)(&stack0xffffff50 + (uint)bVar5 * -8);
                *(uint *)((int)&stack0xffffff48 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                     *(uint *)(&stack0xffffff54 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
                fStack_54 = fStack_c0 - *(float *)(param_1 + 0x20);
                fStack_50 = fStack_bc - *(float *)(param_1 + 0x24);
                fStack_4c = fStack_b8 - *(float *)(param_1 + 0x28);
                fStack_90 = fStack_54;
                *(float *)((int)afStack_8c + (uint)bVar5 * -8) =
                     afStack_8c[(uint)bVar5 * 0xfffffffe + 0xf];
                afStack_8c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1] =
                     afStack_8c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x10];
                if ((float *)(param_1 + 0x20228) != &fStack_90) {
                  *(float *)(param_1 + 0x20228) = fStack_90;
                  *(float *)(param_1 + 0x2022c) = afStack_8c[0];
                  *(float *)(param_1 + 0x20230) = afStack_8c[1];
                }
                fStack_48 = local_f0 - *(float *)(param_1 + 0x20);
                fStack_44 = fStack_ec - *(float *)(param_1 + 0x24);
                fStack_40 = local_e8 - *(float *)(param_1 + 0x28);
                fStack_fc = fStack_48;
                *(float *)((int)&stack0xffffff08 + (uint)bVar5 * 0xfffffffe * 4) =
                     afStack_8c[(uint)bVar5 * 0xfffffffe + 0x12];
                *(float *)(&stack0xffffff0c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                     afStack_8c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x13];
                FUN_005a7520(&stack0xffffff04);
                uStack_60 = uStack_6c;
                afStack_8c[(uint)bVar5 * 0xfffffffe + 0xc] =
                     afStack_8c[(uint)bVar5 * 0xfffffffe + 9];
                afStack_8c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd] =
                     afStack_8c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 10];
                *(uint *)(param_1 + 0x20238) = 0x3f800000;
                *(uint *)(param_1 + 0x20234) = uStack_5c;
                return 1;
              }
            }
          }
        }
LAB_0058d44b:
        local_1c = local_1c + 4;
      }
    }
  }
  return 0;
}
