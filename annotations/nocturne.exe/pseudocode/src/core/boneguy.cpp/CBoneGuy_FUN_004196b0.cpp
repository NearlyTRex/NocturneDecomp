// Name: core_boneguy.cpp_CBoneGuy_FUN_004196b0
// Address: 004196b0
// Address Range: [[004196b0, 00419be0]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_FUN_004196b0(CBoneGuy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_boneguy_cpp_CBoneGuy_FUN_004196b0(CBoneGuy *this_ptr,float delta_time)

{
  float fVar1;
  CDemonActor *pCVar2;
  CDemonActor *pCVar3;
  CVector3f *src;
  int iVar4;
  CBoundingBox3D *pCVar5;
  int iVar6;
  CDeformableModelInstance *this_ptr_00;
  CVector3f *dst;
  float *scalar;
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
  
  fVar1 = this_ptr->search_timer - delta_time;
  this_ptr->search_timer = fVar1;
  if (0.0 < fVar1) {
    this_ptr->pickup_attempt_count = this_ptr->pickup_attempt_count + 1;
    local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(5.0,10.0);
    this_ptr->search_timer = local_18;
  }
  if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    if (this_ptr->pickup_cooldown <= 0.0) {
      pCVar3 = this_ptr->pickup_target;
      if (pCVar3 != (CDemonActor *)0x0) {
        pCVar3 = (*((pCVar3->vtable)._ub)->getCarrier)(pCVar3);
        if (pCVar3 != (CDemonActor *)0x0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (g_CConsole_PTR_005ad350,"%s can't pick up %s, sombody else beat me to it!\n");
          this_ptr->pickup_target = (CDemonActor *)0x0;
          this_ptr->pickup_cooldown = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.motion_controller,1,1);
          return 0;
        }
        iVar6 = -1;
        if (this_ptr->pickup_cooldown < 0.0) {
          iVar4 = (*((this_ptr->pickup_target->vtable)._ub)->canPickup)
                            (this_ptr->pickup_target,(CDemonActor *)this_ptr);
          if (iVar4 == 3) {
            pCVar3 = this_ptr->pickup_target;
            (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,&CStack_94);
            scalar = &fStack_30;
            dst = &CStack_70;
            fStack_30 = 0.5;
            src = core_bodypart_cpp_addVector_FUN_00417fc0(&CStack_94.min,&CStack_4c,&CStack_94.max)
            ;
            core_bodypart_cpp_scaleVector_FUN_00417f60(src,dst,scalar);
            CStack_70.z = CStack_94.min.z + (float)0.40000000000000002;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(pCVar3,&CStack_58,&CStack_70);
            CStack_7c.y = 0.0;
            CStack_7c.z = 0.0;
            CStack_7c.x = 1.5;
            iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                              ((CCharacter *)this_ptr,&CStack_58,(CPathMap *)0x0,&CStack_7c,0.0,0.0)
            ;
          }
        }
        this_ptr_00 = &(this_ptr->base).base.model;
        if (-1 < iVar6) {
          if (iVar6 < 1) {
            return 1;
          }
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (g_CConsole_PTR_005ad350,"%s beginning to pickup %s\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr_00->motion_controller,7,1);
          return 1;
        }
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (g_CConsole_PTR_005ad350,"%s can't pick up %s, giving up!!!!\n");
        this_ptr->pickup_target = (CDemonActor *)0x0;
        this_ptr->pickup_cooldown = 20.0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&this_ptr_00->motion_controller,1,1);
        return 0;
      }
      iVar6 = 0;
      local_2c = 0;
      local_20 = 0;
      for (local_24 = 0; local_24 < g_CDemonSet_PTR_005be368->actor_count; local_24 = local_24 + 1)
      {
        pCVar3 = *(CDemonActor **)((int)g_CDemonSet_PTR_005be368->actors + local_20);
        pCVar2 = (*((pCVar3->vtable)._ub)->getCarrier)(pCVar3);
        if (pCVar2 == (CDemonActor *)0x0) {
          iVar4 = (*((pCVar3->vtable)._ub)->canPickup)(pCVar3,(CDemonActor *)this_ptr);
          if (iVar4 == 3) {
            pCVar5 = (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,&CStack_ac);
            fStack_64 = (pCVar5->max).x - (pCVar5->min).x;
            fStack_60 = (pCVar5->max).y - (pCVar5->min).y;
            fStack_5c = (pCVar5->max).z - (pCVar5->min).z;
            if ((((fStack_64 < 1.0) && (fStack_60 < 1.0)) && ((float)2 < fStack_5c))
               && ((double)fStack_5c < 6)) {
              iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0(pCVar3,"CBodyPart");
              if (iVar4 == 0) {
                fStack_40 = (pCVar3->location).position.x -
                            (this_ptr->base).base.base.location.position.x;
                fStack_3c = (pCVar3->location).position.y -
                            (this_ptr->base).base.base.location.position.y;
                fStack_3c = fStack_3c * fStack_3c;
                fStack_38 = (pCVar3->location).position.z -
                            (this_ptr->base).base.base.location.position.z;
                fStack_3c = fStack_3c * fStack_3c;
                fVar1 = SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c);
                if (((float)5 <= fVar1) && ((int)fVar1 < 0x41700001)) {
                  *(CDemonActor **)((int)auStack_d4 + iVar6) = pCVar3;
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
        iVar6 = core_actor_cpp_getRandomInt_FUN_0040de00(0,local_2c + -1);
        pCVar3 = (CDemonActor *)auStack_d4[iVar6];
        this_ptr->pickup_cooldown = -40.0;
        this_ptr->pickup_target = pCVar3;
        this_ptr->pickup_attempt_count = this_ptr->pickup_attempt_count + 1;
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (g_CConsole_PTR_005ad350,"%s is going to try to pick up %s\n");
        return 1;
      }
    }
    else {
      fVar1 = this_ptr->pickup_cooldown - delta_time;
      this_ptr->pickup_cooldown = fVar1;
      if (fVar1 < 0.0) {
        this_ptr->pickup_cooldown = 0.0;
      }
    }
  }
  return 0;
}
