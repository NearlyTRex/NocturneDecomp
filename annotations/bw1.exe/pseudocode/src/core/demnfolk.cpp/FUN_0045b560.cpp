// Name: core_demnfolk.cpp_FUN_0045b560
// Address: 0045b560
// Address Range: [[0045b560, 0045bebf]]
// Convention: unknown
// Signature: undefined4 core_demnfolk_cpp_FUN_0045b560(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_demnfolk_cpp_FUN_0045b560(CCharacter *param_1,float param_2)

{
  CCharacter *pCVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  CDemonActor *pCVar6;
  int iVar7;
  int iVar8;
  CLocation *pCVar9;
  float *unaff_EBP;
  int unaff_ESI;
  int *piVar10;
  uint *puVar11;
  int *piVar12;
  uint *puVar13;
  byte bVar14;
  float afStackY_1138 [954];
  CBoundingBox3D *out_box;
  CVector3f *pCVar15;
  float fStack_234;
  CCharacter *in_stack_fffffdd4;
  float fStack_224;
  int aiStack_1f4 [5];
  byte auStack_1e0 [8];
  float fStack_1d8;
  byte auStack_1d4 [28];
  uint uStack_1b8;
  uint uStack_1b4;
  byte auStack_1b0 [8];
  float fStack_1a8;
  byte auStack_1a4 [12];
  int aiStack_198 [6];
  uint auStack_180 [9];
  uint auStack_15c [2];
  float fStack_154;
  float fStack_150;
  float afStack_14c [5];
  CVector3f CStack_138;
  CVector3f CStack_12c;
  CVector3f CStack_120;
  CVector3f aCStack_114 [2];
  CVector3f CStack_fc;
  float afStack_f0 [3];
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
  float fStack_84;
  float afStack_80 [7];
  float fStack_64;
  float afStack_60 [4];
  float fStack_50;
  float afStack_48 [3];
  uint uStack_3c;
  float fStack_38;
  int local_30;
  CLocation *local_2c;
  int local_28;
  uint *local_24;
  int local_20;
  int local_1c;
  float *local_18;
  
  bVar14 = 0;
  if ((int)param_1[1].model.base.tween_speed < 0) {
    return 0;
  }
  fVar4 = *(float *)(param_1[1].base.create_event + 0x28) - param_2;
  *(float *)(param_1[1].base.create_event + 0x28) = fVar4;
  if (0.0 < fVar4) {
    *(int *)(param_1[1].base.create_event + 0x24) =
         *(int *)(param_1[1].base.create_event + 0x24) + 1;
    local_18 = (float *)core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(5.0,10.0);
    *(float **)(param_1[1].base.create_event + 0x28) = local_18;
  }
  if (param_1->carry_hands[0].carry_actor != (CDemonActor *)0x0) {
    return 0;
  }
  if (param_1->carry_hands[1].carry_actor != (CDemonActor *)0x0) {
    return 0;
  }
  if (0.0 < *(float *)(param_1[1].base.create_event + 0x2c)) {
    param_2 = *(float *)(param_1[1].base.create_event + 0x2c) - param_2;
    *(float *)(param_1[1].base.create_event + 0x2c) = param_2;
    if (0.0 <= param_2) {
      return 0;
    }
    param_1 = param_1 + 1;
    (param_1->base).create_event[0x2c] = '\0';
    (param_1->base).create_event[0x2d] = '\0';
    (param_1->base).create_event[0x2e] = '\0';
    (param_1->base).create_event[0x2f] = '\0';
    return 0;
  }
  iVar8 = *(int *)(param_1[1].base.create_event + 0x30);
  pCVar9 = &(param_1->base).location;
  if (iVar8 == 0) {
    local_24 = auStack_15c;
    local_30 = 0;
    local_28 = 0;
    local_1c = 0;
    local_2c = pCVar9;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->actor_count; local_20 = local_20 + 1) {
      pCVar1 = *(CCharacter **)((int)g_CDemonSetPtr->actors + local_28);
      pCVar6 = (*((pCVar1->base).vtable._ub)->getCarrier)(&pCVar1->base);
      if ((pCVar6 == (CDemonActor *)0x0) &&
         (iVar8 = (*((pCVar1->base).vtable._ub)->canPickup)(&pCVar1->base,&param_1->base),
         iVar8 == 3)) {
        fStack_234 = 6.404307e-39;
        (*((pCVar1->base).vtable._ub)->getBoundingBox)
                  (&pCVar1->base,(CBoundingBox3D *)in_stack_fffffdd4);
        puVar11 = &uStack_1b4;
        puVar13 = auStack_15c;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
          puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
        }
        CStack_e4.z = *unaff_EBP - fStack_154;
        CStack_d8.x = unaff_EBP[1] - fStack_150;
        CStack_d8.y = unaff_EBP[2] - afStack_14c[0];
        fStack_64 = *unaff_EBP - fStack_154;
        afStack_60[(uint)bVar14 * -2] = *(float *)((int)&CStack_d8 + (uint)bVar14 * -8);
        afStack_60[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             *(float *)((int)&CStack_d8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 4);
        in_stack_fffffdd4 = (CCharacter *)0x45bd05;
        local_20 = core_demnfolk_cpp_FUN_00458890();
        if (((local_20 != 0) &&
            (in_stack_fffffdd4 = param_1, iVar8 = core_demnfolk_cpp_FUN_0045bf60(), iVar8 != 0)) &&
           ((in_stack_fffffdd4 = pCVar1,
            iVar8 = core_actor_cpp_isOfClass_FUN_0040c550(&pCVar1->base,"CBodyPart"),
            iVar8 == 0 ||
            (((pCVar1->base).direction_hint & 3U) ==
             (*(uint *)(param_1[1].base.create_event + 0x24) & 3))))) {
          CStack_fc.z = (pCVar1->base).location.position.x - *local_18;
          afStack_f0[0] = (pCVar1->base).location.position.y - local_18[1];
          afStack_f0[1] = (pCVar1->base).location.position.z - local_18[2];
          afStack_60[2] = CStack_fc.z;
          afStack_60[(uint)bVar14 * -2 + 3] = afStack_f0[(uint)bVar14 * -2];
          afStack_60[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
               afStack_f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
          afStack_60[3] = afStack_60[3] * afStack_60[3] * afStack_60[3] * afStack_60[3];
          fStack_224 = SQRT(fStack_50 * fStack_50 +
                            afStack_60[2] * afStack_60[2] + afStack_60[3] * afStack_60[3]);
          if (((float)_DAT_005d81a3 <= fStack_224) &&
             (fStack_224 <= *(float *)(param_1[1].base.create_event + 0x20) * _DAT_005d81b3)) {
            *(CCharacter **)(&stack0xfffffde4 + unaff_ESI) = pCVar1;
            *(int *)((int)aiStack_1f4 + unaff_ESI) = local_20;
            unaff_ESI = unaff_ESI + 4;
            local_1c = local_1c + 1;
            if (0x27 < unaff_ESI) break;
          }
        }
      }
      local_28 = local_28 + 4;
    }
    if (local_30 < 1) {
      return 0;
    }
    iVar8 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,local_30 + -1);
    *(uint *)(param_1[1].base.create_event + 0x30) =
         *(uint *)(&stack0xfffffdd0 + iVar8 * 4);
    uVar3 = *(uint *)(&stack0xfffffdf8 + iVar8 * 4);
    iVar8 = *(int *)(param_1[1].base.create_event + 0x24);
    pCVar1 = param_1 + 1;
    (pCVar1->base).create_event[0x2c] = '\0';
    (pCVar1->base).create_event[0x2d] = '\0';
    (pCVar1->base).create_event[0x2e] = ' ';
    (pCVar1->base).create_event[0x2f] = -0x3e;
    *(uint *)(param_1[1].base.create_event + 0x34) = uVar3;
    *(int *)(param_1[1].base.create_event + 0x24) = iVar8 + 1;
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s is going to try to pick up %s\n");
    return 1;
  }
  iVar8 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x94))(iVar8);
  if (iVar8 != 0) {
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"?%s can't pick up %s, sombody else beat me to it!\n" + 1);
    pCVar1 = param_1 + 1;
    (pCVar1->base).create_event[0x30] = '\0';
    (pCVar1->base).create_event[0x31] = '\0';
    (pCVar1->base).create_event[0x32] = '\0';
    (pCVar1->base).create_event[0x33] = '\0';
    pCVar1 = param_1 + 1;
    (pCVar1->base).create_event[0x2c] = '\0';
    (pCVar1->base).create_event[0x2d] = '\0';
    (pCVar1->base).create_event[0x2e] = '\0';
    (pCVar1->base).create_event[0x2f] = '\0';
    core_demnfolk_cpp_FUN_0045d060(param_1);
    return 0;
  }
  iVar8 = *(int *)(param_1[1].base.create_event + 0x30);
  fVar4 = (pCVar9->position).x - *(float *)(iVar8 + 0x20);
  fVar5 = (param_1->base).location.position.z - *(float *)(iVar8 + 0x28);
  fStack_234 = (float)_DAT_005d81a3 - SQRT(fVar5 * fVar5 + fVar4 * fVar4) * (float)_DAT_005d819b;
  if (fStack_234 < 1.0) {
    fStack_234 = 1.0;
  }
  uVar3 = *(uint *)(param_1[1].base.create_event + 0x34);
  *(float *)(param_1[1].base.create_event + 0x2c) =
       param_2 * fStack_234 + *(float *)(param_1[1].base.create_event + 0x2c);
  fStack_38 = (float)core_demnfolk_cpp_FUN_0045bec0(param_1,uVar3);
  iVar8 = -1;
  if ((-1 < (int)fStack_38) && (*(float *)(param_1[1].base.create_event + 0x2c) < 0.0)) {
    out_box = *(CBoundingBox3D **)(param_1[1].base.create_event + 0x30);
    iVar7 = (**(code **)((int)out_box[0xe].min.y + 0x84))(out_box,param_1);
    if ((iVar7 == 3) &&
       (iVar7 = core_demnfolk_cpp_FUN_0045bf60
                          (param_1,*(uint *)(param_1[1].base.create_event + 0x34)), iVar7 != 0
       )) {
      uVar2 = *(uint *)(param_1[1].base.create_event + 0x34);
      if (uVar2 < 2) {
        if (uVar2 == 1) {
LAB_0045b7cf:
          pCVar6 = *(CDemonActor **)(param_1[1].base.create_event + 0x30);
          (*((pCVar6->vtable)._ub)->getBoundingBox)(pCVar6,out_box);
          piVar10 = aiStack_198;
          piVar12 = aiStack_1f4 + 3;
          for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = *piVar10;
            piVar10 = piVar10 + (uint)bVar14 * -2 + 1;
            piVar12 = piVar12 + (uint)bVar14 * -2 + 1;
          }
          afStack_48[0] = 0.5;
          core_bodypart_cpp_FUN_0041b020(auStack_1e0,auStack_1d4,afStack_60 + 6);
          fStack_150 = fStack_84;
          afStack_14c[(uint)bVar14 * -2] = afStack_80[(uint)bVar14 * -2];
          afStack_14c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
               afStack_80[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
          core_bodypart_cpp_FUN_0041afa0(&fStack_150);
          pCVar15 = &CStack_fc;
          afStack_60[0] = afStack_60[3];
          afStack_60[(uint)bVar14 * -2 + 1] = afStack_60[(uint)bVar14 * -2 + 4];
          afStack_60[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 2] =
               afStack_60[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 5];
          afStack_60[2] = fStack_1d8 + (float)_DAT_005d81ab;
          CStack_fc.x = afStack_60[0];
          afStack_f0[(uint)bVar14 * -2 + -2] = afStack_60[(uint)bVar14 * -2 + 1];
          afStack_f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + -1] =
               afStack_60[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 2];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(pCVar6,pCVar15,aCStack_114);
          CStack_9c.x = aCStack_114[0].x;
          afStack_b0[(uint)bVar14 * -2 + 6] = *(float *)((int)aCStack_114 + (uint)bVar14 * -8 + 4);
          afStack_b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
               *(float *)((int)aCStack_114 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
          if (&CStack_e4 != (CVector3f *)(afStack_b0 + 5)) {
            CStack_e4.x = CStack_9c.x;
            CStack_e4.y = CStack_9c.y;
            CStack_e4.z = CStack_9c.z;
          }
        }
        else {
LAB_0045bb56:
          iVar8 = *(int *)(param_1[1].base.create_event + 0x30);
          if (afStack_f0 + 1 != (float *)(iVar8 + 0x20)) {
            afStack_f0[1] = *(float *)(iVar8 + 0x20);
            afStack_f0[2] = *(float *)(iVar8 + 0x24);
            CStack_e4.z = *(float *)(iVar8 + 0x28);
          }
        }
      }
      else {
        if (2 < uVar2) {
          if (uVar2 != 3) goto LAB_0045bb56;
          goto LAB_0045b7cf;
        }
        pCVar6 = *(CDemonActor **)(param_1[1].base.create_event + 0x30);
        (*((pCVar6->vtable)._ub)->getBoundingBox)(pCVar6,out_box);
        puVar11 = auStack_180;
        puVar13 = &uStack_1b8;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
          puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
        }
        uStack_3c = 0x3f000000;
        core_bodypart_cpp_FUN_0041b020(auStack_1b0,auStack_1a4,&uStack_3c);
        uStack_b4 = uStack_cc;
        afStack_b0[(uint)bVar14 * -2] = afStack_c8[(uint)bVar14 * -2];
        afStack_b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             afStack_c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
        core_bodypart_cpp_FUN_0041afa0(&uStack_b4);
        pCVar15 = &CStack_12c;
        afStack_b0[2] = afStack_14c[2];
        afStack_b0[(uint)bVar14 * -2 + 3] = afStack_14c[(uint)bVar14 * -2 + 3];
        afStack_b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
             afStack_14c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
        fStack_a0 = fStack_1a8 + (float)_DAT_005d81ab;
        CStack_12c.x = afStack_b0[2];
        *(float *)((int)&CStack_12c + (uint)bVar14 * -8 + 4) = afStack_b0[(uint)bVar14 * -2 + 3];
        *(float *)((int)&CStack_12c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             afStack_b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(pCVar6,pCVar15,&CStack_138);
        CStack_d8.x = CStack_138.x;
        *(uint *)((int)&CStack_d8 + (uint)bVar14 * -8 + 4) =
             *(uint *)((int)&CStack_138 + (uint)bVar14 * -8 + 4);
        *(uint *)((int)&CStack_d8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             *(uint *)((int)&CStack_138 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
        if (&CStack_e4 != &CStack_d8) {
          CStack_e4.x = CStack_d8.x;
          CStack_e4.y = CStack_d8.y;
          CStack_e4.z = CStack_d8.z;
        }
      }
      fVar4 = fStack_38;
      CStack_c0.x = _DAT_02c8af28;
      *(uint *)((int)&CStack_c0 + (uint)bVar14 * -8 + 4) =
           *(uint *)(&DAT_02c8af2c + (uint)bVar14 * -8);
      *(uint *)((int)&CStack_c0 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           *(uint *)(&DAT_02c8af30 + (uint)bVar14 * -8 + (uint)bVar14 * -8);
      if (fVar4 == 0.0) {
        CStack_120.y = fVar4;
        CStack_120.z = fVar4;
        CStack_120.x = -1.5;
        if (&CStack_c0 != &CStack_120) {
          CStack_c0.x = -1.5;
          CStack_c0.y = 0.0;
          CStack_c0.z = 0.0;
        }
      }
      if (fStack_38 == 1.4013e-45) {
        CStack_90.y = 0.0;
        CStack_90.z = 0.0;
        CStack_90.x = 1.5;
        if (&CStack_c0 != (CVector3f *)(afStack_b0 + 8)) {
          CStack_c0.x = 1.5;
          CStack_c0.y = 0.0;
          CStack_c0.z = 0.0;
        }
      }
      iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        (param_1,&CStack_e4,(CPathMap *)0x0,&CStack_c0,0.0,0.0);
    }
  }
  if (iVar8 < 0) {
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s can't pick up %s, giving up\n");
    pCVar1 = param_1 + 1;
    (pCVar1->base).create_event[0x30] = '\0';
    (pCVar1->base).create_event[0x31] = '\0';
    (pCVar1->base).create_event[0x32] = '\0';
    (pCVar1->base).create_event[0x33] = '\0';
    pCVar1 = param_1 + 1;
    (pCVar1->base).create_event[0x2c] = '\0';
    (pCVar1->base).create_event[0x2d] = '\0';
    (pCVar1->base).create_event[0x2e] = -0x60;
    (pCVar1->base).create_event[0x2f] = 'A';
    core_demnfolk_cpp_FUN_0045d060(param_1);
    return 0;
  }
  if (iVar8 < 1) {
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"%s beginning to pickup %s\n");
  uVar2 = *(uint *)(param_1[1].base.create_event + 0x34);
  if (uVar2 < 2) {
    if (uVar2 != 1) {
LAB_0045bc3a:
      _DAT_01d1d400 = "..\\core\\demnfolk.cpp";
      _DAT_01d1d404 = 0x5d5;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Invalid demon townsfolk object shape!");
      return 1;
    }
  }
  else {
    if (uVar2 < 3) {
      iVar8 = 0x22;
      goto LAB_0045bbdc;
    }
    if (uVar2 != 3) goto LAB_0045bc3a;
  }
  iVar8 = 0x20;
LAB_0045bbdc:
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&(param_1->model).base,iVar8,1);
  return 1;
}
