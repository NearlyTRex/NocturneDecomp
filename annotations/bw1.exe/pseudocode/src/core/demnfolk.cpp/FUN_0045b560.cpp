// Name: core_demnfolk.cpp_FUN_0045b560
// Address: 0045b560
// Address Range: [[0045b560, 0045bebf]]
// Convention: unknown
// Signature: undefined4 core_demnfolk_cpp_FUN_0045b560(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_demnfolk_cpp_FUN_0045b560(CCharacter *param_1,float param_2)

{
  CDemonActor *actor_ptr;
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  float *pfVar7;
  uint *puVar8;
  float *pfVar9;
  byte bVar10;
  float afStackY_1138 [954];
  float *pfVar11;
  float fStack_238;
  float fStack_234;
  int aiStack_208 [10];
  uint auStack_1e0 [2];
  float fStack_1d8;
  byte auStack_1d4 [12];
  float afStack_1c8 [6];
  uint auStack_1b0 [2];
  float fStack_1a8;
  byte auStack_1a4 [12];
  uint auStack_198 [6];
  uint auStack_180 [6];
  float local_168;
  float fStack_164;
  float fStack_160;
  float afStack_15c [3];
  uint uStack_150;
  float afStack_14c [5];
  CVector3f CStack_138;
  uint uStack_12c;
  float afStack_128 [2];
  CVector3f CStack_120;
  CVector3f CStack_114;
  float fStack_108;
  float afStack_104 [5];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  uint uStack_cc;
  float afStack_c8 [2];
  CVector3f CStack_c0;
  uint uStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  uint uStack_84;
  float afStack_80 [5];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint uStack_60;
  float fStack_58;
  uint uStack_54;
  float afStack_48 [3];
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  float *local_2c;
  int local_28;
  float *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  bVar10 = 0;
  if (*(int *)&param_1[1].field_0x168 < 0) {
    return 0;
  }
  fVar2 = *(float *)&param_1[1].field_0xa0 - param_2;
  *(float *)&param_1[1].field_0xa0 = fVar2;
  if (0.0 < fVar2) {
    *(int *)&param_1[1].field_0x9c = *(int *)&param_1[1].field_0x9c + 1;
    local_18 = core_actor_cpp_FUN_0040cc00(0x40a00000,0x41200000);
    *(uint *)&param_1[1].field_0xa0 = local_18;
  }
  if (*(int *)&param_1->field_0x25b0 != 0) {
    return 0;
  }
  if (*(int *)&param_1->field_0x2628 != 0) {
    return 0;
  }
  if (0.0 < *(float *)&param_1[1].field_0xa4) {
    param_2 = *(float *)&param_1[1].field_0xa4 - param_2;
    *(float *)&param_1[1].field_0xa4 = param_2;
    if (0.0 <= param_2) {
      return 0;
    }
    *(uint *)&param_1[1].field_0xa4 = 0;
    return 0;
  }
  iVar4 = *(int *)&param_1[1].field_0xa8;
  if (iVar4 == 0) {
    local_24 = afStack_15c;
    local_30 = 0;
    local_28 = 0;
    local_1c = 0;
    local_2c = (float *)&param_1->field_0x20;
    for (local_20 = 0; local_20 < *(int *)&g_CDemonSetPtr->field_0x14d164; local_20 = local_20 + 1)
    {
      actor_ptr = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + local_28);
      iVar4 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x94))(actor_ptr);
      if ((iVar4 == 0) &&
         (iVar4 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x84))(actor_ptr,param_1),
         iVar4 == 3)) {
        (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x1c))(actor_ptr);
        pfVar11 = local_24;
        pfVar7 = afStack_1c8;
        pfVar9 = &local_168;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar9 = *pfVar7;
          pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
          pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
        }
        pfVar7 = afStack_80 + 2;
        fStack_f0 = *pfVar11 - local_168;
        fStack_ec = pfVar11[1] - fStack_164;
        fStack_e8 = pfVar11[2] - fStack_160;
        afStack_80[2] = *pfVar11 - local_168;
        afStack_80[(uint)bVar10 * -2 + 3] = afStack_104[(uint)bVar10 * -2 + 6];
        afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
        iStack_34 = core_demnfolk_cpp_FUN_00458890(pfVar7);
        if (((iStack_34 != 0) &&
            (iVar4 = unkafter_demnfolk_cpp_FUN_0045bf60(param_1,iStack_34), iVar4 != 0)) &&
           ((iVar4 = core_actor_cpp_FUN_0040c550(actor_ptr,"CBodyPart"), iVar4 == 0 ||
            ((*(uint *)&actor_ptr->field_0x6c & 3) == (*(uint *)&param_1[1].field_0x9c & 3))))) {
          fStack_108 = *(float *)&actor_ptr->field_0x20 - *local_2c;
          afStack_104[0] = *(float *)&actor_ptr->field_0x24 - local_2c[1];
          afStack_104[1] = *(float *)&actor_ptr->field_0x28 - local_2c[2];
          fStack_6c = fStack_108;
          afStack_80[(uint)bVar10 * -2 + 6] = afStack_104[(uint)bVar10 * -2];
          afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
               afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          fStack_68 = fStack_68 * fStack_68 * fStack_68 * fStack_68;
          fStack_238 = SQRT(fStack_64 * fStack_64 + fStack_6c * fStack_6c + fStack_68 * fStack_68);
          if (((float)_DAT_005d81a3 <= fStack_238) &&
             (fStack_238 <= *(float *)&param_1[1].field_0x98 * _DAT_005d81b3)) {
            *(CDemonActor **)(&stack0xfffffdd0 + local_1c) = actor_ptr;
            *(int *)((int)aiStack_208 + local_1c) = iStack_34;
            local_1c = local_1c + 4;
            local_30 = local_30 + 1;
            if (0x27 < local_1c) break;
          }
        }
      }
      local_28 = local_28 + 4;
    }
    if (local_30 < 1) {
      return 0;
    }
    iVar4 = core_actor_cpp_FUN_0040cc60(0,local_30 + -1);
    *(uint *)&param_1[1].field_0xa8 = *(uint *)(&stack0xfffffdd0 + iVar4 * 4);
    iVar4 = aiStack_208[iVar4];
    *(uint *)&param_1[1].field_0xa4 = 0xc2200000;
    *(int *)&param_1[1].field_0xac = iVar4;
    *(int *)&param_1[1].field_0x9c = *(int *)&param_1[1].field_0x9c + 1;
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"%s is going to try to pick up %s\n",param_1,
               *(uint *)&param_1[1].field_0xa8);
    return 1;
  }
  iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x94))(iVar4);
  if (iVar4 != 0) {
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"?%s can't pick up %s, sombody else beat me to it!\n" + 1,param_1,
               *(uint *)&param_1[1].field_0xa8);
    *(uint *)&param_1[1].field_0xa8 = 0;
    *(uint *)&param_1[1].field_0xa4 = 0;
    unkafter_demnfolk_cpp_FUN_0045d060(param_1);
    return 0;
  }
  fVar2 = *(float *)&param_1->field_0x20 - *(float *)(*(int *)&param_1[1].field_0xa8 + 0x20);
  fVar3 = *(float *)&param_1->field_0x28 - *(float *)(*(int *)&param_1[1].field_0xa8 + 0x28);
  fStack_234 = (float)_DAT_005d81a3 - SQRT(fVar3 * fVar3 + fVar2 * fVar2) * (float)_DAT_005d819b;
  if (fStack_234 < 1.0) {
    fStack_234 = 1.0;
  }
  *(float *)&param_1[1].field_0xa4 = param_2 * fStack_234 + *(float *)&param_1[1].field_0xa4;
  iStack_38 = unkafter_demnfolk_cpp_FUN_0045bec0(param_1,*(uint *)&param_1[1].field_0xac);
  iVar4 = -1;
  if ((((-1 < iStack_38) && (*(float *)&param_1[1].field_0xa4 < 0.0)) &&
      (iVar5 = (**(code **)(*(int *)(*(int *)&param_1[1].field_0xa8 + 0x154) + 0x84))
                         (*(int *)&param_1[1].field_0xa8,param_1), iVar5 == 3)) &&
     (iVar5 = unkafter_demnfolk_cpp_FUN_0045bf60(param_1,*(uint *)&param_1[1].field_0xac),
     iVar5 != 0)) {
    uVar1 = *(uint *)&param_1[1].field_0xac;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_0045b7cf:
        iVar4 = *(int *)&param_1[1].field_0xa8;
        (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
        puVar6 = auStack_198;
        puVar8 = auStack_1e0;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        }
        afStack_48[0] = 0.5;
        core_bodypart_cpp_FUN_0041b020(auStack_1e0,auStack_1d4,afStack_80 + 0xe);
        uStack_150 = uStack_84;
        afStack_14c[(uint)bVar10 * -2] = afStack_80[(uint)bVar10 * -2];
        afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        core_bodypart_cpp_FUN_0041afa0(&uStack_150);
        pfVar11 = afStack_104 + 2;
        uStack_60 = uStack_54;
        afStack_80[(uint)bVar10 * -2 + 9] = afStack_80[(uint)bVar10 * -2 + 0xc];
        afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
        fStack_58 = fStack_1d8 + (float)_DAT_005d81ab;
        afStack_104[2] = (float)uStack_60;
        afStack_104[(uint)bVar10 * -2 + 3] = afStack_80[(uint)bVar10 * -2 + 9];
        afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
        core_actor_cpp_FUN_00408b40(iVar4,pfVar11);
        CStack_9c._0_4_ = CStack_114._0_4_;
        *(uint *)((int)&CStack_9c + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&CStack_114 + (uint)bVar10 * -8 + 4);
        *(uint *)((int)&CStack_9c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&CStack_114 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        if (&CStack_e4 != &CStack_9c) {
          CStack_e4._0_4_ = CStack_9c._0_4_;
          CStack_e4._4_4_ = CStack_9c._4_4_;
          CStack_e4._8_4_ = CStack_9c._8_4_;
        }
      }
      else {
LAB_0045bb56:
        iVar4 = *(int *)&param_1[1].field_0xa8;
        if (&CStack_e4 != (CVector3f *)(iVar4 + 0x20)) {
          CStack_e4._0_4_ = *(uint *)(iVar4 + 0x20);
          CStack_e4._4_4_ = *(uint *)(iVar4 + 0x24);
          CStack_e4._8_4_ = *(uint *)(iVar4 + 0x28);
        }
      }
    }
    else {
      if (2 < uVar1) {
        if (uVar1 != 3) goto LAB_0045bb56;
        goto LAB_0045b7cf;
      }
      iVar4 = *(int *)&param_1[1].field_0xa8;
      (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
      puVar6 = auStack_180;
      puVar8 = auStack_1b0;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      uStack_3c = 0x3f000000;
      core_bodypart_cpp_FUN_0041b020(auStack_1b0,auStack_1a4,&uStack_3c);
      uStack_b4 = uStack_cc;
      afStack_b0[(uint)bVar10 * -2] = afStack_c8[(uint)bVar10 * -2];
      afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_bodypart_cpp_FUN_0041afa0(&uStack_b4);
      puVar6 = &uStack_12c;
      afStack_b0[2] = afStack_14c[2];
      afStack_b0[(uint)bVar10 * -2 + 3] = afStack_14c[(uint)bVar10 * -2 + 3];
      afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      fStack_a0 = fStack_1a8 + (float)_DAT_005d81ab;
      uStack_12c = afStack_b0[2];
      afStack_128[(uint)bVar10 * -2] = afStack_b0[(uint)bVar10 * -2 + 3];
      afStack_128[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      core_actor_cpp_FUN_00408b40(iVar4,puVar6);
      CStack_d8._0_4_ = CStack_138._0_4_;
      *(uint *)((int)&CStack_d8 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_138 + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&CStack_d8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_138 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      if (&CStack_e4 != &CStack_d8) {
        CStack_e4._0_4_ = CStack_d8._0_4_;
        CStack_e4._4_4_ = CStack_d8._4_4_;
        CStack_e4._8_4_ = CStack_d8._8_4_;
      }
    }
    iVar4 = iStack_38;
    CStack_c0._0_4_ = _DAT_02c8af28;
    *(uint *)((int)&CStack_c0 + (uint)bVar10 * -8 + 4) =
         *(uint *)(&DAT_02c8af2c + (uint)bVar10 * -8);
    *(uint *)((int)&CStack_c0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         *(uint *)(&DAT_02c8af30 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    if (iVar4 == 0) {
      CStack_120._4_4_ = iVar4;
      CStack_120._8_4_ = iVar4;
      CStack_120._0_4_ = 0xbfc00000;
      if (&CStack_c0 != (CVector3f *)(afStack_128 + 2)) {
        CStack_c0._0_4_ = 0xbfc00000;
        CStack_c0._4_4_ = 0;
        CStack_c0._8_4_ = 0;
      }
    }
    if (iStack_38 == 1) {
      CStack_90._4_4_ = 0;
      CStack_90._8_4_ = 0;
      CStack_90._0_4_ = 0x3fc00000;
      if (&CStack_c0 != &CStack_90) {
        CStack_c0._0_4_ = 0x3fc00000;
        CStack_c0._4_4_ = 0;
        CStack_c0._8_4_ = 0;
      }
    }
    iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                      (param_1,&CStack_e4,(CPathMap *)0x0,&CStack_c0,0.0,0.0);
  }
  if (iVar4 < 0) {
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"%s can't pick up %s, giving up\n",param_1,
               *(uint *)&param_1[1].field_0xa8);
    *(uint *)&param_1[1].field_0xa8 = 0;
    *(uint *)&param_1[1].field_0xa4 = 0x41a00000;
    unkafter_demnfolk_cpp_FUN_0045d060(param_1);
    return 0;
  }
  if (iVar4 < 1) {
    return 1;
  }
  engine_console_cpp_FUN_00445430
            (g_CConsolePtr,"%s beginning to pickup %s\n",param_1,
             *(uint *)&param_1[1].field_0xa8);
  uVar1 = *(uint *)&param_1[1].field_0xac;
  if (uVar1 < 2) {
    if (uVar1 != 1) {
LAB_0045bc3a:
      _DAT_01d1d400 = "..\\core\\demnfolk.cpp";
      _DAT_01d1d404 = 0x5d5;
      core_main_c_FUN_005030e0("Invalid demon townsfolk object shape!");
      return 1;
    }
  }
  else {
    if (uVar1 < 3) {
      iVar4 = 0x22;
      goto LAB_0045bbdc;
    }
    if (uVar1 != 3) goto LAB_0045bc3a;
  }
  iVar4 = 0x20;
LAB_0045bbdc:
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)&param_1->field_0x158,iVar4,1);
  return 1;
}
