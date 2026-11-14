// Name: core_mobster.cpp_FUN_0051e5d0
// Address: 0051e5d0
// Address Range: [[0051e5d0, 0051eab7]]
// Convention: __cdecl
// Signature: int __cdecl core_mobster_cpp_FUN_0051e5d0(CMobster *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mobster_cpp_FUN_0051e5d0(CMobster *this_ptr,float delta_time)

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
  int aiStackY_1084 [27];
  CLocation *apCStackY_1018 [959];
  CPathMap *path_map;
  float fVar9;
  CVector3f *direction;
  CBoundingBox3D *in_stack_fffffefc;
  float fVar10;
  float fStack_c4;
  uint auStack_b4 [6];
  uint uStack_9c;
  int iStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  CVector3f CStack_78;
  CVector3f aCStack_6c [2];
  float fStack_54;
  int aiStack_50 [5];
  float fStack_3c;
  float fStack_30;
  int local_2c;
  CLocation *local_28;
  float *local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar8 = 0;
  if ((this_ptr->base).is_in_combat == 0) {
    fVar9 = this_ptr->idle_timer - delta_time;
    this_ptr->idle_timer = fVar9;
    if (0.0 < fVar9) {
      this_ptr->ai_idle_counter = this_ptr->ai_idle_counter + 1;
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(5.0,10.0);
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
          local_2c = 0;
          local_24 = (float *)0x0;
          local_20 = 0;
          local_1c = 0;
          local_28 = pCVar5;
          while ((int)local_24 < g_CDemonSetPtr->actor_count) {
            pCVar2 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + local_20);
            pCVar1 = (*((pCVar2->vtable)._ub)->getCarrier)(pCVar2);
            if ((pCVar1 == (CDemonActor *)0x0) &&
               (iVar4 = core_actor_cpp_isOfClass_FUN_0040c550(pCVar2,"CTommyGun"),
               iVar4 != 0)) {
              CStack_78.z = (pCVar2->location).position.x - *local_24;
              aCStack_6c[0].x = (pCVar2->location).position.y - local_24[1];
              aCStack_6c[0].y = (pCVar2->location).position.z - local_24[2];
              fStack_94 = CStack_78.z;
              (&iStack_98)[(uint)bVar8 * -2 + 2] = *(int *)((int)aCStack_6c + (uint)bVar8 * -8);
              (&iStack_98)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3] =
                   *(int *)((int)aCStack_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4);
              fStack_90 = fStack_90 * fStack_90 * fStack_90 * fStack_90;
              fVar9 = SQRT(fStack_8c * fStack_8c + fStack_94 * fStack_94 + fStack_90 * fStack_90);
              if (((float)_DAT_005e9e8a <= fVar9) && ((int)fVar9 < 0x41700001)) {
                *(CDemonActor **)(&stack0xfffffefc + (int)local_18) = pCVar2;
                local_18 = (float)((int)local_18 + 4);
                local_28 = (CLocation *)((int)&(local_28->position).x + 1);
                if (0x27 < (int)local_18) break;
              }
            }
            local_20 = local_20 + 1;
            local_1c = local_1c + 4;
          }
          if (0 < local_2c) {
            iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,local_2c + -1);
            pCVar2 = *(CDemonActor **)(&stack0xfffffef8 + iVar4 * 4);
            this_ptr->weapon_approach_timer = -40.0;
            this_ptr->target_weapon = pCVar2;
            this_ptr->ai_idle_counter = this_ptr->ai_idle_counter + 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,1,1);
            return 1;
          }
        }
        else {
          pCVar2 = (*((pCVar2->vtable)._ub)->getCarrier)(pCVar2);
          if (pCVar2 != (CDemonActor *)0x0) {
            this_ptr->target_weapon = (CDemonActor *)0x0;
            this_ptr->weapon_approach_timer = 0.0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,1,1);
            return 0;
          }
          fVar9 = (pCVar5->position).x - (this_ptr->target_weapon->location).position.x;
          fVar10 = (this_ptr->base).base.base.location.position.z -
                   (this_ptr->target_weapon->location).position.z;
          fVar9 = (float)_DAT_005e9e8a -
                  SQRT(fVar10 * fVar10 + fVar9 * fVar9) * (float)_DAT_005e9e82;
          if (fVar9 < 1.0) {
            fVar9 = 1.0;
          }
          fVar9 = delta_time * fVar9 + this_ptr->weapon_approach_timer;
          iVar4 = -1;
          this_ptr->weapon_approach_timer = fVar9;
          if ((fVar9 < 0.0) &&
             (iVar3 = (*((this_ptr->target_weapon->vtable)._ub)->canPickup)
                                (this_ptr->target_weapon,(CDemonActor *)this_ptr), iVar3 == 3)) {
            (*((this_ptr->target_weapon->vtable)._ub)->getBoundingBox)
                      (this_ptr->target_weapon,in_stack_fffffefc);
            puVar6 = auStack_b4;
            puVar7 = (uint *)&stack0xffffff2c;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
              puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
            }
            local_1c = 0x3f000000;
            core_bodypart_cpp_FUN_0041b020();
            aiStack_50[2] = uStack_9c;
            aiStack_50[(uint)bVar8 * -2 + 3] = (&iStack_98)[(uint)bVar8 * -2];
            aiStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                 (&iStack_98)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            core_bodypart_cpp_FUN_0041afa0();
            fStack_90 = fStack_54;
            (&iStack_98)[(uint)bVar8 * -2 + 3] = aiStack_50[(uint)bVar8 * -2];
            (&iStack_98)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                 aiStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            fStack_88 = fStack_c4 + (float)_DAT_005e9e92;
            fStack_30 = fStack_90;
            (&local_2c)[(uint)bVar8 * -2] = (&iStack_98)[(uint)bVar8 * -2 + 3];
            (&local_28)[(uint)bVar8 * -2 + (uint)bVar8 * -2] =
                 (CLocation *)(&iStack_98)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
            core_actor_cpp_FUN_00408b40();
            fVar10 = 0.034906585;
            fVar9 = 0.3;
            CStack_78.y = 0.0;
            CStack_78.z = 0.0;
            direction = &CStack_78;
            path_map = (CPathMap *)0x0;
            aCStack_6c[0].x = fStack_3c;
            *(int *)((int)aCStack_6c + (uint)bVar8 * -8 + 4) = aiStack_50[(uint)bVar8 * -2 + 6];
            *(int *)((int)aCStack_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 aiStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
            CStack_78.x = 1.5;
            iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                              ((CCharacter *)this_ptr,aCStack_6c,path_map,direction,fVar9,fVar10);
          }
          this_ptr_00 = &(this_ptr->base).base.model;
          if (-1 < iVar4) {
            if (iVar4 < 1) {
              return 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,7,1);
            return 1;
          }
          this_ptr->target_weapon = (CDemonActor *)0x0;
          this_ptr->weapon_approach_timer = 20.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,1,1);
        }
      }
    }
  }
  return 0;
}
