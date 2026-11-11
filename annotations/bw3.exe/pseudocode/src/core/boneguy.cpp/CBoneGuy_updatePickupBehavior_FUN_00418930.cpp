// Name: core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_00418930
// Address: 00418930
// Address Range: [[00418930, 00418f50]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_00418930(CBoneGuy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_00418930(CBoneGuy *this_ptr,float delta_time)

{
  CConsole *pCVar1;
  float *pfVar2;
  CDemonActor *pCVar3;
  CDemonActor *pCVar4;
  int iVar5;
  int iVar6;
  CDeformableModelInstance *this_ptr_00;
  int unaff_ESI;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float afStackY_10a0 [972];
  CPathMap *path_map;
  CVector3f *direction;
  CDemonActor *in_stack_fffffeac;
  float fVar10;
  float max_distance;
  uint auStack_120 [2];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  uint auStack_100 [6];
  uint auStack_e8 [2];
  float fStack_e0;
  uint auStack_d0 [6];
  float fStack_b8;
  float afStack_b4 [4];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint uStack_94;
  CVector3f CStack_88;
  uint uStack_7c;
  float afStack_78 [5];
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [5];
  float fStack_40;
  uint uStack_34;
  CLocation *local_30;
  float local_2c;
  byte *local_28;
  int local_24;
  uint uStack_20;
  float *local_1c;
  int local_18;
  float *local_14;
  
  bVar9 = 0;
  fVar10 = this_ptr->search_timer - delta_time;
  this_ptr->search_timer = fVar10;
  if (0.0 < fVar10) {
    this_ptr->pickup_attempt_count = this_ptr->pickup_attempt_count + 1;
    local_14 = (float *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(5.0,10.0);
    this_ptr->search_timer = (float)local_14;
  }
  if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    if (this_ptr->pickup_cooldown <= 0.0) {
      pCVar4 = this_ptr->pickup_target;
      local_30 = &(this_ptr->base).base.base.location;
      if (pCVar4 != (CDemonActor *)0x0) {
        pCVar4 = (*((pCVar4->vtable)._ub)->getCarrier)(pCVar4);
        if (pCVar4 != (CDemonActor *)0x0) {
          engine_console_cpp_FUN_00441ff0
                    (g_CConsolePtr,"?%s can't pick up %s, sombody else beat me to it!\n" + 1,this_ptr,
                     this_ptr->pickup_target);
          this_ptr->pickup_target = (CDemonActor *)0x0;
          this_ptr->pickup_cooldown = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,1,1);
          return 0;
        }
        iVar6 = -1;
        if (this_ptr->pickup_cooldown < 0.0) {
          iVar5 = (*((this_ptr->pickup_target->vtable)._ub)->canPickup)
                            (this_ptr->pickup_target,(CDemonActor *)this_ptr);
          if (iVar5 == 3) {
            (*((this_ptr->pickup_target->vtable)._ub)->getBoundingBox)
                      (this_ptr->pickup_target,(CBoundingBox3D *)in_stack_fffffeac);
            uStack_20 = 0x3f000000;
            puVar7 = auStack_d0;
            puVar8 = auStack_e8;
            for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
              puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
            }
            core_bodypart_cpp_FUN_00416c50(auStack_e8);
            uStack_34 = uStack_94;
            (&local_30)[(uint)bVar9 * -2] = (CLocation *)afStack_78[(uint)bVar9 * -2 + -6];
            (&local_2c)[(uint)bVar9 * -2 + (uint)bVar9 * -2] =
                 afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -5];
            core_bodypart_cpp_FUN_00416bd0();
            uStack_7c = afStack_54[2];
            afStack_78[(uint)bVar9 * -2] = afStack_54[(uint)bVar9 * -2 + 3];
            afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                 afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
            afStack_78[1] = fStack_e0 + (float)_DAT_005b703a;
            afStack_78[2] = (float)uStack_7c;
            afStack_78[(uint)bVar9 * -2 + 3] = afStack_78[(uint)bVar9 * -2];
            afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                 afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
            core_actor_cpp_FUN_00408b80();
            max_distance = 0.0;
            direction = &CStack_64;
            fVar10 = 0.0;
            path_map = (CPathMap *)0x0;
            CStack_88.x = fStack_40;
            *(float *)((int)&CStack_88 + (uint)bVar9 * -8 + 4) = afStack_54[(uint)bVar9 * -2 + 6];
            *(float *)((int)&CStack_88 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                 afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
            CStack_64.x = 1.5;
            CStack_64.y = 0.0;
            CStack_64.z = 0.0;
            iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                              ((CCharacter *)this_ptr,&CStack_88,path_map,direction,fVar10,
                               max_distance);
          }
        }
        this_ptr_00 = &(this_ptr->base).base.model;
        if (-1 < iVar6) {
          if (iVar6 < 1) {
            return 1;
          }
          engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s beginning to pickup %s\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,7,1);
          return 1;
        }
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s can't pick up %s, giving up!!!!\n");
        this_ptr->pickup_target = (CDemonActor *)0x0;
        this_ptr->pickup_cooldown = 20.0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,1,1);
        return 0;
      }
      local_28 = (byte *)auStack_120;
      local_2c = 0.0;
      local_24 = 0;
      local_1c = (float *)0x0;
      local_18 = 0;
      while( true ) {
        if (g_CDemonSetPtr->actor_count <= local_24) break;
        pCVar4 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + (int)local_2c);
        pCVar3 = (*((pCVar4->vtable)._ub)->getCarrier)(pCVar4);
        if (pCVar3 == (CDemonActor *)0x0) {
          iVar6 = (*((pCVar4->vtable)._ub)->canPickup)(pCVar4,(CDemonActor *)this_ptr);
          if (iVar6 == 3) {
            (*((pCVar4->vtable)._ub)->getBoundingBox)(pCVar4,(CBoundingBox3D *)in_stack_fffffeac);
            pfVar2 = local_14;
            puVar7 = auStack_100;
            puVar8 = auStack_120;
            for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
              puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
            }
            fStack_58 = *pfVar2 - fStack_118;
            afStack_54[0] = pfVar2[1] - fStack_114;
            afStack_54[1] = pfVar2[2] - fStack_110;
            fStack_b8 = *pfVar2 - fStack_118;
            *(float *)((int)afStack_b4 + (uint)bVar9 * 0xfffffff8) = afStack_54[(uint)bVar9 * -2];
            *(float *)((int)afStack_b4 + ((uint)bVar9 * -2 + (uint)bVar9 * -2 + 1) * 4) =
                 afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
            if ((((fStack_b8 < 1.0) && (afStack_b4[0] < 1.0)) &&
                ((float)_DAT_005b7042 < afStack_b4[1])) && ((double)afStack_b4[1] < _DAT_005b704a))
            {
              in_stack_fffffeac = pCVar4;
              iVar6 = core_actor_cpp_isOfClass_FUN_0040c790(pCVar4,"CBodyPart");
              if (iVar6 == 0) {
                fStack_a0 = (pCVar4->location).position.x - *local_1c;
                fStack_9c = (pCVar4->location).position.y - local_1c[1];
                fStack_98 = (pCVar4->location).position.z - local_1c[2];
                afStack_b4[2] = fStack_a0;
                *(uint *)((int)afStack_b4 + ((uint)bVar9 * -2 + 3) * 4) =
                     *(uint *)((int)afStack_b4 + ((uint)bVar9 * -2 + 6) * 4);
                *(float *)((int)afStack_b4 + ((uint)bVar9 * -2 + (uint)bVar9 * -2 + 4) * 4) =
                     afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -8];
                afStack_b4[3] = afStack_b4[3] * afStack_b4[3] * afStack_b4[3] * afStack_b4[3];
                fVar10 = SQRT(fStack_a4 * fStack_a4 +
                              afStack_b4[2] * afStack_b4[2] + afStack_b4[3] * afStack_b4[3]);
                if (((float)_DAT_005b7032 <= fVar10) && ((int)fVar10 < 0x41700001)) {
                  *(CDemonActor **)(&stack0xfffffec0 + unaff_ESI) = pCVar4;
                  unaff_ESI = unaff_ESI + 4;
                  if (0x27 < unaff_ESI) break;
                }
              }
            }
          }
        }
        local_24 = local_24 + 1;
        local_2c = (float)((int)local_2c + 4);
      }
      if (0 < local_18) {
        iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,local_18 + -1);
        this_ptr->pickup_target = *(CDemonActor **)(&stack0xfffffeac + iVar6 * 4);
        pCVar1 = g_CConsolePtr;
        this_ptr->pickup_cooldown = -40.0;
        this_ptr->pickup_attempt_count = this_ptr->pickup_attempt_count + 1;
        engine_console_cpp_FUN_00441ff0
                  (pCVar1,"%s is going to try to pick up %s\n",this_ptr,this_ptr->pickup_target);
        return 1;
      }
    }
    else {
      fVar10 = this_ptr->pickup_cooldown - delta_time;
      this_ptr->pickup_cooldown = fVar10;
      if (fVar10 < 0.0) {
        this_ptr->pickup_cooldown = 0.0;
      }
    }
  }
  return 0;
}
