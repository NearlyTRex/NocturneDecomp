// Name: core_mobster.cpp_CMobster_processWeaponPickup_FUN_004ff610
// Address: 004ff610
// Address Range: [[004ff610, 004ffaf7]]
// Convention: __cdecl
// Signature: int __cdecl core_mobster_cpp_CMobster_processWeaponPickup_FUN_004ff610(CMobster *this_ptr,float delta_time)

#include "nocturne.h"

int __cdecl core_mobster_cpp_CMobster_processWeaponPickup_FUN_004ff610(CMobster *this_ptr,float delta_time)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  CDeformableModelInstance *this_ptr_00;
  int iVar4;
  CLocation *pCVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_1084 [986];
  CPathMap *path_map;
  float fVar9;
  CVector3f *pCVar10;
  CBoundingBox3D *in_stack_fffffefc;
  float *scalar;
  float fVar11;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  uint auStack_b4 [6];
  CVector3f CStack_9c;
  float afStack_90 [6];
  CVector3f CStack_78;
  CVector3f aCStack_6c [2];
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  float *local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  bVar8 = 0;
  if ((this_ptr->base).is_in_combat == 0) {
    fVar9 = this_ptr->idle_timer - delta_time;
    this_ptr->idle_timer = fVar9;
    if (0.0 < fVar9) {
      this_ptr->ai_idle_counter = this_ptr->ai_idle_counter + 1;
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(5.0,10.0);
      this_ptr->idle_timer = local_18;
    }
    if (((this_ptr->base).base.model.part_data.visibility_flags
         [(this_ptr->base).base.carry_hands[1].secondary_bone_index] != 0) &&
       ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
      if (0.0 < this_ptr->weapon_approach_timer) {
        fVar9 = this_ptr->weapon_approach_timer - delta_time;
        this_ptr->weapon_approach_timer = fVar9;
        if (fVar9 < 0.0) {
          this_ptr->weapon_approach_timer = 0.0;
          return 0;
        }
      }
      else {
        pCVar2 = this_ptr->target_weapon;
        pCVar5 = &(this_ptr->base).base.base.location;
        if (pCVar2 == (CDemonActor *)0x0) {
          CStack_30.y = 0.0;
          local_24 = (float *)0x0;
          local_20 = 0;
          local_1c = 0.0;
          CStack_30.z = (float)pCVar5;
          while ((int)local_24 < g_CDemonSetPtr->actor_count) {
            pCVar2 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + local_20);
            pCVar1 = (*((pCVar2->vtable)._ub)->getCarrier)(pCVar2);
            if ((pCVar1 == (CDemonActor *)0x0) &&
               (iVar4 = core_actor_cpp_isOfClass_FUN_0040c840(pCVar2,"CTommyGun"),
               iVar4 != 0)) {
              CStack_78.z = (pCVar2->location).position.x - *local_24;
              aCStack_6c[0].x = (pCVar2->location).position.y - local_24[1];
              aCStack_6c[0].y = (pCVar2->location).position.z - local_24[2];
              CStack_9c.z = CStack_78.z;
              afStack_90[(uint)bVar8 * -2] = *(float *)((int)aCStack_6c + (uint)bVar8 * -8);
              afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                   *(float *)((int)aCStack_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4);
              afStack_90[0] = afStack_90[0] * afStack_90[0] * afStack_90[0] * afStack_90[0];
              fVar9 = SQRT(afStack_90[1] * afStack_90[1] +
                           CStack_9c.z * CStack_9c.z + afStack_90[0] * afStack_90[0]);
              if (((float)5 <= fVar9) && ((int)fVar9 < 0x41700001)) {
                *(CDemonActor **)(&stack0xfffffefc + (int)local_18) = pCVar2;
                local_18 = (float)((int)local_18 + 4);
                CStack_30.z = (float)((int)&((CVector3f *)CStack_30.z)->x + 1);
                if (0x27 < (int)local_18) break;
              }
            }
            local_20 = local_20 + 1;
            local_1c = (float)((int)local_1c + 4);
          }
          if (0 < (int)CStack_30.y) {
            iVar4 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,(int)CStack_30.y + -1);
            pCVar2 = *(CDemonActor **)(&stack0xfffffef8 + iVar4 * 4);
            this_ptr->weapon_approach_timer = -40.0;
            this_ptr->target_weapon = pCVar2;
            this_ptr->ai_idle_counter = this_ptr->ai_idle_counter + 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,1,1);
            return 1;
          }
        }
        else {
          pCVar2 = (*((pCVar2->vtable)._ub)->getCarrier)(pCVar2);
          if (pCVar2 != (CDemonActor *)0x0) {
            this_ptr->target_weapon = (CDemonActor *)0x0;
            this_ptr->weapon_approach_timer = 0.0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,1,1);
            return 0;
          }
          fVar9 = (pCVar5->position).x - (this_ptr->target_weapon->location).position.x;
          fVar11 = (this_ptr->base).base.base.location.position.z -
                   (this_ptr->target_weapon->location).position.z;
          fVar9 = (float)5 -
                  SQRT(fVar11 * fVar11 + fVar9 * fVar9) * (float)0.33333333333333298;
          if (fVar9 < 1.0) {
            fVar9 = 1.0;
          }
          fVar9 = delta_time * fVar9 + this_ptr->weapon_approach_timer;
          iVar4 = -1;
          this_ptr->weapon_approach_timer = fVar9;
          if ((fVar9 < 0.0) &&
             (iVar3 = (*((this_ptr->target_weapon->vtable)._ub)->canPickup)
                                (this_ptr->target_weapon,(CDemonActor *)this_ptr), iVar3 == 3)) {
            pCVar2 = this_ptr->target_weapon;
            (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,in_stack_fffffefc);
            scalar = &local_1c;
            puVar6 = auStack_b4;
            puVar7 = (uint *)&stack0xffffff2c;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
              puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
            }
            local_1c = 0.5;
            core_bodypart_cpp_addVector_FUN_00417ba0(&CStack_cc,&CStack_c0,&CStack_9c);
            CStack_48.x = CStack_9c.x;
            *(float *)((int)&CStack_48 + (uint)bVar8 * -8 + 4) = afStack_90[(uint)bVar8 * -2 + -2];
            *(float *)((int)&CStack_48 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -1];
            core_bodypart_cpp_scaleVector_FUN_00417b20(&CStack_48,scalar,&CStack_54);
            pCVar10 = &CStack_30;
            afStack_90[0] = CStack_54.x;
            afStack_90[(uint)bVar8 * -2 + 1] = *(float *)((int)&CStack_54 + (uint)bVar8 * -8 + 4);
            afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2] =
                 *(float *)((int)&CStack_54 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
            afStack_90[2] = CStack_cc.z + (float)0.40000000000000002;
            CStack_30.x = afStack_90[0];
            *(float *)((int)&CStack_30 + (uint)bVar8 * -8 + 4) = afStack_90[(uint)bVar8 * -2 + 1];
            *(float *)((int)&CStack_30 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4 + 8) =
                 afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2];
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(pCVar2,pCVar10,&CStack_3c);
            fVar11 = 0.034906585;
            fVar9 = 0.3;
            CStack_78.y = 0.0;
            CStack_78.z = 0.0;
            pCVar10 = &CStack_78;
            path_map = (CPathMap *)0x0;
            aCStack_6c[0].x = CStack_3c.x;
            *(uint *)((int)aCStack_6c + (uint)bVar8 * -8 + 4) =
                 *(uint *)((int)&CStack_3c + (uint)bVar8 * -8 + 4);
            *(uint *)((int)aCStack_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 *(uint *)((int)&CStack_3c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
            CStack_78.x = 1.5;
            iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                              ((CCharacter *)this_ptr,aCStack_6c,path_map,pCVar10,fVar9,fVar11);
          }
          this_ptr_00 = &(this_ptr->base).base.model;
          if (-1 < iVar4) {
            if (iVar4 < 1) {
              return 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,7,1);
            return 1;
          }
          this_ptr->target_weapon = (CDemonActor *)0x0;
          this_ptr->weapon_approach_timer = 20.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,1,1);
        }
      }
    }
  }
  return 0;
}
