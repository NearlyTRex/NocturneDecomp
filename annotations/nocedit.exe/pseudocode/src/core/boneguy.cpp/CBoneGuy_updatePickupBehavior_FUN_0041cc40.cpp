// Name: core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_0041cc40
// Address: 0041cc40
// Address Range: [[0041cc40, 0041ccd1] [0041ccf1, 0041d170]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_0041cc40(CBoneGuy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_0041cc40(CBoneGuy *this_ptr,float delta_time)

{
  CDemonActor *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonActor *pCVar2;
  CDemonActor *pCVar3;
  int iVar5;
  CVector3f *src;
  int iVar4;
  CBoundingBox3D *pCVar5;
  int iVar7;
  int iVar6;
  CDeformableModelInstance *this_ptr_00;
  uint auStack_d4 [10];
  CBoundingBox3D CStack_ac;
  CBoundingBox3D CStack_94;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  int local_2c;
  int local_24;
  int local_20;
  float local_18;
  CVector3f *dst;
  float *scalar;
  float fVar1;
  
  fVar1 = this_ptr->search_timer - delta_time;
  this_ptr->search_timer = fVar1;
  if (0.0 < fVar1) {
    this_ptr->pickup_attempt_count = this_ptr->pickup_attempt_count + 1;
    local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
    this_ptr->search_timer = local_18;
  }
  if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    if (this_ptr->pickup_cooldown <= 0.0) {
      pCVar1 = this_ptr->pickup_target;
      if (pCVar1 != (CDemonActor *)0x0) {
        pCVar3 = (*((pCVar1->vtable)._ub)->getCarrier)(pCVar1);
        if (pCVar3 != (CDemonActor *)0x0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s can't pick up %s, sombody else beat me to it!\n",this_ptr,
                     this_ptr->pickup_target);
          this_ptr->pickup_target = (CDemonActor *)0x0;
          this_ptr->pickup_cooldown = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,1,1);
          return 0;
        }
        iVar7 = -1;
        if (this_ptr->pickup_cooldown < 0.0) {
          iVar5 = (*((this_ptr->pickup_target->vtable)._ub)->canPickup)
                            (this_ptr->pickup_target,(CDemonActor *)this_ptr);
          if (iVar5 == 3) {
            pCVar1 = this_ptr->pickup_target;
            (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,&CStack_94);
            scalar = &fStack_30;
            dst = &CStack_70;
            fStack_30 = 0.5;
            src = core_bodypart_cpp_addVector_FUN_0041b540(&CStack_94.min,&CStack_4c,&CStack_94.max)
            ;
            core_bodypart_cpp_scaleVector_FUN_0041b4e0(src,dst,scalar);
            CStack_70.z = CStack_94.min.z + (float)0.40000000000000002;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar1,&CStack_58,&CStack_70);
            CStack_7c.y = 0.0;
            CStack_7c.z = 0.0;
            CStack_7c.x = 1.5;
            iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                              ((CCharacter *)this_ptr,&CStack_58,(CPathMap *)0x0,&CStack_7c,0.0,0.0)
            ;
          }
        }
        this_ptr_00 = &(this_ptr->base).base.model;
        if (-1 < iVar7) {
          if (iVar7 < 1) {
            return 1;
          }
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s beginning to pickup %s\n",this_ptr,
                     this_ptr->pickup_target);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,7,1);
          return 1;
        }
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s can't pick up %s, giving up!!!!\n",this_ptr,
                   this_ptr->pickup_target);
        this_ptr->pickup_target = (CDemonActor *)0x0;
        this_ptr->pickup_cooldown = 20.0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,1,1);
        return 0;
      }
      iVar6 = 0;
      local_2c = 0;
      local_20 = 0;
      for (local_24 = 0; local_24 < g_CDemonSetPtr->actor_count; local_24 = local_24 + 1) {
        pCVar1 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + local_20);
        pCVar2 = (*((pCVar1->vtable)._ub)->getCarrier)(pCVar1);
        if (pCVar2 == (CDemonActor *)0x0) {
          iVar4 = (*((pCVar1->vtable)._ub)->canPickup)(pCVar1,(CDemonActor *)this_ptr);
          if (iVar4 == 3) {
            pCVar5 = (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,&CStack_ac);
            fVar2 = (pCVar5->max).z - (pCVar5->min).z;
            if (((((pCVar5->max).x - (pCVar5->min).x < 1.0) &&
                 ((pCVar5->max).y - (pCVar5->min).y < 1.0)) && ((float)2 < fVar2)) &&
               ((double)fVar2 < 6)) {
              iVar7 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar1,"CBodyPart");
              if (iVar7 == 0) {
                fVar2 = (pCVar1->location).position.x -
                        (this_ptr->base).base.base.location.position.x;
                fVar3 = (pCVar1->location).position.y -
                        (this_ptr->base).base.base.location.position.y;
                fVar3 = fVar3 * fVar3;
                fVar4 = (pCVar1->location).position.z -
                        (this_ptr->base).base.base.location.position.z;
                fVar3 = fVar3 * fVar3;
                fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
                if (((float)5 <= fVar2) && ((int)fVar2 < 0x41700001)) {
                  *(CDemonActor **)((int)auStack_d4 + iVar6) = pCVar1;
                  local_2c = local_2c + 1;
                  iVar6 = iVar6 + 4;
                  if (0x27 < iVar6) break;
                }
              }
            }
          }
        }
        local_20 = local_20 + 4;
      }
      if (0 < local_2c) {
        iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,local_2c + -1);
        pCVar1 = (CDemonActor *)auStack_d4[iVar7];
        this_ptr->pickup_cooldown = -40.0;
        this_ptr->pickup_target = pCVar1;
        this_ptr->pickup_attempt_count = this_ptr->pickup_attempt_count + 1;
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s is going to try to pick up %s\n",this_ptr,
                   this_ptr->pickup_target);
        return 1;
      }
    }
    else {
      fVar2 = this_ptr->pickup_cooldown - delta_time;
      this_ptr->pickup_cooldown = fVar2;
      if (fVar2 < 0.0) {
        this_ptr->pickup_cooldown = 0.0;
      }
    }
  }
  return 0;
}
