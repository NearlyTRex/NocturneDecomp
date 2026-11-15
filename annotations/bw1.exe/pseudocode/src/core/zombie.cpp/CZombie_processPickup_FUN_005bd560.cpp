// Name: core_zombie.cpp_CZombie_processPickup_FUN_005bd560
// Address: 005bd560
// Address Range: [[005bd560, 005bdebf]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_processPickup_FUN_005bd560(CZombie *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_zombie_cpp_CZombie_processPickup_FUN_005bd560(CZombie *this_ptr,float delta_time)

{
  CZombie *this_ptr_00;
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
  CZombie *in_stack_fffffdd4;
  CVector3f *pCVar11;
  float fStack_224;
  int aiStack_208 [5];
  int aiStack_1f4 [8];
  uint auStack_1d4 [4];
  float fStack_1c4;
  uint auStack_1b4 [4];
  uint auStack_1a4 [4];
  float fStack_194;
  uint auStack_184 [6];
  uint auStack_16c [4];
  uint auStack_15c [2];
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  uint uStack_13c;
  float afStack_138 [5];
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
  uint uStack_b8;
  CVector3f CStack_ac;
  uint uStack_a0;
  float afStack_9c [4];
  float fStack_8c;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  uint uStack_70;
  float afStack_6c [2];
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  int iStack_34;
  int local_30;
  CLocation *local_2c;
  int local_28;
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
    local_28 = 0;
    local_1c = 0;
    local_2c = pCVar6;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->actor_count; local_20 = local_20 + 1) {
      this_ptr_00 = *(CZombie **)((int)g_CDemonSetPtr->actors + local_28);
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
        pCVar11 = &CStack_64;
        fStack_dc = *unaff_EBP - fStack_154;
        afStack_d8[0] = unaff_EBP[1] - fStack_150;
        afStack_d8[1] = unaff_EBP[2] - fStack_14c;
        CStack_64.x = *unaff_EBP - fStack_154;
        *(float *)((int)&CStack_64 + (uint)bVar9 * -8 + 4) = afStack_d8[(uint)bVar9 * -2];
        *(float *)((int)&CStack_64 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        in_stack_fffffdd4 = (CZombie *)0x5bdd05;
        local_20 = core_zombie_cpp_classifyObjectShape_FUN_005ba990(pCVar11);
        if (((local_20 != 0) &&
            (in_stack_fffffdd4 = this_ptr,
            iVar5 = core_zombie_cpp_CZombie_canPickupWithHand_FUN_005bdf60(this_ptr,local_20),
            iVar5 != 0)) &&
           ((in_stack_fffffdd4 = this_ptr_00,
            iVar5 = core_actor_cpp_isOfClass_FUN_0040c550
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
          if (((float)_DAT_005fa87c <= fStack_224) &&
             (fStack_224 <= this_ptr->pickup_range_factor * _DAT_005fa88c)) {
            *(CZombie **)(&stack0xfffffde4 + unaff_ESI) = this_ptr_00;
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
    iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,local_30 + -1);
    this_ptr->pickup_target = *(CDemonActor **)(&stack0xfffffde4 + iVar5 * 4 + -0x14);
    iVar5 = aiStack_208[iVar5];
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
              (g_CConsolePtr,"?%s can't pick up %s, sombody else beat me to it!\n" + 1);
    this_ptr->pickup_target = (CDemonActor *)0x0;
    this_ptr->pickup_approach_progress = 0.0;
    core_zombie_cpp_CZombie_resetChaseState_FUN_005bed80(this_ptr);
    return 0;
  }
  fVar10 = (pCVar6->position).x - (this_ptr->pickup_target->location).position.x;
  fVar2 = (this_ptr->base).base.base.location.position.z -
          (this_ptr->pickup_target->location).position.z;
  fVar10 = (float)_DAT_005fa87c - SQRT(fVar2 * fVar2 + fVar10 * fVar10) * (float)_DAT_005fa874;
  if (fVar10 < 1.0) {
    fVar10 = 1.0;
  }
  this_ptr->pickup_approach_progress = delta_time * fVar10 + this_ptr->pickup_approach_progress;
  iStack_34 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005bdec0
                        (this_ptr,this_ptr->object_shape_class);
  iVar5 = -1;
  if ((((-1 < iStack_34) && (this_ptr->pickup_approach_progress < 0.0)) &&
      (iVar4 = (*((this_ptr->pickup_target->vtable)._ub)->canPickup)
                         (this_ptr->pickup_target,(CDemonActor *)this_ptr), iVar4 == 3)) &&
     (iVar4 = core_zombie_cpp_CZombie_canPickupWithHand_FUN_005bdf60
                        (this_ptr,this_ptr->object_shape_class), iVar4 != 0)) {
    uVar1 = this_ptr->object_shape_class;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_005bd7cf:
        pCVar3 = this_ptr->pickup_target;
        (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,(CBoundingBox3D *)in_stack_fffffdd4);
        puVar7 = auStack_184;
        puVar8 = auStack_1d4;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        }
        iStack_34 = 0x3f000000;
        core_bodypart_cpp_FUN_0041b020();
        uStack_13c = uStack_70;
        afStack_138[(uint)bVar9 * -2] = afStack_6c[(uint)bVar9 * -2];
        afStack_138[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        core_bodypart_cpp_FUN_0041afa0();
        pCVar11 = &CStack_e8;
        afStack_54[2] = fStack_40;
        afStack_54[(uint)bVar9 * -2 + 3] = afStack_54[(uint)bVar9 * -2 + 6];
        afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        fStack_44 = fStack_1c4 + (float)_DAT_005fa884;
        CStack_e8.x = afStack_54[2];
        *(float *)((int)&CStack_e8 + (uint)bVar9 * -8 + 4) = afStack_54[(uint)bVar9 * -2 + 3];
        *(float *)((int)&CStack_e8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(pCVar3,pCVar11,&CStack_100);
        CStack_88.x = CStack_100.x;
        afStack_9c[(uint)bVar9 * -2 + 6] = *(float *)((int)&CStack_100 + (uint)bVar9 * -8 + 4);
        afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
             *(float *)((int)&CStack_100 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        if (&CStack_d0 != (CVector3f *)(afStack_9c + 5)) {
          CStack_d0.x = CStack_88.x;
          CStack_d0.y = CStack_88.y;
          CStack_d0.z = CStack_88.z;
        }
      }
      else {
LAB_005bdb56:
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
        if (uVar1 != 3) goto LAB_005bdb56;
        goto LAB_005bd7cf;
      }
      pCVar3 = this_ptr->pickup_target;
      (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,(CBoundingBox3D *)in_stack_fffffdd4);
      puVar7 = auStack_16c;
      puVar8 = auStack_1a4;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      local_28 = 0x3f000000;
      core_bodypart_cpp_FUN_0041b020();
      uStack_a0 = uStack_b8;
      afStack_9c[(uint)bVar9 * -2] = *(float *)((int)&CStack_c4 + ((uint)bVar9 * -2 + 3) * 4 + 4);
      afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           *(float *)((int)&CStack_c4 + ((uint)bVar9 * -2 + (uint)bVar9 * -2 + 4) * 4 + 4);
      core_bodypart_cpp_FUN_0041afa0();
      pCVar11 = &CStack_118;
      afStack_9c[2] = afStack_138[2];
      afStack_9c[(uint)bVar9 * -2 + 3] = afStack_138[(uint)bVar9 * -2 + 3];
      afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_138[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      fStack_8c = fStack_194 + (float)_DAT_005fa884;
      CStack_118.x = afStack_9c[2];
      *(float *)((int)&CStack_118 + (uint)bVar9 * -8 + 4) = afStack_9c[(uint)bVar9 * -2 + 3];
      *(float *)((int)&CStack_118 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(pCVar3,pCVar11,&CStack_124);
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
    CStack_ac.x = _DAT_02c8af28;
    *(uint *)((int)&CStack_ac + (uint)bVar9 * -8 + 4) =
         *(uint *)(&DAT_02c8af2c + (uint)bVar9 * -8);
    *(uint *)((int)&CStack_ac + ((uint)bVar9 * -2 + (uint)bVar9 * -2) * 4 + 8) =
         *(uint *)(&DAT_02c8af30 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
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
      if (&CStack_ac != (CVector3f *)(afStack_9c + 8)) {
        CStack_ac.x = 1.5;
        CStack_ac.y = 0.0;
        CStack_ac.z = 0.0;
      }
    }
    iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                      ((CCharacter *)this_ptr,&CStack_d0,(CPathMap *)0x0,&CStack_ac,0.0,0.0);
  }
  if (iVar5 < 0) {
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s can't pick up %s, giving up\n");
    this_ptr->pickup_target = (CDemonActor *)0x0;
    this_ptr->pickup_approach_progress = 20.0;
    core_zombie_cpp_CZombie_resetChaseState_FUN_005bed80(this_ptr);
    return 0;
  }
  if (iVar5 < 1) {
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"%s beginning to pickup %s\n");
  uVar1 = this_ptr->object_shape_class;
  if (uVar1 < 2) {
    if (uVar1 != 1) {
LAB_005bdc3a:
      _DAT_01d1d400 = "..\\core\\zombie.cpp";
      _DAT_01d1d404 = 0x5d1;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Invalid zombie object shape!");
      return 1;
    }
  }
  else {
    if (uVar1 < 3) {
      iVar5 = 0xc;
      goto LAB_005bdbdc;
    }
    if (uVar1 != 3) goto LAB_005bdc3a;
  }
  iVar5 = 10;
LAB_005bdbdc:
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            (&(this_ptr->base).base.model.base,iVar5,1);
  return 1;
}
