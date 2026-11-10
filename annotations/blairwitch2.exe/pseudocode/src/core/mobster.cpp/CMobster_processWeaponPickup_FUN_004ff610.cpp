// Name: core_mobster.cpp_CMobster_processWeaponPickup_FUN_004ff610
// Address: 004ff610
// Address Range: [[004ff610, 004ffaf7]]
// Convention: __cdecl
// Signature: int __cdecl core_mobster_cpp_CMobster_processWeaponPickup_FUN_004ff610(CMobster *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mobster_cpp_CMobster_processWeaponPickup_FUN_004ff610(CMobster *this_ptr,float delta_time)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  CDeformableModelInstance *this_ptr_00;
  int iVar4;
  byte *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_1084 [27];
  float *apfStackY_1018 [959];
  CPathMap *path_map;
  float fVar9;
  CVector3f *direction;
  CBoundingBox3D *in_stack_fffffefc;
  float fVar10;
  float fStack_c4;
  uint auStack_b4 [6];
  uint uStack_9c;
  float afStack_98 [8];
  CVector3f CStack_78;
  CVector3f aCStack_6c [2];
  float fStack_54;
  float afStack_50 [5];
  float fStack_3c;
  float fStack_30;
  int local_2c;
  float *local_28 [2];
  int local_20;
  int local_1c;
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
    if ((*(int *)(&(this_ptr->base).base.model.field_0x2140 +
                 *(int *)&(this_ptr->base).base.field_0x2694 * 4) != 0) &&
       (*(int *)&(this_ptr->base).base.field_0x2698 == 0)) {
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
        puVar5 = &(this_ptr->base).base.base.field_0x20;
        if (pCVar2 == (CDemonActor *)0x0) {
          local_2c = 0;
          local_28[1] = (float *)0x0;
          local_20 = 0;
          local_1c = 0;
          local_28[0] = (float *)puVar5;
          while ((int)local_28[1] < g_CDemonSetPtr->actor_count) {
            pCVar2 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + local_20);
            pCVar1 = (*((pCVar2->vtable)._ub)->getCarrier)(pCVar2);
            if ((pCVar1 == (CDemonActor *)0x0) &&
               (iVar4 = core_actor_cpp_isOfClass_FUN_0040c840(pCVar2,"@CTommyGun" + 1),
               iVar4 != 0)) {
              CStack_78.z = *(float *)&pCVar2->field_0x20 - *local_28[1];
              aCStack_6c[0].x = *(float *)&pCVar2->field_0x24 - local_28[1][1];
              aCStack_6c[0].y = *(float *)&pCVar2->field_0x28 - local_28[1][2];
              afStack_98[1] = CStack_78.z;
              afStack_98[(uint)bVar8 * -2 + 2] = *(float *)((int)aCStack_6c + (uint)bVar8 * -8);
              *(uint *)((int)aCStack_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -0x20) =
                   *(uint *)((int)aCStack_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4);
              afStack_98[2] = afStack_98[2] * afStack_98[2] * afStack_98[2] * afStack_98[2];
              fVar9 = SQRT(afStack_98[3] * afStack_98[3] +
                           afStack_98[1] * afStack_98[1] + afStack_98[2] * afStack_98[2]);
              if (((float)_DAT_005dee3d <= fVar9) && ((int)fVar9 < 0x41700001)) {
                *(CDemonActor **)(&stack0xfffffefc + (int)local_18) = pCVar2;
                local_18 = (float)((int)local_18 + 4);
                local_28[0] = (float *)((int)local_28[0] + 1);
                if (0x27 < (int)local_18) break;
              }
            }
            local_20 = local_20 + 1;
            local_1c = local_1c + 4;
          }
          if (0 < local_2c) {
            iVar4 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,local_2c + -1);
            pCVar2 = *(CDemonActor **)(&stack0xfffffef8 + iVar4 * 4);
            this_ptr->weapon_approach_timer = -40.0;
            this_ptr->target_weapon = pCVar2;
            this_ptr->ai_idle_counter = this_ptr->ai_idle_counter + 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&(this_ptr->base).base.model,1,1);
            return 1;
          }
        }
        else {
          pCVar2 = (*((pCVar2->vtable)._ub)->getCarrier)(pCVar2);
          if (pCVar2 != (CDemonActor *)0x0) {
            this_ptr->target_weapon = (CDemonActor *)0x0;
            this_ptr->weapon_approach_timer = 0.0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&(this_ptr->base).base.model,1,1);
            return 0;
          }
          fVar9 = *(float *)puVar5 - *(float *)&this_ptr->target_weapon->field_0x20;
          fVar10 = *(float *)&(this_ptr->base).base.base.field_0x28 -
                   *(float *)&this_ptr->target_weapon->field_0x28;
          fVar9 = (float)_DAT_005dee3d -
                  SQRT(fVar10 * fVar10 + fVar9 * fVar9) * (float)_DAT_005dee35;
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
            core_bodypart_cpp_FUN_00417ba0();
            afStack_50[2] = (float)uStack_9c;
            afStack_50[(uint)bVar8 * -2 + 3] = afStack_98[(uint)bVar8 * -2];
            afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                 afStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            core_bodypart_cpp_FUN_00417b20();
            afStack_98[2] = fStack_54;
            *(float *)((int)aCStack_6c + (uint)bVar8 * -8 + -0x20) = afStack_50[(uint)bVar8 * -2];
            afStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                 afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            afStack_98[4] = fStack_c4 + (float)_DAT_005dee45;
            fStack_30 = afStack_98[2];
            (&local_2c)[(uint)bVar8 * -2] = *(int *)((int)aCStack_6c + (uint)bVar8 * -8 + -0x20);
            local_28[(uint)bVar8 * -2 + (uint)bVar8 * -2] =
                 (float *)afStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
            core_actor_cpp_FUN_00408d70();
            fVar10 = 0.034906585;
            fVar9 = 0.3;
            CStack_78.y = 0.0;
            CStack_78.z = 0.0;
            direction = &CStack_78;
            path_map = (CPathMap *)0x0;
            aCStack_6c[0].x = fStack_3c;
            *(float *)((int)aCStack_6c + (uint)bVar8 * -8 + 4) = afStack_50[(uint)bVar8 * -2 + 6];
            *(float *)((int)aCStack_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
            CStack_78.x = 1.5;
            iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                              ((CCharacter *)this_ptr,aCStack_6c,path_map,direction,fVar9,fVar10);
          }
          this_ptr_00 = &(this_ptr->base).base.model;
          if (-1 < iVar4) {
            if (iVar4 < 1) {
              return 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)this_ptr_00,7,1);
            return 1;
          }
          this_ptr->target_weapon = (CDemonActor *)0x0;
          this_ptr->weapon_approach_timer = 20.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr_00,1,1);
        }
      }
    }
  }
  return 0;
}
