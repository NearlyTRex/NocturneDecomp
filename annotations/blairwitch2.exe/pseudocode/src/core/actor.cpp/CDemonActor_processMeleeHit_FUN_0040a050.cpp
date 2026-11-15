// Name: core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a050
// Address: 0040a050
// Address Range: [[0040a050, 0040ad42]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a050(CDemonActor *this_ptr,int hit_type)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a050(CDemonActor *this_ptr,int hit_type)

{
  CDemonActor *pCVar1;
  CCharacter *pCVar2;
  CTrigger *pCVar3;
  CGlass *this_ptr_00;
  CFlameCan *this_ptr_01;
  int iVar4;
  CTrigger *unaff_EBX;
  CDemonActor *unaff_EBP;
  CGlass *unaff_ESI;
  float *pfVar5;
  uint *puVar6;
  EAmmoType *pEVar7;
  float *pfVar8;
  uint *puVar9;
  byte bVar10;
  double dVar11;
  float in_stack_00000014;
  float afStackY_1184 [27];
  CDemonActor *apCStackY_1118 [12];
  float afStackY_10e8 [32];
  void *apvStackY_1068 [11];
  float afStackY_103c [4];
  CDemonActor *apCStackY_102c [2];
  void *apvStackY_1024 [780];
  CBoundingBox3D *in_stack_fffffc10;
  CBoundingBox3D *in_stack_fffffc18;
  CBoundingBox3D *out_box;
  CCharacter *in_stack_fffffc24;
  CVector3f *in_stack_fffffc28;
  EBloodType blood_type;
  float fVar12;
  void *pvStack_3a4;
  float fStack_398;
  float fStack_394;
  double dStack_390;
  byte auStack_388 [20];
  CDemonActor *pCStack_374;
  byte auStack_344 [20];
  float fStack_330;
  byte auStack_310 [28];
  byte auStack_2f4 [28];
  byte auStack_2d8 [8];
  float fStack_2d0;
  byte auStack_2c4 [68];
  SDamageInfo SStack_280;
  float fStack_23c;
  float afStack_230 [9];
  uint auStack_20c [4];
  uint auStack_1fc [2];
  CBoundingBox3D CStack_1f4;
  uint auStack_1cc [2];
  CBoundingBox3D CStack_1c4;
  uint auStack_1ac [4];
  byte auStack_19c [16];
  float afStack_18c [4];
  CVector3f CStack_17c;
  byte auStack_170 [12];
  CVector3f aCStack_164 [2];
  CVector3f CStack_14c;
  CVector3f CStack_140;
  CVector3f CStack_134;
  CDemonActor *pCStack_128;
  byte auStack_124 [12];
  uint uStack_118;
  uint uStack_114;
  void *pvStack_110;
  float fStack_10c;
  void *pvStack_108;
  byte auStack_100 [8];
  float fStack_f8;
  byte auStack_f4 [8];
  float fStack_ec;
  CVector3f aCStack_e8 [2];
  float fStack_c8;
  float fStack_c4;
  byte auStack_c0 [8];
  float afStack_b8 [5];
  void *pvStack_a4;
  CDemonActor *pCStack_a0;
  float afStack_9c [3];
  CDemonActor *pCStack_90;
  CVector3f CStack_8c;
  void *pvStack_80;
  float fStack_7c;
  void *apvStack_78 [2];
  byte auStack_70 [20];
  CVector3f CStack_5c;
  float afStack_50 [3];
  void *pvStack_44;
  float fStack_40;
  CDemonActor *pCStack_3c;
  float fStack_38;
  void *pvStack_34;
  CTrigger *pCStack_30;
  CCrate *pCStack_2c;
  int iStack_28;
  void *pvStack_24;
  void *pvStack_20;
  float fStack_1c;
  CDemonActor *pCStack_14;
  
  bVar10 = 0;
  auStack_f4._4_4_ = 0.0;
  fStack_ec = 0.0;
  pCStack_2c = (CCrate *)0x3f800000;
  afStack_50[2] = 0.0;
  (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,in_stack_fffffc10);
  pfVar5 = &CStack_1f4.min.y;
  pEVar7 = &SStack_280.ammo_type;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pEVar7 = (EAmmoType)*pfVar5;
    pfVar5 = pfVar5 + (uint)bVar10 * -2 + 1;
    pEVar7 = pEVar7 + (uint)bVar10 * -2 + 1;
  }
  aCStack_e8[0].z = fStack_23c;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            (this_ptr,aCStack_e8,(CVector3f *)auStack_f4);
  auStack_170._4_4_ = 0.0;
  auStack_170._8_4_ = 0.0;
  CStack_134.y = (float)auStack_f4._0_4_;
  *(uint *)((int)&CStack_134 + (uint)bVar10 * -8 + 8) =
       *(uint *)(auStack_f4 + (uint)bVar10 * -8 + 4);
  (&pCStack_128)[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
       *(CDemonActor **)((int)aCStack_e8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -4);
  (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,in_stack_fffffc18);
  pfVar5 = afStack_230;
  pfVar8 = &SStack_280.impact_force;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar8 = *pfVar5;
    pfVar5 = pfVar5 + (uint)bVar10 * -2 + 1;
    pfVar8 = pfVar8 + (uint)bVar10 * -2 + 1;
  }
  aCStack_164[0].z = (float)SStack_280.attacker + _DAT_005ca6ca;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(this_ptr,aCStack_164,&CStack_8c);
  CStack_14c.x = CStack_8c.x;
  *(uint *)((int)&CStack_14c + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&CStack_8c + (uint)bVar10 * -8 + 4);
  *(uint *)((int)&CStack_14c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
       *(uint *)((int)&CStack_8c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  if ((CVector3f *)(afStack_9c + 1) != &CStack_14c) {
    afStack_9c[1] = CStack_14c.x;
    afStack_9c[2] = CStack_14c.y;
    pCStack_90 = (CDemonActor *)CStack_14c.z;
  }
  CStack_17c.z = fStack_1c;
  CStack_17c.x = 0.0;
  CStack_17c.y = 0.0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            (this_ptr,&CStack_17c,(CVector3f *)(auStack_c0 + 4));
  pvStack_80 = (void *)auStack_c0._4_4_;
  (&fStack_7c)[(uint)bVar10 * -2] = afStack_b8[(uint)bVar10 * -2];
  apvStack_78[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
       (void *)afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  if (&pvStack_110 != &pvStack_80) {
    pvStack_110 = pvStack_80;
    fStack_10c = fStack_7c;
    pvStack_108 = apvStack_78[0];
  }
  if (fStack_38 == 1.4013e-45) {
    auStack_170._0_4_ = 0.0;
    auStack_170._8_4_ = -3.0;
    auStack_170._4_4_ = 0.0;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
              (this_ptr,(CVector3f *)auStack_170,&CStack_140);
    fStack_c8 = CStack_140.x;
    (&fStack_c4)[(uint)bVar10 * -2] = *(float *)((int)&CStack_140 + (uint)bVar10 * -8 + 4);
    *(uint *)(auStack_c0 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         *(uint *)((int)&CStack_140 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    pvStack_44 = (void *)((float)pCStack_128 + fStack_c8);
    fStack_40 = (float)auStack_124._0_4_ + fStack_c4;
    pCStack_3c = (CDemonActor *)((float)auStack_124._4_4_ + (float)auStack_c0._0_4_);
    pvStack_a4 = (void *)((float)pCStack_128 + fStack_c8);
    (&pCStack_a0)[(uint)bVar10 * -2] = (CDemonActor *)(&fStack_40)[(uint)bVar10 * -2];
    afStack_9c[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
         (float)(&pCStack_3c)[(uint)bVar10 * -2 + (uint)bVar10 * -2];
    if (apvStack_78 + 1 != &pvStack_a4) {
      apvStack_78[1] = pvStack_a4;
      auStack_70._0_4_ = pCStack_a0;
      auStack_70._4_4_ = afStack_9c[0];
    }
  }
  auStack_124._8_4_ = 0.0;
  uStack_118 = 0;
  uStack_114 = 0x3f800000;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
            (this_ptr,(CVector3f *)(auStack_124 + 8),&CStack_134);
  afStack_18c[1] = CStack_134.x;
  afStack_18c[(uint)bVar10 * -2 + 2] = *(float *)((int)&CStack_134 + (uint)bVar10 * -8 + 4);
  afStack_18c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 3] =
       *(float *)((int)&CStack_134 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  pCStack_14 = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
  if (pvStack_34 == (void *)0x0) {
    pvStack_20 = pvStack_34;
    for (pvStack_24 = pvStack_34; (int)pvStack_24 < g_CDemonSetPtr->actor_count;
        pvStack_24 = (void *)((int)pvStack_24 + 1)) {
      pCVar1 = *(CDemonActor **)((int)pvStack_20 + (int)(g_CDemonSetPtr->cameras + 0xcb0) + 0xa4);
      if ((pCVar1 != this_ptr) && (pCVar1 != pCStack_14)) {
        pCVar2 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar1,g_CCharacterClassInfo.name_hash)
        ;
        if (pCVar2 == (CCharacter *)0x0) {
          pCVar3 = (CTrigger *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar1,g_CTriggerClassInfo.name_hash)
          ;
          if (pCVar3 == (CTrigger *)0x0) {
            unaff_EBP = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                  (pCVar1,g_CGlassClassInfo.name_hash);
            if (unaff_EBP != (CDemonActor *)0x0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                        (unaff_EBP,(CVector3f *)auStack_124,(CVector3f *)auStack_f4);
              auStack_19c._12_4_ = auStack_f4._0_4_;
              afStack_18c[(uint)bVar10 * -2] = *(float *)(auStack_f4 + (uint)bVar10 * -8 + 4);
              afStack_18c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                   *(float *)((int)aCStack_e8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -4);
              (*((unaff_EBP->vtable)._ub)->getBoundingBox)
                        (unaff_EBP,(CBoundingBox3D *)(auStack_19c + 0xc));
              puVar6 = auStack_1ac;
              puVar9 = auStack_1cc;
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar9 = *puVar6;
                puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
                puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
              }
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041bc20
                                (&CStack_1c4,(CVector3f *)in_stack_fffffc24,(float)in_stack_fffffc28
                                );
              if (iVar4 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)(auStack_2c4 + 0x34))
                ;
                in_stack_fffffc24 = (CCharacter *)(auStack_2c4 + 0x34);
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)in_stack_fffffc24,&unaff_ESI->base);
                in_stack_fffffc28 = (CVector3f *)0x40a7f5;
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,&SStack_280,&unaff_ESI->base);
                iVar4 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004c72d0(unaff_ESI);
                if (iVar4 != 0) {
                  core_glass_cpp_CGlass_shatter_FUN_004c6d40
                            (unaff_ESI,(CVector3f *)(auStack_100 + 4));
                }
              }
            }
          }
          else {
            iVar4 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570(pCVar3,this_ptr);
            if (iVar4 != 0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                        ((CDemonActor *)pCVar3,(CVector3f *)auStack_124,(CVector3f *)auStack_100);
              out_box = (CBoundingBox3D *)auStack_19c;
              auStack_19c._0_4_ = auStack_100._0_4_;
              *(uint *)(auStack_19c + (uint)bVar10 * -8 + 4) =
                   *(uint *)(auStack_100 + (uint)bVar10 * -8 + 4);
              *(float *)(auStack_19c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                   (&fStack_f8)[(uint)bVar10 * -2 + (uint)bVar10 * -2];
              (*((pCVar3->base).vtable._ub)->getBoundingBox)((CDemonActor *)pCVar3,out_box);
              puVar6 = auStack_20c;
              puVar9 = auStack_1fc;
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar9 = *puVar6;
                puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
                puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
              }
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041bc20
                                (&CStack_1f4,(CVector3f *)in_stack_fffffc24,(float)in_stack_fffffc28
                                );
              if (iVar4 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)auStack_344);
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)auStack_344,&unaff_EBX->base);
                in_stack_fffffc24 = (CCharacter *)g_CConsolePtr;
                engine_console_cpp_CConsole_printf_FUN_00436710
                          (g_CConsolePtr,"%s causing %5.2f damage to %s\n");
                core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(unaff_EBX,fStack_330);
                in_stack_fffffc28 = (CVector3f *)0x40a6f3;
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)(auStack_344 + 0x10),&unaff_EBX->base);
              }
            }
          }
        }
        else {
          if ((pCStack_14 != (CDemonActor *)0x0) &&
             (iVar4 = (*(((pCVar2->base).vtable._uc)->_uc).isInvulnerable)(pCVar2), iVar4 != 0)) {
            in_stack_fffffc24 = (CCharacter *)("@CHero" + 1);
            iVar4 = core_actor_cpp_isOfClass_FUN_0040c840(unaff_EBP,"@CHero" + 1);
            if (iVar4 != 0) goto LAB_0040a3a9;
          }
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)auStack_310);
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)auStack_310,(CDemonActor *)pCVar2);
          in_stack_fffffc28 = (CVector3f *)(auStack_100 + 4);
          in_stack_fffffc24 = pCVar2;
          iVar4 = (*(((pCVar2->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
                            (pCVar2,in_stack_fffffc28,(float)unaff_ESI,
                             (SDamageInfo *)(auStack_310 + 0x10));
          if ((iVar4 != 0) && (0.0 < (double)(float)auStack_2f4._8_4_)) {
            blood_type = 0x40a4b3;
            dVar11 = round
                               ((double)(float)auStack_2f4._8_4_ * _DAT_005ca6ce + 1.0);
            in_stack_fffffc28 = (CVector3f *)0x40a4de;
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                      (g_CGorePtr,(CVector3f *)(auStack_f4 + 4),(CVector3f *)(auStack_170 + 8),
                       (int)ROUND(dVar11),blood_type);
            (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                      (this_ptr,hit_type,(SDamageInfo *)auStack_2f4,(CDemonActor *)pCVar2);
          }
          iVar4 = (*(((pCVar2->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
                            (pCVar2,(CVector3f *)(auStack_70 + 8),in_stack_00000014,
                             (SDamageInfo *)(auStack_2f4 + 0x10));
          if ((iVar4 != 0) && (dStack_390 = (double)fStack_2d0, 0.0 < dStack_390)) {
            pvStack_3a4 = (void *)pCVar2->blood_type;
            fVar12 = 5.936801e-39;
            dVar11 = round(dStack_390 * _DAT_005ca6ce + 1.0);
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                      (g_CGorePtr,&CStack_5c,&CStack_14c,(int)ROUND(dVar11),(EBloodType)fVar12);
            (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                      (this_ptr,hit_type,(SDamageInfo *)auStack_2d8,(CDemonActor *)pCVar2);
          }
        }
      }
LAB_0040a3a9:
      pvStack_20 = (void *)((int)pvStack_20 + 4);
    }
  }
  if (pvStack_34 == (void *)0x1) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,this_ptr);
    core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_00537df0(g_CDemonSetPtr);
    if (pCStack_14 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,pCStack_14);
    }
    iStack_28 = 0;
    while ((fVar12 = core_setcolid_cpp_CDemonSet_raycast_FUN_00535ee0
                               (g_CDemonSetPtr,(CVector3f *)auStack_70,(CVector3f *)auStack_124),
           0.0 <= fVar12 && (fVar12 <= 1.0))) {
      pCVar2 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
      if (pCVar2 != (CCharacter *)0x0) {
        (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2);
      }
      this_ptr_00 = (CGlass *)
                    core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
      pCVar3 = (CTrigger *)
               core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
      pCStack_30 = pCVar3;
      pCStack_2c = (CCrate *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
      this_ptr_01 = (CFlameCan *)
                    core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
      pCVar1 = pCStack_14;
      if (pCVar2 == (CCharacter *)0x0) {
        if (this_ptr_00 == (CGlass *)0x0) {
          if (pCVar3 == (CTrigger *)0x0) {
            if (pCStack_2c == (CCrate *)0x0) {
              if (this_ptr_01 == (CFlameCan *)0x0) {
                return 0;
              }
              core_flamecan_cpp_CFlameCan_ignite_FUN_004a08d0(this_ptr_01);
            }
            else {
              core_crate_cpp_FUN_0043a350(pCStack_2c);
            }
          }
          else {
            iVar4 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570(pCVar3,this_ptr);
            if (iVar4 != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)auStack_388);
              (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                        (this_ptr,hit_type,(SDamageInfo *)auStack_388,(CDemonActor *)pCVar3);
              engine_console_cpp_CConsole_printf_FUN_00436710
                        (g_CConsolePtr,"%s causing %5.2f damage to %s\n");
              core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(pCVar3,(float)pCStack_374);
              (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                        (this_ptr,hit_type,(SDamageInfo *)(auStack_388 + 0x10),(CDemonActor *)0x0);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&pCStack_30->base);
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)(auStack_2d8 + 4));
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_2d8 + 4),(CDemonActor *)this_ptr_00);
          (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                    (this_ptr,hit_type,(SDamageInfo *)auStack_2c4,(CDemonActor *)this_ptr_00);
          iVar4 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004c72d0(this_ptr_00);
          if (iVar4 == 0) {
            return 0;
          }
          core_glass_cpp_CGlass_shatter_FUN_004c6d40
                    (this_ptr_00,&g_CDemonSetPtr->collision_impact_position);
        }
      }
      else if (((pCStack_14 == (CDemonActor *)0x0) ||
               (iVar4 = (*(((pCVar2->base).vtable._uc)->_uc).isInvulnerable)(pCVar2), iVar4 == 0))
              || (iVar4 = core_actor_cpp_isOfClass_FUN_0040c840(pCVar1,"CHero"), iVar4 == 0
                 )) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffc3c);
        (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                  (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffc3c,(CDemonActor *)pCVar2);
        CStack_14c.z = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
        CStack_140.x = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
        CStack_140.y = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
        pCStack_3c = (CDemonActor *)CStack_14c.z;
        (&fStack_38)[(uint)bVar10 * -2] = *(float *)((int)&CStack_140 + (uint)bVar10 * -8);
        (&pvStack_34)[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
             *(void **)((int)&CStack_140 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 4);
        fVar12 = (float)_DAT_005ca6d6 /
                 SQRT((float)pvStack_34 * (float)pvStack_34 +
                      (float)pCStack_3c * (float)pCStack_3c + fStack_38 * fStack_38);
        afStack_9c[0] = (float)pCStack_3c * fVar12;
        afStack_9c[1] = fStack_38 * fVar12;
        afStack_9c[2] = (float)pvStack_34 * fVar12;
        afStack_50[2] = (float)pCStack_3c * fVar12;
        (&pvStack_44)[(uint)bVar10 * -2] = (void *)afStack_9c[(uint)bVar10 * 0xfffffffe + 1];
        (&fStack_40)[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
             afStack_9c[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 2];
        if ((float *)&stack0xfffffc58 != afStack_50 + 2) {
          pvStack_3a4 = pvStack_44;
        }
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  ((CDemonActor *)hit_type,&g_CDemonSetPtr->collision_impact_position,
                   (CVector3f *)auStack_c0);
        CStack_5c.z = (float)auStack_c0._0_4_;
        afStack_50[(uint)bVar10 * -2] = afStack_b8[(uint)bVar10 * -2 + -1];
        afStack_50[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2];
        if (&fStack_398 != &CStack_5c.z) {
          fStack_398 = CStack_5c.z;
          fStack_394 = afStack_50[0];
          dStack_390 = __BITCAST_DOUBLE(CONCAT44(dStack_390._4_4_,afStack_50[1]));
        }
        (**(code **)(*(int *)(hit_type + 0x2b0) + 0x110))
                  ((CCharacter *)hit_type,(SDamageInfo *)&stack0xfffffc4c);
        (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                  (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffc54,(CDemonActor *)hit_type);
        core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                  (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
      }
      iStack_28 = iStack_28 + 1;
      if (3 < iStack_28) {
        return 0;
      }
    }
  }
  return 0;
}
