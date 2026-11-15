// Name: core_demnfolk.cpp_FUN_00457740
// Address: 00457740
// Address Range: [[00457740, 0045809f]]
// Convention: unknown
// Signature: undefined4 core_demnfolk_cpp_FUN_00457740(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_demnfolk_cpp_FUN_00457740(CCharacter *param_1,float param_2)

{
  float fVar1;
  CCharacter *this_ptr;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  CLocation *pCVar6;
  float *unaff_EBP;
  int unaff_ESI;
  int *piVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  byte bVar11;
  float afStackY_1138 [954];
  CBoundingBox3D *out_box;
  CVector3f *pCVar12;
  float *pfVar13;
  float fStack_234;
  CCharacter *in_stack_fffffdd4;
  float fStack_224;
  int aiStack_1f4 [5];
  CVector3f CStack_1e0;
  CVector3f aCStack_1d4 [2];
  uint uStack_1b8;
  uint uStack_1b4;
  CVector3f CStack_1b0;
  CVector3f CStack_1a4;
  int aiStack_198 [6];
  uint auStack_180 [9];
  uint auStack_15c [2];
  float fStack_154;
  CVector3f CStack_150;
  CVector3f CStack_144;
  CVector3f CStack_138;
  CVector3f CStack_12c;
  CVector3f CStack_120;
  CVector3f aCStack_114 [2];
  CVector3f CStack_fc;
  float afStack_f0 [3];
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  float fStack_a8;
  float afStack_a4 [2];
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f aCStack_84 [2];
  float fStack_64;
  float afStack_60 [3];
  CVector3f CStack_54;
  float afStack_48 [6];
  int local_30;
  CLocation *local_2c;
  int local_28;
  uint *local_24;
  int local_20;
  int local_1c;
  float *local_18;
  
  bVar11 = 0;
  if ((int)param_1[1].model.bone_origins[0x23].y < 0) {
    return 0;
  }
  fVar1 = param_1[1].model.bone_origins[0x12].z - param_2;
  param_1[1].model.bone_origins[0x12].z = fVar1;
  if (0.0 < fVar1) {
    param_1[1].model.bone_origins[0x12].y = (float)((int)param_1[1].model.bone_origins[0x12].y + 1);
    local_18 = (float *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(5.0,10.0);
    param_1[1].model.bone_origins[0x12].z = (float)local_18;
  }
  if (param_1->carry_hands[0].carry_actor != (CDemonActor *)0x0) {
    return 0;
  }
  if (param_1->carry_hands[1].carry_actor != (CDemonActor *)0x0) {
    return 0;
  }
  if (0.0 < param_1[1].model.bone_origins[0x13].x) {
    param_2 = param_1[1].model.bone_origins[0x13].x - param_2;
    param_1[1].model.bone_origins[0x13].x = param_2;
    if (0.0 <= param_2) {
      return 0;
    }
    param_1[1].model.bone_origins[0x13].x = 0.0;
    return 0;
  }
  fVar1 = param_1[1].model.bone_origins[0x13].y;
  pCVar6 = &(param_1->base).location;
  if (fVar1 == 0.0) {
    local_24 = auStack_15c;
    local_30 = 0;
    local_28 = 0;
    local_1c = 0;
    local_2c = pCVar6;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->actor_count; local_20 = local_20 + 1) {
      this_ptr = *(CCharacter **)((int)g_CDemonSetPtr->actors + local_28);
      pCVar3 = (*((this_ptr->base).vtable._ub)->getCarrier)(&this_ptr->base);
      if ((pCVar3 == (CDemonActor *)0x0) &&
         (iVar5 = (*((this_ptr->base).vtable._ub)->canPickup)(&this_ptr->base,&param_1->base),
         iVar5 == 3)) {
        fStack_234 = 6.38202e-39;
        (*((this_ptr->base).vtable._ub)->getBoundingBox)
                  (&this_ptr->base,(CBoundingBox3D *)in_stack_fffffdd4);
        puVar8 = &uStack_1b4;
        puVar10 = auStack_15c;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
        }
        CStack_e4.z = *unaff_EBP - fStack_154;
        CStack_d8.x = unaff_EBP[1] - CStack_150.x;
        CStack_d8.y = unaff_EBP[2] - CStack_150.y;
        fStack_64 = *unaff_EBP - fStack_154;
        afStack_60[(uint)bVar11 * -2] = *(float *)((int)&CStack_d8 + (uint)bVar11 * -8);
        afStack_60[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             *(float *)((int)&CStack_d8 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 1) * 4);
        in_stack_fffffdd4 = (CCharacter *)0x457ee5;
        local_20 = core_demnfolk_cpp_FUN_004549e0();
        if (((local_20 != 0) &&
            (in_stack_fffffdd4 = param_1, iVar5 = core_demnfolk_cpp_FUN_00458140(), iVar5 != 0)) &&
           ((in_stack_fffffdd4 = this_ptr,
            iVar5 = core_actor_cpp_isOfClass_FUN_0040c790(&this_ptr->base,"CBodyPart"),
            iVar5 == 0 ||
            (((this_ptr->base).direction_hint & 3U) ==
             ((uint)param_1[1].model.bone_origins[0x12].y & 3))))) {
          CStack_fc.z = (this_ptr->base).location.position.x - *local_18;
          afStack_f0[0] = (this_ptr->base).location.position.y - local_18[1];
          afStack_f0[1] = (this_ptr->base).location.position.z - local_18[2];
          afStack_60[2] = CStack_fc.z;
          *(float *)((int)&CStack_54 + (uint)bVar11 * -8) = afStack_f0[(uint)bVar11 * -2];
          afStack_48[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -2] =
               afStack_f0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          CStack_54.x = CStack_54.x * CStack_54.x * CStack_54.x * CStack_54.x;
          fStack_224 = SQRT(CStack_54.y * CStack_54.y +
                            afStack_60[2] * afStack_60[2] + CStack_54.x * CStack_54.x);
          if (((float)_DAT_005ba822 <= fStack_224) &&
             (fStack_224 <= param_1[1].model.bone_origins[0x12].x * _DAT_005ba832)) {
            *(CCharacter **)(&stack0xfffffde4 + unaff_ESI) = this_ptr;
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
    iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,local_30 + -1);
    param_1[1].model.bone_origins[0x13].y = *(float *)(&stack0xfffffde4 + iVar5 * 4 + -0x14);
    fVar1 = *(float *)(&stack0xfffffdf8 + iVar5 * 4);
    fVar2 = param_1[1].model.bone_origins[0x12].y;
    param_1[1].model.bone_origins[0x13].x = -40.0;
    param_1[1].model.bone_origins[0x13].z = fVar1;
    param_1[1].model.bone_origins[0x12].y = (float)((int)fVar2 + 1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s is going to try to pick up %s\n");
    return 1;
  }
  iVar5 = (**(code **)(*(int *)((int)fVar1 + 0x154) + 0x94))(fVar1);
  if (iVar5 != 0) {
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"?%s can't pick up %s, sombody else beat me to it!\n" + 1);
    param_1[1].model.bone_origins[0x13].y = 0.0;
    param_1[1].model.bone_origins[0x13].x = 0.0;
    core_demnfolk_cpp_FUN_00458fb0(param_1);
    return 0;
  }
  fVar1 = param_1[1].model.bone_origins[0x13].y;
  fVar2 = (pCVar6->position).x - *(float *)((int)fVar1 + 0x20);
  fVar1 = (param_1->base).location.position.z - *(float *)((int)fVar1 + 0x28);
  fStack_234 = (float)_DAT_005ba822 - SQRT(fVar1 * fVar1 + fVar2 * fVar2) * (float)_DAT_005ba81a;
  if (fStack_234 < 1.0) {
    fStack_234 = 1.0;
  }
  fVar1 = param_1[1].model.bone_origins[0x13].z;
  param_1[1].model.bone_origins[0x13].x =
       param_2 * fStack_234 + param_1[1].model.bone_origins[0x13].x;
  afStack_48[4] = (float)core_demnfolk_cpp_FUN_004580a0(param_1,fVar1);
  iVar5 = -1;
  if ((-1 < (int)afStack_48[4]) && (param_1[1].model.bone_origins[0x13].x < 0.0)) {
    out_box = (CBoundingBox3D *)param_1[1].model.bone_origins[0x13].y;
    iVar4 = (**(code **)((int)out_box[0xe].min.y + 0x84))(out_box,param_1);
    if ((iVar4 == 3) &&
       (iVar4 = core_demnfolk_cpp_FUN_00458140(param_1,param_1[1].model.bone_origins[0x13].z),
       iVar4 != 0)) {
      fVar1 = param_1[1].model.bone_origins[0x13].z;
      if ((uint)fVar1 < 2) {
        if (fVar1 == 1.4013e-45) {
LAB_004579af:
          pCVar3 = (CDemonActor *)param_1[1].model.bone_origins[0x13].y;
          (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,out_box);
          pfVar13 = afStack_48;
          piVar7 = aiStack_198;
          piVar9 = aiStack_1f4 + 3;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar9 = *piVar7;
            piVar7 = piVar7 + (uint)bVar11 * -2 + 1;
            piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
          }
          afStack_48[0] = 0.5;
          core_bodypart_cpp_addVector_FUN_00416c50(&CStack_1e0,aCStack_1d4,aCStack_84);
          CStack_150.x = aCStack_84[0].x;
          *(uint *)((int)&CStack_150 + (uint)bVar11 * -8 + 4) =
               *(uint *)((int)aCStack_84 + (uint)bVar11 * -8 + 4);
          *(uint *)((int)&CStack_150 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
               *(uint *)((int)aCStack_84 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          core_bodypart_cpp_scaleVector_FUN_00416bd0(&CStack_150,pfVar13,&CStack_54);
          pCVar12 = &CStack_fc;
          afStack_60[0] = CStack_54.x;
          afStack_60[(uint)bVar11 * -2 + 1] = afStack_48[(uint)bVar11 * -2 + -2];
          afStack_60[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2] =
               afStack_48[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1];
          afStack_60[2] = CStack_1e0.z + (float)_DAT_005ba82a;
          CStack_fc.x = afStack_60[0];
          afStack_f0[(uint)bVar11 * -2 + -2] = afStack_60[(uint)bVar11 * -2 + 1];
          afStack_f0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1] =
               afStack_60[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(pCVar3,pCVar12,aCStack_114);
          CStack_9c.x = aCStack_114[0].x;
          afStack_a4[(uint)bVar11 * -2 + 3] = *(float *)((int)aCStack_114 + (uint)bVar11 * -8 + 4);
          afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
               *(float *)((int)aCStack_114 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          if (&CStack_e4 != (CVector3f *)(afStack_a4 + 2)) {
            CStack_e4.x = CStack_9c.x;
            CStack_e4.y = CStack_9c.y;
            CStack_e4.z = CStack_9c.z;
          }
        }
        else {
LAB_00457d36:
          fVar1 = param_1[1].model.bone_origins[0x13].y;
          if (afStack_f0 + 1 != (float *)((int)fVar1 + 0x20)) {
            afStack_f0[1] = *(float *)((int)fVar1 + 0x20);
            afStack_f0[2] = *(float *)((int)fVar1 + 0x24);
            CStack_e4.z = *(float *)((int)fVar1 + 0x28);
          }
        }
      }
      else {
        if (2 < (uint)fVar1) {
          if (fVar1 != 4.2039e-45) goto LAB_00457d36;
          goto LAB_004579af;
        }
        pCVar3 = (CDemonActor *)param_1[1].model.bone_origins[0x13].y;
        (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,out_box);
        pfVar13 = afStack_48 + 3;
        puVar8 = auStack_180;
        puVar10 = &uStack_1b8;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
        }
        afStack_48[3] = 0.5;
        core_bodypart_cpp_addVector_FUN_00416c50(&CStack_1b0,&CStack_1a4,&CStack_cc);
        CStack_b4.x = CStack_cc.x;
        *(uint *)((int)&CStack_b4 + (uint)bVar11 * -8 + 4) =
             *(uint *)((int)&CStack_cc + (uint)bVar11 * -8 + 4);
        *(uint *)((int)&CStack_b4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             *(uint *)((int)&CStack_cc + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        core_bodypart_cpp_scaleVector_FUN_00416bd0(&CStack_b4,pfVar13,&CStack_144);
        pCVar12 = &CStack_12c;
        fStack_a8 = CStack_144.x;
        afStack_a4[(uint)bVar11 * -2] = *(float *)((int)&CStack_144 + (uint)bVar11 * -8 + 4);
        afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             *(float *)((int)&CStack_144 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        afStack_a4[1] = CStack_1b0.z + (float)_DAT_005ba82a;
        CStack_12c.x = fStack_a8;
        *(float *)((int)&CStack_12c + (uint)bVar11 * -8 + 4) = afStack_a4[(uint)bVar11 * -2];
        *(float *)((int)&CStack_12c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(pCVar3,pCVar12,&CStack_138);
        CStack_d8.x = CStack_138.x;
        *(uint *)((int)&CStack_d8 + ((uint)bVar11 * -2 + 1) * 4) =
             *(uint *)((int)&CStack_138 + (uint)bVar11 * -8 + 4);
        *(uint *)((int)&CStack_d8 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 2) * 4) =
             *(uint *)((int)&CStack_138 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        if (&CStack_e4 != &CStack_d8) {
          CStack_e4.x = CStack_d8.x;
          CStack_e4.y = CStack_d8.y;
          CStack_e4.z = CStack_d8.z;
        }
      }
      fVar1 = afStack_48[4];
      CStack_c0.x = _DAT_02cfd900;
      *(uint *)((int)&CStack_c0 + (uint)bVar11 * -8 + 4) =
           *(uint *)(&DAT_02cfd904 + (uint)bVar11 * -8);
      *(uint *)((int)&CStack_c0 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
           *(uint *)(&DAT_02cfd908 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
      if (fVar1 == 0.0) {
        CStack_120.y = fVar1;
        CStack_120.z = fVar1;
        CStack_120.x = -1.5;
        if (&CStack_c0 != &CStack_120) {
          CStack_c0.x = -1.5;
          CStack_c0.y = 0.0;
          CStack_c0.z = 0.0;
        }
      }
      if (afStack_48[4] == 1.4013e-45) {
        CStack_90.y = 0.0;
        CStack_90.z = 0.0;
        CStack_90.x = 1.5;
        if (&CStack_c0 != (CVector3f *)(afStack_a4 + 5)) {
          CStack_c0.x = 1.5;
          CStack_c0.y = 0.0;
          CStack_c0.z = 0.0;
        }
      }
      iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        (param_1,&CStack_e4,(CPathMap *)0x0,&CStack_c0,0.0,0.0);
    }
  }
  if (iVar5 < 0) {
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s can't pick up %s, giving up\n");
    param_1[1].model.bone_origins[0x13].y = 0.0;
    param_1[1].model.bone_origins[0x13].x = 20.0;
    core_demnfolk_cpp_FUN_00458fb0(param_1);
    return 0;
  }
  if (iVar5 < 1) {
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s beginning to pickup %s\n");
  fVar1 = param_1[1].model.bone_origins[0x13].z;
  if ((uint)fVar1 < 2) {
    if (fVar1 != 1.4013e-45) {
LAB_00457e1a:
      _DAT_01d71de0 = "..\\core\\demnfolk.cpp";
      _DAT_01d71de4 = 0x615;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Invalid demon townsfolk object shape!");
      return 1;
    }
  }
  else {
    if ((uint)fVar1 < 3) {
      iVar5 = 0x21;
      goto LAB_00457dbc;
    }
    if (fVar1 != 4.2039e-45) goto LAB_00457e1a;
  }
  iVar5 = 0x1f;
LAB_00457dbc:
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&(param_1->model).base,iVar5,1);
  return 1;
}
