// Name: core_curtain.cpp_FUN_00447830
// Address: 00447830
// Address Range: [[00447830, 0044805d]]
// Convention: unknown
// Signature: void core_curtain_cpp_FUN_00447830(CCurtain *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_curtain_cpp_FUN_00447830(CCurtain *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  CCurtain *pCVar6;
  float *pfVar7;
  SCurtainVertex *pSVar8;
  byte *puVar9;
  byte *puVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
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
  SCurtainVertex *pSStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  uint uStack_14;
  
  bVar13 = 0;
  if (((*(int *)&param_1->field_0x65b30 != 0) || (*(int *)&param_1->field_0x190 != 0)) &&
     (*(uint *)&param_1->field_0x65b30 = 0, *(int *)&param_1->field_0x1f8 != 0)) {
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,&param_1->field_0x194);
    if (iVar4 != 0) {
      *(uint *)&param_1->field_0x190 = 1;
    }
    iVar4 = _strcmp(&param_1->field_0x194,(char *)0x5b9a79);
    if ((iVar4 == 0) || (*(int *)&param_1->field_0x190 != 0)) {
      if (*(int *)&param_1->field_0x65b2c != 0) {
        uStack_14 = (**(code **)(*(int *)&param_1->field_0x154 + 0x40))(param_1,0x3dcccccd,0);
        *(uint *)&param_1->field_0x65b28 = uStack_14;
      }
      fStack_108 = 99999.0;
      fStack_104 = 99999.0;
      *(float *)&param_1->field_0x1c728 = 1.0 / param_2;
      fStack_48 = -99999.0;
      fStack_44 = -99999.0;
      fStack_40 = -99999.0;
      fStack_100 = 99999.0;
      iVar4 = 0;
      if (0 < *(int *)&param_1->field_0x204) {
        puVar10 = &param_1->field_0x208;
        do {
          if (*(float *)(puVar10 + 0x20) < fStack_108) {
            fStack_108 = *(float *)(puVar10 + 0x20);
          }
          if (*(float *)(puVar10 + 0x24) < fStack_104) {
            fStack_104 = *(float *)(puVar10 + 0x24);
          }
          if (*(float *)(puVar10 + 0x28) < fStack_100) {
            fStack_100 = *(float *)(puVar10 + 0x28);
          }
          if (fStack_48 < *(float *)(puVar10 + 0x20)) {
            fStack_48 = *(float *)(puVar10 + 0x20);
          }
          if (fStack_44 < *(float *)(puVar10 + 0x24)) {
            fStack_44 = *(float *)(puVar10 + 0x24);
          }
          if (fStack_40 < *(float *)(puVar10 + 0x28)) {
            fStack_40 = *(float *)(puVar10 + 0x28);
          }
          iVar4 = iVar4 + 1;
          puVar10 = puVar10 + 0x74;
        } while (iVar4 < *(int *)&param_1->field_0x204);
      }
      iVar4 = 0;
      _DAT_007f8fcc = 0;
      for (iStack_1c = 0; iVar12 = _DAT_007f8fcc,
          iStack_1c < *(int *)&g_CDemonSetPtr->field_0x14f0a8; iStack_1c = iStack_1c + 1) {
        iVar11 = _DAT_007f8fcc * 0x28;
        iVar5 = _DAT_007f8fcc * 0xc;
        iVar12 = *(int *)(&g_CDemonSetPtr->field_0x14f0ac + iVar4);
        if ((uint *)(iVar5 + 0x7f8fd0) != (uint *)(iVar12 + 0x20)) {
          *(uint *)(iVar5 + 0x7f8fd0) = *(uint *)(iVar12 + 0x20);
          *(uint *)(iVar5 + 0x7f8fd4) = *(uint *)(iVar12 + 0x24);
          *(uint *)(iVar5 + 0x7f8fd8) = *(uint *)(iVar12 + 0x28);
        }
        *(uint *)(iVar11 + 0x7f9480) = 0;
        iVar5 = (**(code **)(*(int *)(iVar12 + 0x154) + 0x3c))
                          (iVar12,(uint *)(iVar11 + 0x7f9480));
        if (((iVar5 == 2) && (*(float *)(iVar12 + 0x24) <= fStack_44)) &&
           ((fStack_104 <= *(float *)(iVar12 + 0x24) + *(float *)(iVar11 + 0x7f9498) &&
            ((((fStack_108 <= *(float *)(iVar12 + 0x20) + *(float *)(iVar11 + 0x7f949c) &&
               (*(float *)(iVar12 + 0x20) - *(float *)(iVar11 + 0x7f949c) <= fStack_48)) &&
              (fStack_100 <= *(float *)(iVar12 + 0x28) + *(float *)(iVar11 + 0x7f949c))) &&
             (*(float *)(iVar12 + 0x28) - *(float *)(iVar11 + 0x7f949c) <= fStack_40)))))) {
          _DAT_007f8fcc = _DAT_007f8fcc + 1;
        }
        iVar4 = iVar4 + 4;
      }
      *(uint *)&param_1->field_0x65b34 = 1;
      if ((iVar12 == 0) && (*(int *)&param_1->field_0x190 == 0)) {
        *(uint *)&param_1->field_0x65b34 = 0;
        if (0 < *(int *)&param_1->field_0x204) {
          pfVar7 = (float *)&param_1->field_0x208;
          iVar4 = 0;
          do {
            if (pfVar7[0x1a] == 0.0) {
              if ((float)_DAT_005b9aa1 <
                  SQRT(pfVar7[0xd] * pfVar7[0xd] +
                       pfVar7[0xb] * pfVar7[0xb] + pfVar7[0xc] * pfVar7[0xc])) {
                *(uint *)&param_1->field_0x65b34 = 1;
                goto LAB_00447b42;
              }
              fStack_d8 = pfVar7[3] - *pfVar7;
              fStack_d4 = pfVar7[4] - pfVar7[1];
              fStack_d0 = pfVar7[5] - pfVar7[2];
              fStack_84 = pfVar7[3] - *pfVar7;
              *(float *)((int)&stack0xffffff80 + (uint)bVar13 * -8) =
                   (&stack0xffffff2c)[(uint)bVar13 * 0xfffffffe];
              *(uint *)((int)&stack0xffffff84 + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
                   *(uint *)((int)&stack0xffffff30 + (uint)bVar13 * -8 + (uint)bVar13 * -8);
              if ((float)_DAT_005b9aa1 <
                  SQRT(fStack_7c * fStack_7c + fStack_84 * fStack_84 + fStack_80 * fStack_80)) {
                *(uint *)&param_1->field_0x65b34 = 1;
                goto LAB_00447b42;
              }
            }
            iVar4 = iVar4 + 1;
            pfVar7 = pfVar7 + 0x1d;
          } while (iVar4 < *(int *)&param_1->field_0x204);
        }
        if (*(int *)&param_1->field_0x65b34 == 0) {
          return;
        }
      }
LAB_00447b42:
      iVar4 = 0;
      pCVar6 = param_1;
      if (0 < *(int *)&param_1->field_0x204) {
        do {
          *(uint *)&pCVar6->field_0x274 = 0;
          iVar4 = iVar4 + 1;
          pCVar6 = (CCurtain *)&pCVar6->field_0x74;
        } while (iVar4 < *(int *)&param_1->field_0x204);
      }
      iStack_20 = 0;
      if (0 < *(int *)&param_1->field_0x204) {
        pSVar8 = (SCurtainVertex *)&param_1->field_0x208;
        do {
          fVar2 = *(float *)&pSVar8->field_0x68;
          if (fVar2 == 0.0) {
            fVar3 = (float)_DAT_005b9a81;
            *(float *)&pSVar8->field_0x2c = *(float *)&pSVar8->field_0x2c * fVar3;
            fVar1 = *(float *)&param_1->field_0x65b18;
            fStack_dc = fVar2;
            fStack_e0 = fVar2;
            fStack_e4 = fVar2;
            *(float *)&pSVar8->field_0x34 = fVar3 * *(float *)&pSVar8->field_0x34;
            *(float *)&pSVar8->field_0x30 = fVar1 * *(float *)&pSVar8->field_0x30;
            fStack_130 = *(float *)&param_1->field_0x65b14;
            if (*(int *)&pSVar8->field_0x70 != 0) {
              fStack_130 = *(float *)&param_1->field_0x65b14 * (float)_DAT_005b9a89;
            }
            fVar3 = fStack_130;
            fVar2 = 1.0 / param_2;
            fVar1 = fStack_130 * (float)_DAT_005b9a91;
            fStack_cc = -*(float *)&pSVar8->field_0x2c;
            fStack_c8 = -*(float *)&pSVar8->field_0x30;
            fStack_c4 = -*(float *)&pSVar8->field_0x34;
            fStack_60 = -*(float *)&pSVar8->field_0x2c;
            *(uint *)((int)&stack0xffffffa4 + (uint)bVar13 * -8) =
                 *(uint *)((int)&stack0xffffff38 + (uint)bVar13 * -8);
            *(uint *)((int)&stack0xffffffa8 + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
                 *(uint *)((int)&stack0xffffff3c + (uint)bVar13 * -8 + (uint)bVar13 * -8);
            fStack_18 = fVar1;
            fVar1 = 1.0 / fVar1;
            fStack_78 = fStack_60 * fVar2;
            fStack_74 = fStack_5c * fVar2;
            fStack_70 = fStack_58 * fVar2;
            fStack_a8 = fStack_60 * fVar2;
            *(uint *)((int)&stack0xffffff5c + (uint)bVar13 * -8) =
                 *(uint *)((int)&stack0xffffff8c + (uint)bVar13 * -8);
            *(uint *)((int)&stack0xffffff60 + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
                 *(uint *)((int)&stack0xffffff90 + (uint)bVar13 * -8 + (uint)bVar13 * -8);
            fStack_f0 = fStack_a8 * fStack_18;
            fStack_ec = fStack_a4 * fStack_18;
            fStack_e8 = fStack_a0 * fStack_18;
            fStack_6c = fStack_a8 * fStack_18;
            *(uint *)((int)&stack0xffffff98 + (uint)bVar13 * -8) =
                 *(uint *)((int)&stack0xffffff14 + (uint)bVar13 * -8);
            *(uint *)((int)&stack0xffffff9c + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
                 *(uint *)((int)&stack0xffffff18 + (uint)bVar13 * -8 + (uint)bVar13 * -8);
            fStack_90 = fStack_6c * _DAT_005b9a99;
            fStack_8c = fStack_68 * _DAT_005b9a99;
            fStack_88 = fStack_64 * _DAT_005b9a99;
            fStack_114 = fStack_6c * _DAT_005b9a99;
            *(uint *)((int)&stack0xfffffef0 + (uint)bVar13 * -8) =
                 *(uint *)((int)&stack0xffffff74 + (uint)bVar13 * -8);
            *(uint *)((int)&stack0xfffffef4 + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
                 *(uint *)((int)&stack0xffffff78 + (uint)bVar13 * -8 + (uint)bVar13 * -8);
            fStack_e4 = fStack_e4 + fStack_114;
            fStack_120 = fStack_e4 * fVar1;
            fStack_e0 = (fStack_e0 - fVar3) + fStack_110;
            fStack_dc = fStack_dc + fStack_10c;
            fStack_11c = fStack_e0 * fVar1;
            fStack_118 = fStack_dc * fVar1;
            fStack_12c = fStack_120;
            (&stack0xfffffed8)[(uint)bVar13 * 0xfffffffe] =
                 (float)*(uint *)((int)&stack0xfffffee4 + (uint)bVar13 * -8);
            *(uint *)((int)&stack0xfffffedc + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
                 *(uint *)((int)&stack0xfffffee8 + (uint)bVar13 * -8 + (uint)bVar13 * -8);
            if (&stack0xffffffac != &stack0xfffffed4) {
              fStack_54 = fStack_12c;
              fStack_50 = fStack_128;
              fStack_4c = fStack_124;
            }
            fStack_fc = fStack_54 * param_2;
            fStack_f8 = fStack_50 * param_2;
            fStack_f4 = fStack_4c * param_2;
            fStack_9c = fStack_54 * param_2;
            *(float *)((int)&stack0xffffff68 + (uint)bVar13 * -8) =
                 (&stack0xffffff08)[(uint)bVar13 * 0xfffffffe];
            *(uint *)((int)&stack0xffffff6c + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
                 *(uint *)((int)&stack0xffffff0c + (uint)bVar13 * -8 + (uint)bVar13 * -8);
            fStack_b4 = *(float *)&pSVar8->field_0x2c + fStack_9c;
            *(float *)&pSVar8->field_0x2c = fStack_b4;
            fStack_b4 = fStack_b4 * param_2;
            fVar1 = *(float *)&pSVar8->field_0x30 + fStack_98;
            fVar2 = *(float *)&pSVar8->field_0x34 + fStack_94;
            *(float *)&pSVar8->field_0x30 = fVar1;
            *(float *)&pSVar8->field_0x34 = fVar2;
            fStack_b0 = fVar1 * param_2;
            fStack_ac = fVar2 * param_2;
            fStack_c0 = fStack_b4;
            *(uint *)((int)&stack0xffffff44 + (uint)bVar13 * -8) =
                 *(uint *)((int)&stack0xffffff50 + (uint)bVar13 * -8);
            *(uint *)((int)&stack0xffffff48 + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
                 *(uint *)((int)&stack0xffffff54 + (uint)bVar13 * -8 + (uint)bVar13 * -8);
            *(float *)&pSVar8->field_0x20 = *(float *)&pSVar8->field_0x20 + fStack_c0;
            *(float *)&pSVar8->field_0x24 = *(float *)&pSVar8->field_0x24 + fStack_bc;
            *(float *)&pSVar8->field_0x28 = *(float *)&pSVar8->field_0x28 + fStack_b8;
            core_curtain_cpp_FUN_00446d50(param_1,pSVar8);
          }
          pSVar8 = pSVar8 + 1;
          iStack_20 = iStack_20 + 1;
        } while (iStack_20 < *(int *)&param_1->field_0x204);
      }
      pSStack_24 = (SCurtainVertex *)&param_1->field_0x208;
      iVar4 = 0;
      do {
        iVar12 = 0;
        pSVar8 = pSStack_24;
        if (0 < *(int *)&param_1->field_0x204) {
          do {
            if (*(int *)&pSVar8->field_0x68 == 0) {
              core_curtain_cpp_FUN_00446d50(param_1,pSVar8);
            }
            iVar12 = iVar12 + 1;
            pSVar8 = pSVar8 + 1;
          } while (iVar12 < *(int *)&param_1->field_0x204);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
      iVar4 = 0;
      if (0 < *(int *)&param_1->field_0x204) {
        puVar10 = &param_1->field_0x65b20;
        puVar9 = &param_1->field_0x208;
        do {
          if (*(int *)(puVar9 + 0x6c) != 0) {
            *(float *)(puVar9 + 0x2c) = *(float *)puVar10 * *(float *)(puVar9 + 0x2c);
            *(float *)(puVar9 + 0x30) = *(float *)puVar10 * *(float *)(puVar9 + 0x30);
            *(float *)(puVar9 + 0x34) = *(float *)puVar10 * *(float *)(puVar9 + 0x34);
          }
          if (puVar9 + 0x38 != puVar9 + 0x20) {
            *(uint *)(puVar9 + 0x38) = *(uint *)(puVar9 + 0x20);
            *(uint *)(puVar9 + 0x3c) = *(uint *)(puVar9 + 0x24);
            *(uint *)(puVar9 + 0x40) = *(uint *)(puVar9 + 0x28);
          }
          iVar4 = iVar4 + 1;
          puVar9 = puVar9 + 0x74;
        } while (iVar4 < *(int *)&param_1->field_0x204);
      }
      if (*(int *)&param_1->field_0x65b2c != 0) {
        iVar4 = 0;
        iVar12 = 0;
        if (0 < *(int *)&param_1->field_0x204) {
          puVar10 = &param_1->field_0x208;
          do {
            if (*(float *)(puVar10 + 0x24) <= *(float *)&param_1->field_0x65b28) {
              iVar12 = iVar12 + 1;
            }
            iVar4 = iVar4 + 1;
            puVar10 = puVar10 + 0x74;
          } while (iVar4 < *(int *)&param_1->field_0x204);
        }
        if (iVar12 == *(int *)&param_1->field_0x204) {
          *(uint *)&param_1->field_0x1f8 = 0;
        }
      }
      core_curtain_cpp_FUN_00446c60(param_1);
    }
  }
  return;
}
