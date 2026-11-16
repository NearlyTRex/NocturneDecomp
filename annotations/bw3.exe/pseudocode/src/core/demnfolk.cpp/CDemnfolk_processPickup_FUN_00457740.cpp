// Name: core_demnfolk.cpp_CDemnfolk_processPickup_FUN_00457740
// Address: 00457740
// Address Range: [[00457740, 0045809f]]
// Convention: __cdecl
// Signature: int __cdecl core_demnfolk_cpp_CDemnfolk_processPickup_FUN_00457740(CDemnfolk *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_demnfolk_cpp_CDemnfolk_processPickup_FUN_00457740(CDemnfolk *this_ptr,float delta_time)

{
  CDemnfolk *this_ptr_00;
  uint uVar1;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  CLocation *pCVar6;
  float *unaff_EBP;
  int unaff_ESI;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float afStackY_1124 [951];
  float fVar10;
  CDemnfolk *in_stack_fffffdd4;
  float *pfVar11;
  CVector3f *pCVar12;
  float fStack_224;
  int aiStack_208 [5];
  int aiStack_1f4 [8];
  uint auStack_1d4 [2];
  CVector3f CStack_1cc;
  CVector3f CStack_1c0;
  uint auStack_1b4 [4];
  uint auStack_1a4 [2];
  CVector3f CStack_19c;
  CVector3f CStack_190;
  uint auStack_184 [6];
  uint auStack_16c [4];
  uint auStack_15c [2];
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  CVector3f CStack_13c;
  CVector3f CStack_130;
  CVector3f CStack_124;
  CVector3f CStack_118;
  CVector3f CStack_10c;
  CVector3f CStack_100;
  float fStack_f4;
  float afStack_f0 [2];
  CVector3f CStack_e8;
  float fStack_dc;
  float afStack_d8 [2];
  CVector3f CStack_d0;
  CVector3f CStack_c4;
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  float fStack_94;
  float afStack_90 [2];
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  CVector3f CStack_40;
  float fStack_34;
  int local_30;
  CLocation *local_2c;
  float local_28;
  uint *local_24;
  int local_20;
  int local_1c;
  float *local_18;
  
  bVar9 = 0;
  if (this_ptr->part_indices[4] < 0) {
    return 0;
  }
  fVar10 = this_ptr->pickup_scan_timer - delta_time;
  this_ptr->pickup_scan_timer = fVar10;
  if (0.0 < fVar10) {
    this_ptr->pickup_seed = this_ptr->pickup_seed + 1;
    local_18 = (float *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(5.0,10.0);
    this_ptr->pickup_scan_timer = (float)local_18;
  }
  if ((this_ptr->base).base.carry_hands[0].carry_actor != (CDemonActor *)0x0) {
    return 0;
  }
  if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
    return 0;
  }
  if (0.0 < this_ptr->pickup_approach_progress) {
    fVar10 = this_ptr->pickup_approach_progress - delta_time;
    this_ptr->pickup_approach_progress = fVar10;
    if (0.0 <= fVar10) {
      return 0;
    }
    this_ptr->pickup_approach_progress = 0.0;
    return 0;
  }
  pCVar3 = this_ptr->pickup_target;
  pCVar6 = &(this_ptr->base).base.base.location;
  if (pCVar3 == (CDemonActor *)0x0) {
    local_24 = auStack_15c;
    local_30 = 0;
    local_28 = 0.0;
    local_1c = 0;
    local_2c = pCVar6;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->actor_count; local_20 = local_20 + 1) {
      this_ptr_00 = *(CDemnfolk **)((int)g_CDemonSetPtr->actors + (int)local_28);
      pCVar3 = (*((this_ptr_00->base).base.base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr_00)
      ;
      if ((pCVar3 == (CDemonActor *)0x0) &&
         (iVar5 = (*((this_ptr_00->base).base.base.vtable._ub)->canPickup)
                            ((CDemonActor *)this_ptr_00,(CDemonActor *)this_ptr), iVar5 == 3)) {
        (*((this_ptr_00->base).base.base.vtable._ub)->getBoundingBox)
                  ((CDemonActor *)this_ptr_00,(CBoundingBox3D *)in_stack_fffffdd4);
        puVar7 = auStack_1b4;
        puVar8 = auStack_15c;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        }
        pCVar12 = &CStack_64;
        fStack_dc = *unaff_EBP - fStack_154;
        afStack_d8[0] = unaff_EBP[1] - fStack_150;
        afStack_d8[1] = unaff_EBP[2] - fStack_14c;
        CStack_64.x = *unaff_EBP - fStack_154;
        *(float *)((int)&CStack_64 + (uint)bVar9 * -8 + 4) = afStack_d8[(uint)bVar9 * -2];
        *(float *)((int)&CStack_64 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        in_stack_fffffdd4 = (CDemnfolk *)0x457ee5;
        local_20 = core_demnfolk_cpp_classifyObjectShape_FUN_004549e0(pCVar12);
        if (((local_20 != 0) &&
            (in_stack_fffffdd4 = this_ptr,
            iVar5 = core_demnfolk_cpp_CDemnfolk_canPickupWithHand_FUN_00458140(this_ptr,local_20),
            iVar5 != 0)) &&
           ((in_stack_fffffdd4 = this_ptr_00,
            iVar5 = core_actor_cpp_isOfClass_FUN_0040c790
                              ((CDemonActor *)this_ptr_00,"CBodyPart"), iVar5 == 0 ||
            (((this_ptr_00->base).base.base.direction_hint & 3U) == (this_ptr->pickup_seed & 3U)))))
        {
          fStack_f4 = (this_ptr_00->base).base.base.location.position.x - *local_18;
          afStack_f0[0] = (this_ptr_00->base).base.base.location.position.y - local_18[1];
          afStack_f0[1] = (this_ptr_00->base).base.base.location.position.z - local_18[2];
          fStack_58 = fStack_f4;
          afStack_54[(uint)bVar9 * -2] = afStack_f0[(uint)bVar9 * -2];
          afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               afStack_f0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          afStack_54[0] = afStack_54[0] * afStack_54[0] * afStack_54[0] * afStack_54[0];
          fStack_224 = SQRT(afStack_54[1] * afStack_54[1] +
                            fStack_58 * fStack_58 + afStack_54[0] * afStack_54[0]);
          if (((float)_DAT_005ba822 <= fStack_224) &&
             (fStack_224 <= this_ptr->pickup_range_factor * _DAT_005ba832)) {
            *(CDemnfolk **)(&stack0xfffffde4 + unaff_ESI) = this_ptr_00;
            *(int *)((int)aiStack_1f4 + unaff_ESI) = local_20;
            unaff_ESI = unaff_ESI + 4;
            local_1c = local_1c + 1;
            if (0x27 < unaff_ESI) break;
          }
        }
      }
      local_28 = (float)((int)local_28 + 4);
    }
    if (local_30 < 1) {
      return 0;
    }
    iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,local_30 + -1);
    this_ptr->pickup_target = *(CDemonActor **)(&stack0xfffffde4 + iVar5 * 4 + -0x14);
    iVar5 = aiStack_208[iVar5];
    this_ptr->pickup_approach_progress = -40.0;
    this_ptr->object_shape_class = iVar5;
    this_ptr->pickup_seed = this_ptr->pickup_seed + 1;
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s is going to try to pick up %s\n");
    return 1;
  }
  pCVar3 = (*((pCVar3->vtable)._ub)->getCarrier)(pCVar3);
  if (pCVar3 != (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"?%s can't pick up %s, sombody else beat me to it!\n" + 1);
    this_ptr->pickup_target = (CDemonActor *)0x0;
    this_ptr->pickup_approach_progress = 0.0;
    core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_00458fb0(this_ptr);
    return 0;
  }
  fVar10 = (pCVar6->position).x - (this_ptr->pickup_target->location).position.x;
  fVar2 = (this_ptr->base).base.base.location.position.z -
          (this_ptr->pickup_target->location).position.z;
  fVar10 = (float)_DAT_005ba822 - SQRT(fVar2 * fVar2 + fVar10 * fVar10) * (float)_DAT_005ba81a;
  if (fVar10 < 1.0) {
    fVar10 = 1.0;
  }
  this_ptr->pickup_approach_progress = delta_time * fVar10 + this_ptr->pickup_approach_progress;
  fStack_34 = (float)core_demnfolk_cpp_CDemnfolk_getPickupHandIndex_FUN_004580a0
                               (this_ptr,this_ptr->object_shape_class);
  iVar5 = -1;
  if ((((-1 < (int)fStack_34) && (this_ptr->pickup_approach_progress < 0.0)) &&
      (iVar4 = (*((this_ptr->pickup_target->vtable)._ub)->canPickup)
                         (this_ptr->pickup_target,(CDemonActor *)this_ptr), iVar4 == 3)) &&
     (iVar4 = core_demnfolk_cpp_CDemnfolk_canPickupWithHand_FUN_00458140
                        (this_ptr,this_ptr->object_shape_class), iVar4 != 0)) {
    uVar1 = this_ptr->object_shape_class;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_004579af:
        pCVar3 = this_ptr->pickup_target;
        (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,(CBoundingBox3D *)in_stack_fffffdd4);
        pfVar11 = &fStack_34;
        puVar7 = auStack_184;
        puVar8 = auStack_1d4;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        }
        fStack_34 = 0.5;
        core_bodypart_cpp_addVector_FUN_00416c50(&CStack_1cc,&CStack_1c0,&CStack_70);
        CStack_13c.x = CStack_70.x;
        *(uint *)((int)&CStack_13c + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_70 + (uint)bVar9 * -8 + 4);
        *(uint *)((int)&CStack_13c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)((int)&CStack_70 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        core_bodypart_cpp_scaleVector_FUN_00416bd0(&CStack_13c,pfVar11,&CStack_40);
        pCVar12 = &CStack_e8;
        afStack_54[2] = CStack_40.x;
        afStack_54[(uint)bVar9 * -2 + 3] = *(float *)((int)&CStack_40 + (uint)bVar9 * -8 + 4);
        afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             *(float *)((int)&CStack_40 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        fStack_44 = CStack_1cc.z + (float)_DAT_005ba82a;
        CStack_e8.x = afStack_54[2];
        *(float *)((int)&CStack_e8 + (uint)bVar9 * -8 + 4) = afStack_54[(uint)bVar9 * -2 + 3];
        *(float *)((int)&CStack_e8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(pCVar3,pCVar12,&CStack_100);
        CStack_88.x = CStack_100.x;
        afStack_90[(uint)bVar9 * -2 + 3] = *(float *)((int)&CStack_100 + (uint)bVar9 * -8 + 4);
        afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             *(float *)((int)&CStack_100 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        if (&CStack_d0 != (CVector3f *)(afStack_90 + 2)) {
          CStack_d0.x = CStack_88.x;
          CStack_d0.y = CStack_88.y;
          CStack_d0.z = CStack_88.z;
        }
      }
      else {
LAB_00457d36:
        pCVar3 = this_ptr->pickup_target;
        if ((CLocation *)afStack_d8 != &pCVar3->location) {
          afStack_d8[0] = (pCVar3->location).position.x;
          afStack_d8[1] = (pCVar3->location).position.y;
          CStack_d0.z = (pCVar3->location).position.z;
        }
      }
    }
    else {
      if (2 < uVar1) {
        if (uVar1 != 3) goto LAB_00457d36;
        goto LAB_004579af;
      }
      pCVar3 = this_ptr->pickup_target;
      (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,(CBoundingBox3D *)in_stack_fffffdd4);
      pfVar11 = &local_28;
      puVar7 = auStack_16c;
      puVar8 = auStack_1a4;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      local_28 = 0.5;
      core_bodypart_cpp_addVector_FUN_00416c50(&CStack_19c,&CStack_190,&CStack_b8);
      CStack_a0.x = CStack_b8.x;
      *(uint *)((int)&CStack_a0 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&CStack_b8 + (uint)bVar9 * -8 + 4);
      *(uint *)((int)&CStack_a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&CStack_b8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      core_bodypart_cpp_scaleVector_FUN_00416bd0(&CStack_a0,pfVar11,&CStack_130);
      pCVar12 = &CStack_118;
      fStack_94 = CStack_130.x;
      afStack_90[(uint)bVar9 * -2] = *(float *)((int)&CStack_130 + (uint)bVar9 * -8 + 4);
      afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           *(float *)((int)&CStack_130 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      afStack_90[1] = CStack_19c.z + (float)_DAT_005ba82a;
      CStack_118.x = fStack_94;
      *(float *)((int)&CStack_118 + (uint)bVar9 * -8 + 4) = afStack_90[(uint)bVar9 * -2];
      *(float *)((int)&CStack_118 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(pCVar3,pCVar12,&CStack_124);
      CStack_c4.x = CStack_124.x;
      *(uint *)((int)&CStack_c4 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&CStack_124 + (uint)bVar9 * -8 + 4);
      *(uint *)((int)&CStack_c4 + ((uint)bVar9 * -2 + (uint)bVar9 * -2 + 1) * 4 + 4) =
           *(uint *)((int)&CStack_124 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      if (&CStack_d0 != &CStack_c4) {
        CStack_d0.x = CStack_c4.x;
        CStack_d0.y = CStack_c4.y;
        CStack_d0.z = CStack_c4.z;
      }
    }
    puVar7 = local_24;
    CStack_ac.x = _DAT_02cfd900;
    *(uint *)((int)&CStack_ac + (uint)bVar9 * -8 + 4) =
         *(uint *)(&DAT_02cfd904 + (uint)bVar9 * -8);
    *(uint *)((int)&CStack_ac + ((uint)bVar9 * -2 + (uint)bVar9 * -2) * 4 + 8) =
         *(uint *)(&DAT_02cfd908 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    if (puVar7 == (uint *)0x0) {
      CStack_10c.y = (float)puVar7;
      CStack_10c.z = (float)puVar7;
      CStack_10c.x = -1.5;
      if (&CStack_ac != &CStack_10c) {
        CStack_ac.x = -1.5;
        CStack_ac.y = 0.0;
        CStack_ac.z = 0.0;
      }
    }
    if (local_24 == (uint *)0x1) {
      CStack_7c.y = 0.0;
      CStack_7c.z = 0.0;
      CStack_7c.x = 1.5;
      if (&CStack_ac != (CVector3f *)(afStack_90 + 5)) {
        CStack_ac.x = 1.5;
        CStack_ac.y = 0.0;
        CStack_ac.z = 0.0;
      }
    }
    iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                      ((CCharacter *)this_ptr,&CStack_d0,(CPathMap *)0x0,&CStack_ac,0.0,0.0);
  }
  if (iVar5 < 0) {
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s can't pick up %s, giving up\n");
    this_ptr->pickup_target = (CDemonActor *)0x0;
    this_ptr->pickup_approach_progress = 20.0;
    core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_00458fb0(this_ptr);
    return 0;
  }
  if (iVar5 < 1) {
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s beginning to pickup %s\n");
  uVar1 = this_ptr->object_shape_class;
  if (uVar1 < 2) {
    if (uVar1 != 1) {
LAB_00457e1a:
      _DAT_01d71de0 = "..\\core\\demnfolk.cpp";
      _DAT_01d71de4 = 0x615;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Invalid demon townsfolk object shape!");
      return 1;
    }
  }
  else {
    if (uVar1 < 3) {
      iVar5 = 0x21;
      goto LAB_00457dbc;
    }
    if (uVar1 != 3) goto LAB_00457e1a;
  }
  iVar5 = 0x1f;
LAB_00457dbc:
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            (&(this_ptr->base).base.model.base,iVar5,1);
  return 1;
}
