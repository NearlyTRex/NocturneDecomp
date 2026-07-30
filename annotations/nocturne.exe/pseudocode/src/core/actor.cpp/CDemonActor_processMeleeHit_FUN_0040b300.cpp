// Name: core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040b300
// Address: 0040b300
// Address Range: [[0040b300, 0040bc93]]
// Convention: unknown
// Signature: undefined4 core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040b300(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040b300(CDemonActor *param_1,float param_2)

{
  CBoundingBox3D *pCVar1;
  CVector3f *pCVar2;
  CCharacter *pCVar3;
  int iVar4;
  CTrigger *pCVar5;
  CGlass *pCVar6;
  float fVar7;
  EDeathState EVar8;
  CFlameCan *this_ptr;
  double dVar9;
  CDemonActor *unaff_retaddr;
  char *in_stack_fffffd6c;
  CVector3f *in_stack_fffffd70;
  ulonglong uStack_26c;
  byte auStack_240 [52];
  byte auStack_20c [24];
  byte auStack_1f4 [8];
  float fStack_1ec;
  float fStack_1e8;
  CVector3f CStack_1e0;
  byte auStack_1d0 [60];
  byte auStack_194 [28];
  byte auStack_178 [48];
  byte auStack_148 [56];
  CBoundingBox3D local_110;
  byte auStack_ec [24];
  float local_d4;
  int local_d0;
  CVector3f CStack_cc;
  byte auStack_c0 [8];
  float fStack_b8;
  float fStack_b4;
  byte auStack_b0 [8];
  byte auStack_a8 [12];
  byte auStack_9c [12];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  CVector3f CStack_74;
  byte auStack_68 [36];
  float local_44;
  CVector3f CStack_40;
  CVector3f CStack_34;
  float fStack_28;
  float fStack_24;
  CDemonActor *pCStack_1c;
  CDemonActor *pCStack_18;
  CTrigger *pCStack_14;
  
  local_44 = 0.0;
  if (param_2 == 1.4013e-45) {
    local_44 = param_2;
  }
  local_d4 = 0.0;
  local_d0 = 0;
  pCVar1 = (*((param_1->vtable)._ub)->getBoundingBox)
                     (param_1,(CBoundingBox3D *)(auStack_148 + 0x38));
  CStack_cc.z = (pCVar1->max).z;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            (param_1,(CVector3f *)auStack_c0,&CStack_cc);
  if (CStack_40.y == 1.4013e-45) {
    local_d0 = -0x3fc00000;
    auStack_ec._20_4_ = 0.0;
    local_d4 = 0.0;
    pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                       (param_1,(CVector3f *)auStack_9c,(CVector3f *)(auStack_ec + 0x14));
    fStack_90 = (float)auStack_c0._0_4_ + pCVar2->x;
    fStack_8c = (float)auStack_c0._4_4_ + pCVar2->y;
    fStack_88 = fStack_b8 + pCVar2->z;
    if (&fStack_b4 != &fStack_90) {
      fStack_b4 = fStack_90;
      auStack_b0._0_4_ = fStack_8c;
      auStack_b0._4_4_ = fStack_88;
    }
  }
  auStack_a8._0_4_ = 0.0;
  auStack_a8._4_4_ = 0.0;
  auStack_a8._8_4_ = (CMotionController_vtable *)0x3f800000;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
            (param_1,(CVector3f *)(auStack_68 + 8),(CVector3f *)auStack_a8);
  pCStack_1c = (*((param_1->vtable)._ub)->getCarrier)(param_1);
  if (CStack_40.z == 0.0) {
    fStack_24 = CStack_40.z;
    for (CStack_34.z = CStack_40.z;
        (int)CStack_34.z < *(int *)0x01E57284->lights[199].filter_names[0x14];
        CStack_34.z = (float)((int)CStack_34.z + 1)) {
      pCStack_18 = *(CDemonActor **)
                    (0x01E57284->lights[199].filter_names[0x14] + (int)fStack_24 + 4);
      if ((param_1 != pCStack_18) && (pCStack_18 != pCStack_1c)) {
        pCVar3 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (pCStack_18,g_CCharacterActorType_00765a60.name_hash);
        if (pCVar3 == (CCharacter *)0x0) {
          pCVar5 = (CTrigger *)
                   core_actor_cpp_castToClassHash_FUN_0040d890
                             (pCStack_18,g_CTriggerActorType_02dd1084.name_hash);
          if (pCVar5 == (CTrigger *)0x0) {
            pCVar6 = (CGlass *)
                     core_actor_cpp_castToClassHash_FUN_0040d890
                               (pCStack_18,g_CGlassActorType_01c78c40.name_hash);
            if (pCVar6 != (CGlass *)0x0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        ((CDemonActor *)pCVar6,&CStack_74,(CVector3f *)(auStack_c0 + 4));
              pCVar1 = (*((pCVar6->base).vtable._ub)->getBoundingBox)
                                 ((CDemonActor *)pCVar6,(CBoundingBox3D *)auStack_ec);
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041e200
                                (pCVar1,(CVector3f *)in_stack_fffffd6c,(float)in_stack_fffffd70);
              if (iVar4 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)auStack_240);
                in_stack_fffffd6c = auStack_240;
                (*((param_1->vtable)._ub)->fillAttackDamageInfo)
                          (param_1,(int)param_2,(SDamageInfo *)in_stack_fffffd6c,
                           (CDemonActor *)pCVar6);
                in_stack_fffffd70 = (CVector3f *)0x40b783;
                (*((param_1->vtable)._ub)->playAttackHitEffects)
                          (param_1,(int)param_2,(SDamageInfo *)(auStack_240 + 0x10),
                           (CDemonActor *)pCVar6);
                iVar4 = core_glass_cpp_FUN_004aded0(pCVar6);
                if (iVar4 != 0) {
                  core_glass_cpp_CGlass_shatter_FUN_004ada20(pCVar6,(CVector3f *)(auStack_9c + 8));
                }
              }
            }
          }
          else {
            iVar4 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0(pCVar5,param_1);
            if (iVar4 != 0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        ((CDemonActor *)pCVar5,(CVector3f *)auStack_68,(CVector3f *)(auStack_c0 + 4)
                        );
              pCVar1 = (*((pCVar5->base).vtable._ub)->getBoundingBox)
                                 ((CDemonActor *)pCVar5,(CBoundingBox3D *)(auStack_148 + 0x2c));
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041e200
                                (pCVar1,(CVector3f *)in_stack_fffffd6c,(float)in_stack_fffffd70);
              if (iVar4 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffd84);
                (*((param_1->vtable)._ub)->fillAttackDamageInfo)
                          (param_1,(int)param_2,(SDamageInfo *)&stack0xfffffd84,
                           (CDemonActor *)pCVar5);
                in_stack_fffffd6c = PTR_DAT_005ad350;
                engine_console_cpp_CConsole_printf_FUN_0043ac60
                          (PTR_DAT_005ad350,"%s causing %5.2f damage to %s\n",param_1,
                           (double)uStack_26c._4_4_,pCVar5);
                core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(pCVar5,uStack_26c._4_4_);
                in_stack_fffffd70 = (CVector3f *)0x40b6e4;
                (*((param_1->vtable)._ub)->playAttackHitEffects)
                          (param_1,(int)param_2,(SDamageInfo *)&uStack_26c,(CDemonActor *)pCVar5);
              }
            }
          }
        }
        else {
          if ((pCStack_1c != (CDemonActor *)0x0) &&
             (iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).canWalk)(pCVar3), iVar4 != 0)) {
            in_stack_fffffd6c = "CHero";
            iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0(pCStack_18,"CHero");
            if (iVar4 != 0) goto LAB_0040b4bd;
          }
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)auStack_194);
          (*((param_1->vtable)._ub)->fillAttackDamageInfo)
                    (param_1,(int)param_2,(SDamageInfo *)auStack_194,(CDemonActor *)pCVar3);
          in_stack_fffffd70 = (CVector3f *)(auStack_b0 + 4);
          in_stack_fffffd6c = (char *)pCVar3;
          (*(((pCVar3->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
                    (pCVar3,in_stack_fffffd70,2.0,(SDamageInfo *)(auStack_194 + 0x10));
          uStack_26c = (double)(float)auStack_178._8_4_;
          if (0.0 < uStack_26c) {
            iVar4 = 0x40b5c3;
            dVar9 = round(uStack_26c * 0.5 + 1.0);
            in_stack_fffffd70 = (CVector3f *)0x40b5ee;
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                      ((CGore *)INT_005b96c4,(CVector3f *)(auStack_a8 + 8),&CStack_40,
                       (int)ROUND(dVar9),iVar4);
            (*((param_1->vtable)._ub)->playAttackHitEffects)
                      (param_1,(int)param_2,(SDamageInfo *)auStack_178,(CDemonActor *)pCVar3);
          }
        }
      }
LAB_0040b4bd:
      fStack_24 = (float)((int)fStack_24 + 4);
    }
  }
  if (CStack_40.z == 1.4013e-45) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
    core_setcolid_cpp_FUN_00511740(0x01E57284);
    if (pCStack_1c != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,pCStack_1c);
    }
    fStack_28 = 0.0;
    while ((fVar7 = core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                              (0x01E57284,(CVector3f *)auStack_b0,(CVector3f *)(auStack_c0 + 4)),
           0.0 <= fVar7 && (fVar7 <= 1.0))) {
      pCVar3 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040d890
                         (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                          g_CCharacterActorType_00765a60.name_hash);
      if ((pCVar3 != (CCharacter *)0x0) &&
         (EVar8 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3), 0 < (int)EVar8)) {
        pCVar3 = (CCharacter *)0x0;
      }
      pCVar6 = (CGlass *)
               core_actor_cpp_castToClassHash_FUN_0040d890
                         (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                          g_CGlassActorType_01c78c40.name_hash);
      CStack_34.x = (float)core_actor_cpp_castToClassHash_FUN_0040d890
                                     (*(CDemonActor **)
                                       (0x01E57284->lights[199].filter_names[0x13] + 0x18),
                                      g_CTriggerActorType_02dd1084.name_hash);
      pCStack_14 = (CTrigger *)CStack_34.x;
      CStack_34.y = (float)core_actor_cpp_castToClassHash_FUN_0040d890
                                     (*(CDemonActor **)
                                       (0x01E57284->lights[199].filter_names[0x13] + 0x18),
                                      g_CCrateActorType_0077bd40.name_hash);
      this_ptr = (CFlameCan *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                            g_CFlameCanActorType_01c70654.name_hash);
      pCVar5 = pCStack_14;
      if (pCVar3 == (CCharacter *)0x0) {
        if (pCVar6 == (CGlass *)0x0) {
          if (pCStack_14 == (CTrigger *)0x0) {
            if ((CCrate *)CStack_34.y == (CCrate *)0x0) {
              if (this_ptr == (CFlameCan *)0x0) {
                return 0;
              }
              core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(this_ptr);
            }
            else {
              core_crate_cpp_CCrate_explode_FUN_0043cdb0((CCrate *)CStack_34.y);
            }
          }
          else {
            iVar4 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0(pCStack_14,param_1);
            if (iVar4 != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)(auStack_178 + 0x20));
              (*((param_1->vtable)._ub)->fillAttackDamageInfo)
                        (param_1,(int)param_2,(SDamageInfo *)(auStack_178 + 0x20),&pCVar5->base);
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (PTR_DAT_005ad350,"%s causing %5.2f damage to %s\n",param_1,
                         (double)(float)auStack_148._4_4_,pCVar5);
              core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(pCVar5,(float)auStack_148._4_4_);
              (*((param_1->vtable)._ub)->playAttackHitEffects)
                        (param_1,(int)param_2,(SDamageInfo *)(auStack_178 + 0x30),unaff_retaddr);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,(CDemonActor *)CStack_34.x)
            ;
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)(auStack_1f4 + 0x24));
          (*((param_1->vtable)._ub)->fillAttackDamageInfo)
                    (param_1,(int)param_2,(SDamageInfo *)(auStack_1f4 + 0x24),(CDemonActor *)pCVar6)
          ;
          (*((param_1->vtable)._ub)->playAttackHitEffects)
                    (param_1,(int)param_2,(SDamageInfo *)(auStack_1d0 + 0x10),(CDemonActor *)pCVar6)
          ;
          iVar4 = core_glass_cpp_FUN_004aded0(pCVar6);
          if (iVar4 == 0) {
            return 0;
          }
          core_glass_cpp_CGlass_shatter_FUN_004ada20
                    (pCVar6,(CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc));
        }
      }
      else if (((pCStack_1c == (CDemonActor *)0x0) ||
               (iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).canWalk)(pCVar3), iVar4 == 0)) ||
              (iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0(pCStack_18,"CHero"),
              iVar4 == 0)) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)auStack_20c);
        auStack_20c._0_4_ = *(uint *)(0x01E57284->lights[199].filter_names[0x13] + 0x1c);
        (*((param_1->vtable)._ub)->fillAttackDamageInfo)
                  (param_1,(int)param_2,(SDamageInfo *)auStack_20c,&pCVar3->base);
        CStack_74.y = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x18) -
                      *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0xc);
        CStack_74.z = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x1c) -
                      *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x10);
        auStack_68._0_4_ =
             *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x20) -
             *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x14);
        CStack_40.z = (float)10 /
                      SQRT((float)auStack_68._0_4_ * (float)auStack_68._0_4_ +
                           CStack_74.y * CStack_74.y + CStack_74.z * CStack_74.z);
        CStack_40.x = CStack_74.y * CStack_40.z;
        CStack_40.y = CStack_74.z * CStack_40.z;
        CStack_40.z = (float)auStack_68._0_4_ * CStack_40.z;
        if ((CVector3f *)(auStack_1f4 + 4) != &CStack_40) {
          auStack_1f4._4_4_ = CStack_40.x;
          fStack_1ec = CStack_40.y;
          fStack_1e8 = CStack_40.z;
        }
        pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                           (&pCVar3->base,&CStack_34,
                            (CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc));
        if ((CVector3f *)(auStack_1f4 + 0x14) != pCVar2) {
          CStack_1e0.x = pCVar2->x;
          CStack_1e0.y = pCVar2->y;
          CStack_1e0.z = pCVar2->z;
        }
        (*(((pCVar3->base).vtable._uc)->_uc).processDamage)
                  (pCVar3,(SDamageInfo *)(auStack_20c + 0x10));
        (*((param_1->vtable)._ub)->playAttackHitEffects)
                  (param_1,(int)param_2,(SDamageInfo *)auStack_1f4,&pCVar3->base);
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                  (0x01E57284,
                   *(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18));
      }
      fStack_28 = (float)((int)fStack_28 + 1);
      if (3 < (int)fStack_28) {
        return 0;
      }
    }
  }
  return 0;
}
