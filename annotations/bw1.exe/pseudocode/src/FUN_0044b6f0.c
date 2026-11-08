// Name: FUN_0044b6f0
// Address: 0044b6f0
// Address Range: [[0044b6f0, 0044bf1d]]
// Convention: unknown
// Signature: void FUN_0044b6f0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044b6f0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  float afStackY_1114 [1014];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
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
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  uint uStack_14;
  
  bVar9 = 0;
  if (((*(int *)(param_1 + 0x65b30) != 0) || (*(int *)(param_1 + 400) != 0)) &&
     (*(uint *)(param_1 + 0x65b30) = 0, *(int *)(param_1 + 0x1f8) != 0)) {
    iVar4 = FUN_004a6c30(0x01C51D80,param_1 + 0x194);
    if (iVar4 != 0) {
      *(uint *)(param_1 + 400) = 1;
    }
    iVar4 = FUN_005c0f80(param_1 + 0x194,0x5d7412);
    if ((iVar4 == 0) || (*(int *)(param_1 + 400) != 0)) {
      if (*(int *)(param_1 + 0x65b2c) != 0) {
        uStack_14 = (**(code **)(*(int *)(param_1 + 0x154) + 0x40))(param_1,0x3dcccccd,0);
        *(uint *)(param_1 + 0x65b28) = uStack_14;
      }
      fStack_108 = 99999.0;
      fStack_104 = 99999.0;
      *(float *)(param_1 + 0x1c728) = 1.0 / param_2;
      fStack_48 = -99999.0;
      fStack_44 = -99999.0;
      fStack_40 = -99999.0;
      fStack_100 = 99999.0;
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x204)) {
        iVar7 = param_1 + 0x208;
        do {
          if (*(float *)(iVar7 + 0x20) < fStack_108) {
            fStack_108 = *(float *)(iVar7 + 0x20);
          }
          if (*(float *)(iVar7 + 0x24) < fStack_104) {
            fStack_104 = *(float *)(iVar7 + 0x24);
          }
          if (*(float *)(iVar7 + 0x28) < fStack_100) {
            fStack_100 = *(float *)(iVar7 + 0x28);
          }
          if (fStack_48 < *(float *)(iVar7 + 0x20)) {
            fStack_48 = *(float *)(iVar7 + 0x20);
          }
          if (fStack_44 < *(float *)(iVar7 + 0x24)) {
            fStack_44 = *(float *)(iVar7 + 0x24);
          }
          if (fStack_40 < *(float *)(iVar7 + 0x28)) {
            fStack_40 = *(float *)(iVar7 + 0x28);
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 0x74;
        } while (iVar4 < *(int *)(param_1 + 0x204));
      }
      iVar4 = 0;
      _DAT_007dc718 = 0;
      for (iStack_1c = 0; iVar7 = _DAT_007dc718, iStack_1c < *(int *)(0x01E82168 + 0x14f0a8);
          iStack_1c = iStack_1c + 1) {
        iVar8 = _DAT_007dc718 * 0x28;
        iVar5 = _DAT_007dc718 * 0xc;
        iVar7 = *(int *)(0x01E82168 + 0x14f0ac + iVar4);
        if ((uint *)(iVar5 + 0x7dc71c) != (uint *)(iVar7 + 0x20)) {
          *(uint *)(iVar5 + 0x7dc71c) = *(uint *)(iVar7 + 0x20);
          *(uint *)(iVar5 + 0x7dc720) = *(uint *)(iVar7 + 0x24);
          *(uint *)(iVar5 + 0x7dc724) = *(uint *)(iVar7 + 0x28);
        }
        *(uint *)(iVar8 + 0x7dcbcc) = 0;
        iVar5 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x3c))
                          (iVar7,(uint *)(iVar8 + 0x7dcbcc));
        if (((iVar5 == 2) && (*(float *)(iVar7 + 0x24) <= fStack_44)) &&
           ((fStack_104 <= *(float *)(iVar7 + 0x24) + *(float *)(iVar8 + 0x7dcbe4) &&
            ((((fStack_108 <= *(float *)(iVar7 + 0x20) + *(float *)(iVar8 + 0x7dcbe8) &&
               (*(float *)(iVar7 + 0x20) - *(float *)(iVar8 + 0x7dcbe8) <= fStack_48)) &&
              (fStack_100 <= *(float *)(iVar7 + 0x28) + *(float *)(iVar8 + 0x7dcbe8))) &&
             (*(float *)(iVar7 + 0x28) - *(float *)(iVar8 + 0x7dcbe8) <= fStack_40)))))) {
          _DAT_007dc718 = _DAT_007dc718 + 1;
        }
        iVar4 = iVar4 + 4;
      }
      *(uint *)(param_1 + 0x65b34) = 1;
      if ((iVar7 == 0) && (*(int *)(param_1 + 400) == 0)) {
        *(uint *)(param_1 + 0x65b34) = 0;
        if (0 < *(int *)(param_1 + 0x204)) {
          pfVar6 = (float *)(param_1 + 0x208);
          iVar4 = 0;
          do {
            if (pfVar6[0x1a] == 0.0) {
              if ((float)_DAT_005d743a <
                  SQRT(pfVar6[0xd] * pfVar6[0xd] +
                       pfVar6[0xb] * pfVar6[0xb] + pfVar6[0xc] * pfVar6[0xc])) {
                *(uint *)(param_1 + 0x65b34) = 1;
                goto LAB_0044ba02;
              }
              fStack_d8 = pfVar6[3] - *pfVar6;
              fStack_d4 = pfVar6[4] - pfVar6[1];
              fStack_d0 = pfVar6[5] - pfVar6[2];
              fStack_84 = pfVar6[3] - *pfVar6;
              *(float *)((int)&stack0xffffff80 + (uint)bVar9 * -8) =
                   (&stack0xffffff2c)[(uint)bVar9 * 0xfffffffe];
              *(uint *)((int)&stack0xffffff84 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
                   *(uint *)((int)&stack0xffffff30 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
              if ((float)_DAT_005d743a <
                  SQRT(fStack_7c * fStack_7c + fStack_84 * fStack_84 + fStack_80 * fStack_80)) {
                *(uint *)(param_1 + 0x65b34) = 1;
                goto LAB_0044ba02;
              }
            }
            iVar4 = iVar4 + 1;
            pfVar6 = pfVar6 + 0x1d;
          } while (iVar4 < *(int *)(param_1 + 0x204));
        }
        if (*(int *)(param_1 + 0x65b34) == 0) {
          return;
        }
      }
LAB_0044ba02:
      iVar7 = 0;
      iVar4 = param_1;
      if (0 < *(int *)(param_1 + 0x204)) {
        do {
          *(uint *)(iVar4 + 0x274) = 0;
          iVar7 = iVar7 + 1;
          iVar4 = iVar4 + 0x74;
        } while (iVar7 < *(int *)(param_1 + 0x204));
      }
      iStack_20 = 0;
      if (0 < *(int *)(param_1 + 0x204)) {
        iVar4 = param_1 + 0x208;
        do {
          fVar2 = *(float *)(iVar4 + 0x68);
          if (fVar2 == 0.0) {
            fVar3 = (float)_DAT_005d741a;
            *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) * fVar3;
            fVar1 = *(float *)(param_1 + 0x65b18);
            fStack_dc = fVar2;
            fStack_e0 = fVar2;
            fStack_e4 = fVar2;
            *(float *)(iVar4 + 0x34) = fVar3 * *(float *)(iVar4 + 0x34);
            *(float *)(iVar4 + 0x30) = fVar1 * *(float *)(iVar4 + 0x30);
            fStack_130 = *(float *)(param_1 + 0x65b14);
            if (*(int *)(iVar4 + 0x70) != 0) {
              fStack_130 = *(float *)(param_1 + 0x65b14) * (float)_DAT_005d7422;
            }
            fVar3 = fStack_130;
            fVar2 = 1.0 / param_2;
            fVar1 = fStack_130 * (float)_DAT_005d742a;
            fStack_cc = -*(float *)(iVar4 + 0x2c);
            fStack_c8 = -*(float *)(iVar4 + 0x30);
            fStack_c4 = -*(float *)(iVar4 + 0x34);
            fStack_60 = -*(float *)(iVar4 + 0x2c);
            *(uint *)((int)&stack0xffffffa4 + (uint)bVar9 * -8) =
                 *(uint *)((int)&stack0xffffff38 + (uint)bVar9 * -8);
            *(uint *)((int)&stack0xffffffa8 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
                 *(uint *)((int)&stack0xffffff3c + (uint)bVar9 * -8 + (uint)bVar9 * -8);
            fStack_18 = fVar1;
            fVar1 = 1.0 / fVar1;
            fStack_78 = fStack_60 * fVar2;
            fStack_74 = fStack_5c * fVar2;
            fStack_70 = fStack_58 * fVar2;
            fStack_a8 = fStack_60 * fVar2;
            *(uint *)((int)&stack0xffffff5c + (uint)bVar9 * -8) =
                 *(uint *)((int)&stack0xffffff8c + (uint)bVar9 * -8);
            *(uint *)((int)&stack0xffffff60 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
                 *(uint *)((int)&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
            fStack_f0 = fStack_a8 * fStack_18;
            fStack_ec = fStack_a4 * fStack_18;
            fStack_e8 = fStack_a0 * fStack_18;
            fStack_6c = fStack_a8 * fStack_18;
            *(uint *)((int)&stack0xffffff98 + (uint)bVar9 * -8) =
                 *(uint *)((int)&stack0xffffff14 + (uint)bVar9 * -8);
            *(uint *)((int)&stack0xffffff9c + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
                 *(uint *)((int)&stack0xffffff18 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
            fStack_90 = fStack_6c * _DAT_005d7432;
            fStack_8c = fStack_68 * _DAT_005d7432;
            fStack_88 = fStack_64 * _DAT_005d7432;
            fStack_114 = fStack_6c * _DAT_005d7432;
            *(uint *)((int)&stack0xfffffef0 + (uint)bVar9 * -8) =
                 *(uint *)((int)&stack0xffffff74 + (uint)bVar9 * -8);
            *(uint *)((int)&stack0xfffffef4 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
                 *(uint *)((int)&stack0xffffff78 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
            fStack_e4 = fStack_e4 + fStack_114;
            fStack_120 = fStack_e4 * fVar1;
            fStack_e0 = (fStack_e0 - fVar3) + fStack_110;
            fStack_dc = fStack_dc + fStack_10c;
            fStack_11c = fStack_e0 * fVar1;
            fStack_118 = fStack_dc * fVar1;
            fStack_12c = fStack_120;
            (&stack0xfffffed8)[(uint)bVar9 * 0xfffffffe] =
                 (float)*(uint *)((int)&stack0xfffffee4 + (uint)bVar9 * -8);
            *(uint *)((int)&stack0xfffffedc + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
                 *(uint *)((int)&stack0xfffffee8 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
            if (&stack0xffffffac != &stack0xfffffed4) {
              fStack_54 = fStack_12c;
              fStack_50 = fStack_128;
              fStack_4c = fStack_124;
            }
            fStack_fc = fStack_54 * param_2;
            fStack_f8 = fStack_50 * param_2;
            fStack_f4 = fStack_4c * param_2;
            fStack_9c = fStack_54 * param_2;
            *(float *)((int)&stack0xffffff68 + (uint)bVar9 * -8) =
                 (&stack0xffffff08)[(uint)bVar9 * 0xfffffffe];
            *(uint *)((int)&stack0xffffff6c + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
                 *(uint *)((int)&stack0xffffff0c + (uint)bVar9 * -8 + (uint)bVar9 * -8);
            fStack_b4 = *(float *)(iVar4 + 0x2c) + fStack_9c;
            *(float *)(iVar4 + 0x2c) = fStack_b4;
            fStack_b4 = fStack_b4 * param_2;
            fVar1 = *(float *)(iVar4 + 0x30) + fStack_98;
            fVar2 = *(float *)(iVar4 + 0x34) + fStack_94;
            *(float *)(iVar4 + 0x30) = fVar1;
            *(float *)(iVar4 + 0x34) = fVar2;
            fStack_b0 = fVar1 * param_2;
            fStack_ac = fVar2 * param_2;
            fStack_c0 = fStack_b4;
            *(uint *)((int)&stack0xffffff44 + (uint)bVar9 * -8) =
                 *(uint *)((int)&stack0xffffff50 + (uint)bVar9 * -8);
            *(uint *)((int)&stack0xffffff48 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
                 *(uint *)((int)&stack0xffffff54 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
            *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fStack_c0;
            *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fStack_bc;
            *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fStack_b8;
            FUN_0044ac10(param_1,iVar4);
          }
          iVar4 = iVar4 + 0x74;
          iStack_20 = iStack_20 + 1;
        } while (iStack_20 < *(int *)(param_1 + 0x204));
      }
      iStack_24 = param_1 + 0x208;
      iVar4 = 0;
      do {
        iVar5 = 0;
        iVar7 = iStack_24;
        if (0 < *(int *)(param_1 + 0x204)) {
          do {
            if (*(int *)(iVar7 + 0x68) == 0) {
              FUN_0044ac10(param_1,iVar7);
            }
            iVar5 = iVar5 + 1;
            iVar7 = iVar7 + 0x74;
          } while (iVar5 < *(int *)(param_1 + 0x204));
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x204)) {
        pfVar6 = (float *)(param_1 + 0x65b20);
        iVar7 = param_1 + 0x208;
        do {
          if (*(int *)(iVar7 + 0x6c) != 0) {
            *(float *)(iVar7 + 0x2c) = *pfVar6 * *(float *)(iVar7 + 0x2c);
            *(float *)(iVar7 + 0x30) = *pfVar6 * *(float *)(iVar7 + 0x30);
            *(float *)(iVar7 + 0x34) = *pfVar6 * *(float *)(iVar7 + 0x34);
          }
          if ((uint *)(iVar7 + 0x38) != (uint *)(iVar7 + 0x20)) {
            *(uint *)(iVar7 + 0x38) = *(uint *)(iVar7 + 0x20);
            *(uint *)(iVar7 + 0x3c) = *(uint *)(iVar7 + 0x24);
            *(uint *)(iVar7 + 0x40) = *(uint *)(iVar7 + 0x28);
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 0x74;
        } while (iVar4 < *(int *)(param_1 + 0x204));
      }
      if (*(int *)(param_1 + 0x65b2c) != 0) {
        iVar4 = 0;
        iVar7 = 0;
        if (0 < *(int *)(param_1 + 0x204)) {
          iVar5 = param_1 + 0x208;
          do {
            if (*(float *)(iVar5 + 0x24) <= *(float *)(param_1 + 0x65b28)) {
              iVar7 = iVar7 + 1;
            }
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + 0x74;
          } while (iVar4 < *(int *)(param_1 + 0x204));
        }
        if (iVar7 == *(int *)(param_1 + 0x204)) {
          *(uint *)(param_1 + 0x1f8) = 0;
        }
      }
      FUN_0044ab20(param_1);
    }
  }
  return;
}
