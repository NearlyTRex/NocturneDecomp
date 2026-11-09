// Name: core_chain.cpp_FUN_00435c70
// Address: 00435c70
// Address Range: [[00435c70, 004365f3]]
// Convention: unknown
// Signature: void core_chain_cpp_FUN_00435c70(CChain *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_chain_cpp_FUN_00435c70(CChain *param_1,float param_2)

{
  float fVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  SChainVertex *pSVar7;
  byte bVar8;
  float afStackY_1148 [1012];
  float fVar9;
  SChainVertex *in_stack_fffffe9c;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  byte auStack_124 [4];
  float afStack_120 [2];
  byte auStack_118 [20];
  uint uStack_104;
  float fStack_100;
  float afStack_fc [4];
  float fStack_ec;
  byte auStack_e8 [16];
  float afStack_d8 [4];
  float fStack_c8;
  byte auStack_c4 [16];
  float afStack_b4 [2];
  byte auStack_ac [16];
  float afStack_9c [5];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  SChainVertex *pSStack_64;
  SChainVertex *pSStack_60;
  byte *puStack_5c;
  float fStack_58;
  int iStack_54;
  byte *puStack_50;
  SChainVertex *pSStack_4c;
  float *pfStack_48;
  SChainVertex *pSStack_44;
  int iStack_40;
  float *pfStack_3c;
  SChainVertex *pSStack_38;
  SChainVertex *pSStack_34;
  uint *puStack_30;
  SChainVertex *pSStack_2c;
  SChainVertex *pSStack_28;
  SChainVertex *pSStack_24;
  SChainVertex *pSStack_1c;
  uint uStack_18;
  
  bVar8 = 0;
  if (*(float *)&param_1->field_0x56c < _DAT_005d6023) {
    uStack_18 = (**(code **)(*(int *)&param_1->field_0x154 + 0x40))(param_1,0x3dcccccd,0);
    *(uint *)&param_1->field_0x56c = uStack_18;
  }
  if (*(int *)&param_1->field_0x574 != 0) {
    pfVar6 = (float *)&param_1->field_0x2b0;
    in_stack_fffffe9c = (SChainVertex *)0x0;
    for (iVar4 = 0; iVar4 < *(int *)&param_1->field_0x158 + -1; iVar4 = iVar4 + 1) {
      fStack_70 = pfVar6[-9] - *pfVar6;
      fStack_6c = pfVar6[-8] - pfVar6[1];
      fStack_68 = pfVar6[-7] - pfVar6[2];
      fStack_13c = pfVar6[-9] - *pfVar6;
      *(float *)(auStack_118 + (uint)bVar8 * -8 + -0x20) = afStack_9c[(uint)bVar8 * -2 + 0xc];
      *(float *)(auStack_118 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -0x1c) =
           afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
      pfVar6 = pfVar6 + 9;
      in_stack_fffffe9c =
           (SChainVertex *)
           (SQRT(fStack_134 * fStack_134 + fStack_13c * fStack_13c + fStack_138 * fStack_138) +
           (float)in_stack_fffffe9c);
    }
  }
  *(float *)&param_1->field_0x570 = 1.0 / param_2;
  pfVar6 = (float *)(&param_1->field_0x268 + *(int *)&param_1->field_0x158 * 0x24);
  fStack_88 = *pfVar6;
  afStack_9c[(uint)bVar8 * -2 + 6] = pfVar6[(uint)bVar8 * -2 + 1];
  afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
       (pfVar6 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
  core_chain_cpp_FUN_004357a0(param_1);
  auStack_124 = (byte  [4])afStack_9c[2];
  *(float *)((int)afStack_120 + (uint)bVar8 * -8) = afStack_9c[(uint)bVar8 * -2 + 3];
  afStack_fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -8] =
       afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
  puVar5 = (uint *)(&param_1->field_0x268 + *(int *)&param_1->field_0x158 * 0x24);
  if (puVar5 != (uint *)auStack_124) {
    *puVar5 = auStack_124;
    puVar5[1] = afStack_120[0];
    puVar5[2] = afStack_120[1];
  }
  iVar4 = *(int *)&param_1->field_0x158;
  *(uint *)(&param_1->field_0x27c + iVar4 * 0x24) = 0;
  *(uint *)(&param_1->field_0x278 + iVar4 * 0x24) =
       *(uint *)(&param_1->field_0x27c + iVar4 * 0x24);
  *(uint *)(&param_1->field_0x274 + iVar4 * 0x24) =
       *(uint *)(&param_1->field_0x278 + iVar4 * 0x24);
  if (&param_1->field_0x28c != &param_1->field_0x20) {
    *(uint *)&param_1->field_0x28c = *(uint *)&param_1->field_0x20;
    *(uint *)&param_1->field_0x290 = *(uint *)&param_1->field_0x24;
    *(uint *)&param_1->field_0x294 = *(uint *)&param_1->field_0x28;
  }
  *(uint *)&param_1->field_0x2a0 = 0;
  *(uint *)&param_1->field_0x29c = *(uint *)&param_1->field_0x2a0;
  *(uint *)&param_1->field_0x298 = *(uint *)&param_1->field_0x29c;
  puStack_5c = &param_1->field_0x28c;
  pfStack_48 = (float *)&param_1->field_0x568;
  pfStack_3c = (float *)&param_1->field_0x2bc;
  puStack_50 = &param_1->field_0x2d4;
  iStack_40 = 1;
  pSStack_4c = (SChainVertex *)&param_1->field_0x28c;
  while( true ) {
    if (*(int *)&param_1->field_0x158 + -1 <= iStack_40) break;
    *pfStack_3c = *pfStack_48 * *pfStack_3c;
    pfStack_3c[1] = *pfStack_48 * pfStack_3c[1];
    pfStack_3c[2] = *pfStack_48 * pfStack_3c[2];
    fStack_58 = *(float *)&param_1->field_0x55c * (float)_DAT_005d6027;
    auStack_118._16_4_ = 0.0 - *(float *)&param_1->field_0x55c;
    fVar9 = 1.0 / fStack_58;
    auStack_e8._12_4_ = fVar9 * 0.0;
    uStack_104 = 0;
    auStack_118._12_4_ = 0;
    pSStack_34 = (SChainVertex *)(puStack_5c + iStack_40 * 0x24);
    afStack_d8[0] = (float)auStack_118._16_4_ * fVar9;
    afStack_d8[1] = (float)auStack_e8._12_4_;
    fStack_148 = (float)auStack_e8._12_4_;
    (&stack0xfffffebc)[(uint)bVar8 * 0xfffffffe] = afStack_d8[(uint)bVar8 * -2];
    pSVar7 = pSStack_34;
    *(float *)((int)&stack0xfffffec0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         afStack_d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if (&stack0xfffffeac != &stack0xfffffeb8) {
      fStack_154 = fStack_148;
      fStack_150 = fStack_144;
      fStack_14c = fStack_140;
    }
    fStack_15c = fStack_150 * param_2;
    fStack_158 = fStack_14c * param_2;
    auStack_ac._12_4_ = fStack_154 * param_2;
    afStack_9c[(uint)bVar8 * -2] = *(float *)((int)&stack0xfffffea4 + (uint)bVar8 * -8);
    afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         *(float *)((int)&stack0xfffffea8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    fStack_100 = *(float *)&pSVar7->field_0xc + (float)auStack_ac._12_4_;
    *(float *)&pSVar7->field_0xc = fStack_100;
    fStack_100 = fStack_100 * param_2;
    fVar1 = *(float *)&pSVar7->field_0x10 + afStack_9c[0];
    fVar9 = *(float *)&pSVar7->field_0x14 + afStack_9c[1];
    *(float *)&pSVar7->field_0x10 = fVar1;
    *(float *)&pSVar7->field_0x14 = fVar9;
    afStack_fc[0] = fVar1 * param_2;
    afStack_fc[1] = fVar9 * param_2;
    fStack_130 = fStack_100;
    *(float *)(auStack_118 + (uint)bVar8 * -8 + -0x14) = afStack_fc[(uint)bVar8 * -2];
    *(float *)(auStack_118 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -0x10) =
         afStack_fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    *(float *)pSVar7 = *(float *)pSVar7 + fStack_130;
    *(float *)&pSVar7->field_0x4 = *(float *)&pSVar7->field_0x4 + fStack_12c;
    *(float *)&pSVar7->field_0x8 = *(float *)&pSVar7->field_0x8 + fStack_128;
    core_chain_cpp_FUN_004359e0(param_1,pSStack_34,pSStack_4c);
    in_stack_fffffe9c = pSStack_28;
    core_chain_cpp_FUN_004359e0(param_1,pSStack_28,pSStack_44);
    pSStack_34 = pSStack_34 + 1;
    pSStack_24 = pSStack_24 + 1;
    pSStack_38 = (SChainVertex *)((int)pSStack_38 + 0x24);
    pSStack_28 = (SChainVertex *)&pSStack_28->field_0x1;
  }
  pSStack_44 = (SChainVertex *)0x0;
  puStack_30 = (uint *)&param_1->field_0x298;
  pSStack_2c = (SChainVertex *)&param_1->field_0x28c;
  pSStack_38 = (SChainVertex *)&param_1->field_0x20;
  pSStack_64 = (SChainVertex *)&param_1->field_0x2d4;
  pSStack_60 = (SChainVertex *)&param_1->field_0x2b0;
  do {
    core_chain_cpp_FUN_004357a0(param_1);
    auStack_c4._0_4_ = auStack_118._0_4_;
    *(uint *)(auStack_c4 + (uint)bVar8 * -8 + 4) =
         *(uint *)(auStack_118 + (uint)bVar8 * -8 + 4);
    *(uint *)(auStack_c4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         *(uint *)(auStack_118 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    pSVar7 = pSStack_2c + *(int *)&param_1->field_0x158 + -1;
    if (pSVar7 != (SChainVertex *)auStack_c4) {
      *(uint *)pSVar7 = auStack_c4._0_4_;
      *(uint *)&pSVar7->field_0x4 = auStack_c4._4_4_;
      *(uint *)&pSVar7->field_0x8 = auStack_c4._8_4_;
    }
    iVar4 = *(int *)&param_1->field_0x158 + -1;
    *(uint *)&pSStack_2c[iVar4].field_0x14 = 0;
    *(uint *)&pSStack_2c[iVar4].field_0x10 = *(uint *)&pSStack_2c[iVar4].field_0x14;
    *(uint *)&pSStack_2c[iVar4].field_0xc = *(uint *)&pSStack_2c[iVar4].field_0x10;
    if (pSStack_2c != pSStack_38) {
      *(uint *)pSStack_2c = *(uint *)pSStack_38;
      *(uint *)&pSStack_2c->field_0x4 = *(uint *)&pSStack_38->field_0x4;
      *(uint *)&pSStack_2c->field_0x8 = *(uint *)&pSStack_38->field_0x8;
    }
    puStack_30[2] = 0;
    puStack_30[1] = puStack_30[2];
    *puStack_30 = puStack_30[1];
    pSStack_28 = pSStack_64;
    pSStack_24 = pSStack_2c;
    pSVar7 = pSStack_60;
    for (iVar4 = 1; iVar4 < *(int *)&param_1->field_0x158 + -1; iVar4 = iVar4 + 1) {
      core_chain_cpp_FUN_004359e0(param_1,pSVar7,pSStack_24);
      in_stack_fffffe9c = pSVar7;
      core_chain_cpp_FUN_004359e0(param_1,pSVar7,pSStack_1c);
      pSVar7 = pSVar7 + 1;
    }
    core_chain_cpp_FUN_004357a0(param_1);
    auStack_ac._0_4_ = auStack_e8._0_4_;
    *(uint *)(auStack_ac + (uint)bVar8 * -8 + 4) =
         *(uint *)(auStack_e8 + (uint)bVar8 * -8 + 4);
    *(uint *)(auStack_ac + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         *(uint *)(auStack_e8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    pSVar7 = pSStack_2c + *(int *)&param_1->field_0x158 + -1;
    if (pSVar7 != (SChainVertex *)auStack_ac) {
      *(uint *)pSVar7 = auStack_ac._0_4_;
      *(uint *)&pSVar7->field_0x4 = auStack_ac._4_4_;
      *(uint *)&pSVar7->field_0x8 = auStack_ac._8_4_;
    }
    iVar4 = *(int *)&param_1->field_0x158 + -1;
    *(uint *)&pSStack_2c[iVar4].field_0x14 = 0;
    *(uint *)&pSStack_2c[iVar4].field_0x10 = *(uint *)&pSStack_2c[iVar4].field_0x14;
    *(uint *)&pSStack_2c[iVar4].field_0xc = *(uint *)&pSStack_2c[iVar4].field_0x10;
    if (pSStack_2c != pSStack_38) {
      *(uint *)pSStack_2c = *(uint *)pSStack_38;
      *(uint *)&pSStack_2c->field_0x4 = *(uint *)&pSStack_38->field_0x4;
      *(uint *)&pSStack_2c->field_0x8 = *(uint *)&pSStack_38->field_0x8;
    }
    puStack_30[2] = 0;
    pSStack_44 = (SChainVertex *)((int)pSStack_44 + 1);
    puStack_30[1] = puStack_30[2];
    *puStack_30 = puStack_30[2];
  } while ((int)pSStack_44 < 3);
  iVar4 = 0;
  if (0 < *(int *)&param_1->field_0x158) {
    puVar5 = (uint *)&param_1->field_0x2a4;
    do {
      puVar2 = (uint *)(&param_1->field_0x28c + iVar4 * 0x24);
      if (puVar5 != puVar2) {
        *puVar5 = *puVar2;
        puVar5[1] = puVar2[1];
        puVar5[2] = puVar2[2];
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 9;
    } while (iVar4 < *(int *)&param_1->field_0x158);
  }
  iStack_54 = 0;
  pSStack_1c = (SChainVertex *)0x0;
  if (*(int *)&param_1->field_0x574 != 0) {
    if ((float)in_stack_fffffe9c < *(float *)&param_1->field_0x15c * (float)_DAT_005d602f) {
      pfVar6 = (float *)&param_1->field_0x2b0;
      fVar9 = 0.0;
      for (iVar4 = 0; iVar4 < *(int *)&param_1->field_0x158 + -1; iVar4 = iVar4 + 1) {
        afStack_fc[2] = pfVar6[-9] - *pfVar6;
        afStack_fc[3] = pfVar6[-8] - pfVar6[1];
        fStack_ec = pfVar6[-7] - pfVar6[2];
        fStack_7c = pfVar6[-9] - *pfVar6;
        afStack_9c[(uint)bVar8 * -2 + 9] = afStack_fc[(uint)bVar8 * -2 + 3];
        afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
             afStack_fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        pfVar6 = pfVar6 + 9;
        fVar9 = SQRT(fStack_74 * fStack_74 + fStack_7c * fStack_7c + fStack_78 * fStack_78) + fVar9;
      }
      if (*(float *)&param_1->field_0x15c * (float)_DAT_005d602f < fVar9) {
        pSStack_1c = (SChainVertex *)0x1;
      }
    }
    iVar4 = *(int *)&param_1->field_0x158;
    auStack_c4._12_4_ = fStack_88 - *(float *)(&param_1->field_0x268 + iVar4 * 0x24);
    afStack_b4[0] = fStack_84 - *(float *)(&param_1->field_0x26c + iVar4 * 0x24);
    afStack_b4[1] = fStack_80 - *(float *)(&param_1->field_0x270 + iVar4 * 0x24);
    afStack_d8[2] = (float)auStack_c4._12_4_;
    afStack_d8[(uint)bVar8 * -2 + 3] = afStack_b4[(uint)bVar8 * -2];
    afStack_d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_b4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if (param_2 * (float)_DAT_005d6037 <
        SQRT(fStack_c8 * fStack_c8 + afStack_d8[2] * afStack_d8[2] + afStack_d8[3] * afStack_d8[3]))
    {
      iStack_54 = 1;
    }
  }
  if ((pSStack_1c != (SChainVertex *)0x0) && (param_1->field_0x1b4 != '\0')) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0x280);
    iVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0x218);
    if (iVar4 == 0) {
      uVar3 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0057d8d0
                        (0x02C82A60,(CDemonActor *)param_1,&param_1->field_0x1b4,
                         (CVector3f *)(&param_1->field_0x268 + *(int *)&param_1->field_0x158 * 0x24)
                        );
      *(uint *)&param_1->field_0x280 = uVar3;
    }
  }
  *(float *)&param_1->field_0x284 = *(float *)&param_1->field_0x284 - param_2;
  if (iStack_54 == 0) {
    if (0.0 <= *(float *)&param_1->field_0x284) {
      return;
    }
    *(uint *)&param_1->field_0x284 = 0;
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0x280);
    return;
  }
  iVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0x218);
  if (iVar4 == 0) {
    iVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0x280);
    if (iVar4 == 0) {
      uVar3 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0057d8d0
                        (0x02C82A60,(CDemonActor *)param_1,&param_1->field_0x21c,
                         (CVector3f *)(&param_1->field_0x268 + *(int *)&param_1->field_0x158 * 0x24)
                        );
      *(uint *)&param_1->field_0x280 = uVar3;
    }
  }
  *(uint *)&param_1->field_0x284 = 0x3f000000;
  return;
}
