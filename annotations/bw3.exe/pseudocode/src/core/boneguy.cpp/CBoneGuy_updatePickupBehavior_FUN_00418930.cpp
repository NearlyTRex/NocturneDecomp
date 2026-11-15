// Name: core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_00418930
// Address: 00418930
// Address Range: [[00418930, 00418f50]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_00418930(CBoneGuy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_00418930(CBoneGuy *this_ptr,float delta_time)

{
  CConsole *this_ptr_00;
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  int iVar4;
  CDeformableModelInstance *this_ptr_01;
  int unaff_ESI;
  float *pfVar5;
  uint *puVar6;
  CVector3f *pCVar7;
  uint *puVar8;
  byte bVar9;
  float afStackY_10a0 [972];
  CPathMap *path_map;
  CDemonActor *in_stack_fffffeac;
  float fVar10;
  float *pfVar11;
  float max_distance;
  uint auStack_120 [2];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  uint auStack_100 [6];
  CVector3f CStack_e8;
  CVector3f CStack_dc;
  float afStack_d0 [6];
  float fStack_b8;
  float afStack_b4 [4];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  CVector3f CStack_94;
  CVector3f CStack_88;
  float fStack_7c;
  float afStack_78 [2];
  CVector3f CStack_70;
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [2];
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  byte *local_28;
  int local_24;
  float fStack_20;
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
      pCVar2 = this_ptr->pickup_target;
      CStack_34.y = (float)&(this_ptr->base).base.base.location;
      if (pCVar2 != (CDemonActor *)0x0) {
        pCVar2 = (*((pCVar2->vtable)._ub)->getCarrier)(pCVar2);
        if (pCVar2 != (CDemonActor *)0x0) {
          engine_console_cpp_CConsole_printf_FUN_00441ff0
                    (g_CConsolePtr,"?%s can't pick up %s, sombody else beat me to it!\n" + 1);
          this_ptr->pickup_target = (CDemonActor *)0x0;
          this_ptr->pickup_cooldown = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,1,1);
          return 0;
        }
        iVar4 = -1;
        if (this_ptr->pickup_cooldown < 0.0) {
          iVar3 = (*((this_ptr->pickup_target->vtable)._ub)->canPickup)
                            (this_ptr->pickup_target,(CDemonActor *)this_ptr);
          if (iVar3 == 3) {
            pCVar2 = this_ptr->pickup_target;
            (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,(CBoundingBox3D *)in_stack_fffffeac);
            fStack_20 = 0.5;
            pfVar11 = &fStack_20;
            pfVar5 = afStack_d0;
            pCVar7 = &CStack_e8;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              pCVar7->x = *pfVar5;
              pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
              pCVar7 = (CVector3f *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
            }
            core_bodypart_cpp_addVector_FUN_00416c50(&CStack_e8,&CStack_dc,&CStack_94);
            CStack_34.x = CStack_94.x;
            *(uint *)((int)&CStack_34 + (uint)bVar9 * -8 + 4) =
                 *(uint *)((int)&CStack_94 + (uint)bVar9 * -8 + 4);
            *(uint *)((int)&CStack_34 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                 *(uint *)((int)&CStack_94 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
            core_bodypart_cpp_scaleVector_FUN_00416bd0(&CStack_34,pfVar11,&CStack_4c);
            pCVar7 = &CStack_70;
            fStack_7c = CStack_4c.x;
            afStack_78[(uint)bVar9 * -2] = *(float *)((int)&CStack_4c + (uint)bVar9 * -8 + 4);
            afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                 *(float *)((int)&CStack_4c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
            afStack_78[1] = CStack_e8.z + (float)_DAT_005b703a;
            CStack_70.x = fStack_7c;
            *(float *)((int)&CStack_70 + (uint)bVar9 * -8 + 4) = afStack_78[(uint)bVar9 * -2];
            *(float *)((int)&CStack_70 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                 afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(pCVar2,pCVar7,&CStack_40);
            max_distance = 0.0;
            pCVar7 = &CStack_64;
            fVar10 = 0.0;
            path_map = (CPathMap *)0x0;
            CStack_88.x = CStack_40.x;
            *(uint *)((int)&CStack_88 + (uint)bVar9 * -8 + 4) =
                 *(uint *)((int)&CStack_40 + (uint)bVar9 * -8 + 4);
            *(uint *)((int)&CStack_88 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                 *(uint *)((int)&CStack_40 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
            CStack_64.x = 1.5;
            CStack_64.y = 0.0;
            CStack_64.z = 0.0;
            iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                              ((CCharacter *)this_ptr,&CStack_88,path_map,pCVar7,fVar10,max_distance
                              );
          }
        }
        this_ptr_01 = &(this_ptr->base).base.model;
        if (-1 < iVar4) {
          if (iVar4 < 1) {
            return 1;
          }
          engine_console_cpp_CConsole_printf_FUN_00441ff0
                    (g_CConsolePtr,"%s beginning to pickup %s\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_01->base,7,1);
          return 1;
        }
        engine_console_cpp_CConsole_printf_FUN_00441ff0
                  (g_CConsolePtr,"%s can't pick up %s, giving up!!!!\n");
        this_ptr->pickup_target = (CDemonActor *)0x0;
        this_ptr->pickup_cooldown = 20.0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_01->base,1,1);
        return 0;
      }
      local_28 = (byte *)auStack_120;
      CStack_34.z = 0.0;
      local_24 = 0;
      local_1c = (float *)0x0;
      local_18 = 0;
      while( true ) {
        if (g_CDemonSetPtr->actor_count <= local_24) break;
        pCVar2 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + (int)CStack_34.z);
        pCVar1 = (*((pCVar2->vtable)._ub)->getCarrier)(pCVar2);
        if (pCVar1 == (CDemonActor *)0x0) {
          iVar4 = (*((pCVar2->vtable)._ub)->canPickup)(pCVar2,(CDemonActor *)this_ptr);
          if (iVar4 == 3) {
            (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,(CBoundingBox3D *)in_stack_fffffeac);
            pfVar11 = local_14;
            puVar6 = auStack_100;
            puVar8 = auStack_120;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
              puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
            }
            fStack_58 = *pfVar11 - fStack_118;
            afStack_54[0] = pfVar11[1] - fStack_114;
            afStack_54[1] = pfVar11[2] - fStack_110;
            fStack_b8 = *pfVar11 - fStack_118;
            afStack_b4[(uint)bVar9 * -2] = afStack_54[(uint)bVar9 * -2];
            afStack_b4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                 afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
            if ((((fStack_b8 < 1.0) && (afStack_b4[0] < 1.0)) &&
                ((float)_DAT_005b7042 < afStack_b4[1])) && ((double)afStack_b4[1] < _DAT_005b704a))
            {
              in_stack_fffffeac = pCVar2;
              iVar4 = core_actor_cpp_isOfClass_FUN_0040c790(pCVar2,"CBodyPart");
              if (iVar4 == 0) {
                fStack_a0 = (pCVar2->location).position.x - *local_1c;
                fStack_9c = (pCVar2->location).position.y - local_1c[1];
                fStack_98 = (pCVar2->location).position.z - local_1c[2];
                afStack_b4[2] = fStack_a0;
                afStack_b4[(uint)bVar9 * -2 + 3] = afStack_b4[(uint)bVar9 * -2 + 6];
                afStack_b4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                     afStack_b4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
                afStack_b4[3] = afStack_b4[3] * afStack_b4[3] * afStack_b4[3] * afStack_b4[3];
                fVar10 = SQRT(fStack_a4 * fStack_a4 +
                              afStack_b4[2] * afStack_b4[2] + afStack_b4[3] * afStack_b4[3]);
                if (((float)_DAT_005b7032 <= fVar10) && ((int)fVar10 < 0x41700001)) {
                  *(CDemonActor **)(&stack0xfffffec0 + unaff_ESI) = pCVar2;
                  unaff_ESI = unaff_ESI + 4;
                  if (0x27 < unaff_ESI) break;
                }
              }
            }
          }
        }
        local_24 = local_24 + 1;
        CStack_34.z = (float)((int)CStack_34.z + 4);
      }
      if (0 < local_18) {
        iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,local_18 + -1);
        this_ptr->pickup_target = *(CDemonActor **)(&stack0xfffffeac + iVar4 * 4);
        this_ptr_00 = g_CConsolePtr;
        this_ptr->pickup_cooldown = -40.0;
        this_ptr->pickup_attempt_count = this_ptr->pickup_attempt_count + 1;
        engine_console_cpp_CConsole_printf_FUN_00441ff0
                  (this_ptr_00,"%s is going to try to pick up %s\n");
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
