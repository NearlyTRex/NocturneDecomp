// Name: core_carved.cpp_FUN_0042a930
// Address: 0042a930
// Address Range: [[0042a930, 0042b284]]
// Convention: unknown
// Signature: undefined4 core_carved_cpp_FUN_0042a930(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_carved_cpp_FUN_0042a930(CCharacter *param_1,float param_2)

{
  CCharacter *pCVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  CDemonActor *pCVar7;
  int iVar8;
  int iVar9;
  CLocation *pCVar10;
  int unaff_ESI;
  uint *puVar11;
  uint *puVar12;
  byte bVar13;
  float afStackY_112c [951];
  CBoundingBox3D *out_box;
  CVector3f *pCVar14;
  float fStack_234;
  CCharacter *in_stack_fffffdd4;
  float fStack_224;
  int aiStack_21c [5];
  uint auStack_208 [5];
  uint auStack_1f4 [10];
  uint auStack_1cc [4];
  uint uStack_1bc;
  uint uStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  byte auStack_1a4 [4];
  uint auStack_1a0 [2];
  byte auStack_198 [8];
  float fStack_190;
  byte auStack_18c [12];
  uint auStack_180 [6];
  uint auStack_168 [9];
  CVector3f CStack_144;
  CVector3f CStack_138;
  float fStack_12c;
  float afStack_128 [2];
  CVector3f CStack_120;
  float fStack_114;
  float afStack_110 [2];
  CVector3f CStack_108;
  CVector3f CStack_fc;
  float fStack_f0;
  float afStack_ec [2];
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  uint uStack_cc;
  float fStack_ac;
  float afStack_a8 [6];
  float afStack_90 [2];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  float fStack_54;
  float afStack_50 [6];
  int iStack_38;
  int local_30;
  CLocation *local_2c;
  uint *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float *local_18;
  float *pfStack_14;
  
  bVar13 = 0;
  if (param_1[1].base.is_renderable < 0) {
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
  iVar9 = *(int *)(param_1[1].base.create_event + 0x30);
  pCVar10 = &(param_1->base).location;
  if (iVar9 == 0) {
    local_28 = &uStack_1bc;
    local_30 = 0;
    local_24 = 0;
    local_1c = 0;
    local_2c = pCVar10;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->actor_count; local_20 = local_20 + 1) {
      pCVar1 = *(CCharacter **)((int)g_CDemonSetPtr->actors + local_24);
      pCVar7 = (*((pCVar1->base).vtable._ub)->getCarrier)(&pCVar1->base);
      if ((pCVar7 == (CDemonActor *)0x0) &&
         (iVar9 = (*((pCVar1->base).vtable._ub)->canPickup)(&pCVar1->base,&param_1->base),
         iVar9 == 3)) {
        fStack_234 = 6.124425e-39;
        (*((pCVar1->base).vtable._ub)->getBoundingBox)
                  (&pCVar1->base,(CBoundingBox3D *)in_stack_fffffdd4);
        pfVar6 = pfStack_14;
        puVar11 = auStack_1cc;
        puVar12 = &uStack_1bc;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
        }
        fStack_ac = *pfVar6 - fStack_1b4;
        afStack_a8[0] = pfVar6[1] - fStack_1b0;
        afStack_a8[1] = pfVar6[2] - fStack_1ac;
        afStack_a8[2] = *pfVar6 - fStack_1b4;
        afStack_a8[(uint)bVar13 * -2 + 3] = afStack_a8[(uint)bVar13 * -2];
        afStack_a8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
             afStack_a8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        in_stack_fffffdd4 = (CCharacter *)0x42b0ca;
        local_20 = core_carved_cpp_FUN_00428550();
        if (((local_20 != 0) &&
            (in_stack_fffffdd4 = param_1, iVar9 = core_carved_cpp_FUN_0042b330(), iVar9 != 0)) &&
           ((in_stack_fffffdd4 = pCVar1,
            iVar9 = core_actor_cpp_isOfClass_FUN_0040c550(&pCVar1->base,"CBodyPart"),
            iVar9 == 0 ||
            (((pCVar1->base).direction_hint & 3U) ==
             (*(uint *)(param_1[1].base.create_event + 0x24) & 3))))) {
          fStack_88 = (pCVar1->base).location.position.x - *local_18;
          fStack_84 = (pCVar1->base).location.position.y - local_18[1];
          fStack_80 = (pCVar1->base).location.position.z - local_18[2];
          CStack_144.z = fStack_88;
          *(float *)((int)&CStack_138 + (uint)bVar13 * -8) = afStack_a8[(uint)bVar13 * -2 + 9];
          *(float *)((int)&CStack_138 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 4) =
               afStack_a8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
          CStack_138.x = CStack_138.x * CStack_138.x * CStack_138.x * CStack_138.x;
          fStack_224 = SQRT(CStack_138.y * CStack_138.y +
                            CStack_144.z * CStack_144.z + CStack_138.x * CStack_138.x);
          if (((float)_DAT_005d55cd <= fStack_224) &&
             (fStack_224 <= *(float *)(param_1[1].base.create_event + 0x20) * _DAT_005d55dd)) {
            *(CCharacter **)((int)auStack_1f4 + unaff_ESI) = pCVar1;
            *(int *)((int)aiStack_21c + unaff_ESI) = local_20;
            unaff_ESI = unaff_ESI + 4;
            local_1c = local_1c + 1;
            if (0x27 < unaff_ESI) break;
          }
        }
      }
      local_24 = local_24 + 4;
    }
    if (local_30 < 1) {
      return 0;
    }
    iVar9 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,local_30 + -1);
    *(uint *)(param_1[1].base.create_event + 0x30) = auStack_208[iVar9];
    iVar9 = aiStack_21c[iVar9 + -5];
    iVar8 = *(int *)(param_1[1].base.create_event + 0x24);
    pCVar1 = param_1 + 1;
    (pCVar1->base).create_event[0x2c] = '\0';
    (pCVar1->base).create_event[0x2d] = '\0';
    (pCVar1->base).create_event[0x2e] = ' ';
    (pCVar1->base).create_event[0x2f] = -0x3e;
    *(int *)(param_1[1].base.create_event + 0x34) = iVar9;
    *(int *)(param_1[1].base.create_event + 0x24) = iVar8 + 1;
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s is going to try to pick up %s\n");
    return 1;
  }
  iVar9 = (**(code **)(*(int *)(iVar9 + 0x154) + 0x94))(iVar9);
  if (iVar9 != 0) {
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
    core_carved_cpp_FUN_0042be20(param_1);
    return 0;
  }
  iVar9 = *(int *)(param_1[1].base.create_event + 0x30);
  fVar4 = (pCVar10->position).x - *(float *)(iVar9 + 0x20);
  fVar5 = (param_1->base).location.position.z - *(float *)(iVar9 + 0x28);
  fStack_234 = (float)_DAT_005d55cd - SQRT(fVar5 * fVar5 + fVar4 * fVar4) * (float)_DAT_005d55c5;
  if (fStack_234 < 1.0) {
    fStack_234 = 1.0;
  }
  uVar2 = *(uint *)(param_1[1].base.create_event + 0x34);
  *(float *)(param_1[1].base.create_event + 0x2c) =
       param_2 * fStack_234 + *(float *)(param_1[1].base.create_event + 0x2c);
  iStack_38 = core_carved_cpp_FUN_0042b290(param_1,uVar2);
  iVar9 = -1;
  if ((-1 < iStack_38) && (*(float *)(param_1[1].base.create_event + 0x2c) < 0.0)) {
    out_box = *(CBoundingBox3D **)(param_1[1].base.create_event + 0x30);
    iVar8 = (**(code **)((int)out_box[0xe].min.y + 0x84))(out_box,param_1);
    if ((iVar8 == 3) &&
       (iVar8 = core_carved_cpp_FUN_0042b330
                          (param_1,*(uint *)(param_1[1].base.create_event + 0x34)), iVar8 != 0
       )) {
      uVar3 = *(uint *)(param_1[1].base.create_event + 0x34);
      if (uVar3 < 2) {
        if (uVar3 == 1) {
LAB_0042ab9c:
          pCVar7 = *(CDemonActor **)(param_1[1].base.create_event + 0x30);
          (*((pCVar7->vtable)._ub)->getBoundingBox)(pCVar7,out_box);
          puVar11 = auStack_180;
          puVar12 = &uStack_1b8;
          for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
            puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
          }
          afStack_50[4] = 0.5;
          core_bodypart_cpp_FUN_0041b020(&fStack_1b0,auStack_1a4,afStack_50 + 4);
          afStack_a8[0] = fStack_84;
          afStack_a8[(uint)bVar13 * -2 + 1] = afStack_a8[(uint)bVar13 * -2 + 10];
          afStack_a8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 2] =
               afStack_a8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xb];
          core_bodypart_cpp_FUN_0041afa0(afStack_a8);
          pCVar14 = &CStack_6c;
          fStack_f0 = fStack_54;
          afStack_ec[(uint)bVar13 * -2] = afStack_50[(uint)bVar13 * -2];
          afStack_ec[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
               afStack_50[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
          afStack_ec[1] = fStack_1a8 + (float)_DAT_005d55d5;
          CStack_6c.x = fStack_f0;
          *(float *)((int)&CStack_6c + (uint)bVar13 * -8 + 4) = afStack_ec[(uint)bVar13 * -2];
          *(float *)((int)&CStack_6c + ((uint)bVar13 * -2 + (uint)bVar13 * -2) * 4 + 8) =
               afStack_ec[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(pCVar7,pCVar14,&CStack_144);
          CStack_78.x = CStack_144.x;
          afStack_a8[(uint)bVar13 * -2 + 0xd] = *(float *)((int)&CStack_144 + (uint)bVar13 * -8 + 4)
          ;
          afStack_a8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xe] =
               *(float *)((int)&CStack_144 + ((uint)bVar13 * -2 + (uint)bVar13 * -2) * 4 + 8);
          if (&CStack_60 != (CVector3f *)(afStack_a8 + 0xc)) {
            CStack_60.x = CStack_78.x;
            CStack_60.y = CStack_78.y;
            CStack_60.z = CStack_78.z;
          }
        }
        else {
LAB_0042af2f:
          iVar9 = *(int *)(param_1[1].base.create_event + 0x30);
          if (&CStack_6c.y != (float *)(iVar9 + 0x20)) {
            CStack_6c.y = *(float *)(iVar9 + 0x20);
            CStack_6c.z = *(float *)(iVar9 + 0x24);
            CStack_60.z = *(float *)(iVar9 + 0x28);
          }
        }
      }
      else {
        if (2 < uVar3) {
          if (uVar3 != 3) goto LAB_0042af2f;
          goto LAB_0042ab9c;
        }
        pCVar7 = *(CDemonActor **)(param_1[1].base.create_event + 0x30);
        (*((pCVar7->vtable)._ub)->getBoundingBox)(pCVar7,out_box);
        puVar11 = auStack_168;
        puVar12 = auStack_1a0;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
        }
        afStack_50[3] = 0.5;
        core_bodypart_cpp_FUN_0041b020(auStack_198,auStack_18c,afStack_50 + 3);
        afStack_90[0] = (float)uStack_cc;
        afStack_a8[(uint)bVar13 * -2 + 7] =
             *(float *)((int)&CStack_d8 + ((uint)bVar13 * -2 + 3) * 4 + 4);
        afStack_a8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 8] =
             *(float *)((int)&CStack_d8 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 4) * 4 + 4);
        core_bodypart_cpp_FUN_0041afa0(afStack_a8 + 6);
        pCVar14 = &CStack_138;
        fStack_114 = fStack_12c;
        afStack_110[(uint)bVar13 * -2] = afStack_128[(uint)bVar13 * -2];
        afStack_110[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             afStack_128[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        afStack_110[1] = fStack_190 + (float)_DAT_005d55d5;
        CStack_138.x = fStack_114;
        *(float *)((int)&CStack_138 + (uint)bVar13 * -8 + 4) = afStack_110[(uint)bVar13 * -2];
        *(float *)((int)&CStack_138 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
             afStack_110[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(pCVar7,pCVar14,&CStack_fc);
        CStack_d8.x = CStack_fc.x;
        *(uint *)((int)&CStack_d8 + (uint)bVar13 * -8 + 4) =
             *(uint *)((int)&CStack_fc + (uint)bVar13 * -8 + 4);
        *(uint *)((int)&CStack_d8 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 1) * 4 + 4) =
             *(uint *)((int)&CStack_fc + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        if (&CStack_60 != (CVector3f *)(afStack_ec + 5)) {
          CStack_60.x = CStack_d8.x;
          CStack_60.y = CStack_d8.y;
          CStack_60.z = CStack_d8.z;
        }
      }
      iVar9 = iStack_38;
      CStack_120.x = _DAT_02c8af28;
      *(uint *)((int)&CStack_120 + (uint)bVar13 * -8 + 4) =
           *(uint *)(&DAT_02c8af2c + (uint)bVar13 * -8);
      *(uint *)((int)&CStack_120 + ((uint)bVar13 * -2 + (uint)bVar13 * -2) * 4 + 8) =
           *(uint *)(&DAT_02c8af30 + (uint)bVar13 * -8 + (uint)bVar13 * -8);
      if (iVar9 == 0) {
        CStack_108.y = (float)iVar9;
        CStack_108.z = (float)iVar9;
        CStack_108.x = -1.5;
        if (&CStack_120 != (CVector3f *)(afStack_110 + 2)) {
          CStack_120.x = -1.5;
          CStack_120.y = 0.0;
          CStack_120.z = 0.0;
        }
      }
      if (iStack_38 == 1) {
        CStack_e4.y = 0.0;
        CStack_e4.z = 0.0;
        CStack_e4.x = 1.5;
        if (&CStack_120 != (CVector3f *)(afStack_ec + 2)) {
          CStack_120.x = 1.5;
          CStack_120.y = 0.0;
          CStack_120.z = 0.0;
        }
      }
      iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        (param_1,&CStack_60,(CPathMap *)0x0,&CStack_120,0.0,0.0);
    }
  }
  if (iVar9 < 0) {
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
    core_carved_cpp_FUN_0042be20(param_1);
    return 0;
  }
  if (iVar9 < 1) {
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"%s beginning to pickup %s\n");
  uVar3 = *(uint *)(param_1[1].base.create_event + 0x34);
  if (uVar3 < 2) {
    if (uVar3 != 1) {
LAB_0042b00b:
      _DAT_01d1d400 = "..\\core\\carved.cpp";
      _DAT_01d1d404 = 0x4d7;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Invalid demon townsfolk object shape!");
      return 1;
    }
  }
  else {
    if (uVar3 < 3) {
      return 1;
    }
    if (uVar3 != 3) goto LAB_0042b00b;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&(param_1->model).base,0x19,1);
  return 1;
}
