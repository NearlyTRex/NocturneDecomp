// Name: core_carved.cpp_FUN_00427bc0
// Address: 00427bc0
// Address Range: [[00427bc0, 00428514]]
// Convention: unknown
// Signature: undefined4 core_carved_cpp_FUN_00427bc0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_carved_cpp_FUN_00427bc0(CCharacter *param_1,float param_2)

{
  CDemonActor *actor_ptr;
  uint uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  float *pfVar8;
  uint *puVar9;
  float *pfVar10;
  byte bVar11;
  float afStackY_1138 [954];
  float fStack_238;
  float fStack_234;
  int aiStack_230 [10];
  uint auStack_208 [10];
  float afStack_1e0 [6];
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float afStack_1bc [3];
  uint auStack_1b0 [2];
  float fStack_1a8;
  byte auStack_1a4 [12];
  uint auStack_198 [2];
  float fStack_190;
  byte auStack_18c [12];
  uint auStack_180 [6];
  uint auStack_168 [6];
  float fStack_150;
  float afStack_14c [2];
  CVector3f CStack_144;
  uint uStack_138;
  float afStack_134 [5];
  CVector3f CStack_120;
  uint uStack_114;
  float afStack_110 [2];
  CVector3f CStack_108;
  CVector3f CStack_fc;
  uint uStack_f0;
  float afStack_ec [2];
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  uint uStack_cc;
  float afStack_c8 [4];
  float fStack_b8;
  float afStack_b4 [3];
  float afStack_a8 [3];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float afStack_90 [3];
  uint uStack_84;
  CVector3f CStack_78;
  uint uStack_6c;
  float afStack_68 [2];
  CVector3f CStack_60;
  uint uStack_54;
  float afStack_50 [6];
  int iStack_38;
  int iStack_34;
  int local_30;
  float *local_2c;
  float *local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  bVar11 = 0;
  if (*(int *)&param_1[1].field_0x2e8 < 0) {
    return 0;
  }
  fVar2 = *(float *)&param_1[1].field_0x290 - param_2;
  *(float *)&param_1[1].field_0x290 = fVar2;
  if (0.0 < fVar2) {
    *(int *)&param_1[1].field_0x28c = *(int *)&param_1[1].field_0x28c + 1;
    local_18 = core_actor_cpp_FUN_0040ce40(0x40a00000,0x41200000);
    *(uint *)&param_1[1].field_0x290 = local_18;
  }
  if (*(int *)&param_1->field_0x25b0 != 0) {
    return 0;
  }
  if (*(int *)&param_1->field_0x2628 != 0) {
    return 0;
  }
  if (0.0 < *(float *)&param_1[1].field_0x294) {
    param_2 = *(float *)&param_1[1].field_0x294 - param_2;
    *(float *)&param_1[1].field_0x294 = param_2;
    if (0.0 <= param_2) {
      return 0;
    }
    *(uint *)&param_1[1].field_0x294 = 0;
    return 0;
  }
  iVar5 = *(int *)&param_1[1].field_0x298;
  if (iVar5 == 0) {
    local_28 = afStack_1bc;
    local_30 = 0;
    local_24 = 0;
    local_1c = 0;
    local_2c = (float *)&param_1->field_0x20;
    for (local_20 = 0; local_20 < *(int *)&g_CDemonSetPtr->field_0x14d164; local_20 = local_20 + 1)
    {
      actor_ptr = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + local_24);
      iVar5 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x94))(actor_ptr);
      if ((iVar5 == 0) &&
         (iVar5 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x84))(actor_ptr,param_1),
         iVar5 == 3)) {
        (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x1c))(actor_ptr);
        pfVar4 = local_28;
        pfVar8 = afStack_1e0;
        pfVar10 = &local_1c8;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar10 = *pfVar8;
          pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
          pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
        }
        pfVar8 = afStack_c8 + 5;
        afStack_c8[2] = *pfVar4 - local_1c8;
        afStack_c8[3] = pfVar4[1] - fStack_1c4;
        fStack_b8 = pfVar4[2] - fStack_1c0;
        afStack_b4[0] = *pfVar4 - local_1c8;
        afStack_c8[(uint)bVar11 * -2 + 6] = afStack_c8[(uint)bVar11 * -2 + 3];
        afStack_c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
             afStack_c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        iStack_34 = core_carved_cpp_FUN_004257e0(pfVar8);
        if (((iStack_34 != 0) &&
            (iVar5 = core_carved_cpp_FUN_004285c0(param_1,iStack_34), iVar5 != 0)) &&
           ((iVar5 = core_actor_cpp_FUN_0040c790(actor_ptr,"CBodyPart"), iVar5 == 0 ||
            ((*(uint *)&actor_ptr->field_0x6c & 3) == (*(uint *)&param_1[1].field_0x28c & 3))))) {
          fStack_9c = *(float *)&actor_ptr->field_0x20 - *local_2c;
          fStack_98 = *(float *)&actor_ptr->field_0x24 - local_2c[1];
          fStack_94 = *(float *)&actor_ptr->field_0x28 - local_2c[2];
          fStack_150 = fStack_9c;
          afStack_14c[(uint)bVar11 * -2] = afStack_c8[(uint)bVar11 * -2 + 0xc];
          afStack_14c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
          afStack_14c[0] = afStack_14c[0] * afStack_14c[0] * afStack_14c[0] * afStack_14c[0];
          fStack_238 = SQRT(afStack_14c[1] * afStack_14c[1] +
                            fStack_150 * fStack_150 + afStack_14c[0] * afStack_14c[0]);
          if (((float)_DAT_005b7dc7 <= fStack_238) &&
             (fStack_238 <= *(float *)&param_1[1].field_0x288 * _DAT_005b7dd7)) {
            *(CDemonActor **)((int)auStack_208 + local_1c) = actor_ptr;
            *(int *)((int)aiStack_230 + local_1c) = iStack_34;
            local_1c = local_1c + 4;
            local_30 = local_30 + 1;
            if (0x27 < local_1c) break;
          }
        }
      }
      local_24 = local_24 + 4;
    }
    if (local_30 < 1) {
      return 0;
    }
    iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,local_30 + -1);
    *(uint *)&param_1[1].field_0x298 = auStack_208[iVar5];
    iVar5 = aiStack_230[iVar5];
    *(uint *)&param_1[1].field_0x294 = 0xc2200000;
    *(int *)&param_1[1].field_0x29c = iVar5;
    *(int *)&param_1[1].field_0x28c = *(int *)&param_1[1].field_0x28c + 1;
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"%s is going to try to pick up %s\n",param_1,
               *(uint *)&param_1[1].field_0x298);
    return 1;
  }
  iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x94))(iVar5);
  if (iVar5 != 0) {
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"?%s can't pick up %s, sombody else beat me to it!\n" + 1,param_1,
               *(uint *)&param_1[1].field_0x298);
    *(uint *)&param_1[1].field_0x298 = 0;
    *(uint *)&param_1[1].field_0x294 = 0;
    core_carved_cpp_FUN_00429090(param_1);
    return 0;
  }
  fVar2 = *(float *)&param_1->field_0x20 - *(float *)(*(int *)&param_1[1].field_0x298 + 0x20);
  fVar3 = *(float *)&param_1->field_0x28 - *(float *)(*(int *)&param_1[1].field_0x298 + 0x28);
  fStack_234 = (float)_DAT_005b7dc7 - SQRT(fVar3 * fVar3 + fVar2 * fVar2) * (float)_DAT_005b7dbf;
  if (fStack_234 < 1.0) {
    fStack_234 = 1.0;
  }
  *(float *)&param_1[1].field_0x294 = param_2 * fStack_234 + *(float *)&param_1[1].field_0x294;
  iStack_38 = core_carved_cpp_FUN_00428520(param_1,*(uint *)&param_1[1].field_0x29c);
  iVar5 = -1;
  if ((((-1 < iStack_38) && (*(float *)&param_1[1].field_0x294 < 0.0)) &&
      (iVar6 = (**(code **)(*(int *)(*(int *)&param_1[1].field_0x298 + 0x154) + 0x84))
                         (*(int *)&param_1[1].field_0x298,param_1), iVar6 == 3)) &&
     (iVar6 = core_carved_cpp_FUN_004285c0(param_1,*(uint *)&param_1[1].field_0x29c),
     iVar6 != 0)) {
    uVar1 = *(uint *)&param_1[1].field_0x29c;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_00427e2c:
        iVar5 = *(int *)&param_1[1].field_0x298;
        (**(code **)(*(int *)(iVar5 + 0x154) + 0x1c))(iVar5);
        puVar7 = auStack_180;
        puVar9 = auStack_1b0;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
        }
        afStack_50[4] = 0.5;
        core_bodypart_cpp_FUN_00416c50(auStack_1b0,auStack_1a4,afStack_50 + 4);
        afStack_a8[0] = (float)uStack_84;
        afStack_c8[(uint)bVar11 * -2 + 9] = afStack_c8[(uint)bVar11 * -2 + 0x12];
        afStack_c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
             afStack_c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
        core_bodypart_cpp_FUN_00416bd0(afStack_c8 + 8);
        puVar7 = &uStack_6c;
        uStack_f0 = uStack_54;
        afStack_ec[(uint)bVar11 * -2] = afStack_50[(uint)bVar11 * -2];
        afStack_ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_50[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        afStack_ec[1] = fStack_1a8 + (float)_DAT_005b7dcf;
        uStack_6c = uStack_f0;
        afStack_68[(uint)bVar11 * -2] = afStack_ec[(uint)bVar11 * -2];
        afStack_68[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        core_actor_cpp_FUN_00408b80(iVar5,puVar7);
        CStack_78._0_4_ = CStack_144._0_4_;
        *(uint *)((int)&CStack_78 + (uint)bVar11 * -8 + 4) =
             *(uint *)((int)&CStack_144 + (uint)bVar11 * -8 + 4);
        *(uint *)((int)&CStack_78 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             *(uint *)((int)&CStack_144 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        if (&CStack_60 != &CStack_78) {
          CStack_60._0_4_ = CStack_78._0_4_;
          CStack_60._4_4_ = CStack_78._4_4_;
          CStack_60._8_4_ = CStack_78._8_4_;
        }
      }
      else {
LAB_004281bf:
        iVar5 = *(int *)&param_1[1].field_0x298;
        if (&CStack_60 != (CVector3f *)(iVar5 + 0x20)) {
          CStack_60._0_4_ = *(uint *)(iVar5 + 0x20);
          CStack_60._4_4_ = *(uint *)(iVar5 + 0x24);
          CStack_60._8_4_ = *(uint *)(iVar5 + 0x28);
        }
      }
    }
    else {
      if (2 < uVar1) {
        if (uVar1 != 3) goto LAB_004281bf;
        goto LAB_00427e2c;
      }
      iVar5 = *(int *)&param_1[1].field_0x298;
      (**(code **)(*(int *)(iVar5 + 0x154) + 0x1c))(iVar5);
      puVar7 = auStack_168;
      puVar9 = auStack_198;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      afStack_50[3] = 0.5;
      core_bodypart_cpp_FUN_00416c50(auStack_198,auStack_18c,afStack_50 + 3);
      afStack_90[0] = (float)uStack_cc;
      afStack_c8[(uint)bVar11 * -2 + 0xf] = afStack_c8[(uint)bVar11 * -2];
      afStack_c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
           afStack_c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      core_bodypart_cpp_FUN_00416bd0(afStack_c8 + 0xe);
      puVar7 = &uStack_138;
      uStack_114 = afStack_134[2];
      afStack_110[(uint)bVar11 * -2] = afStack_134[(uint)bVar11 * -2 + 3];
      afStack_110[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           afStack_134[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      afStack_110[1] = fStack_190 + (float)_DAT_005b7dcf;
      uStack_138 = uStack_114;
      afStack_134[(uint)bVar11 * -2] = afStack_110[(uint)bVar11 * -2];
      afStack_134[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           afStack_110[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      core_actor_cpp_FUN_00408b80(iVar5,puVar7);
      CStack_d8._0_4_ = CStack_fc._0_4_;
      *(uint *)((int)&CStack_d8 + (uint)bVar11 * -8 + 4) =
           *(uint *)((int)&CStack_fc + (uint)bVar11 * -8 + 4);
      *(uint *)((int)&CStack_d8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           *(uint *)((int)&CStack_fc + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      if (&CStack_60 != &CStack_d8) {
        CStack_60._0_4_ = CStack_d8._0_4_;
        CStack_60._4_4_ = CStack_d8._4_4_;
        CStack_60._8_4_ = CStack_d8._8_4_;
      }
    }
    iVar5 = iStack_38;
    CStack_120._0_4_ = _DAT_02cfd900;
    *(uint *)((int)&CStack_120 + (uint)bVar11 * -8 + 4) =
         *(uint *)(&DAT_02cfd904 + (uint)bVar11 * -8);
    *(uint *)((int)&CStack_120 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         *(uint *)(&DAT_02cfd908 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
    if (iVar5 == 0) {
      CStack_108._4_4_ = iVar5;
      CStack_108._8_4_ = iVar5;
      CStack_108._0_4_ = 0xbfc00000;
      if (&CStack_120 != (CVector3f *)(afStack_110 + 2)) {
        CStack_120._0_4_ = 0xbfc00000;
        CStack_120._4_4_ = 0;
        CStack_120._8_4_ = 0;
      }
    }
    if (iStack_38 == 1) {
      CStack_e4._4_4_ = 0;
      CStack_e4._8_4_ = 0;
      CStack_e4._0_4_ = 0x3fc00000;
      if (&CStack_120 != (CVector3f *)(afStack_ec + 2)) {
        CStack_120._0_4_ = 0x3fc00000;
        CStack_120._4_4_ = 0;
        CStack_120._8_4_ = 0;
      }
    }
    iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                      (param_1,&CStack_60,(CPathMap *)0x0,&CStack_120,0.0,0.0);
  }
  if (iVar5 < 0) {
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"%s can't pick up %s, giving up\n",param_1,
               *(uint *)&param_1[1].field_0x298);
    *(uint *)&param_1[1].field_0x298 = 0;
    *(uint *)&param_1[1].field_0x294 = 0x41a00000;
    core_carved_cpp_FUN_00429090(param_1);
    return 0;
  }
  if (iVar5 < 1) {
    return 1;
  }
  engine_console_cpp_FUN_00441ff0
            (g_CConsolePtr,"%s beginning to pickup %s\n",param_1,
             *(uint *)&param_1[1].field_0x298);
  uVar1 = *(uint *)&param_1[1].field_0x29c;
  if (uVar1 < 2) {
    if (uVar1 != 1) {
LAB_0042829b:
      _DAT_01d71de0 = "..\\core\\carved.cpp";
      _DAT_01d71de4 = 0x4df;
      core_main_c_FUN_004e4330("Invalid demon townsfolk object shape!");
      return 1;
    }
  }
  else {
    if (uVar1 < 3) {
      return 1;
    }
    if (uVar1 != 3) goto LAB_0042829b;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            ((CMotionController *)&param_1->field_0x158,0x19,1);
  return 1;
}
