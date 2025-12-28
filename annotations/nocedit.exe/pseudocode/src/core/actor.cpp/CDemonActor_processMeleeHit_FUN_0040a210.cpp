// Name: core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210
// Address: 0040a210
// Address Range: [[0040a210, 0040abb6]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor * this_ptr, int hit_type)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl
core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor *this_ptr,int hit_type)

{
  CBoundingBox3D *pCVar1;
  CVector3f *pCVar2;
  CDemonActor *pCVar3;
  int iVar4;
  CGlass *this_ptr_00;
  int extraout_EAX;
  CDemonActor *pCVar5;
  CDemonActor *pCVar6;
  int extraout_EAX_00;
  BADSPACEBASE *in_ESP;
  double dVar7;
  CDemonActor *unaff_retaddr;
  float fVar8;
  float in_stack_fffffd78;
  CDemonActor *in_stack_fffffdac;
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
  byte auStack_15c [32];
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
  CVector3f CStack_5c;
  int iStack_4c;
  float local_44;
  CDemonActor *pCStack_40;
  CDemonActor *pCStack_3c;
  int iStack_38;
  CDemonActor *pCStack_34;
  CDemonActor *pCStack_30;
  CDemonActor *pCStack_2c;
  CDemonActor *pCStack_28;
  CDemonActor *pCStack_24;
  CDemonActor *pCStack_20;
  int iStack_1c;
  int iStack_18;
  CDemonActor *pCStack_14;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x5ea);
  pCStack_40 = (CDemonActor *)0x0;
  if (hit_type == 1) {
    pCStack_40 = (CDemonActor *)hit_type;
  }
  local_d0.x = 0.0;
  local_d0.y = 0.0;
  pCVar1 = (*this_ptr->vtable->getBoundingBox)(this_ptr,&CStack_10c);
  local_d0.z = (pCVar1->max).z;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (this_ptr,(CVector3f *)auStack_c4,&local_d0);
  if (pCStack_3c == (CDemonActor *)&DAT_00000001) {
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
  pCVar5 = (CDemonActor *)&CStack_5c;
  auStack_a4._0_4_ = 0.0;
  auStack_a4._4_4_ = 0.0;
  auStack_a4._8_4_ = 1.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (this_ptr,(CVector3f *)pCVar5,(CVector3f *)auStack_a4);
  fVar8 = 5.936137e-39;
  pCStack_24 = (*this_ptr->vtable->getCarrier)(this_ptr);
  if (pCStack_40 == (CDemonActor *)0x0) {
    pCStack_34 = pCStack_40;
    pCStack_2c = pCStack_40;
    for (; (int)pCStack_40 < (int)g_CDemonSetPtr->actor_list_ptr;
        pCStack_40 = (CDemonActor *)(pCStack_40->actor_name + 1)) {
      pCStack_2c = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iStack_38);
      if ((this_ptr != pCStack_2c) && (pCStack_2c != pCStack_30)) {
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCStack_2c,g_CCharacterClassInfo.name_hash);
        if (pCVar3 == (CDemonActor *)0x0) {
          pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (pCStack_28,g_CTriggerClassInfo.name_hash);
          if (pCVar3 == (CDemonActor *)0x0) {
            this_ptr_00 = (CGlass *)
                          core_actor_cpp_castToClassHash_FUN_0040c790
                                    (pCStack_24,g_CGlassClassInfo.name_hash);
            if (this_ptr_00 != (CGlass *)0x0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)this_ptr_00,&CStack_7c,(CVector3f *)auStack_c4);
              pCVar1 = (*((this_ptr_00->base).vtable)->getBoundingBox)
                                 ((CDemonActor *)this_ptr_00,&CStack_f0);
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
                                (pCVar1,(CVector3f *)pCVar5,fVar8);
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
                                (pCVar1,(CVector3f *)pCVar5,fVar8);
              if (iVar4 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffd68);
                (*this_ptr->vtable->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffd6c,pCVar3);
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (g_CConsolePtr,"%s causing %5.2f damage to %s\n",this_ptr,
                           (double)in_stack_fffffd78,pCVar3);
                core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
                (*this_ptr->vtable->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffd78,pCVar3);
                pCVar5 = pCVar3;
              }
            }
          }
        }
        else if (((pCStack_2c == (CDemonActor *)0x0) ||
                 (iVar4 = (*pCVar3->vtable[1].renderOpaque)(pCVar3), iVar4 == 0)) ||
                (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCStack_24,"CHero"),
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
      iStack_38 = iStack_38 + 4;
    }
  }
  if (iStack_4c == 1) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr);
    core_setcolid_cpp_CDemonSet_FUN_00574170(g_CDemonSetPtr);
    if (pCStack_24 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_24);
    }
    pCStack_2c = (CDemonActor *)0x0;
    while( true ) {
      fVar8 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                        (g_CDemonSetPtr,&CStack_b4,(CVector3f *)(auStack_c4 + 4));
      dVar7 = (double)fVar8;
      if ((dVar7 < 0.0) || (1.0 < dVar7)) break;
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
      if ((pCVar5 != (CDemonActor *)0x0) &&
         (iVar4 = (*pCVar5->vtable[1].hasCollision)
                            (pCVar5,(SCollisionInfo *)((ulonglong)dVar7 >> 0x20)), 0 < iVar4)) {
        pCVar5 = (CDemonActor *)0x0;
      }
      core_actor_cpp_castToClassHash_FUN_0040c790
                (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
      pCStack_28 = pCVar3;
      pCStack_20 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
      pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
      if (pCVar5 == (CDemonActor *)0x0) {
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
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)(auStack_15c + 0x1c));
              (**(code **)(iRam00000154 + 0x74))
                        ((CDemonActor *)0x0,hit_type,(SDamageInfo *)auStack_13c,unaff_retaddr);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s causing %5.2f damage to %s\n",0,
                         (double)(float)auStack_15c._0_4_,unaff_retaddr);
              core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
              (**(code **)(iRam00000154 + 0x78))
                        ((CDemonActor *)0x0,hit_type,(SDamageInfo *)auStack_15c,pCStack_14);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_3c);
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
               (iVar4 = (*pCVar5->vtable[1].renderOpaque)(pCVar5), iVar4 == 0)) ||
              (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCStack_24,"CHero"),
              iVar4 == 0)) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)(auStack_214 + 0x1c));
        auStack_1f4._0_4_ = g_CDemonSetPtr->field11_0x14d148;
        (*this_ptr->vtable->fillAttackDamageInfo)
                  (this_ptr,hit_type,(SDamageInfo *)auStack_1f4,pCVar5);
        local_44 = (g_CDemonSetPtr->collision_result_vec2).x -
                   (g_CDemonSetPtr->collision_result_vec1).x;
        pCStack_40 = (CDemonActor *)
                     ((g_CDemonSetPtr->collision_result_vec2).y -
                     (g_CDemonSetPtr->collision_result_vec1).y);
        pCStack_3c = (CDemonActor *)
                     ((g_CDemonSetPtr->collision_result_vec2).z -
                     (g_CDemonSetPtr->collision_result_vec1).z);
        fVar8 = (float)10 /
                SQRT((float)pCStack_3c * (float)pCStack_3c +
                     local_44 * local_44 + (float)pCStack_40 * (float)pCStack_40);
        pCStack_14 = (CDemonActor *)(local_44 * fVar8);
        if (&pCStack_1c4 != &pCStack_14) {
          pCStack_1c4 = pCStack_14;
          pCStack_1c0 = (CDemonActor *)((float)pCStack_40 * fVar8);
          auStack_1bc._0_4_ = (CDemonActor *)((float)pCStack_3c * fVar8);
        }
        pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (pCVar5,(CVector3f *)&stack0xfffffff8,
                            &g_CDemonSetPtr->collision_impact_position);
        if (&CStack_1b0 != pCVar2) {
          CStack_1b0.x = pCVar2->x;
          CStack_1b0.y = pCVar2->y;
          CStack_1b0.z = pCVar2->z;
        }
        (*pCVar5->vtable[1].playAmbientSoundWithVolume)(pCVar5,acStack_1cc,(float)in_stack_fffffdac)
        ;
        (*this_ptr->vtable->playAttackHitEffects)
                  (this_ptr,hit_type,(SDamageInfo *)auStack_214,pCVar5);
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
      }
      pCStack_2c = (CDemonActor *)((int)pCStack_2c + 1);
      if (3 < (int)pCStack_2c) {
        return 0;
      }
    }
  }
  return 0;
}
