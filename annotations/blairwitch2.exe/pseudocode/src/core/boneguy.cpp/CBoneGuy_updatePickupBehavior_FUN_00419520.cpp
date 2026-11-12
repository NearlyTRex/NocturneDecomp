// Name: core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_00419520
// Address: 00419520
// Address Range: [[00419520, 00419b40]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_00419520(CBoneGuy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_00419520(CBoneGuy *this_ptr,float delta_time)

{
  CConsole *this_ptr_00;
  float *pfVar1;
  CDemonActor *pCVar2;
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  CDeformableModelInstance *this_ptr_01;
  int unaff_ESI;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_10a0 [972];
  CPathMap *path_map;
  CVector3f *direction;
  CDemonActor *in_stack_fffffeac;
  float fVar9;
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
  
  bVar8 = 0;
  fVar9 = this_ptr->search_timer - delta_time;
  this_ptr->search_timer = fVar9;
  if (0.0 < fVar9) {
    this_ptr->pickup_attempt_count = this_ptr->pickup_attempt_count + 1;
    local_14 = (float *)core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(5.0,10.0);
    this_ptr->search_timer = (float)local_14;
  }
  if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    if (this_ptr->pickup_cooldown <= 0.0) {
      pCVar3 = this_ptr->pickup_target;
      local_30 = &(this_ptr->base).base.base.location;
      if (pCVar3 != (CDemonActor *)0x0) {
        pCVar3 = (*((pCVar3->vtable)._ub)->getCarrier)(pCVar3);
        if (pCVar3 != (CDemonActor *)0x0) {
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"?%s can't pick up %s, sombody else beat me to it!\n" + 1);
          this_ptr->pickup_target = (CDemonActor *)0x0;
          this_ptr->pickup_cooldown = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,1,1);
          return 0;
        }
        iVar5 = -1;
        if (this_ptr->pickup_cooldown < 0.0) {
          iVar4 = (*((this_ptr->pickup_target->vtable)._ub)->canPickup)
                            (this_ptr->pickup_target,(CDemonActor *)this_ptr);
          if (iVar4 == 3) {
            (*((this_ptr->pickup_target->vtable)._ub)->getBoundingBox)
                      (this_ptr->pickup_target,(CBoundingBox3D *)in_stack_fffffeac);
            uStack_20 = 0x3f000000;
            puVar6 = auStack_d0;
            puVar7 = auStack_e8;
            for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
              puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
            }
            core_bodypart_cpp_FUN_00417ba0(auStack_e8);
            uStack_34 = uStack_94;
            (&local_30)[(uint)bVar8 * -2] = (CLocation *)afStack_78[(uint)bVar8 * -2 + -6];
            (&local_2c)[(uint)bVar8 * -2 + (uint)bVar8 * -2] =
                 afStack_78[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -5];
            core_bodypart_cpp_FUN_00417b20();
            uStack_7c = afStack_54[2];
            afStack_78[(uint)bVar8 * -2] = afStack_54[(uint)bVar8 * -2 + 3];
            afStack_78[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 afStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
            afStack_78[1] = fStack_e0 + (float)_DAT_005cc2b2;
            afStack_78[2] = (float)uStack_7c;
            afStack_78[(uint)bVar8 * -2 + 3] = afStack_78[(uint)bVar8 * -2];
            afStack_78[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                 afStack_78[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            core_actor_cpp_FUN_00408d70();
            max_distance = 0.0;
            direction = &CStack_64;
            fVar9 = 0.0;
            path_map = (CPathMap *)0x0;
            CStack_88.x = fStack_40;
            *(float *)((int)&CStack_88 + (uint)bVar8 * -8 + 4) = afStack_54[(uint)bVar8 * -2 + 6];
            *(float *)((int)&CStack_88 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 afStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
            CStack_64.x = 1.5;
            CStack_64.y = 0.0;
            CStack_64.z = 0.0;
            iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                              ((CCharacter *)this_ptr,&CStack_88,path_map,direction,fVar9,
                               max_distance);
          }
        }
        this_ptr_01 = &(this_ptr->base).base.model;
        if (-1 < iVar5) {
          if (iVar5 < 1) {
            return 1;
          }
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s beginning to pickup %s\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_01->base,7,1);
          return 1;
        }
        engine_console_cpp_CConsole_printf_FUN_00436710
                  (g_CConsolePtr,"%s can't pick up %s, giving up!!!!\n");
        this_ptr->pickup_target = (CDemonActor *)0x0;
        this_ptr->pickup_cooldown = 20.0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_01->base,1,1);
        return 0;
      }
      local_28 = (byte *)auStack_120;
      local_2c = 0.0;
      local_24 = 0;
      local_1c = (float *)0x0;
      local_18 = 0;
      while( true ) {
        if (g_CDemonSetPtr->actor_count <= local_24) break;
        pCVar3 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + (int)local_2c);
        pCVar2 = (*((pCVar3->vtable)._ub)->getCarrier)(pCVar3);
        if (pCVar2 == (CDemonActor *)0x0) {
          iVar5 = (*((pCVar3->vtable)._ub)->canPickup)(pCVar3,(CDemonActor *)this_ptr);
          if (iVar5 == 3) {
            (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,(CBoundingBox3D *)in_stack_fffffeac);
            pfVar1 = local_14;
            puVar6 = auStack_100;
            puVar7 = auStack_120;
            for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
              puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
            }
            fStack_58 = *pfVar1 - fStack_118;
            afStack_54[0] = pfVar1[1] - fStack_114;
            afStack_54[1] = pfVar1[2] - fStack_110;
            fStack_b8 = *pfVar1 - fStack_118;
            *(float *)((int)afStack_b4 + (uint)bVar8 * 0xfffffff8) = afStack_54[(uint)bVar8 * -2];
            *(float *)((int)afStack_b4 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4) =
                 afStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            if ((((fStack_b8 < 1.0) && (afStack_b4[0] < 1.0)) &&
                ((float)_DAT_005cc2ba < afStack_b4[1])) && ((double)afStack_b4[1] < _DAT_005cc2c2))
            {
              in_stack_fffffeac = pCVar3;
              iVar5 = core_actor_cpp_isOfClass_FUN_0040c840(pCVar3,"CBodyPart");
              if (iVar5 == 0) {
                fStack_a0 = (pCVar3->location).position.x - *local_1c;
                fStack_9c = (pCVar3->location).position.y - local_1c[1];
                fStack_98 = (pCVar3->location).position.z - local_1c[2];
                afStack_b4[2] = fStack_a0;
                *(uint *)((int)afStack_b4 + ((uint)bVar8 * -2 + 3) * 4) =
                     *(uint *)((int)afStack_b4 + ((uint)bVar8 * -2 + 6) * 4);
                *(float *)((int)afStack_b4 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 4) * 4) =
                     afStack_78[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -8];
                afStack_b4[3] = afStack_b4[3] * afStack_b4[3] * afStack_b4[3] * afStack_b4[3];
                fVar9 = SQRT(fStack_a4 * fStack_a4 +
                             afStack_b4[2] * afStack_b4[2] + afStack_b4[3] * afStack_b4[3]);
                if (((float)_DAT_005cc2aa <= fVar9) && ((int)fVar9 < 0x41700001)) {
                  *(CDemonActor **)(&stack0xfffffec0 + unaff_ESI) = pCVar3;
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
        iVar5 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,local_18 + -1);
        this_ptr->pickup_target = *(CDemonActor **)(&stack0xfffffeac + iVar5 * 4);
        this_ptr_00 = g_CConsolePtr;
        this_ptr->pickup_cooldown = -40.0;
        this_ptr->pickup_attempt_count = this_ptr->pickup_attempt_count + 1;
        engine_console_cpp_CConsole_printf_FUN_00436710
                  (this_ptr_00,"%s is going to try to pick up %s\n");
        return 1;
      }
    }
    else {
      fVar9 = this_ptr->pickup_cooldown - delta_time;
      this_ptr->pickup_cooldown = fVar9;
      if (fVar9 < 0.0) {
        this_ptr->pickup_cooldown = 0.0;
      }
    }
  }
  return 0;
}
