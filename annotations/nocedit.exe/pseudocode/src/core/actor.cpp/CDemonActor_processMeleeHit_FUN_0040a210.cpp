// Name: core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210
// Address: 0040a210
// Address Range: [[0040a210, 0040abb6]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor * this_ptr, int hit_type)

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor *this_ptr,int hit_type)

{
  CBoundingBox3D *pCVar1;
  CVector3f *pCVar2;
  CDemonActor *pCVar3;
  int iVar4;
  CGlass *this_ptr_00;
  int extraout_EAX;
  float fVar5;
  CDemonActor *pCVar6;
  int extraout_EAX_00;
  BADSPACEBASE *in_ESP;
  CDemonActor *unaff_EBP;
  double dVar7;
  CDemonActor *unaff_retaddr;
  SDamageInfo *damage_info;
  CDemonActor *pCVar8;
  float in_stack_fffffd78;
  float in_stack_fffffdac;
  SDamageInfo SStack_250;
  byte auStack_214 [32];
  byte auStack_1f4 [40];
  char acStack_1cc [8];
  CDemonActor *pCStack_1c4;
  CDemonActor *pCStack_1c0;
  byte auStack_1bc [12];
  CVector3f CStack_1b0;
  byte auStack_1a4 [8];
  SDamageInfo SStack_19c;
  float fStack_15c;
  byte auStack_158 [28];
  byte auStack_13c [48];
  CBoundingBox3D CStack_10c;
  CBoundingBox3D CStack_f0;
  byte auStack_d8 [8];
  CVector3f local_d0;
  byte auStack_c4 [8];
  float fStack_bc;
  float fStack_b8;
  CVector3f CStack_b4;
  float fStack_a8;
  byte auStack_a4 [24];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  SDamageInfo SStack_5c;
  CDemonActor *pCStack_20;
  int iStack_1c;
  int iStack_18;
  CDemonActor *pCStack_14;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x5ea);
  SStack_5c.impact_direction.x = 0.0;
  if (hit_type == 1) {
    SStack_5c.impact_direction.x = (float)hit_type;
  }
  local_d0.x = 0.0;
  local_d0.y = 0.0;
  pCVar1 = (*this_ptr->vtable->getBoundingBox)(this_ptr,&CStack_10c);
  local_d0.z = (pCVar1->max).z;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (this_ptr,(CVector3f *)auStack_c4,&local_d0);
  if ((CDemonActor *)SStack_5c.impact_direction.y == (CDemonActor *)&DAT_00000001) {
    local_d0.x = -3.0;
    auStack_d8._0_4_ = 0.0;
    auStack_d8._4_4_ = 0.0;
    pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (this_ptr,(CVector3f *)(auStack_a4 + 8),(CVector3f *)auStack_d8);
    fStack_8c = fStack_bc + pCVar2->x;
    fStack_88 = fStack_b8 + pCVar2->y;
    fStack_84 = CStack_b4.x + pCVar2->z;
    if (&CStack_b4.y != &fStack_8c) {
      CStack_b4.y = fStack_8c;
      CStack_b4.z = fStack_88;
      fStack_a8 = fStack_84;
    }
  }
  damage_info = &SStack_5c;
  auStack_a4._0_4_ = 0.0;
  auStack_a4._4_4_ = 0.0;
  auStack_a4._8_4_ = 1.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (this_ptr,(CVector3f *)damage_info,(CVector3f *)auStack_a4);
  pCVar8 = (CDemonActor *)0x40a389;
  SStack_5c.wielder = (*this_ptr->vtable->getCarrier)(this_ptr);
  if ((CDemonActor *)SStack_5c.impact_direction.x == (CDemonActor *)0x0) {
    SStack_5c.ammo_type = (int)SStack_5c.impact_direction.x;
    SStack_5c.damage_type = (int)SStack_5c.impact_direction.x;
    for (; (int)SStack_5c.impact_direction.x < (int)g_CDemonSetPtr->actor_list_ptr;
        SStack_5c.impact_direction.x = (float)((char *)SStack_5c.impact_direction.x + 1)) {
      SStack_5c.damage_type =
           *(int *)(g_CDemonSetPtr->actor_list_data + (int)SStack_5c.impact_direction.z);
      if ((this_ptr != (CDemonActor *)SStack_5c.damage_type) &&
         ((float)SStack_5c.damage_type != SStack_5c.weapon_damage_modifier)) {
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           ((CDemonActor *)SStack_5c.damage_type,g_CCharacterClassInfo.name_hash);
        if (pCVar3 == (CDemonActor *)0x0) {
          pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (SStack_5c.attacker,g_CTriggerClassInfo.name_hash);
          if (pCVar3 == (CDemonActor *)0x0) {
            this_ptr_00 = (CGlass *)
                          core_actor_cpp_castToClassHash_FUN_0040c790
                                    (SStack_5c.wielder,g_CGlassClassInfo.name_hash);
            if (this_ptr_00 != (CGlass *)0x0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)this_ptr_00,&CStack_7c,(CVector3f *)auStack_c4);
              pCVar1 = (*((this_ptr_00->base).vtable)->getBoundingBox)
                                 ((CDemonActor *)this_ptr_00,&CStack_f0);
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
                                (pCVar1,(CVector3f *)damage_info,(float)pCVar8);
              if (iVar4 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffda4);
                (*this_ptr->vtable->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffda8,
                           (CDemonActor *)this_ptr_00);
                (*this_ptr->vtable->playAttackHitEffects)
                          (this_ptr,hit_type,&SStack_250,(CDemonActor *)this_ptr_00);
                core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(this_ptr_00);
                if (extraout_EAX != 0) {
                  core_glass_cpp_CGlass_shatter_FUN_004eaef0
                            (this_ptr_00,(CVector3f *)(auStack_d8 + 4));
                }
              }
            }
          }
          else {
            iVar4 = core_trigger_cpp_FUN_005e0ac0();
            if (iVar4 != 0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (pCVar3,&CStack_70,(CVector3f *)auStack_c4);
              pCVar1 = (*pCVar3->vtable->getBoundingBox)
                                 (pCVar3,(CBoundingBox3D *)(auStack_13c + 0x1c));
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
                                (pCVar1,(CVector3f *)damage_info,(float)pCVar8);
              if (iVar4 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffd68);
                (*this_ptr->vtable->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffd6c,pCVar3);
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (g_CConsolePtr,"%s causing %5.2f damage to %s\n",this_ptr,
                           (double)in_stack_fffffd78,pCVar3);
                core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
                damage_info = (SDamageInfo *)&stack0xfffffd7c;
                (*this_ptr->vtable->playAttackHitEffects)(this_ptr,hit_type,damage_info,pCVar3);
                pCVar8 = pCVar3;
              }
            }
          }
        }
        else if ((((CDemonActor *)SStack_5c.damage_type == (CDemonActor *)0x0) ||
                 (iVar4 = (*pCVar3->vtable[1].renderOpaque)(pCVar3), iVar4 == 0)) ||
                (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(SStack_5c.wielder,"CHero"),
                iVar4 == 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_1a4);
          (*this_ptr->vtable->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_1a4 + 4),pCVar3);
          (*pCVar3->vtable[1].playAmbientSound)(pCVar3,auStack_c4);
          if (0.0 < (double)SStack_19c.damage_amount) {
            dVar7 = crt_math_c_round_FUN_005fe6b0
                              ((double)SStack_19c.damage_amount * 0.5 + 1.0);
            iStack_18 = (int)ROUND(dVar7);
            core_gore_cpp_FUN_004edbb0();
            (*this_ptr->vtable->playAttackHitEffects)(this_ptr,hit_type,&SStack_19c,pCVar3);
          }
        }
      }
      SStack_5c.impact_direction.z = (float)((int)SStack_5c.impact_direction.z + 4);
    }
  }
  if (SStack_5c.impact_point.y == 1.4013e-45) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr);
    core_setcolid_cpp_CDemonSet_FUN_00574170(g_CDemonSetPtr);
    if (SStack_5c.wielder != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,SStack_5c.wielder);
    }
    SStack_5c.damage_type = 0;
    while( true ) {
      fVar5 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                        (g_CDemonSetPtr,&CStack_b4,(CVector3f *)(auStack_c4 + 4));
      dVar7 = (double)fVar5;
      if ((dVar7 < 0.0) || (1.0 < dVar7)) break;
      pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
      if ((pCVar8 != (CDemonActor *)0x0) &&
         (iVar4 = (*pCVar8->vtable[1].hasCollision)
                            (pCVar8,(SCollisionInfo *)((ulonglong)dVar7 >> 0x20)), 0 < iVar4)) {
        pCVar8 = (CDemonActor *)0x0;
      }
      core_actor_cpp_castToClassHash_FUN_0040c790
                (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
      SStack_5c.attacker = pCVar3;
      pCStack_20 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
      pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
      if (pCVar8 == (CDemonActor *)0x0) {
        if (this_ptr == (CDemonActor *)0x0) {
          if (unaff_retaddr == (CDemonActor *)0x0) {
            if (iStack_1c == 0) {
              if (pCVar6 == (CDemonActor *)0x0) {
                return 0;
              }
              core_flamecan_cpp_FUN_004cb340();
            }
            else {
              core_crate_cpp_FUN_00448a70();
            }
          }
          else {
            iVar4 = core_trigger_cpp_FUN_005e0ac0();
            if (iVar4 != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)(auStack_158 + 0x18));
              (**(code **)(iRam00000154 + 0x74))
                        ((CDemonActor *)0x0,hit_type,(SDamageInfo *)auStack_13c,unaff_retaddr);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s causing %5.2f damage to %s\n",0,(double)fStack_15c,
                         unaff_retaddr);
              core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
              (**(code **)(iRam00000154 + 0x78))
                        ((CDemonActor *)0x0,hit_type,(SDamageInfo *)auStack_158,unaff_EBP);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                      (g_CDemonSetPtr,(CDemonActor *)SStack_5c.impact_direction.y);
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_1bc);
          (*this_ptr->vtable->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_1bc + 4),(CDemonActor *)hit_type);
          (*this_ptr->vtable->playAttackHitEffects)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_1f4 + 0x1c),(CDemonActor *)hit_type);
          core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0((CGlass *)hit_type);
          if (extraout_EAX_00 == 0) {
            return 0;
          }
          core_glass_cpp_CGlass_shatter_FUN_004eaef0
                    ((CGlass *)hit_type,&g_CDemonSetPtr->collision_impact_position);
        }
      }
      else if (((pCVar3 == (CDemonActor *)0x0) ||
               (iVar4 = (*pCVar8->vtable[1].renderOpaque)(pCVar8), iVar4 == 0)) ||
              (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(SStack_5c.wielder,"CHero"),
              iVar4 == 0)) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)(auStack_214 + 0x1c));
        auStack_1f4._0_4_ = g_CDemonSetPtr->field11_0x14d148;
        (*this_ptr->vtable->fillAttackDamageInfo)
                  (this_ptr,hit_type,(SDamageInfo *)auStack_1f4,pCVar8);
        SStack_5c.impact_force =
             (g_CDemonSetPtr->collision_result_vec2).x - (g_CDemonSetPtr->collision_result_vec1).x;
        SStack_5c.impact_direction.x =
             (g_CDemonSetPtr->collision_result_vec2).y - (g_CDemonSetPtr->collision_result_vec1).y;
        SStack_5c.impact_direction.y =
             (g_CDemonSetPtr->collision_result_vec2).z - (g_CDemonSetPtr->collision_result_vec1).z;
        fVar5 = (float)10 /
                SQRT(SStack_5c.impact_direction.y * SStack_5c.impact_direction.y +
                     SStack_5c.impact_force * SStack_5c.impact_force +
                     SStack_5c.impact_direction.x * SStack_5c.impact_direction.x);
        pCStack_14 = (CDemonActor *)(SStack_5c.impact_force * fVar5);
        unaff_EBP = (CDemonActor *)(SStack_5c.impact_direction.x * fVar5);
        if (&pCStack_1c4 != &pCStack_14) {
          pCStack_1c4 = pCStack_14;
          pCStack_1c0 = unaff_EBP;
          auStack_1bc._0_4_ = (CDemonActor *)(SStack_5c.impact_direction.y * fVar5);
        }
        pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (pCVar8,(CVector3f *)&stack0xfffffff8,
                            &g_CDemonSetPtr->collision_impact_position);
        if (&CStack_1b0 != pCVar2) {
          CStack_1b0.x = pCVar2->x;
          CStack_1b0.y = pCVar2->y;
          CStack_1b0.z = pCVar2->z;
        }
        (*pCVar8->vtable[1].playAmbientSoundWithVolume)(pCVar8,acStack_1cc,in_stack_fffffdac);
        (*this_ptr->vtable->playAttackHitEffects)
                  (this_ptr,hit_type,(SDamageInfo *)auStack_214,pCVar8);
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
      }
      SStack_5c.damage_type = SStack_5c.damage_type + 1;
      if (3 < SStack_5c.damage_type) {
        return 0;
      }
    }
  }
  return 0;
}
