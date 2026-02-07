// Name: core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210
// Address: 0040a210
// Address Range: [[0040a210, 0040abb6]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor *this_ptr,int hit_type)

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor *this_ptr,int hit_type)

{
  CBoundingBox3D *pCVar1;
  CVector3f *pCVar2;
  CCharacter *pCVar3;
  int iVar4;
  CDemonActor *pCVar5;
  CGlass *pCVar6;
  int extraout_EAX;
  float fVar7;
  CFlameCan *this_ptr_00;
  int extraout_EAX_00;
  CDemonActor *unaff_retaddr;
  CCharacter *in_stack_fffffd6c;
  CVector3f *in_stack_fffffd70;
  ulonglong uStack_26c;
  byte auStack_240 [52];
  byte auStack_20c [24];
  byte auStack_1f4 [52];
  byte auStack_1c0 [60];
  byte auStack_184 [20];
  float fStack_170;
  byte auStack_158 [20];
  float fStack_144;
  byte auStack_11c [48];
  byte auStack_ec [24];
  float local_d4;
  int local_d0;
  CVector3f CStack_cc;
  byte auStack_c0 [8];
  float fStack_b8;
  float fStack_b4;
  byte auStack_b0 [8];
  CVector3f CStack_a8;
  byte auStack_9c [12];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  CVector3f CStack_74;
  byte auStack_68 [36];
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_34;
  float fStack_28;
  float fStack_24;
  CDemonActor *pCStack_1c;
  CDemonActor *pCStack_18;
  CDemonActor *pCStack_14;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x5ea);
  local_44 = 0.0;
  if (hit_type == 1) {
    local_44 = (float)hit_type;
  }
  local_d4 = 0.0;
  local_d0 = 0;
  pCVar1 = (*((this_ptr->vtable)._ub)->getBoundingBox)
                     (this_ptr,(CBoundingBox3D *)(auStack_11c + 0xc));
  CStack_cc.z = (pCVar1->max).z;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (this_ptr,(CVector3f *)auStack_c0,&CStack_cc);
  if (fStack_3c == 1.4013e-45) {
    local_d0 = -0x3fc00000;
    auStack_ec._20_4_ = 0.0;
    local_d4 = 0.0;
    pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (this_ptr,(CVector3f *)auStack_9c,(CVector3f *)(auStack_ec + 0x14));
    fStack_90 = (float)auStack_c0._0_4_ + pCVar2->x;
    fStack_8c = (float)auStack_c0._4_4_ + pCVar2->y;
    fStack_88 = fStack_b8 + pCVar2->z;
    if (&fStack_b4 != &fStack_90) {
      fStack_b4 = fStack_90;
      auStack_b0._0_4_ = fStack_8c;
      auStack_b0._4_4_ = fStack_88;
    }
  }
  CStack_a8.x = 0.0;
  CStack_a8.y = 0.0;
  CStack_a8.z = 1.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (this_ptr,(CVector3f *)(auStack_68 + 8),&CStack_a8);
  pCStack_1c = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
  if (fStack_38 == 0.0) {
    fStack_24 = fStack_38;
    for (CStack_34.z = fStack_38; (int)CStack_34.z < (int)g_CDemonSetPtr->actor_list_ptr;
        CStack_34.z = (float)((int)CStack_34.z + 1)) {
      pCStack_18 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + (int)fStack_24);
      if ((this_ptr != pCStack_18) && (pCStack_18 != pCStack_1c)) {
        pCVar3 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCStack_18,g_CCharacterClassInfo.name_hash);
        if (pCVar3 == (CCharacter *)0x0) {
          pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (pCStack_18,g_CTriggerClassInfo.name_hash);
          if (pCVar5 == (CDemonActor *)0x0) {
            pCVar6 = (CGlass *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (pCStack_18,g_CGlassClassInfo.name_hash);
            if (pCVar6 != (CGlass *)0x0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)pCVar6,&CStack_74,(CVector3f *)(auStack_c0 + 4));
              pCVar1 = (*((pCVar6->base).vtable._ub)->getBoundingBox)
                                 ((CDemonActor *)pCVar6,(CBoundingBox3D *)auStack_ec);
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
                                (pCVar1,(CVector3f *)in_stack_fffffd6c,(float)in_stack_fffffd70);
              if (iVar4 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_240);
                in_stack_fffffd6c = (CCharacter *)auStack_240;
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)in_stack_fffffd6c,(CDemonActor *)pCVar6)
                ;
                in_stack_fffffd70 = (CVector3f *)0x40a6a6;
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)(auStack_240 + 0x10),
                           (CDemonActor *)pCVar6);
                core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCVar6);
                if (extraout_EAX != 0) {
                  core_glass_cpp_CGlass_shatter_FUN_004eaef0(pCVar6,(CVector3f *)(auStack_9c + 8));
                }
              }
            }
          }
          else {
            iVar4 = core_trigger_cpp_FUN_005e0ac0();
            if (iVar4 != 0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (pCVar5,(CVector3f *)auStack_68,(CVector3f *)(auStack_c0 + 4));
              pCVar1 = (*((pCVar5->vtable)._ub)->getBoundingBox)
                                 (pCVar5,(CBoundingBox3D *)auStack_11c);
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
                                (pCVar1,(CVector3f *)in_stack_fffffd6c,(float)in_stack_fffffd70);
              if (iVar4 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffd84);
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffd84,pCVar5);
                in_stack_fffffd6c = (CCharacter *)g_CConsolePtr;
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (g_CConsolePtr,"%s causing %5.2f damage to %s\n",this_ptr,
                           (double)uStack_26c._4_4_,pCVar5);
                core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
                in_stack_fffffd70 = (CVector3f *)0x40a607;
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)&uStack_26c,pCVar5);
              }
            }
          }
        }
        else if (((pCStack_1c == (CDemonActor *)0x0) ||
                 (iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).cfunc3)(), iVar4 == 0)) ||
                (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCStack_1c,"CHero"),
                iVar4 == 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)(auStack_1c0 + 0x2c));
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_1c0 + 0x2c),(CDemonActor *)pCVar3);
          in_stack_fffffd70 = (CVector3f *)(auStack_b0 + 4);
          in_stack_fffffd6c = pCVar3;
          (*(((pCVar3->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
                    (pCVar3,in_stack_fffffd70,2.0,(SDamageInfo *)auStack_184);
          uStack_26c = (double)fStack_170;
          if (0.0 < uStack_26c) {
            round(uStack_26c * 0.5 + 1.0);
            in_stack_fffffd70 = (CVector3f *)0x40a511;
            core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
            (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                      (this_ptr,hit_type,(SDamageInfo *)(auStack_184 + 0xc),(CDemonActor *)pCVar3);
          }
        }
      }
      fStack_24 = (float)((int)fStack_24 + 4);
    }
  }
  if (fStack_38 == 1.4013e-45) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr);
    core_setcolid_cpp_CDemonSet_FUN_00574170(g_CDemonSetPtr);
    if (pCStack_1c != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_1c);
    }
    fStack_28 = 0.0;
    while ((fVar7 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                              (g_CDemonSetPtr,(CVector3f *)auStack_b0,(CVector3f *)(auStack_c0 + 4))
           , 0.0 <= fVar7 && (fVar7 <= 1.0))) {
      pCVar3 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
      if ((pCVar3 != (CCharacter *)0x0) &&
         (iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).isDamageable)(pCVar3), 0 < iVar4)) {
        pCVar3 = (CCharacter *)0x0;
      }
      pCVar6 = (CGlass *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
      CStack_34.x = (float)core_actor_cpp_castToClassHash_FUN_0040c790
                                     (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash)
      ;
      pCStack_14 = (CDemonActor *)CStack_34.x;
      CStack_34.y = (float)core_actor_cpp_castToClassHash_FUN_0040c790
                                     (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
      this_ptr_00 = (CFlameCan *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
      pCVar5 = pCStack_14;
      if (pCVar3 == (CCharacter *)0x0) {
        if (pCVar6 == (CGlass *)0x0) {
          if (pCStack_14 == (CDemonActor *)0x0) {
            if ((CCrate *)CStack_34.y == (CCrate *)0x0) {
              if (this_ptr_00 == (CFlameCan *)0x0) {
                return 0;
              }
              core_flamecan_cpp_CFlameCan_FUN_004cb340(this_ptr_00);
            }
            else {
              core_crate_cpp_CCrate_FUN_00448a70((CCrate *)CStack_34.y);
            }
          }
          else {
            iVar4 = core_trigger_cpp_FUN_005e0ac0();
            if (iVar4 != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_158);
              (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                        (this_ptr,hit_type,(SDamageInfo *)auStack_158,pCVar5);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s causing %5.2f damage to %s\n",this_ptr,
                         SUB84((double)fStack_144,0),(int)((ulonglong)(double)fStack_144 >> 0x20),
                         pCVar5);
              core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
              (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                        (this_ptr,hit_type,(SDamageInfo *)(auStack_158 + 0x10),unaff_retaddr);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                      (g_CDemonSetPtr,(CDemonActor *)CStack_34.x);
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)(auStack_1f4 + 0x24));
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_1f4 + 0x24),(CDemonActor *)pCVar6);
          (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                    (this_ptr,hit_type,(SDamageInfo *)auStack_1c0,(CDemonActor *)pCVar6);
          core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCVar6);
          if (extraout_EAX_00 == 0) {
            return 0;
          }
          core_glass_cpp_CGlass_shatter_FUN_004eaef0
                    (pCVar6,&g_CDemonSetPtr->collision_impact_position);
        }
      }
      else if (((pCStack_1c == (CDemonActor *)0x0) ||
               (iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).cfunc3)(), iVar4 == 0)) ||
              (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCStack_1c,"CHero"),
              iVar4 == 0)) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_20c);
        auStack_20c._0_4_ = g_CDemonSetPtr->unk1;
        (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                  (this_ptr,hit_type,(SDamageInfo *)auStack_20c,&pCVar3->base);
        CStack_74.y = (g_CDemonSetPtr->collision_result_vec2).x -
                      (g_CDemonSetPtr->collision_result_vec1).x;
        CStack_74.z = (g_CDemonSetPtr->collision_result_vec2).y -
                      (g_CDemonSetPtr->collision_result_vec1).y;
        auStack_68._0_4_ =
             (g_CDemonSetPtr->collision_result_vec2).z - (g_CDemonSetPtr->collision_result_vec1).z;
        fStack_38 = (float)10 /
                    SQRT((float)auStack_68._0_4_ * (float)auStack_68._0_4_ +
                         CStack_74.y * CStack_74.y + CStack_74.z * CStack_74.z);
        fStack_40 = CStack_74.y * fStack_38;
        fStack_3c = CStack_74.z * fStack_38;
        fStack_38 = (float)auStack_68._0_4_ * fStack_38;
        if ((float *)(auStack_1f4 + 4) != &fStack_40) {
          auStack_1f4._4_4_ = fStack_40;
          auStack_1f4._8_4_ = fStack_3c;
          auStack_1f4._12_4_ = fStack_38;
        }
        pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (&pCVar3->base,&CStack_34,&g_CDemonSetPtr->collision_impact_position);
        if ((CVector3f *)(auStack_1f4 + 0x14) != pCVar2) {
          auStack_1f4._20_4_ = pCVar2->x;
          auStack_1f4._24_4_ = pCVar2->y;
          auStack_1f4._28_4_ = pCVar2->z;
        }
        (*(((pCVar3->base).vtable._uc)->_uc).processDamage)
                  (pCVar3,(SDamageInfo *)(auStack_20c + 0x10));
        (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                  (this_ptr,hit_type,(SDamageInfo *)auStack_1f4,&pCVar3->base);
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
      }
      fStack_28 = (float)((int)fStack_28 + 1);
      if (3 < (int)fStack_28) {
        return 0;
      }
    }
  }
  return 0;
}
