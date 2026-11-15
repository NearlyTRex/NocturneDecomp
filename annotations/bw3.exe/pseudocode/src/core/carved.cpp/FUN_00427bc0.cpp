// Name: core_carved.cpp_FUN_00427bc0
// Address: 00427bc0
// Address Range: [[00427bc0, 00428514]]
// Convention: unknown
// Signature: undefined4 core_carved_cpp_FUN_00427bc0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_carved_cpp_FUN_00427bc0(CCharacter *param_1,float param_2)

{
  float fVar1;
  CCharacter *this_ptr;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  CLocation *pCVar6;
  int unaff_ESI;
  uint *puVar7;
  float *pfVar8;
  uint *puVar9;
  float *pfVar10;
  byte bVar11;
  float afStackY_112c [951];
  CBoundingBox3D *out_box;
  CVector3f *pCVar12;
  float *pfVar13;
  float fStack_234;
  CCharacter *in_stack_fffffdd4;
  float fStack_224;
  uint uStack_1bc;
  uint uStack_1b8;
  float fStack_1b4;
  CVector3f CStack_1b0;
  CVector3f CStack_1a4;
  CVector3f CStack_198;
  CVector3f CStack_18c;
  uint auStack_180 [6];
  float afStack_168 [9];
  CVector3f CStack_144;
  CVector3f CStack_138;
  CVector3f CStack_12c;
  CVector3f CStack_120;
  float fStack_114;
  float afStack_110 [2];
  CVector3f CStack_108;
  CVector3f CStack_fc;
  float fStack_f0;
  float afStack_ec [2];
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  CVector3f aCStack_cc [2];
  float fStack_ac;
  CVector3f CStack_a8;
  float afStack_9c [3];
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float fStack_44;
  float afStack_40 [2];
  int iStack_38;
  int local_30;
  CLocation *local_2c;
  byte *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float *local_18;
  float *pfStack_14;
  
  bVar11 = 0;
  if ((int)param_1[1].model.bone_origins[0x1a].x < 0) {
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
    local_28 = (byte *)&uStack_1bc;
    local_30 = 0;
    local_24 = 0;
    local_1c = 0;
    local_2c = pCVar6;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->actor_count; local_20 = local_20 + 1) {
      this_ptr = *(CCharacter **)((int)g_CDemonSetPtr->actors + local_24);
      pCVar3 = (*((this_ptr->base).vtable._ub)->getCarrier)(&this_ptr->base);
      if ((pCVar3 == (CDemonActor *)0x0) &&
         (iVar5 = (*((this_ptr->base).vtable._ub)->canPickup)(&this_ptr->base,&param_1->base),
         iVar5 == 3)) {
        fStack_234 = 6.108125e-39;
        (*((this_ptr->base).vtable._ub)->getBoundingBox)
                  (&this_ptr->base,(CBoundingBox3D *)in_stack_fffffdd4);
        pfVar13 = pfStack_14;
        puVar7 = (uint *)&stack0xfffffe34;
        puVar9 = &uStack_1bc;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
        }
        fStack_ac = *pfVar13 - fStack_1b4;
        CStack_a8.x = pfVar13[1] - CStack_1b0.x;
        CStack_a8.y = pfVar13[2] - CStack_1b0.y;
        CStack_a8.z = *pfVar13 - fStack_1b4;
        afStack_9c[(uint)bVar11 * -2] = *(float *)((int)&CStack_a8 + (uint)bVar11 * -8);
        afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -2];
        in_stack_fffffdd4 = (CCharacter *)0x42835a;
        local_20 = core_carved_cpp_FUN_004257e0();
        if (((local_20 != 0) &&
            (in_stack_fffffdd4 = param_1, iVar5 = core_carved_cpp_FUN_004285c0(), iVar5 != 0)) &&
           ((in_stack_fffffdd4 = this_ptr,
            iVar5 = core_actor_cpp_isOfClass_FUN_0040c790(&this_ptr->base,"CBodyPart"),
            iVar5 == 0 ||
            (((this_ptr->base).direction_hint & 3U) ==
             ((uint)param_1[1].model.bone_origins[0x12].y & 3))))) {
          CStack_90.z = (this_ptr->base).location.position.x - *local_18;
          CStack_84.x = (this_ptr->base).location.position.y - local_18[1];
          CStack_84.y = (this_ptr->base).location.position.z - local_18[2];
          CStack_144.z = CStack_90.z;
          *(uint *)((int)&CStack_138 + (uint)bVar11 * -8) =
               *(uint *)((int)&CStack_84 + (uint)bVar11 * -8);
          *(uint *)((int)&CStack_138 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 4) =
               *(uint *)((int)&CStack_84 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 4);
          CStack_138.x = CStack_138.x * CStack_138.x * CStack_138.x * CStack_138.x;
          fStack_224 = SQRT(CStack_138.y * CStack_138.y +
                            CStack_144.z * CStack_144.z + CStack_138.x * CStack_138.x);
          if (((float)_DAT_005b7dc7 <= fStack_224) &&
             (fStack_224 <= param_1[1].model.bone_origins[0x12].x * _DAT_005b7dd7)) {
            *(CCharacter **)(&stack0xfffffe0c + unaff_ESI) = this_ptr;
            *(int *)(&stack0xfffffde4 + unaff_ESI) = local_20;
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
    iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,local_30 + -1);
    param_1[1].model.bone_origins[0x13].y = *(float *)(&stack0xfffffdf8 + iVar5 * 4);
    fVar1 = *(float *)(&stack0xfffffde4 + (iVar5 + -5) * 4);
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
    core_carved_cpp_FUN_00429090(param_1);
    return 0;
  }
  fVar1 = param_1[1].model.bone_origins[0x13].y;
  fVar2 = (pCVar6->position).x - *(float *)((int)fVar1 + 0x20);
  fVar1 = (param_1->base).location.position.z - *(float *)((int)fVar1 + 0x28);
  fStack_234 = (float)_DAT_005b7dc7 - SQRT(fVar1 * fVar1 + fVar2 * fVar2) * (float)_DAT_005b7dbf;
  if (fStack_234 < 1.0) {
    fStack_234 = 1.0;
  }
  fVar1 = param_1[1].model.bone_origins[0x13].z;
  param_1[1].model.bone_origins[0x13].x =
       param_2 * fStack_234 + param_1[1].model.bone_origins[0x13].x;
  iStack_38 = core_carved_cpp_FUN_00428520(param_1,fVar1);
  iVar5 = -1;
  if ((-1 < iStack_38) && (param_1[1].model.bone_origins[0x13].x < 0.0)) {
    out_box = (CBoundingBox3D *)param_1[1].model.bone_origins[0x13].y;
    iVar4 = (**(code **)((int)out_box[0xe].min.y + 0x84))(out_box,param_1);
    if ((iVar4 == 3) &&
       (iVar4 = core_carved_cpp_FUN_004285c0(param_1,param_1[1].model.bone_origins[0x13].z),
       iVar4 != 0)) {
      fVar1 = param_1[1].model.bone_origins[0x13].z;
      if ((uint)fVar1 < 2) {
        if (fVar1 == 1.4013e-45) {
LAB_00427e2c:
          pCVar3 = (CDemonActor *)param_1[1].model.bone_origins[0x13].y;
          (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,out_box);
          pfVar13 = afStack_40;
          puVar7 = auStack_180;
          puVar9 = &uStack_1b8;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          afStack_40[0] = 0.5;
          core_bodypart_cpp_addVector_FUN_00416c50(&CStack_1b0,&CStack_1a4,&CStack_84);
          CStack_a8.x = CStack_84.x;
          afStack_9c[(uint)bVar11 * -2 + -2] = *(float *)((int)&CStack_84 + (uint)bVar11 * -8 + 4);
          afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1] =
               *(float *)((int)&CStack_84 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          core_bodypart_cpp_scaleVector_FUN_00416bd0(&CStack_a8,pfVar13,&CStack_54);
          pCVar12 = &CStack_6c;
          fStack_f0 = CStack_54.x;
          afStack_ec[(uint)bVar11 * -2] = *(float *)((int)&CStack_54 + (uint)bVar11 * -8 + 4);
          afStack_ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               *(float *)((int)&CStack_54 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          afStack_ec[1] = CStack_1b0.z + (float)_DAT_005b7dcf;
          CStack_6c.x = fStack_f0;
          *(float *)((int)&CStack_6c + (uint)bVar11 * -8 + 4) = afStack_ec[(uint)bVar11 * -2];
          *(float *)((int)&CStack_6c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
               afStack_ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(pCVar3,pCVar12,&CStack_144);
          CStack_78.x = CStack_144.x;
          *(uint *)((int)&CStack_78 + (uint)bVar11 * -8 + 4) =
               *(uint *)((int)&CStack_144 + (uint)bVar11 * -8 + 4);
          *(uint *)((int)&CStack_78 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
               *(uint *)((int)&CStack_144 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          if (&CStack_60 != &CStack_78) {
            CStack_60.x = CStack_78.x;
            CStack_60.y = CStack_78.y;
            CStack_60.z = CStack_78.z;
          }
        }
        else {
LAB_004281bf:
          fVar1 = param_1[1].model.bone_origins[0x13].y;
          if (&CStack_6c.y != (float *)((int)fVar1 + 0x20)) {
            CStack_6c.y = *(float *)((int)fVar1 + 0x20);
            CStack_6c.z = *(float *)((int)fVar1 + 0x24);
            CStack_60.z = *(float *)((int)fVar1 + 0x28);
          }
        }
      }
      else {
        if (2 < (uint)fVar1) {
          if (fVar1 != 4.2039e-45) goto LAB_004281bf;
          goto LAB_00427e2c;
        }
        pCVar3 = (CDemonActor *)param_1[1].model.bone_origins[0x13].y;
        (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,out_box);
        pfVar13 = &fStack_44;
        pfVar8 = afStack_168;
        pfVar10 = &CStack_1a4.y;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar10 = *pfVar8;
          pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
          pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
        }
        fStack_44 = 0.5;
        core_bodypart_cpp_addVector_FUN_00416c50(&CStack_198,&CStack_18c,aCStack_cc);
        CStack_90.x = aCStack_cc[0].x;
        *(uint *)((int)&CStack_90 + (uint)bVar11 * -8 + 4) =
             *(uint *)((int)aCStack_cc + (uint)bVar11 * -8 + 4);
        *(uint *)((int)&CStack_90 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             *(uint *)((int)aCStack_cc + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        core_bodypart_cpp_scaleVector_FUN_00416bd0(&CStack_90,pfVar13,&CStack_12c);
        pCVar12 = &CStack_138;
        fStack_114 = CStack_12c.x;
        afStack_110[(uint)bVar11 * -2] = *(float *)((int)&CStack_12c + (uint)bVar11 * -8 + 4);
        afStack_110[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             *(float *)((int)&CStack_12c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        afStack_110[1] = CStack_198.z + (float)_DAT_005b7dcf;
        CStack_138.x = fStack_114;
        *(float *)((int)&CStack_138 + (uint)bVar11 * -8 + 4) = afStack_110[(uint)bVar11 * -2];
        *(float *)((int)&CStack_138 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             afStack_110[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(pCVar3,pCVar12,&CStack_fc);
        CStack_d8.x = CStack_fc.x;
        *(uint *)((int)aCStack_cc + (uint)bVar11 * -8 + -8) =
             *(uint *)((int)&CStack_fc + (uint)bVar11 * -8 + 4);
        *(uint *)((int)aCStack_cc + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -4) =
             *(uint *)((int)&CStack_fc + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        if (&CStack_60 != (CVector3f *)(afStack_ec + 5)) {
          CStack_60.x = CStack_d8.x;
          CStack_60.y = CStack_d8.y;
          CStack_60.z = CStack_d8.z;
        }
      }
      iVar5 = iStack_38;
      CStack_120.x = _DAT_02cfd900;
      *(uint *)((int)&CStack_120 + (uint)bVar11 * -8 + 4) =
           *(uint *)(&DAT_02cfd904 + (uint)bVar11 * -8);
      *(uint *)((int)&CStack_120 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           *(uint *)(&DAT_02cfd908 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
      if (iVar5 == 0) {
        CStack_108.y = (float)iVar5;
        CStack_108.z = (float)iVar5;
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
      iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        (param_1,&CStack_60,(CPathMap *)0x0,&CStack_120,0.0,0.0);
    }
  }
  if (iVar5 < 0) {
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s can't pick up %s, giving up\n");
    param_1[1].model.bone_origins[0x13].y = 0.0;
    param_1[1].model.bone_origins[0x13].x = 20.0;
    core_carved_cpp_FUN_00429090(param_1);
    return 0;
  }
  if (iVar5 < 1) {
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s beginning to pickup %s\n");
  fVar1 = param_1[1].model.bone_origins[0x13].z;
  if ((uint)fVar1 < 2) {
    if (fVar1 != 1.4013e-45) {
LAB_0042829b:
      _DAT_01d71de0 = "..\\core\\carved.cpp";
      _DAT_01d71de4 = 0x4df;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Invalid demon townsfolk object shape!");
      return 1;
    }
  }
  else {
    if ((uint)fVar1 < 3) {
      return 1;
    }
    if (fVar1 != 4.2039e-45) goto LAB_0042829b;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&(param_1->model).base,0x19,1);
  return 1;
}
