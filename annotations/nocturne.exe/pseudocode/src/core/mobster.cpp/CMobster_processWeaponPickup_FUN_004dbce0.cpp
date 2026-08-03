// Name: core_mobster.cpp_CMobster_processWeaponPickup_FUN_004dbce0
// Address: 004dbce0
// Address Range: [[004dbce0, 004dc107]]
// Convention: __cdecl
// Signature: int __cdecl core_mobster_cpp_CMobster_processWeaponPickup_FUN_004dbce0(CMobster *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_mobster_cpp_CMobster_processWeaponPickup_FUN_004dbce0(CMobster *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  CVector3f *src;
  CDeformableModelInstance *this_ptr_00;
  int iVar6;
  int iVar7;
  int iVar8;
  CVector3f *dst;
  float *scalar;
  float fStack_b0;
  uint auStack_a8 [10];
  CBoundingBox3D CStack_80;
  CVector3f CStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  CVector3f CStack_44;
  CVector3f CStack_38;
  float fStack_28;
  int local_24;
  CLocation *local_20;
  int local_1c;
  float local_14;
  
  if ((this_ptr->base).is_in_combat == 0) {
    fVar2 = this_ptr->idle_timer - delta_time;
    this_ptr->idle_timer = fVar2;
    if (0.0 < fVar2) {
      this_ptr->ai_idle_counter = this_ptr->ai_idle_counter + 1;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(5.0,10.0);
      this_ptr->idle_timer = local_14;
    }
    if (((this_ptr->base).base.model.part_data.visibility_flags
         [(this_ptr->base).base.carry_hands[1].secondary_bone_index] != 0) &&
       ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
      if (0.0 < this_ptr->weapon_approach_timer) {
        fVar2 = this_ptr->weapon_approach_timer - delta_time;
        this_ptr->weapon_approach_timer = fVar2;
        if (fVar2 < 0.0) {
          this_ptr->weapon_approach_timer = 0.0;
          return 0;
        }
      }
      else {
        pCVar5 = this_ptr->target_weapon;
        pCVar1 = &(this_ptr->base).base.base.location;
        if (pCVar5 == (CDemonActor *)0x0) {
          iVar7 = 0;
          iVar8 = 0;
          local_24 = 0;
          local_20 = pCVar1;
          for (local_1c = 0; local_1c < g_CDemonSet_PTR_005be368->actor_count;
              local_1c = local_1c + 1) {
            pCVar5 = *(CDemonActor **)((int)g_CDemonSet_PTR_005be368->actors + iVar8);
            pCVar4 = (*((pCVar5->vtable)._ub)->getCarrier)(pCVar5);
            if ((pCVar4 == (CDemonActor *)0x0) &&
               (iVar6 = core_actor_cpp_isOfClass_FUN_0040d7e0(pCVar5,"CTommyGun"),
               iVar6 != 0)) {
              fStack_5c = (pCVar5->location).position.x - (local_20->position).x;
              fStack_58 = (pCVar5->location).position.y - (local_20->position).y;
              fStack_58 = fStack_58 * fStack_58;
              fStack_54 = (pCVar5->location).position.z - (local_20->position).z;
              fStack_58 = fStack_58 * fStack_58;
              fVar2 = SQRT(fStack_54 * fStack_54 + fStack_5c * fStack_5c + fStack_58 * fStack_58);
              if (((float)5 <= fVar2) && ((int)fVar2 < 0x41700001)) {
                *(CDemonActor **)((int)auStack_a8 + iVar7) = pCVar5;
                local_24 = local_24 + 1;
                iVar7 = iVar7 + 4;
                if (0x27 < iVar7) break;
              }
            }
            iVar8 = iVar8 + 4;
          }
          if (0 < local_24) {
            iVar8 = core_actor_cpp_getRandomInt_FUN_0040de00(0,local_24 + -1);
            pCVar5 = (CDemonActor *)auStack_a8[iVar8];
            this_ptr->weapon_approach_timer = -40.0;
            this_ptr->target_weapon = pCVar5;
            this_ptr->ai_idle_counter = this_ptr->ai_idle_counter + 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(this_ptr->base).base.model.motion_controller,1,1);
            return 1;
          }
        }
        else {
          pCVar5 = (*((pCVar5->vtable)._ub)->getCarrier)(pCVar5);
          if (pCVar5 != (CDemonActor *)0x0) {
            this_ptr->target_weapon = (CDemonActor *)0x0;
            this_ptr->weapon_approach_timer = 0.0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(this_ptr->base).base.model.motion_controller,1,1);
            return 0;
          }
          fVar2 = (pCVar1->position).x - (this_ptr->target_weapon->location).position.x;
          fVar3 = (this_ptr->base).base.base.location.position.z -
                  (this_ptr->target_weapon->location).position.z;
          fStack_b0 = (float)5 -
                      SQRT(fVar3 * fVar3 + fVar2 * fVar2) * (float)0.33333333333333298;
          if (fStack_b0 < 1.0) {
            fStack_b0 = 1.0;
          }
          fVar2 = delta_time * fStack_b0 + this_ptr->weapon_approach_timer;
          iVar8 = -1;
          this_ptr->weapon_approach_timer = fVar2;
          if ((fVar2 < 0.0) &&
             (iVar7 = (*((this_ptr->target_weapon->vtable)._ub)->canPickup)
                                (this_ptr->target_weapon,(CDemonActor *)this_ptr), iVar7 == 3)) {
            pCVar5 = this_ptr->target_weapon;
            (*((pCVar5->vtable)._ub)->getBoundingBox)(pCVar5,&CStack_80);
            fStack_28 = 0.5;
            scalar = &fStack_28;
            dst = &CStack_44;
            src = core_bodypart_cpp_addVector_FUN_00417fc0(&CStack_80.min,&CStack_38,&CStack_80.max)
            ;
            core_bodypart_cpp_scaleVector_FUN_00417f60(src,dst,scalar);
            CStack_44.z = CStack_80.min.z + (float)0.40000000000000002;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(pCVar5,&CStack_50,&CStack_44);
            CStack_68.x = 1.5;
            CStack_68.y = 0.0;
            CStack_68.z = 0.0;
            iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                              ((CCharacter *)this_ptr,&CStack_50,(CPathMap *)0x0,&CStack_68,0.3,
                               0.034906585);
          }
          this_ptr_00 = &(this_ptr->base).base.model;
          if (-1 < iVar8) {
            if (iVar8 < 1) {
              return 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&this_ptr_00->motion_controller,7,1);
            return 1;
          }
          this_ptr->target_weapon = (CDemonActor *)0x0;
          this_ptr->weapon_approach_timer = 20.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr_00->motion_controller,1,1);
        }
      }
    }
  }
  return 0;
}
