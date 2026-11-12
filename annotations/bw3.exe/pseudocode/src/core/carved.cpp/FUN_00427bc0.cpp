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
  CCharacter *this_ptr;
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  int iVar4;
  CLocation *pCVar5;
  int unaff_ESI;
  float *pfVar6;
  uint *puVar7;
  float *pfVar8;
  uint *puVar9;
  byte bVar10;
  float afStackY_112c [951];
  float fVar11;
  float fStack_234;
  CCharacter *in_stack_fffffdd4;
  float fStack_224;
  uint auStack_1bc [2];
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  byte auStack_1a4 [12];
  uint auStack_198 [2];
  float fStack_190;
  byte auStack_18c [12];
  float afStack_180 [6];
  uint auStack_168 [9];
  float fStack_144;
  float afStack_140 [5];
  float fStack_12c;
  CVector3f CStack_120;
  float fStack_114;
  float afStack_110 [2];
  CVector3f CStack_108;
  float fStack_fc;
  float afStack_f8 [4];
  float fStack_e8;
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
  float afStack_6c [3];
  CVector3f CStack_60;
  uint uStack_54;
  float afStack_50 [6];
  int iStack_38;
  int local_30;
  CLocation *local_2c;
  byte *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float *local_18;
  float *pfStack_14;
  
  bVar10 = 0;
  if ((int)param_1[1].model.bone_origins[0x1a].x < 0) {
    return 0;
  }
  fVar11 = param_1[1].model.bone_origins[0x12].z - param_2;
  param_1[1].model.bone_origins[0x12].z = fVar11;
  if (0.0 < fVar11) {
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
  fVar11 = param_1[1].model.bone_origins[0x13].y;
  pCVar5 = &(param_1->base).location;
  if (fVar11 == 0.0) {
    local_28 = (byte *)auStack_1bc;
    local_30 = 0;
    local_24 = 0;
    local_1c = 0;
    local_2c = pCVar5;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->actor_count; local_20 = local_20 + 1) {
      this_ptr = *(CCharacter **)((int)g_CDemonSetPtr->actors + local_24);
      pCVar2 = (*((this_ptr->base).vtable._ub)->getCarrier)(&this_ptr->base);
      if ((pCVar2 == (CDemonActor *)0x0) &&
         (iVar4 = (*((this_ptr->base).vtable._ub)->canPickup)(&this_ptr->base,&param_1->base),
         iVar4 == 3)) {
        fStack_234 = 6.108125e-39;
        (*((this_ptr->base).vtable._ub)->getBoundingBox)
                  (&this_ptr->base,(CBoundingBox3D *)in_stack_fffffdd4);
        pfVar6 = pfStack_14;
        puVar7 = (uint *)&stack0xfffffe34;
        puVar9 = auStack_1bc;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
        }
        fStack_ac = *pfVar6 - fStack_1b4;
        afStack_a8[0] = pfVar6[1] - fStack_1b0;
        afStack_a8[1] = pfVar6[2] - fStack_1ac;
        afStack_a8[2] = *pfVar6 - fStack_1b4;
        afStack_a8[(uint)bVar10 * -2 + 3] = afStack_a8[(uint)bVar10 * -2];
        afStack_a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        in_stack_fffffdd4 = (CCharacter *)0x42835a;
        local_20 = core_carved_cpp_FUN_004257e0();
        if (((local_20 != 0) &&
            (in_stack_fffffdd4 = param_1, iVar4 = core_carved_cpp_FUN_004285c0(), iVar4 != 0)) &&
           ((in_stack_fffffdd4 = this_ptr,
            iVar4 = core_actor_cpp_isOfClass_FUN_0040c790(&this_ptr->base,"CBodyPart"),
            iVar4 == 0 ||
            (((this_ptr->base).direction_hint & 3U) ==
             ((uint)param_1[1].model.bone_origins[0x12].y & 3))))) {
          fStack_88 = (this_ptr->base).location.position.x - *local_18;
          fStack_84 = (this_ptr->base).location.position.y - local_18[1];
          fStack_80 = (this_ptr->base).location.position.z - local_18[2];
          afStack_140[1] = fStack_88;
          afStack_140[(uint)bVar10 * -2 + 2] = afStack_a8[(uint)bVar10 * -2 + 9];
          afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 3] =
               afStack_a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
          afStack_140[2] = afStack_140[2] * afStack_140[2] * afStack_140[2] * afStack_140[2];
          fStack_224 = SQRT(afStack_140[3] * afStack_140[3] +
                            afStack_140[1] * afStack_140[1] + afStack_140[2] * afStack_140[2]);
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
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,local_30 + -1);
    param_1[1].model.bone_origins[0x13].y = *(float *)(&stack0xfffffdf8 + iVar4 * 4);
    fVar11 = *(float *)(&stack0xfffffde4 + (iVar4 + -5) * 4);
    fVar1 = param_1[1].model.bone_origins[0x12].y;
    param_1[1].model.bone_origins[0x13].x = -40.0;
    param_1[1].model.bone_origins[0x13].z = fVar11;
    param_1[1].model.bone_origins[0x12].y = (float)((int)fVar1 + 1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s is going to try to pick up %s\n");
    return 1;
  }
  iVar4 = (**(code **)(*(int *)((int)fVar11 + 0x154) + 0x94))(fVar11);
  if (iVar4 != 0) {
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"?%s can't pick up %s, sombody else beat me to it!\n" + 1);
    param_1[1].model.bone_origins[0x13].y = 0.0;
    param_1[1].model.bone_origins[0x13].x = 0.0;
    core_carved_cpp_FUN_00429090(param_1);
    return 0;
  }
  fVar11 = param_1[1].model.bone_origins[0x13].y;
  fVar1 = (pCVar5->position).x - *(float *)((int)fVar11 + 0x20);
  fVar11 = (param_1->base).location.position.z - *(float *)((int)fVar11 + 0x28);
  fStack_234 = (float)_DAT_005b7dc7 - SQRT(fVar11 * fVar11 + fVar1 * fVar1) * (float)_DAT_005b7dbf;
  if (fStack_234 < 1.0) {
    fStack_234 = 1.0;
  }
  fVar11 = param_1[1].model.bone_origins[0x13].z;
  param_1[1].model.bone_origins[0x13].x =
       param_2 * fStack_234 + param_1[1].model.bone_origins[0x13].x;
  iStack_38 = core_carved_cpp_FUN_00428520(param_1,fVar11);
  iVar4 = -1;
  if ((((-1 < iStack_38) && (param_1[1].model.bone_origins[0x13].x < 0.0)) &&
      (fVar11 = param_1[1].model.bone_origins[0x13].y,
      iVar3 = (**(code **)(*(int *)((int)fVar11 + 0x154) + 0x84))(fVar11,param_1), iVar3 == 3)) &&
     (iVar3 = core_carved_cpp_FUN_004285c0(param_1,param_1[1].model.bone_origins[0x13].z),
     iVar3 != 0)) {
    fVar11 = param_1[1].model.bone_origins[0x13].z;
    if ((uint)fVar11 < 2) {
      if (fVar11 == 1.4013e-45) {
LAB_00427e2c:
        fVar11 = param_1[1].model.bone_origins[0x13].y;
        (**(code **)(*(int *)((int)fVar11 + 0x154) + 0x1c))(fVar11);
        pfVar6 = afStack_180;
        pfVar8 = &fStack_1b0;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar8 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar10 * -2 + 1;
          pfVar8 = pfVar8 + (uint)bVar10 * -2 + 1;
        }
        afStack_50[4] = 0.5;
        core_bodypart_cpp_FUN_00416c50(&fStack_1b0,auStack_1a4,afStack_50 + 4);
        afStack_a8[0] = fStack_84;
        afStack_a8[(uint)bVar10 * -2 + 1] = afStack_a8[(uint)bVar10 * -2 + 10];
        afStack_a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 2] =
             afStack_a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xb];
        core_bodypart_cpp_FUN_00416bd0(afStack_a8);
        pfVar6 = afStack_a8 + 0xf;
        afStack_f8[2] = (float)uStack_54;
        afStack_f8[(uint)bVar10 * -2 + 3] = afStack_50[(uint)bVar10 * -2];
        afStack_f8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_50[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        fStack_e8 = fStack_1a8 + (float)_DAT_005b7dcf;
        afStack_6c[0] = afStack_f8[2];
        afStack_a8[(uint)bVar10 * -2 + 0x10] = afStack_f8[(uint)bVar10 * -2 + 3];
        afStack_a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x11] =
             afStack_f8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        core_actor_cpp_FUN_00408b80(fVar11,pfVar6);
        CStack_78.x = fStack_144;
        afStack_a8[(uint)bVar10 * -2 + 0xd] = afStack_140[(uint)bVar10 * -2];
        afStack_a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xe] =
             afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        if (&CStack_60 != (CVector3f *)(afStack_a8 + 0xc)) {
          CStack_60.x = CStack_78.x;
          CStack_60.y = CStack_78.y;
          CStack_60.z = CStack_78.z;
        }
      }
      else {
LAB_004281bf:
        fVar11 = param_1[1].model.bone_origins[0x13].y;
        if (&CStack_60 != (CVector3f *)((int)fVar11 + 0x20)) {
          CStack_60.x = ((CVector3f *)((int)fVar11 + 0x20))->x;
          CStack_60.y = *(float *)((int)fVar11 + 0x24);
          CStack_60.z = *(float *)((int)fVar11 + 0x28);
        }
      }
    }
    else {
      if (2 < (uint)fVar11) {
        if (fVar11 != 4.2039e-45) goto LAB_004281bf;
        goto LAB_00427e2c;
      }
      fVar11 = param_1[1].model.bone_origins[0x13].y;
      (**(code **)(*(int *)((int)fVar11 + 0x154) + 0x1c))(fVar11);
      puVar7 = auStack_168;
      puVar9 = auStack_198;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
      }
      afStack_50[3] = 0.5;
      core_bodypart_cpp_FUN_00416c50(auStack_198,auStack_18c,afStack_50 + 3);
      afStack_90[0] = (float)uStack_cc;
      afStack_a8[(uint)bVar10 * -2 + 7] =
           *(float *)((int)&CStack_d8 + ((uint)bVar10 * -2 + 3) * 4 + 4);
      afStack_a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 8] =
           *(float *)((int)&CStack_d8 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 4) * 4 + 4);
      core_bodypart_cpp_FUN_00416bd0(afStack_a8 + 6);
      pfVar6 = afStack_140 + 2;
      fStack_114 = fStack_12c;
      afStack_110[(uint)bVar10 * -2] = afStack_140[(uint)bVar10 * -2 + 6];
      afStack_110[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      afStack_110[1] = fStack_190 + (float)_DAT_005b7dcf;
      afStack_140[2] = fStack_114;
      afStack_140[(uint)bVar10 * -2 + 3] = afStack_110[(uint)bVar10 * -2];
      afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_110[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_actor_cpp_FUN_00408b80(fVar11,pfVar6);
      CStack_d8.x = fStack_fc;
      *(float *)((int)&CStack_d8 + (uint)bVar10 * -8 + 4) = afStack_f8[(uint)bVar10 * -2];
      *(float *)((int)&CStack_d8 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4 + 4) =
           afStack_f8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      if (&CStack_60 != (CVector3f *)(afStack_f8 + 8)) {
        CStack_60.x = CStack_d8.x;
        CStack_60.y = CStack_d8.y;
        CStack_60.z = CStack_d8.z;
      }
    }
    iVar4 = iStack_38;
    CStack_120.x = _DAT_02cfd900;
    *(uint *)((int)&CStack_120 + (uint)bVar10 * -8 + 4) =
         *(uint *)(&DAT_02cfd904 + (uint)bVar10 * -8);
    *(uint *)((int)&CStack_120 + ((uint)bVar10 * -2 + (uint)bVar10 * -2) * 4 + 8) =
         *(uint *)(&DAT_02cfd908 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    if (iVar4 == 0) {
      CStack_108.y = (float)iVar4;
      CStack_108.z = (float)iVar4;
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
      if (&CStack_120 != (CVector3f *)(afStack_f8 + 5)) {
        CStack_120.x = 1.5;
        CStack_120.y = 0.0;
        CStack_120.z = 0.0;
      }
    }
    iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                      (param_1,&CStack_60,(CPathMap *)0x0,&CStack_120,0.0,0.0);
  }
  if (iVar4 < 0) {
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s can't pick up %s, giving up\n");
    param_1[1].model.bone_origins[0x13].y = 0.0;
    param_1[1].model.bone_origins[0x13].x = 20.0;
    core_carved_cpp_FUN_00429090(param_1);
    return 0;
  }
  if (iVar4 < 1) {
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s beginning to pickup %s\n");
  fVar11 = param_1[1].model.bone_origins[0x13].z;
  if ((uint)fVar11 < 2) {
    if (fVar11 != 1.4013e-45) {
LAB_0042829b:
      _DAT_01d71de0 = "..\\core\\carved.cpp";
      _DAT_01d71de4 = 0x4df;
      core_main_c_FUN_004e4330("Invalid demon townsfolk object shape!");
      return 1;
    }
  }
  else {
    if ((uint)fVar11 < 3) {
      return 1;
    }
    if (fVar11 != 4.2039e-45) goto LAB_0042829b;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&(param_1->model).base,0x19,1);
  return 1;
}
