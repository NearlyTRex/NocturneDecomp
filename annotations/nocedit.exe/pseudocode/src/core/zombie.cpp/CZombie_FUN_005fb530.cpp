// Name: core_zombie.cpp_CZombie_FUN_005fb530
// Address: 005fb530
// Address Range: [[005fb530, 005fb5c7] [005fb5e1, 005fbcf2]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_FUN_005fb530(CZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_zombie_cpp_CZombie_FUN_005fb530(CZombie *this_ptr)

{
  CLocation *pCVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  CDemonActor *pCVar5;
  CDemonActor *pCVar6;
  CVector3f *pCVar7;
  int iVar8;
  CBoundingBox3D *pCVar9;
  int iVar10;
  int iVar11;
  float in_stack_00000008;
  CVector3f *pCVar12;
  float *pfVar13;
  float fStack_168;
  uint auStack_160 [10];
  int aiStack_138 [10];
  CBoundingBox3D CStack_110;
  CBoundingBox3D CStack_f8;
  CBoundingBox3D CStack_e0;
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  CVector3f CStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  CVector3f CStack_44;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  int local_24;
  int local_20;
  CLocation *local_1c;
  int local_18;
  float local_14;
  
  if (this_ptr->part_indices[4] < 0) {
    return 0;
  }
  fVar3 = this_ptr->pickup_scan_timer - in_stack_00000008;
  this_ptr->pickup_scan_timer = fVar3;
  if (0.0 < fVar3) {
    this_ptr->pickup_seed = this_ptr->pickup_seed + 1;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
    this_ptr->pickup_scan_timer = local_14;
  }
  if ((this_ptr->base).base.carry_hands[0].carry_actor != (CDemonActor *)0x0) {
    return 0;
  }
  if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
    return 0;
  }
  if (0.0 < this_ptr->pickup_approach_progress) {
    fVar3 = this_ptr->pickup_approach_progress - in_stack_00000008;
    this_ptr->pickup_approach_progress = fVar3;
    if (0.0 <= fVar3) {
      return 0;
    }
    this_ptr->pickup_approach_progress = 0.0;
    return 0;
  }
  pCVar6 = this_ptr->pickup_target;
  pCVar1 = &(this_ptr->base).base.base.location;
  if (pCVar6 == (CDemonActor *)0x0) {
    local_24 = 0;
    local_20 = 0;
    iVar10 = 0;
    local_1c = pCVar1;
    for (local_18 = 0; local_18 < g_CDemonSetPtr->actor_count; local_18 = local_18 + 1) {
      pCVar6 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + local_20);
      pCVar5 = (*((pCVar6->vtable)._ub)->getCarrier)(pCVar6);
      iVar11 = iVar10;
      if ((pCVar5 == (CDemonActor *)0x0) &&
         (iVar8 = (*((pCVar6->vtable)._ub)->canPickup)(pCVar6,(CDemonActor *)this_ptr), iVar8 == 3))
      {
        pCVar9 = (*((pCVar6->vtable)._ub)->getBoundingBox)(pCVar6,&CStack_110);
        fStack_5c = (pCVar9->max).x - (pCVar9->min).x;
        fStack_58 = (pCVar9->max).y - (pCVar9->min).y;
        fStack_54 = (pCVar9->max).z - (pCVar9->min).z;
        iStack_28 = core_zombie_cpp_FUN_005f8e50();
        if (((iStack_28 != 0) &&
            (iVar8 = core_zombie_cpp_CZombie_FUN_005fbda0(this_ptr), iVar8 != 0)) &&
           ((iVar8 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar6,"CBodyPart"), iVar8 == 0
            || ((pCVar6->direction_hint & 3U) == (this_ptr->pickup_seed & 3U))))) {
          fStack_8c = (pCVar6->location).position.x - (local_1c->position).x;
          fStack_88 = (pCVar6->location).position.y - (local_1c->position).y;
          fStack_88 = fStack_88 * fStack_88;
          fStack_84 = (pCVar6->location).position.z - (local_1c->position).z;
          fStack_88 = fStack_88 * fStack_88;
          fVar3 = SQRT(fStack_84 * fStack_84 + fStack_8c * fStack_8c + fStack_88 * fStack_88);
          if (((float)5 <= fVar3) &&
             (fVar3 <= this_ptr->pickup_range_factor * 15.0f)) {
            *(int *)((int)aiStack_138 + iVar10) = iStack_28;
            iVar11 = iVar10 + 4;
            local_24 = local_24 + 1;
            *(CDemonActor **)((int)auStack_160 + iVar10) = pCVar6;
            if (0x27 < iVar11) break;
          }
        }
      }
      local_20 = local_20 + 4;
      iVar10 = iVar11;
    }
    if (local_24 < 1) {
      return 0;
    }
    iVar10 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,local_24 + -1);
    this_ptr->pickup_target = (CDemonActor *)auStack_160[iVar10];
    iVar10 = aiStack_138[iVar10];
    this_ptr->pickup_approach_progress = -40.0;
    this_ptr->object_shape_class = iVar10;
    this_ptr->pickup_seed = this_ptr->pickup_seed + 1;
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s is going to try to pick up %s\n",this_ptr,this_ptr->pickup_target);
    return 1;
  }
  pCVar6 = (*((pCVar6->vtable)._ub)->getCarrier)(pCVar6);
  if (pCVar6 != (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s can't pick up %s, sombody else beat me to it!\n",this_ptr,this_ptr->pickup_target);
    this_ptr->pickup_target = (CDemonActor *)0x0;
    this_ptr->pickup_approach_progress = 0.0;
    core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
    return 0;
  }
  fVar3 = (pCVar1->position).x - (this_ptr->pickup_target->location).position.x;
  fVar4 = (this_ptr->base).base.base.location.position.z -
          (this_ptr->pickup_target->location).position.z;
  fStack_168 = (float)5 - SQRT(fVar4 * fVar4 + fVar3 * fVar3) * (float)0.33333333333333298
  ;
  if (fStack_168 < 1.0) {
    fStack_168 = 1.0;
  }
  iVar11 = -1;
  this_ptr->pickup_approach_progress =
       in_stack_00000008 * fStack_168 + this_ptr->pickup_approach_progress;
  iVar10 = core_zombie_cpp_CZombie_FUN_005fbd00(this_ptr);
  if ((((-1 < iVar10) && (this_ptr->pickup_approach_progress < 0.0)) &&
      (iVar8 = (*((this_ptr->pickup_target->vtable)._ub)->canPickup)
                         (this_ptr->pickup_target,(CDemonActor *)this_ptr), iVar8 == 3)) &&
     (iVar8 = core_zombie_cpp_CZombie_FUN_005fbda0(this_ptr), iVar8 != 0)) {
    uVar2 = this_ptr->object_shape_class;
    if (uVar2 < 2) {
      if (uVar2 == 1) {
LAB_005fb750:
        pCVar6 = this_ptr->pickup_target;
        (*((pCVar6->vtable)._ub)->getBoundingBox)(pCVar6,&CStack_e0);
        fStack_2c = 0.5;
        pfVar13 = &fStack_2c;
        pCVar12 = &CStack_80;
        pCVar7 = core_bodypart_cpp_addVector_FUN_0041b540(&CStack_e0.min,&CStack_b0,&CStack_e0.max);
        core_bodypart_cpp_scaleVector_FUN_0041b4e0(pCVar7,pCVar12,pfVar13);
        CStack_80.z = CStack_e0.min.z + (float)0.40000000000000002;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar6,&CStack_44,&CStack_80);
        if (&CStack_a4 != &CStack_44) {
          CStack_a4.x = CStack_44.x;
          CStack_a4.y = CStack_44.y;
          CStack_a4.z = CStack_44.z;
        }
      }
      else {
LAB_005fba18:
        pCVar6 = this_ptr->pickup_target;
        if ((CLocation *)&CStack_a4 != &pCVar6->location) {
          CStack_a4.x = (pCVar6->location).position.x;
          CStack_a4.y = (pCVar6->location).position.y;
          CStack_a4.z = (pCVar6->location).position.z;
        }
      }
    }
    else {
      if (2 < uVar2) {
        if (uVar2 != 3) goto LAB_005fba18;
        goto LAB_005fb750;
      }
      pCVar6 = this_ptr->pickup_target;
      (*((pCVar6->vtable)._ub)->getBoundingBox)(pCVar6,&CStack_f8);
      pfVar13 = &fStack_30;
      pCVar12 = &CStack_bc;
      fStack_30 = 0.5;
      pCVar7 = core_bodypart_cpp_addVector_FUN_0041b540(&CStack_f8.min,&CStack_68,&CStack_f8.max);
      core_bodypart_cpp_scaleVector_FUN_0041b4e0(pCVar7,pCVar12,pfVar13);
      CStack_bc.z = CStack_f8.min.z + (float)0.40000000000000002;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar6,&CStack_50,&CStack_bc);
      if (&CStack_a4 != &CStack_50) {
        CStack_a4.x = CStack_50.x;
        CStack_a4.y = CStack_50.y;
        CStack_a4.z = CStack_50.z;
      }
    }
    CStack_c8.x = g_ZeroVector.x;
    CStack_c8.y = g_ZeroVector.y;
    CStack_c8.z = g_ZeroVector.z;
    if (iVar10 == 0) {
      CStack_74.x = -1.5;
      CStack_74.y = 0.0;
      CStack_74.z = CStack_74.y;
      if (&CStack_c8 != &CStack_74) {
        CStack_c8.x = -1.5;
        CStack_c8.y = 0.0;
        CStack_c8.z = 0.0;
      }
    }
    if (iVar10 == 1) {
      CStack_98.y = 0.0;
      CStack_98.z = 0.0;
      CStack_98.x = 1.5;
      if (&CStack_c8 != &CStack_98) {
        CStack_c8.y = 0.0;
        CStack_c8.z = 0.0;
        CStack_c8.x = 1.5;
      }
    }
    iVar11 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                       ((CCharacter *)this_ptr,&CStack_a4,(CPathMap *)0x0,&CStack_c8,0.0,0.0);
  }
  if (iVar11 < 0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s can't pick up %s, giving up\n",this_ptr,this_ptr->pickup_target);
    this_ptr->pickup_target = (CDemonActor *)0x0;
    this_ptr->pickup_approach_progress = 20.0;
    core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
    return 0;
  }
  if (iVar11 < 1) {
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"%s beginning to pickup %s\n",this_ptr,this_ptr->pickup_target);
  uVar2 = this_ptr->object_shape_class;
  if (uVar2 < 2) {
    if (uVar2 != 1) {
LAB_005fbae6:
      g_CurrentFilename = "..\\core\\zombie.cpp";
      g_CurrentLineNumber = 0x5d0;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid zombie object shape!");
      return 1;
    }
  }
  else {
    if (uVar2 < 3) {
      iVar10 = 0xc;
      goto LAB_005fba91;
    }
    if (uVar2 != 3) goto LAB_005fbae6;
  }
  iVar10 = 10;
LAB_005fba91:
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,iVar10,1);
  return 1;
}
