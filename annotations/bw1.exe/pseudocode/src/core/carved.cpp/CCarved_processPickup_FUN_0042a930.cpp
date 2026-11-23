// Name: core_carved.cpp_CCarved_processPickup_FUN_0042a930
// Address: 0042a930
// Address Range: [[0042a930, 0042b284]]
// Convention: __cdecl
// Signature: int __cdecl core_carved_cpp_CCarved_processPickup_FUN_0042a930(CCarved *this_ptr,float delta_time)

#include "nocturne.h"

int __cdecl core_carved_cpp_CCarved_processPickup_FUN_0042a930(CCarved *this_ptr,float delta_time)

{
  CCarved *this_ptr_00;
  uint uVar1;
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
  float afStackY_1124 [951];
  float fVar12;
  CCarved *in_stack_fffffdd4;
  CLocation **scalar;
  float *pfVar13;
  CVector3f *pCVar14;
  float fStack_224;
  int aiStack_21c [5];
  uint auStack_208 [5];
  uint auStack_1f4 [10];
  uint auStack_1cc [4];
  uint auStack_1bc [2];
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  uint auStack_1a4 [2];
  CVector3f CStack_19c;
  CVector3f CStack_190;
  CVector3f CStack_184;
  CVector3f CStack_178;
  uint auStack_16c [6];
  float afStack_154 [6];
  float fStack_13c;
  float afStack_138 [2];
  CVector3f CStack_130;
  CVector3f CStack_124;
  CVector3f CStack_118;
  CVector3f CStack_10c;
  float fStack_100;
  float afStack_fc [2];
  CVector3f CStack_f4;
  CVector3f CStack_e8;
  float fStack_dc;
  float afStack_d8 [2];
  CVector3f CStack_d0;
  CVector3f CStack_c4;
  CVector3f CStack_b8;
  float fStack_ac;
  float afStack_a8 [2];
  CVector3f CStack_a0;
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [2];
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  int iStack_34;
  float local_30;
  CLocation *local_2c;
  uint *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float *local_18;
  float *pfStack_14;
  
  bVar11 = 0;
  if (this_ptr->part_indices[4] < 0) {
    return 0;
  }
  fVar12 = this_ptr->pickup_scan_timer - delta_time;
  this_ptr->pickup_scan_timer = fVar12;
  if (0.0 < fVar12) {
    this_ptr->pickup_seed = this_ptr->pickup_seed + 1;
    local_18 = (float *)core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(5.0,10.0);
    this_ptr->pickup_scan_timer = (float)local_18;
  }
  if ((this_ptr->base).base.carry_hands[0].carry_actor != (CDemonActor *)0x0) {
    return 0;
  }
  if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
    return 0;
  }
  if (0.0 < this_ptr->pickup_approach_progress) {
    fVar12 = this_ptr->pickup_approach_progress - delta_time;
    this_ptr->pickup_approach_progress = fVar12;
    if (0.0 <= fVar12) {
      return 0;
    }
    this_ptr->pickup_approach_progress = 0.0;
    return 0;
  }
  pCVar3 = this_ptr->pickup_target;
  pCVar6 = &(this_ptr->base).base.base.location;
  if (pCVar3 == (CDemonActor *)0x0) {
    local_28 = auStack_1bc;
    local_30 = 0.0;
    local_24 = 0;
    local_1c = 0;
    local_2c = pCVar6;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->actor_count; local_20 = local_20 + 1) {
      this_ptr_00 = *(CCarved **)((int)g_CDemonSetPtr->actors + local_24);
      pCVar3 = (*((this_ptr_00->base).base.base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr_00)
      ;
      if ((pCVar3 == (CDemonActor *)0x0) &&
         (iVar5 = (*((this_ptr_00->base).base.base.vtable._ub)->canPickup)
                            ((CDemonActor *)this_ptr_00,(CDemonActor *)this_ptr), iVar5 == 3)) {
        (*((this_ptr_00->base).base.base.vtable._ub)->getBoundingBox)
                  ((CDemonActor *)this_ptr_00,(CBoundingBox3D *)in_stack_fffffdd4);
        pfVar13 = pfStack_14;
        puVar7 = auStack_1cc;
        puVar9 = auStack_1bc;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
        }
        pCVar14 = &CStack_a0;
        fStack_ac = *pfVar13 - fStack_1b4;
        afStack_a8[0] = pfVar13[1] - fStack_1b0;
        afStack_a8[1] = pfVar13[2] - fStack_1ac;
        CStack_a0.x = *pfVar13 - fStack_1b4;
        *(float *)((int)&CStack_a0 + (uint)bVar11 * -8 + 4) = afStack_a8[(uint)bVar11 * -2];
        *(float *)((int)&CStack_a0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             afStack_a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        in_stack_fffffdd4 = (CCarved *)0x42b0ca;
        local_20 = core_carved_cpp_classifyObjectShape_FUN_00428550(pCVar14);
        if (((local_20 != 0) &&
            (in_stack_fffffdd4 = this_ptr,
            iVar5 = core_carved_cpp_CCarved_canPickupWithHand_FUN_0042b330(this_ptr,local_20),
            iVar5 != 0)) &&
           ((in_stack_fffffdd4 = this_ptr_00,
            iVar5 = core_actor_cpp_isOfClass_FUN_0040c550
                              ((CDemonActor *)this_ptr_00,"CBodyPart"), iVar5 == 0 ||
            (((this_ptr_00->base).base.base.direction_hint & 3U) == (this_ptr->pickup_seed & 3U)))))
        {
          fStack_88 = (this_ptr_00->base).base.base.location.position.x - *local_18;
          afStack_84[0] = (this_ptr_00->base).base.base.location.position.y - local_18[1];
          afStack_84[1] = (this_ptr_00->base).base.base.location.position.z - local_18[2];
          fStack_13c = fStack_88;
          afStack_138[(uint)bVar11 * -2] = afStack_84[(uint)bVar11 * -2];
          afStack_138[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          afStack_138[0] = afStack_138[0] * afStack_138[0] * afStack_138[0] * afStack_138[0];
          fStack_224 = SQRT(afStack_138[1] * afStack_138[1] +
                            fStack_13c * fStack_13c + afStack_138[0] * afStack_138[0]);
          if (((float)5 <= fStack_224) &&
             (fStack_224 <= this_ptr->pickup_range_factor * 15.0f)) {
            *(CCarved **)((int)auStack_1f4 + unaff_ESI) = this_ptr_00;
            *(int *)((int)aiStack_21c + unaff_ESI) = local_20;
            unaff_ESI = unaff_ESI + 4;
            local_1c = local_1c + 1;
            if (0x27 < unaff_ESI) break;
          }
        }
      }
      local_24 = local_24 + 4;
    }
    if ((int)local_30 < 1) {
      return 0;
    }
    iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,(int)local_30 + -1);
    this_ptr->pickup_target = (CDemonActor *)auStack_208[iVar5];
    iVar5 = aiStack_21c[iVar5 + -5];
    this_ptr->pickup_approach_progress = -40.0;
    this_ptr->object_shape_class = iVar5;
    this_ptr->pickup_seed = this_ptr->pickup_seed + 1;
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s is going to try to pick up %s\n");
    return 1;
  }
  pCVar3 = (*((pCVar3->vtable)._ub)->getCarrier)(pCVar3);
  if (pCVar3 != (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s can't pick up %s, sombody else beat me to it!\n");
    this_ptr->pickup_target = (CDemonActor *)0x0;
    this_ptr->pickup_approach_progress = 0.0;
    core_carved_cpp_CCarved_resetChaseState_FUN_0042be20(this_ptr);
    return 0;
  }
  fVar12 = (pCVar6->position).x - (this_ptr->pickup_target->location).position.x;
  fVar2 = (this_ptr->base).base.base.location.position.z -
          (this_ptr->pickup_target->location).position.z;
  fVar12 = (float)5 -
           SQRT(fVar2 * fVar2 + fVar12 * fVar12) * (float)0.33333333333333298;
  if (fVar12 < 1.0) {
    fVar12 = 1.0;
  }
  this_ptr->pickup_approach_progress = delta_time * fVar12 + this_ptr->pickup_approach_progress;
  iStack_34 = core_carved_cpp_CCarved_getPickupHandIndex_FUN_0042b290
                        (this_ptr,this_ptr->object_shape_class);
  iVar5 = -1;
  if ((((-1 < iStack_34) && (this_ptr->pickup_approach_progress < 0.0)) &&
      (iVar4 = (*((this_ptr->pickup_target->vtable)._ub)->canPickup)
                         (this_ptr->pickup_target,(CDemonActor *)this_ptr), iVar4 == 3)) &&
     (iVar4 = core_carved_cpp_CCarved_canPickupWithHand_FUN_0042b330
                        (this_ptr,this_ptr->object_shape_class), iVar4 != 0)) {
    uVar1 = this_ptr->object_shape_class;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_0042ab9c:
        pCVar3 = this_ptr->pickup_target;
        (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,(CBoundingBox3D *)in_stack_fffffdd4);
        scalar = &local_2c;
        puVar7 = auStack_16c;
        puVar9 = auStack_1a4;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
        }
        local_2c = (CLocation *)0x3f000000;
        core_bodypart_cpp_addVector_FUN_0041b020(&CStack_19c,&CStack_190,&CStack_70);
        CStack_94.x = CStack_70.x;
        *(uint *)((int)&CStack_94 + (uint)bVar11 * -8 + 4) =
             *(uint *)((int)&CStack_70 + (uint)bVar11 * -8 + 4);
        *(uint *)((int)&CStack_94 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             *(uint *)((int)&CStack_70 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        core_bodypart_cpp_scaleVector_FUN_0041afa0(&CStack_94,(float *)scalar,&CStack_40);
        pCVar14 = &CStack_58;
        fStack_dc = CStack_40.x;
        afStack_d8[(uint)bVar11 * -2] = *(float *)((int)&CStack_40 + (uint)bVar11 * -8 + 4);
        afStack_d8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             *(float *)((int)&CStack_40 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        afStack_d8[1] = CStack_19c.z + (float)0.40000000000000002;
        CStack_58.x = fStack_dc;
        *(float *)((int)&CStack_58 + (uint)bVar11 * -8 + 4) = afStack_d8[(uint)bVar11 * -2];
        *(float *)((int)&CStack_58 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
             afStack_d8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(pCVar3,pCVar14,&CStack_130);
        CStack_64.x = CStack_130.x;
        *(uint *)((int)&CStack_64 + (uint)bVar11 * -8 + 4) =
             *(uint *)((int)&CStack_130 + (uint)bVar11 * -8 + 4);
        *(uint *)((int)&CStack_64 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 1) * 4 + 4) =
             *(uint *)((int)&CStack_130 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        if (&CStack_4c != &CStack_64) {
          CStack_4c.x = CStack_64.x;
          CStack_4c.y = CStack_64.y;
          CStack_4c.z = CStack_64.z;
        }
      }
      else {
LAB_0042af2f:
        pCVar3 = this_ptr->pickup_target;
        if ((CLocation *)&CStack_58.y != &pCVar3->location) {
          CStack_58.y = (pCVar3->location).position.x;
          CStack_58.z = (pCVar3->location).position.y;
          CStack_4c.z = (pCVar3->location).position.z;
        }
      }
    }
    else {
      if (2 < uVar1) {
        if (uVar1 != 3) goto LAB_0042af2f;
        goto LAB_0042ab9c;
      }
      pCVar3 = this_ptr->pickup_target;
      (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,(CBoundingBox3D *)in_stack_fffffdd4);
      pfVar13 = &local_30;
      pfVar8 = afStack_154;
      pfVar10 = &CStack_190.y;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar10 = *pfVar8;
        pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
        pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
      }
      local_30 = 0.5;
      core_bodypart_cpp_addVector_FUN_0041b020(&CStack_184,&CStack_178,&CStack_b8);
      CStack_7c.x = CStack_b8.x;
      *(uint *)((int)&CStack_7c + (uint)bVar11 * -8 + 4) =
           *(uint *)((int)&CStack_b8 + (uint)bVar11 * -8 + 4);
      *(uint *)((int)&CStack_7c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           *(uint *)((int)&CStack_b8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      core_bodypart_cpp_scaleVector_FUN_0041afa0(&CStack_7c,pfVar13,&CStack_118);
      pCVar14 = &CStack_124;
      fStack_100 = CStack_118.x;
      afStack_fc[(uint)bVar11 * -2] = *(float *)((int)&CStack_118 + (uint)bVar11 * -8 + 4);
      afStack_fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           *(float *)((int)&CStack_118 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      afStack_fc[1] = CStack_184.z + (float)0.40000000000000002;
      CStack_124.x = fStack_100;
      *(float *)((int)&CStack_124 + (uint)bVar11 * -8 + 4) = afStack_fc[(uint)bVar11 * -2];
      *(float *)((int)&CStack_124 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           afStack_fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(pCVar3,pCVar14,&CStack_e8);
      CStack_c4.x = CStack_e8.x;
      *(uint *)((int)&CStack_c4 + (uint)bVar11 * -8 + 4) =
           *(uint *)((int)&CStack_e8 + (uint)bVar11 * -8 + 4);
      *(uint *)((int)&CStack_c4 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 1) * 4 + 4) =
           *(uint *)((int)&CStack_e8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      if (&CStack_4c != (CVector3f *)(afStack_d8 + 5)) {
        CStack_4c.x = CStack_c4.x;
        CStack_4c.y = CStack_c4.y;
        CStack_4c.z = CStack_c4.z;
      }
    }
    iVar5 = local_24;
    CStack_10c.x = g_ZeroVector.x;
    *(uint *)((int)&CStack_10c + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&g_ZeroVector + (uint)bVar11 * -8 + 4);
    *(uint *)((int)&CStack_10c + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
         *(uint *)((uint)bVar11 * -8 + 0x2c8af30 + (uint)bVar11 * -8);
    if (iVar5 == 0) {
      CStack_f4.y = (float)iVar5;
      CStack_f4.z = (float)iVar5;
      CStack_f4.x = -1.5;
      if (&CStack_10c != (CVector3f *)(afStack_fc + 2)) {
        CStack_10c.x = -1.5;
        CStack_10c.y = 0.0;
        CStack_10c.z = 0.0;
      }
    }
    if (local_24 == 1) {
      CStack_d0.y = 0.0;
      CStack_d0.z = 0.0;
      CStack_d0.x = 1.5;
      if (&CStack_10c != (CVector3f *)(afStack_d8 + 2)) {
        CStack_10c.x = 1.5;
        CStack_10c.y = 0.0;
        CStack_10c.z = 0.0;
      }
    }
    iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                      ((CCharacter *)this_ptr,&CStack_4c,(CPathMap *)0x0,&CStack_10c,0.0,0.0);
  }
  if (iVar5 < 0) {
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s can't pick up %s, giving up\n");
    this_ptr->pickup_target = (CDemonActor *)0x0;
    this_ptr->pickup_approach_progress = 20.0;
    core_carved_cpp_CCarved_resetChaseState_FUN_0042be20(this_ptr);
    return 0;
  }
  if (iVar5 < 1) {
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"%s beginning to pickup %s\n");
  uVar1 = this_ptr->object_shape_class;
  if (uVar1 < 2) {
    if (uVar1 != 1) {
LAB_0042b00b:
      g_CurrentFilename = "..\\core\\carved.cpp";
      g_CurrentLineNumber = 1239;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Invalid demon townsfolk object shape!");
      return 1;
    }
  }
  else {
    if (uVar1 < 3) {
      return 1;
    }
    if (uVar1 != 3) goto LAB_0042b00b;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            (&(this_ptr->base).base.model.base,0x19,1);
  return 1;
}
