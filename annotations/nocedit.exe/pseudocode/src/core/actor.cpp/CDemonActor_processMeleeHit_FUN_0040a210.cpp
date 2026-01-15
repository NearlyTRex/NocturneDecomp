// Name: core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210
// Address: 0040a210
// Address Range: [[0040a210, 0040abb6]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor * this_ptr, int hit_type)

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor *this_ptr,int hit_type)

{
  CDemonActor *victim;
  CBoundingBox3D *pCVar1;
  CVector3f *pCVar2;
  CDemonActor *pCVar3;
  int iVar4;
  CGlass *pCVar5;
  int extraout_EAX;
  CDemonActor *pCVar6;
  int extraout_EAX_00;
  double dVar7;
  float volume;
  ulonglong in_stack_fffffd64;
  SDamageInfo SStack_28c;
  SDamageInfo SStack_250;
  byte auStack_214 [60];
  SDamageInfo SStack_1d8;
  SDamageInfo SStack_19c;
  SDamageInfo SStack_160;
  byte auStack_120 [48];
  byte auStack_f0 [24];
  uint uStack_d8;
  uint local_d4;
  CVector3f local_d0;
  CVector3f CStack_c4;
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  CVector3f aCStack_94 [2];
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f aCStack_64 [2];
  float fStack_48;
  float local_44;
  float fStack_40;
  CVector3f CStack_3c;
  int iStack_30;
  float fStack_2c;
  CDemonActor *pCStack_24;
  CDemonActor *pCStack_20;
  CDemonActor *pCStack_1c;
  CGlass *pCStack_18;
  float fStack_14;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x5ea);
  fStack_40 = 0.0;
  if (hit_type == 1) {
    fStack_40 = (float)hit_type;
  }
  local_d0.x = 0.0;
  local_d0.y = 0.0;
  pCVar1 = (*this_ptr->vtable->getBoundingBox)(this_ptr,(CBoundingBox3D *)(auStack_120 + 0x14));
  local_d0.z = (pCVar1->max).z;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(this_ptr,&CStack_c4,&local_d0);
  if (fStack_40 == 1.4013e-45) {
    local_d4 = 0xc0400000;
    auStack_f0._20_4_ = 0.0;
    uStack_d8 = 0;
    pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (this_ptr,&CStack_a0,(CVector3f *)(auStack_f0 + 0x14));
    aCStack_94[0].x = CStack_c4.x + pCVar2->x;
    aCStack_94[0].y = CStack_c4.y + pCVar2->y;
    aCStack_94[0].z = CStack_c4.z + pCVar2->z;
    if (&CStack_b8 != aCStack_94) {
      CStack_b8.x = aCStack_94[0].x;
      CStack_b8.y = aCStack_94[0].y;
      CStack_b8.z = aCStack_94[0].z;
    }
  }
  CStack_ac.x = 0.0;
  CStack_ac.y = 0.0;
  CStack_ac.z = 1.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(this_ptr,aCStack_64,&CStack_ac);
  pCStack_24 = (*this_ptr->vtable->getCarrier)(this_ptr);
  if (fStack_40 == 0.0) {
    fStack_2c = fStack_40;
    for (CStack_3c.z = fStack_40; (int)CStack_3c.z < (int)g_CDemonSetPtr->actor_list_ptr;
        CStack_3c.z = (float)((int)CStack_3c.z + 1)) {
      pCStack_20 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + (int)fStack_2c);
      if ((this_ptr != pCStack_20) && (pCStack_20 != pCStack_24)) {
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCStack_20,g_CCharacterClassInfo.name_hash);
        if (pCVar3 == (CDemonActor *)0x0) {
          pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (pCStack_20,g_CTriggerClassInfo.name_hash);
          if (pCVar3 == (CDemonActor *)0x0) {
            pCVar5 = (CGlass *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (pCStack_20,g_CGlassClassInfo.name_hash);
            if (pCVar5 != (CGlass *)0x0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)pCVar5,&CStack_7c,&CStack_c4);
              pCVar1 = (*((pCVar5->base).vtable)->getBoundingBox)
                                 ((CDemonActor *)pCVar5,(CBoundingBox3D *)auStack_f0);
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
                                (pCVar1,(CVector3f *)in_stack_fffffd64,
                                 (float)((ulonglong)in_stack_fffffd64 >> 0x20));
              if (iVar4 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_250);
                (*this_ptr->vtable->fillAttackDamageInfo)
                          (this_ptr,hit_type,&SStack_250,(CDemonActor *)pCVar5);
                (*this_ptr->vtable->playAttackHitEffects)
                          (this_ptr,hit_type,&SStack_250,(CDemonActor *)pCVar5);
                core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCVar5);
                if (extraout_EAX != 0) {
                  core_glass_cpp_CGlass_shatter_FUN_004eaef0(pCVar5,&CStack_c4);
                }
              }
            }
          }
          else {
            iVar4 = core_trigger_cpp_FUN_005e0ac0();
            if (iVar4 != 0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (pCVar3,&CStack_70,&CStack_c4);
              pCVar1 = (*pCVar3->vtable->getBoundingBox)(pCVar3,(CBoundingBox3D *)auStack_120);
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
                                (pCVar1,(CVector3f *)in_stack_fffffd64,
                                 (float)((ulonglong)in_stack_fffffd64 >> 0x20));
              if (iVar4 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_28c);
                (*this_ptr->vtable->fillAttackDamageInfo)(this_ptr,hit_type,&SStack_28c,pCVar3);
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (g_CConsolePtr,"%s causing %5.2f damage to %s\n",this_ptr,
                           (double)SStack_28c.damage_amount,pCVar3);
                core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
                (*this_ptr->vtable->playAttackHitEffects)(this_ptr,hit_type,&SStack_28c,pCVar3);
              }
            }
          }
        }
        else if (((pCStack_24 == (CDemonActor *)0x0) ||
                 (iVar4 = (*pCVar3->vtable[1].renderOpaque)(pCVar3), iVar4 == 0)) ||
                (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCStack_24,"CHero"),
                iVar4 == 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_19c);
          (*this_ptr->vtable->fillAttackDamageInfo)(this_ptr,hit_type,&SStack_19c,pCVar3);
          (*pCVar3->vtable[1].playAmbientSound)(pCVar3,(char *)&CStack_c4);
          if (0.0 < (double)SStack_19c.damage_amount) {
            dVar7 = crt_math_c_round_FUN_005fe6b0
                              ((double)SStack_19c.damage_amount * 0.5 + 1.0);
            pCStack_18 = (CGlass *)(int)ROUND(dVar7);
            core_gore_cpp_FUN_004edbb0();
            (*this_ptr->vtable->playAttackHitEffects)(this_ptr,hit_type,&SStack_19c,pCVar3);
          }
        }
      }
      fStack_2c = (float)((int)fStack_2c + 4);
    }
  }
  if (fStack_40 == 1.4013e-45) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr);
    core_setcolid_cpp_CDemonSet_FUN_00574170(g_CDemonSetPtr);
    if (pCStack_24 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_24);
    }
    iStack_30 = 0;
    while( true ) {
      fStack_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                            (g_CDemonSetPtr,&CStack_b8,&CStack_c4);
      dVar7 = (double)fStack_14;
      if ((dVar7 < 0.0) || (1.0 < dVar7)) break;
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
      if ((pCVar3 != (CDemonActor *)0x0) &&
         (iVar4 = (*pCVar3->vtable[1].hasCollision)(pCVar3,SUB84 /* extract 2-byte value */(dVar7,0)), 0 < iVar4)) {
        pCVar3 = (CDemonActor *)0x0;
      }
      pCStack_18 = (CGlass *)
                   core_actor_cpp_castToClassHash_FUN_0040c790
                             (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
      CStack_3c.x = (float)core_actor_cpp_castToClassHash_FUN_0040c790
                                     (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash)
      ;
      pCStack_1c = (CDemonActor *)CStack_3c.x;
      CStack_3c.y = (float)core_actor_cpp_castToClassHash_FUN_0040c790
                                     (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
      pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
      victim = pCStack_1c;
      if (pCVar3 == (CDemonActor *)0x0) {
        if (pCStack_18 == (CGlass *)0x0) {
          if (pCStack_1c == (CDemonActor *)0x0) {
            if ((CDemonActor *)CStack_3c.y == (CDemonActor *)0x0) {
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
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_160);
              (*this_ptr->vtable->fillAttackDamageInfo)(this_ptr,hit_type,&SStack_160,victim);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s causing %5.2f damage to %s\n",this_ptr,
                         (double)SStack_160.damage_amount,victim);
              core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
              (*this_ptr->vtable->playAttackHitEffects)
                        (this_ptr,hit_type,&SStack_160,&pCStack_18->base);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                      (g_CDemonSetPtr,(CDemonActor *)CStack_3c.x);
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_1d8);
          pCVar5 = pCStack_18;
          (*this_ptr->vtable->fillAttackDamageInfo)(this_ptr,hit_type,&SStack_1d8,&pCStack_18->base)
          ;
          (*this_ptr->vtable->playAttackHitEffects)(this_ptr,hit_type,&SStack_1d8,&pCVar5->base);
          core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCVar5);
          if (extraout_EAX_00 == 0) {
            return 0;
          }
          core_glass_cpp_CGlass_shatter_FUN_004eaef0
                    (pCVar5,&g_CDemonSetPtr->collision_impact_position);
        }
      }
      else if (((pCStack_24 == (CDemonActor *)0x0) ||
               (iVar4 = (*pCVar3->vtable[1].renderOpaque)(pCVar3), iVar4 == 0)) ||
              (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCStack_24,"CHero"),
              iVar4 == 0)) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_214);
        auStack_214._0_4_ = g_CDemonSetPtr->field11_0x14d148;
        (*this_ptr->vtable->fillAttackDamageInfo)
                  (this_ptr,hit_type,(SDamageInfo *)auStack_214,pCVar3);
        CStack_7c.y = (g_CDemonSetPtr->collision_result_vec2).x -
                      (g_CDemonSetPtr->collision_result_vec1).x;
        CStack_7c.z = (g_CDemonSetPtr->collision_result_vec2).y -
                      (g_CDemonSetPtr->collision_result_vec1).y;
        CStack_70.x = (g_CDemonSetPtr->collision_result_vec2).z -
                      (g_CDemonSetPtr->collision_result_vec1).z;
        pCStack_18 = (CGlass *)
                     ((float)10 /
                     SQRT(CStack_70.x * CStack_70.x +
                          CStack_7c.y * CStack_7c.y + CStack_7c.z * CStack_7c.z));
        fStack_48 = CStack_7c.y * (float)pCStack_18;
        local_44 = CStack_7c.z * (float)pCStack_18;
        fStack_40 = CStack_70.x * (float)pCStack_18;
        if ((float *)(auStack_214 + 0x1c) != &fStack_48) {
          auStack_214._28_4_ = fStack_48;
          auStack_214._32_4_ = local_44;
          auStack_214._36_4_ = fStack_40;
        }
        volume = 5.938417e-39;
        pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (pCVar3,&CStack_3c,&g_CDemonSetPtr->collision_impact_position);
        if ((CVector3f *)(auStack_214 + 0x2c) != pCVar2) {
          auStack_214._28_4_ = pCVar2->x;
          auStack_214._32_4_ = pCVar2->y;
          auStack_214._36_4_ = pCVar2->z;
        }
        (*pCVar3->vtable[1].playAmbientSoundWithVolume)(pCVar3,auStack_214,volume);
        (*this_ptr->vtable->playAttackHitEffects)
                  (this_ptr,hit_type,(SDamageInfo *)auStack_214,pCVar3);
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
      }
      iStack_30 = iStack_30 + 1;
      if (3 < iStack_30) {
        return 0;
      }
    }
  }
  return 0;
}
