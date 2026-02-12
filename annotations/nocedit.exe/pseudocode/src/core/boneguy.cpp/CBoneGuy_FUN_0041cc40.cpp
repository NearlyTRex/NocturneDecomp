// Name: core_boneguy.cpp_CBoneGuy_FUN_0041cc40
// Address: 0041cc40
// Address Range: [[0041cc40, 0041ccd1] [0041ccf1, 0041d170]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_FUN_0041cc40(CBoneGuy *this_ptr)

#include "nocturne.h"

int __cdecl core_boneguy_cpp_CBoneGuy_FUN_0041cc40(CBoneGuy *this_ptr)

{
  float fVar1;
  CDemonActor *pCVar2;
  CDemonActor *pCVar3;
  int iVar4;
  CBoundingBox3D *pCVar5;
  int iVar6;
  CDeformableModelInstance *this_ptr_00;
  float in_stack_00000008;
  uint auStack_c0 [8];
  CBoundingBox3D CStack_a0;
  CBoundingBox3D CStack_88;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  CVector3f aCStack_44 [2];
  float local_2c;
  float fStack_28;
  float local_24;
  int local_20;
  uint uStack_1c;
  float local_18;
  
  fVar1 = this_ptr->search_timer - in_stack_00000008;
  this_ptr->search_timer = fVar1;
  if (0.0 < fVar1) {
    this_ptr->pickup_attempt_count = this_ptr->pickup_attempt_count + 1;
    local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
    this_ptr->search_timer = local_18;
  }
  if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    if (this_ptr->pickup_cooldown <= 0.0) {
      pCVar3 = this_ptr->pickup_target;
      if (pCVar3 != (CDemonActor *)0x0) {
        pCVar3 = (*((pCVar3->vtable)._ub)->getCarrier)(pCVar3);
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
        iVar6 = -1;
        if (this_ptr->pickup_cooldown < 0.0) {
          iVar4 = (*((this_ptr->pickup_target->vtable)._ub)->canPickup)
                            (this_ptr->pickup_target,(CDemonActor *)this_ptr);
          if (iVar4 == 3) {
            pCVar3 = this_ptr->pickup_target;
            (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,&CStack_88);
            uStack_1c = 0x3f000000;
            core_bodypart_cpp_FUN_0041b540();
            core_bodypart_cpp_FUN_0041b4e0();
            CStack_5c.z = CStack_88.max.y + (float)0.40000000000000002;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar3,aCStack_44,&CStack_5c);
            CStack_68.y = 0.0;
            CStack_68.z = 0.0;
            CStack_68.x = 1.5;
            iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                              ((CCharacter *)this_ptr,aCStack_44,(CPathMap *)0x0,&CStack_68,0.0,0.0)
            ;
          }
        }
        this_ptr_00 = &(this_ptr->base).base.model;
        if (-1 < iVar6) {
          if (iVar6 < 1) {
            return 1;
          }
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s beginning to pickup %s\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,7,1);
          return 1;
        }
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s can't pick up %s, giving up!!!!\n");
        this_ptr->pickup_target = (CDemonActor *)0x0;
        this_ptr->pickup_cooldown = 20.0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,1,1);
        return 0;
      }
      iVar6 = 0;
      local_2c = 0.0;
      local_24 = 0.0;
      local_20 = 0;
      while( true ) {
        if ((int)g_CDemonSetPtr->actor_list_ptr <= (int)local_24) break;
        pCVar3 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_20);
        pCVar2 = (*((pCVar3->vtable)._ub)->getCarrier)(pCVar3);
        if (pCVar2 == (CDemonActor *)0x0) {
          iVar4 = (*((pCVar3->vtable)._ub)->canPickup)(pCVar3,(CDemonActor *)this_ptr);
          if (iVar4 == 3) {
            pCVar5 = (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,&CStack_a0);
            fStack_50 = (pCVar5->max).x - (pCVar5->min).x;
            fStack_4c = (pCVar5->max).y - (pCVar5->min).y;
            fStack_48 = (pCVar5->max).z - (pCVar5->min).z;
            if ((((fStack_50 < 1.0) && (fStack_4c < 1.0)) && ((float)2 < fStack_48))
               && ((double)fStack_48 < 6)) {
              iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar3,"CBodyPart");
              if (iVar4 == 0) {
                local_2c = (pCVar3->location).position.x -
                           (this_ptr->base).base.base.location.position.x;
                fStack_28 = (pCVar3->location).position.y -
                            (this_ptr->base).base.base.location.position.y;
                fStack_28 = fStack_28 * fStack_28;
                local_24 = (pCVar3->location).position.z -
                           (this_ptr->base).base.base.location.position.z;
                fStack_28 = fStack_28 * fStack_28;
                fVar1 = SQRT(local_24 * local_24 + local_2c * local_2c + fStack_28 * fStack_28);
                if (((float)5 <= fVar1) && ((int)fVar1 < 0x41700001)) {
                  *(CDemonActor **)((int)auStack_c0 + iVar6) = pCVar3;
                  local_18 = (float)((int)local_18 + 1);
                  iVar6 = iVar6 + 4;
                  if (0x27 < iVar6) break;
                }
              }
            }
          }
        }
        local_24 = (float)((int)local_24 + 1);
        local_20 = local_20 + 4;
      }
      if (0 < (int)local_2c) {
        iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,(int)local_2c + -1);
        pCVar3 = (CDemonActor *)auStack_c0[iVar6 + -5];
        this_ptr->pickup_cooldown = -40.0;
        this_ptr->pickup_target = pCVar3;
        this_ptr->pickup_attempt_count = this_ptr->pickup_attempt_count + 1;
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s is going to try to pick up %s\n",this_ptr,
                   this_ptr->pickup_target);
        return 1;
      }
    }
    else {
      fVar1 = this_ptr->pickup_cooldown - in_stack_00000008;
      this_ptr->pickup_cooldown = fVar1;
      if (fVar1 < 0.0) {
        this_ptr->pickup_cooldown = 0.0;
      }
    }
  }
  return 0;
}
