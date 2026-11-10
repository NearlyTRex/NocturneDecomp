// Name: core_demnfolk.cpp_FUN_00457740
// Address: 00457740
// Address Range: [[00457740, 0045809f]]
// Convention: unknown
// Signature: undefined4 core_demnfolk_cpp_FUN_00457740(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_demnfolk_cpp_FUN_00457740(CCharacter *param_1,float param_2)

{
  CCharacter *this_ptr;
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  int iVar4;
  CLocation *pCVar5;
  float *unaff_EBP;
  int unaff_ESI;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_1138 [954];
  float fVar9;
  float *pfVar10;
  float fStack_234;
  CCharacter *in_stack_fffffdd4;
  float fStack_224;
  int aiStack_1f4 [5];
  uint auStack_1e0 [2];
  float fStack_1d8;
  byte auStack_1d4 [32];
  uint uStack_1b4;
  uint auStack_1b0 [2];
  float fStack_1a8;
  byte auStack_1a4 [12];
  uint auStack_198 [6];
  uint auStack_180 [9];
  uint auStack_15c [2];
  float fStack_154;
  float fStack_150;
  float afStack_14c [5];
  float fStack_138;
  float afStack_12c [3];
  CVector3f CStack_120;
  float fStack_114;
  float afStack_110 [5];
  float fStack_fc;
  float afStack_f8 [5];
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  uint uStack_cc;
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
  int iStack_38;
  int local_30;
  CLocation *local_2c;
  int local_28;
  uint *local_24;
  int local_20;
  int local_1c;
  float *local_18;
  
  bVar8 = 0;
  if ((int)param_1[1].model.bone_origins[0x23].y < 0) {
    return 0;
  }
  fVar9 = param_1[1].model.bone_origins[0x12].z - param_2;
  param_1[1].model.bone_origins[0x12].z = fVar9;
  if (0.0 < fVar9) {
    param_1[1].model.bone_origins[0x12].y = (float)((int)param_1[1].model.bone_origins[0x12].y + 1);
    local_18 = (float *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(5.0,10.0);
    param_1[1].model.bone_origins[0x12].z = (float)local_18;
  }
  if (*(int *)&param_1->field_0x25b0 != 0) {
    return 0;
  }
  if (*(int *)&param_1->field_0x2628 != 0) {
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
  fVar9 = param_1[1].model.bone_origins[0x13].y;
  pCVar5 = &(param_1->base).location;
  if (fVar9 == 0.0) {
    local_24 = auStack_15c;
    local_30 = 0;
    local_28 = 0;
    local_1c = 0;
    local_2c = pCVar5;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->actor_count; local_20 = local_20 + 1) {
      this_ptr = *(CCharacter **)((int)g_CDemonSetPtr->actors + local_28);
      pCVar2 = (*((this_ptr->base).vtable._ub)->getCarrier)(&this_ptr->base);
      if ((pCVar2 == (CDemonActor *)0x0) &&
         (iVar4 = (*((this_ptr->base).vtable._ub)->canPickup)(&this_ptr->base,&param_1->base),
         iVar4 == 3)) {
        fStack_234 = 6.38202e-39;
        (*((this_ptr->base).vtable._ub)->getBoundingBox)
                  (&this_ptr->base,(CBoundingBox3D *)in_stack_fffffdd4);
        puVar6 = &uStack_1b4;
        puVar7 = auStack_15c;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        CStack_e4.z = *unaff_EBP - fStack_154;
        CStack_d8.x = unaff_EBP[1] - fStack_150;
        CStack_d8.y = unaff_EBP[2] - afStack_14c[0];
        fStack_64 = *unaff_EBP - fStack_154;
        afStack_60[(uint)bVar8 * -2] = *(float *)((int)&CStack_d8 + (uint)bVar8 * -8);
        afStack_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             *(float *)((int)&CStack_d8 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4);
        in_stack_fffffdd4 = (CCharacter *)0x457ee5;
        local_20 = unkafter_hostage_cpp_FUN_004549e0();
        if (((local_20 != 0) &&
            (in_stack_fffffdd4 = param_1, iVar4 = unkafter_demnfolk_cpp_FUN_00458140(), iVar4 != 0))
           && ((in_stack_fffffdd4 = this_ptr,
               iVar4 = core_actor_cpp_isOfClass_FUN_0040c790(&this_ptr->base,"CBodyPart"),
               iVar4 == 0 ||
               (((this_ptr->base).direction_hint & 3U) ==
                ((uint)param_1[1].model.bone_origins[0x12].y & 3))))) {
          afStack_f8[1] = (this_ptr->base).location.position.x - *local_18;
          afStack_f8[2] = (this_ptr->base).location.position.y - local_18[1];
          afStack_f8[3] = (this_ptr->base).location.position.z - local_18[2];
          afStack_60[2] = afStack_f8[1];
          afStack_60[(uint)bVar8 * -2 + 3] = afStack_f8[(uint)bVar8 * -2 + 2];
          afStack_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               afStack_f8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3];
          afStack_60[3] = afStack_60[3] * afStack_60[3] * afStack_60[3] * afStack_60[3];
          fStack_224 = SQRT(fStack_50 * fStack_50 +
                            afStack_60[2] * afStack_60[2] + afStack_60[3] * afStack_60[3]);
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
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,local_30 + -1);
    param_1[1].model.bone_origins[0x13].y = *(float *)(&stack0xfffffde4 + iVar4 * 4 + -0x14);
    fVar9 = *(float *)(&stack0xfffffdf8 + iVar4 * 4);
    fVar1 = param_1[1].model.bone_origins[0x12].y;
    param_1[1].model.bone_origins[0x13].x = -40.0;
    param_1[1].model.bone_origins[0x13].z = fVar9;
    param_1[1].model.bone_origins[0x12].y = (float)((int)fVar1 + 1);
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"%s is going to try to pick up %s\n",param_1,
               param_1[1].model.bone_origins[0x13].y);
    return 1;
  }
  iVar4 = (**(code **)(*(int *)((int)fVar9 + 0x154) + 0x94))(fVar9);
  if (iVar4 != 0) {
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"?%s can't pick up %s, sombody else beat me to it!\n" + 1,param_1,
               param_1[1].model.bone_origins[0x13].y);
    param_1[1].model.bone_origins[0x13].y = 0.0;
    param_1[1].model.bone_origins[0x13].x = 0.0;
    unkafter_demnfolk_cpp_FUN_00458fb0(param_1);
    return 0;
  }
  fVar9 = param_1[1].model.bone_origins[0x13].y;
  fVar1 = (pCVar5->position).x - *(float *)((int)fVar9 + 0x20);
  fVar9 = (param_1->base).location.position.z - *(float *)((int)fVar9 + 0x28);
  fStack_234 = (float)_DAT_005ba822 - SQRT(fVar9 * fVar9 + fVar1 * fVar1) * (float)_DAT_005ba81a;
  if (fStack_234 < 1.0) {
    fStack_234 = 1.0;
  }
  fVar9 = param_1[1].model.bone_origins[0x13].z;
  param_1[1].model.bone_origins[0x13].x =
       param_2 * fStack_234 + param_1[1].model.bone_origins[0x13].x;
  iStack_38 = unkafter_demnfolk_cpp_FUN_004580a0(param_1,fVar9);
  iVar4 = -1;
  if ((((-1 < iStack_38) && (param_1[1].model.bone_origins[0x13].x < 0.0)) &&
      (fVar9 = param_1[1].model.bone_origins[0x13].y,
      iVar3 = (**(code **)(*(int *)((int)fVar9 + 0x154) + 0x84))(fVar9,param_1), iVar3 == 3)) &&
     (iVar3 = unkafter_demnfolk_cpp_FUN_00458140(param_1,param_1[1].model.bone_origins[0x13].z),
     iVar3 != 0)) {
    fVar9 = param_1[1].model.bone_origins[0x13].z;
    if ((uint)fVar9 < 2) {
      if (fVar9 == 1.4013e-45) {
LAB_004579af:
        fVar9 = param_1[1].model.bone_origins[0x13].y;
        (**(code **)(*(int *)((int)fVar9 + 0x154) + 0x1c))(fVar9);
        puVar6 = auStack_198;
        puVar7 = auStack_1e0;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        afStack_48[0] = 0.5;
        core_bodypart_cpp_FUN_00416c50(auStack_1e0,auStack_1d4,afStack_60 + 6);
        fStack_150 = fStack_84;
        afStack_14c[(uint)bVar8 * -2] = afStack_80[(uint)bVar8 * -2];
        afStack_14c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_80[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        core_bodypart_cpp_FUN_00416bd0(&fStack_150);
        pfVar10 = &fStack_fc;
        afStack_60[0] = afStack_60[3];
        afStack_60[(uint)bVar8 * -2 + 1] = afStack_60[(uint)bVar8 * -2 + 4];
        afStack_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2] =
             afStack_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5];
        afStack_60[2] = fStack_1d8 + (float)_DAT_005ba82a;
        fStack_fc = afStack_60[0];
        afStack_f8[(uint)bVar8 * -2] = afStack_60[(uint)bVar8 * -2 + 1];
        afStack_f8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2];
        core_actor_cpp_FUN_00408b80(fVar9,pfVar10);
        CStack_9c.x = fStack_114;
        afStack_b0[(uint)bVar8 * -2 + 6] = afStack_110[(uint)bVar8 * -2];
        afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
             afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        if (&CStack_e4 != (CVector3f *)(afStack_b0 + 5)) {
          CStack_e4.x = CStack_9c.x;
          CStack_e4.y = CStack_9c.y;
          CStack_e4.z = CStack_9c.z;
        }
      }
      else {
LAB_00457d36:
        fVar9 = param_1[1].model.bone_origins[0x13].y;
        if (&CStack_e4 != (CVector3f *)((int)fVar9 + 0x20)) {
          CStack_e4.x = ((CVector3f *)((int)fVar9 + 0x20))->x;
          CStack_e4.y = *(float *)((int)fVar9 + 0x24);
          CStack_e4.z = *(float *)((int)fVar9 + 0x28);
        }
      }
    }
    else {
      if (2 < (uint)fVar9) {
        if (fVar9 != 4.2039e-45) goto LAB_00457d36;
        goto LAB_004579af;
      }
      fVar9 = param_1[1].model.bone_origins[0x13].y;
      (**(code **)(*(int *)((int)fVar9 + 0x154) + 0x1c))(fVar9);
      puVar6 = auStack_180;
      puVar7 = auStack_1b0;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      uStack_3c = 0x3f000000;
      core_bodypart_cpp_FUN_00416c50(auStack_1b0,auStack_1a4,&uStack_3c);
      uStack_b4 = uStack_cc;
      afStack_b0[(uint)bVar8 * -2] = *(float *)((int)&CStack_d8 + ((uint)bVar8 * -2 + 4) * 4);
      afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_d8 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 5) * 4);
      core_bodypart_cpp_FUN_00416bd0(&uStack_b4);
      pfVar10 = afStack_14c + 8;
      afStack_b0[2] = afStack_14c[2];
      afStack_b0[(uint)bVar8 * -2 + 3] = afStack_14c[(uint)bVar8 * -2 + 3];
      afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           afStack_14c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      fStack_a0 = fStack_1a8 + (float)_DAT_005ba82a;
      afStack_12c[0] = afStack_b0[2];
      afStack_14c[(uint)bVar8 * -2 + 9] = afStack_b0[(uint)bVar8 * -2 + 3];
      afStack_14c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
           afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      core_actor_cpp_FUN_00408b80(fVar9,pfVar10);
      CStack_d8.x = fStack_138;
      *(float *)((int)&CStack_d8 + ((uint)bVar8 * -2 + 1) * 4) = afStack_14c[(uint)bVar8 * -2 + 6];
      *(float *)((int)&CStack_d8 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 2) * 4) =
           afStack_14c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      if (&CStack_e4 != &CStack_d8) {
        CStack_e4.x = CStack_d8.x;
        CStack_e4.y = CStack_d8.y;
        CStack_e4.z = CStack_d8.z;
      }
    }
    iVar4 = iStack_38;
    CStack_c0.x = _DAT_02cfd900;
    *(uint *)((int)&CStack_c0 + (uint)bVar8 * -8 + 4) =
         *(uint *)(&DAT_02cfd904 + (uint)bVar8 * -8);
    *(uint *)((int)&CStack_c0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4 + 8) =
         *(uint *)(&DAT_02cfd908 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    if (iVar4 == 0) {
      CStack_120.y = (float)iVar4;
      CStack_120.z = (float)iVar4;
      CStack_120.x = -1.5;
      if (&CStack_c0 != (CVector3f *)(afStack_14c + 0xb)) {
        CStack_c0.x = -1.5;
        CStack_c0.y = 0.0;
        CStack_c0.z = 0.0;
      }
    }
    if (iStack_38 == 1) {
      CStack_90.y = 0.0;
      CStack_90.z = 0.0;
      CStack_90.x = 1.5;
      if (&CStack_c0 != (CVector3f *)(afStack_b0 + 8)) {
        CStack_c0.x = 1.5;
        CStack_c0.y = 0.0;
        CStack_c0.z = 0.0;
      }
    }
    iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                      (param_1,&CStack_e4,(CPathMap *)0x0,&CStack_c0,0.0,0.0);
  }
  if (iVar4 < 0) {
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"%s can't pick up %s, giving up\n",param_1,
               param_1[1].model.bone_origins[0x13].y);
    param_1[1].model.bone_origins[0x13].y = 0.0;
    param_1[1].model.bone_origins[0x13].x = 20.0;
    unkafter_demnfolk_cpp_FUN_00458fb0(param_1);
    return 0;
  }
  if (iVar4 < 1) {
    return 1;
  }
  engine_console_cpp_FUN_00441ff0
            (g_CConsolePtr,"%s beginning to pickup %s\n",param_1,
             param_1[1].model.bone_origins[0x13].y);
  fVar9 = param_1[1].model.bone_origins[0x13].z;
  if ((uint)fVar9 < 2) {
    if (fVar9 != 1.4013e-45) {
LAB_00457e1a:
      _DAT_01d71de0 = "..\\core\\demnfolk.cpp";
      _DAT_01d71de4 = 0x615;
      core_main_c_FUN_004e4330("Invalid demon townsfolk object shape!");
      return 1;
    }
  }
  else {
    if ((uint)fVar9 < 3) {
      iVar4 = 0x21;
      goto LAB_00457dbc;
    }
    if (fVar9 != 4.2039e-45) goto LAB_00457e1a;
  }
  iVar4 = 0x1f;
LAB_00457dbc:
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&(param_1->model).base,iVar4,1);
  return 1;
}
