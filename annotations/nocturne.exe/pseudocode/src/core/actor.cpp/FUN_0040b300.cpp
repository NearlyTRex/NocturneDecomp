// Name: core_actor.cpp_FUN_0040b300
// Address: 0040b300
// Address Range: [[0040b300, 0040bc93]]
// Convention: unknown
// Signature: undefined4 core_actor_cpp_FUN_0040b300(CDemonActor *param_1,float param_2)

#include "nocturne.h"

uint core_actor_cpp_FUN_0040b300(CDemonActor *param_1,float param_2)

{
  CBoundingBox3D *pCVar1;
  float *pfVar2;
  CCharacter *pCVar3;
  int iVar4;
  CTrigger *pCVar5;
  CGlass *pCVar6;
  float fVar7;
  CFlameCan *this_ptr;
  int iVar8;
  CVector3f *pCVar9;
  double dVar10;
  CDemonActor *unaff_retaddr;
  char *in_stack_fffffd6c;
  CDemonActor *in_stack_fffffd70;
  longlong in_stack_fffffd78;
  uint uVar11;
  uint uVar12;
  float fStack_268;
  byte auStack_240 [52];
  byte auStack_20c [28];
  byte auStack_1f0 [48];
  byte auStack_1c0 [64];
  byte auStack_180 [56];
  byte auStack_148 [56];
  CBoundingBox3D local_110;
  CBoundingBox3D CStack_ec;
  float local_d4;
  int local_d0;
  CVector3f CStack_cc;
  byte auStack_c0 [8];
  float fStack_b8;
  CDemonActor *pCStack_b4;
  UActorVTable UStack_b0;
  float fStack_ac;
  CVector3f CStack_a8;
  byte auStack_9c [8];
  CVector3f CStack_94;
  float fStack_88;
  CVector3f CStack_74;
  CVector3f aCStack_68 [2];
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_34;
  float fStack_28;
  float fStack_24;
  CDemonActor *pCStack_1c;
  CDemonActor *pCStack_18;
  CTrigger *pCStack_14;
  
  CStack_48.y = 0.0;
  if (param_2 == 1.4013e-45) {
    CStack_48.y = param_2;
  }
  local_d4 = 0.0;
  local_d0 = 0;
  pCVar1 = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_110);
  CStack_cc.z = (pCVar1->max).z;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            (param_1,(CVector3f *)auStack_c0,&CStack_cc);
  if (fStack_3c == 1.4013e-45) {
    local_d0 = -0x3fc00000;
    CStack_ec.max.z = 0.0;
    local_d4 = 0.0;
    pfVar2 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                (param_1,auStack_9c,&CStack_ec.max.z);
    CStack_94.y = (float)auStack_c0._0_4_ + *pfVar2;
    CStack_94.z = (float)auStack_c0._4_4_ + pfVar2[1];
    fStack_88 = fStack_b8 + pfVar2[2];
    if (&pCStack_b4 != (CDemonActor **)&CStack_94.y) {
      pCStack_b4 = (CDemonActor *)CStack_94.y;
      UStack_b0 = (UActorVTable)CStack_94.z;
      fStack_ac = fStack_88;
    }
  }
  CStack_a8.x = 0.0;
  CStack_a8.y = 0.0;
  CStack_a8.z = 1.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&aCStack_68[0].z,&CStack_a8);
  pCStack_1c = (*((param_1->vtable)._ub)->getCarrier)(param_1);
  if (fStack_38 == 0.0) {
    fStack_24 = fStack_38;
    for (CStack_34.z = fStack_38;
        (int)CStack_34.z < *(int *)0x01E57284->lights[199].filter_names[0x14];
        CStack_34.z = (float)((int)CStack_34.z + 1)) {
      pCStack_18 = *(CDemonActor **)
                    (0x01E57284->lights[199].filter_names[0x14] + (int)fStack_24 + 4);
      if ((param_1 != pCStack_18) && (pCStack_18 != pCStack_1c)) {
        pCVar3 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (pCStack_18,g_CCharacterActorType_00765a60.name_hash);
        uVar11 = (uint)((ulonglong)in_stack_fffffd78 >> 0x20);
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
                                 ((CDemonActor *)pCVar6,&CStack_ec);
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041e200
                                (pCVar1,(CVector3f *)in_stack_fffffd6c,(float)in_stack_fffffd70);
              if (iVar4 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)auStack_240);
                in_stack_fffffd6c = auStack_240;
                (*((param_1->vtable)._ub)->fillAttackDamageInfo)
                          (param_1,(int)param_2,(SDamageInfo *)in_stack_fffffd6c,
                           (CDemonActor *)pCVar6);
                in_stack_fffffd78 = CONCAT44((SDamageInfo *)(auStack_240 + 0x10),param_2);
                in_stack_fffffd70 = (CDemonActor *)0x40b783;
                (*((param_1->vtable)._ub)->playAttackHitEffects)
                          (param_1,(int)param_2,(SDamageInfo *)(auStack_240 + 0x10),
                           (CDemonActor *)pCVar6);
                iVar4 = core_glass_cpp_FUN_004aded0();
                if (iVar4 != 0) {
                  core_glass_cpp_CGlass_shatter_FUN_004ada20(pCVar6,&CStack_94);
                }
              }
            }
          }
          else {
            iVar4 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0(pCVar5,param_1);
            if (iVar4 != 0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        ((CDemonActor *)pCVar5,aCStack_68,(CVector3f *)(auStack_c0 + 4));
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
                           (double)fStack_268,pCVar5);
                core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(pCVar5,fStack_268);
                in_stack_fffffd78 = CONCAT44((SDamageInfo *)&stack0xfffffd94,param_2);
                in_stack_fffffd70 = (CDemonActor *)0x40b6e4;
                (*((param_1->vtable)._ub)->playAttackHitEffects)
                          (param_1,(int)param_2,(SDamageInfo *)&stack0xfffffd94,
                           (CDemonActor *)pCVar5);
              }
            }
          }
        }
        else {
          if (pCStack_1c != (CDemonActor *)0x0) {
            iVar4 = (*((pCVar3->base).vtable._ub)->initializeInEditor)((CDemonActor *)pCVar3);
            uVar11 = (uint)((ulonglong)in_stack_fffffd78 >> 0x20);
            if (iVar4 != 0) {
              in_stack_fffffd6c = "CHero";
              iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0(pCStack_18,"CHero");
              uVar11 = (uint)((ulonglong)in_stack_fffffd78 >> 0x20);
              if (iVar4 != 0) goto LAB_0040b4bd;
            }
          }
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)(auStack_1c0 + 0x2c));
          (*((param_1->vtable)._ub)->fillAttackDamageInfo)
                    (param_1,(int)param_2,(SDamageInfo *)(auStack_1c0 + 0x2c),(CDemonActor *)pCVar3)
          ;
          in_stack_fffffd78 = (ulonglong)uVar11 << 0x20;
          in_stack_fffffd70 = (CDemonActor *)&fStack_ac;
          in_stack_fffffd6c = (char *)pCVar3;
          (*(((pCVar3->base).vtable._uc)->_uc).isGrabbable)(pCVar3,in_stack_fffffd70);
          if (0.0 < (double)(float)auStack_180._8_4_) {
            iVar4 = 0x40b5c3;
            dVar10 = round
                               ((double)(float)auStack_180._8_4_ * 0.5 + 1.0);
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                      ((CGore *)INT_005b96c4,&CStack_a8,&CStack_48,(int)ROUND(dVar10),iVar4);
            in_stack_fffffd78 = CONCAT44(pCVar3,(SDamageInfo *)auStack_180);
            in_stack_fffffd6c = (char *)0x40b605;
            in_stack_fffffd70 = param_1;
            (*((param_1->vtable)._ub)->playAttackHitEffects)
                      (param_1,(int)param_2,(SDamageInfo *)auStack_180,(CDemonActor *)pCVar3);
          }
        }
      }
LAB_0040b4bd:
      fStack_24 = (float)((int)fStack_24 + 4);
    }
  }
  if (fStack_38 == 1.4013e-45) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
    core_setcolid_cpp_FUN_00511740(0x01E57284);
    if (pCStack_1c != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,pCStack_1c);
    }
    fStack_28 = 0.0;
    while ((fVar7 = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                                     (0x01E57284,&UStack_b0,auStack_c0 + 4), 0.0 <= fVar7 &&
           (fVar7 <= 1.0))) {
      pCVar3 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040d890
                         (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                          g_CCharacterActorType_00765a60.name_hash);
      if ((pCVar3 != (CCharacter *)0x0) &&
         (iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3), 0 < iVar4)) {
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
      iVar4 = (int)((ulonglong)in_stack_fffffd78 >> 0x20);
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
            uVar12 = (uint)((ulonglong)in_stack_fffffd78 >> 0x20);
            if (iVar4 != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)(auStack_180 + 0x28));
              (*((param_1->vtable)._ub)->fillAttackDamageInfo)
                        (param_1,(int)param_2,(SDamageInfo *)(auStack_180 + 0x28),&pCVar5->base);
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (PTR_DAT_005ad350,"%s causing %5.2f damage to %s\n",param_1,
                         (double)(float)auStack_148._4_4_,pCVar5);
              core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(pCVar5,(float)auStack_148._4_4_);
              in_stack_fffffd78 = CONCAT44(uVar12,unaff_retaddr);
              (*((param_1->vtable)._ub)->playAttackHitEffects)
                        (param_1,(int)param_2,(SDamageInfo *)auStack_148,unaff_retaddr);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,(CDemonActor *)CStack_34.x)
            ;
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)(auStack_1f0 + 0x20));
          (*((param_1->vtable)._ub)->fillAttackDamageInfo)
                    (param_1,(int)param_2,(SDamageInfo *)(auStack_1f0 + 0x20),(CDemonActor *)pCVar6)
          ;
          in_stack_fffffd78 = CONCAT44(iVar4,pCVar6);
          (*((param_1->vtable)._ub)->playAttackHitEffects)
                    (param_1,(int)param_2,(SDamageInfo *)auStack_1c0,(CDemonActor *)pCVar6);
          iVar4 = core_glass_cpp_FUN_004aded0();
          if (iVar4 == 0) {
            return 0;
          }
          core_glass_cpp_CGlass_shatter_FUN_004ada20
                    (pCVar6,(CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc));
        }
      }
      else {
        if (pCStack_1c != (CDemonActor *)0x0) {
          iVar8 = (*((pCVar3->base).vtable._ub)->initializeInEditor)(&pCVar3->base);
          iVar4 = (int)((ulonglong)in_stack_fffffd78 >> 0x20);
          if (iVar8 != 0) {
            iVar8 = core_actor_cpp_isOfClass_FUN_0040d7e0(pCStack_18,"CHero");
            iVar4 = (int)((ulonglong)in_stack_fffffd78 >> 0x20);
            if (iVar8 != 0) goto LAB_0040b953;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)auStack_20c);
        auStack_20c._0_4_ = *(uint *)(0x01E57284->lights[199].filter_names[0x13] + 0x1c);
        (*((param_1->vtable)._ub)->fillAttackDamageInfo)
                  (param_1,(int)param_2,(SDamageInfo *)auStack_20c,&pCVar3->base);
        CStack_74.y = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x18) -
                      *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0xc);
        CStack_74.z = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x1c) -
                      *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x10);
        aCStack_68[0].x =
             *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x20) -
             *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x14);
        fStack_38 = (float)10 /
                    SQRT(aCStack_68[0].x * aCStack_68[0].x +
                         CStack_74.y * CStack_74.y + CStack_74.z * CStack_74.z);
        CStack_48.z = CStack_74.y * fStack_38;
        fStack_3c = CStack_74.z * fStack_38;
        fStack_38 = aCStack_68[0].x * fStack_38;
        if ((float *)auStack_1f0 != &CStack_48.z) {
          auStack_1f0._0_4_ = CStack_48.z;
          auStack_1f0._4_4_ = fStack_3c;
          auStack_1f0._8_4_ = fStack_38;
        }
        pCVar9 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                           (&pCVar3->base,&CStack_34,
                            (CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc));
        if ((CVector3f *)(auStack_1f0 + 0x10) != pCVar9) {
          auStack_1f0._16_4_ = pCVar9->x;
          auStack_1f0._20_4_ = pCVar9->y;
          auStack_1f0._24_4_ = pCVar9->z;
        }
        (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)
                  (pCVar3,(CDemonActor *)(auStack_20c + 0x10),iVar4);
        in_stack_fffffd78 = CONCAT44(param_2,param_1);
        (*((param_1->vtable)._ub)->playAttackHitEffects)
                  (param_1,(int)param_2,(SDamageInfo *)auStack_1f0,&pCVar3->base);
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                  (0x01E57284,
                   *(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18));
      }
LAB_0040b953:
      fStack_28 = (float)((int)fStack_28 + 1);
      if (3 < (int)fStack_28) {
        return 0;
      }
    }
  }
  return 0;
}
