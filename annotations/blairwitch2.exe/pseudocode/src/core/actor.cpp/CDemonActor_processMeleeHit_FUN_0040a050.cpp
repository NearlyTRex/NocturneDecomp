// Name: core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a050
// Address: 0040a050
// Address Range: [[0040a050, 0040ad42]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a050(CDemonActor *this_ptr,int hit_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a050(CDemonActor *this_ptr,int hit_type)

{
  CDemonActor *pCVar1;
  CCharacter *pCVar2;
  CTrigger *pCVar3;
  float fVar4;
  CGlass *this_ptr_00;
  CFlameCan *this_ptr_01;
  int iVar5;
  CTrigger *unaff_EBX;
  CDemonActor *unaff_EBP;
  CGlass *unaff_ESI;
  float *pfVar6;
  uint *puVar7;
  float *pfVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  float in_stack_00000018;
  float afStackY_1184 [27];
  CDemonActor *apCStackY_1118 [15];
  float afStackY_10dc [13];
  void *apvStackY_10a8 [7];
  float afStackY_108c [6];
  void *apvStackY_1074 [17];
  float fStackY_1030;
  CDemonActor *apCStackY_102c [2];
  void *apvStackY_1024 [780];
  CBoundingBox3D *in_stack_fffffc10;
  CBoundingBox3D *in_stack_fffffc18;
  CBoundingBox3D *out_box;
  CCharacter *in_stack_fffffc24;
  CVector3f *in_stack_fffffc28;
  CVector3f CStack_398;
  byte auStack_38c [20];
  byte auStack_378 [68];
  byte auStack_334 [52];
  byte auStack_300 [20];
  float fStack_2ec;
  byte auStack_2e0 [16];
  byte auStack_2d0 [64];
  byte auStack_290 [40];
  uint auStack_268 [4];
  float afStack_258 [3];
  float fStack_24c;
  float fStack_23c;
  uint auStack_230 [9];
  uint auStack_20c [4];
  uint auStack_1fc [2];
  CBoundingBox3D CStack_1f4;
  uint auStack_1cc [2];
  CBoundingBox3D CStack_1c4;
  uint auStack_1ac [4];
  byte auStack_19c [16];
  float afStack_18c [4];
  float afStack_17c [2];
  int iStack_174;
  char acStack_170 [4];
  int iStack_16c;
  int iStack_168;
  CVector3f aCStack_164 [2];
  float fStack_14c;
  float fStack_148;
  CVector3f CStack_144;
  float afStack_138 [4];
  CDemonActor *pCStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  float fStack_118;
  float fStack_114;
  void *pvStack_110;
  float fStack_10c;
  void *pvStack_108;
  void *pvStack_100;
  CVector3f CStack_fc;
  float fStack_f0;
  CVector3f CStack_ec;
  float fStack_e0;
  CDemonActor *pCStack_c8;
  float afStack_c4 [2];
  void *apvStack_bc [6];
  void *pvStack_a4;
  CDemonActor *pCStack_a0;
  float afStack_9c [3];
  CDemonActor *pCStack_90;
  float fStack_8c;
  void *apvStack_88 [3];
  float fStack_7c;
  void *apvStack_78 [2];
  CDemonActor *pCStack_70;
  float fStack_6c;
  CVector3f CStack_64;
  CVector3f CStack_54;
  float fStack_48;
  void *pvStack_44;
  float fStack_40;
  CDemonActor *pCStack_3c;
  float fStack_38;
  void *pvStack_34;
  CTrigger *pCStack_30;
  CCrate *pCStack_2c;
  float fStack_28;
  void *pvStack_24;
  void *pvStack_20;
  int iStack_1c;
  CDemonActor *pCStack_18;
  CDemonActor *pCStack_14;
  
  bVar10 = 0;
  fStack_f0 = 0.0;
  CStack_ec.x = 0.0;
  pCStack_2c = (CCrate *)0x3f800000;
  fStack_48 = 0.0;
  (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,in_stack_fffffc10);
  pfVar6 = &CStack_1f4.min.y;
  pfVar8 = afStack_258;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar8 = *pfVar6;
    pfVar6 = pfVar6 + (uint)bVar10 * -2 + 1;
    pfVar8 = pfVar8 + (uint)bVar10 * -2 + 1;
  }
  fStack_e0 = fStack_23c;
  core_actor_cpp_FUN_00408d70(this_ptr,&CStack_ec.y);
  iStack_16c = 0;
  iStack_168 = 0;
  afStack_138[2] = CStack_fc.z;
  afStack_138[(uint)bVar10 * -2 + 3] = (&fStack_f0)[(uint)bVar10 * -2];
  (&pCStack_128)[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
       *(CDemonActor **)((int)&CStack_ec + (uint)bVar10 * -8 + (uint)bVar10 * -8);
  (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,in_stack_fffffc18);
  puVar7 = auStack_230;
  puVar9 = auStack_268;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
  }
  aCStack_164[0].z = fStack_24c + _DAT_005ca6ca;
  core_actor_cpp_FUN_00408d70(this_ptr,aCStack_164);
  fStack_14c = fStack_8c;
  (&fStack_148)[(uint)bVar10 * -2] = (float)apvStack_88[(uint)bVar10 * -2];
  *(void **)((int)&CStack_144 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
       apvStack_88[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  if (afStack_9c + 1 != &fStack_14c) {
    afStack_9c[1] = fStack_14c;
    afStack_9c[2] = fStack_148;
    pCStack_90 = (CDemonActor *)CStack_144.x;
  }
  iStack_174 = iStack_1c;
  afStack_17c[0] = 0.0;
  afStack_17c[1] = 0.0;
  core_actor_cpp_FUN_00408d70(this_ptr,afStack_18c + 4);
  apvStack_88[2] = apvStack_bc[0];
  (&fStack_7c)[(uint)bVar10 * -2] = (float)apvStack_bc[(uint)bVar10 * -2 + 1];
  apvStack_78[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
       apvStack_bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 2];
  if (&pvStack_110 != apvStack_88 + 2) {
    pvStack_110 = apvStack_88[2];
    fStack_10c = fStack_7c;
    pvStack_108 = apvStack_78[0];
  }
  if (fStack_38 == 1.4013e-45) {
    acStack_170[0] = '\0';
    acStack_170[1] = '\0';
    acStack_170[2] = '\0';
    acStack_170[3] = '\0';
    iStack_168 = -0x3fc00000;
    iStack_16c = 0;
    core_actor_cpp_FUN_00408cf0(this_ptr,acStack_170);
    pCStack_c8 = (CDemonActor *)CStack_144.y;
    afStack_c4[(uint)bVar10 * -2] = afStack_138[(uint)bVar10 * -2 + -1];
    afStack_c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_138[(uint)bVar10 * -2 + (uint)bVar10 * -2];
    pvStack_44 = (void *)((float)pCStack_128 + (float)pCStack_c8);
    fStack_40 = fStack_124 + afStack_c4[0];
    pCStack_3c = (CDemonActor *)(fStack_120 + afStack_c4[1]);
    pvStack_a4 = (void *)((float)pCStack_128 + (float)pCStack_c8);
    (&pCStack_a0)[(uint)bVar10 * -2] = (CDemonActor *)(&fStack_40)[(uint)bVar10 * -2];
    afStack_9c[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
         (float)(&pCStack_3c)[(uint)bVar10 * -2 + (uint)bVar10 * -2];
    if (apvStack_78 + 1 != &pvStack_a4) {
      apvStack_78[1] = pvStack_a4;
      pCStack_70 = pCStack_a0;
      fStack_6c = afStack_9c[0];
    }
  }
  uStack_11c = 0;
  fStack_118 = 0.0;
  fStack_114 = 1.0;
  core_actor_cpp_FUN_00408cf0(this_ptr,&uStack_11c);
  afStack_18c[1] = afStack_138[1];
  afStack_18c[(uint)bVar10 * -2 + 2] = afStack_138[(uint)bVar10 * -2 + 2];
  afStack_18c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 3] =
       afStack_138[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 3];
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
              core_actor_cpp_FUN_00408de0(unaff_EBP,&fStack_124,pCStack_18);
              auStack_19c._12_4_ = CStack_fc.z;
              afStack_18c[(uint)bVar10 * -2] = (&fStack_f0)[(uint)bVar10 * -2];
              afStack_18c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                   *(float *)((int)&CStack_ec + (uint)bVar10 * -8 + (uint)bVar10 * -8);
              (*((unaff_EBP->vtable)._ub)->getBoundingBox)
                        (unaff_EBP,(CBoundingBox3D *)(auStack_19c + 0xc));
              puVar7 = auStack_1ac;
              puVar9 = auStack_1cc;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
                puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
              }
              iVar5 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041bc20
                                (&CStack_1c4,(CVector3f *)in_stack_fffffc24,(float)in_stack_fffffc28
                                );
              if (iVar5 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)auStack_290);
                in_stack_fffffc24 = (CCharacter *)auStack_290;
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)in_stack_fffffc24,&unaff_ESI->base);
                in_stack_fffffc28 = (CVector3f *)0x40a7f5;
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)(auStack_290 + 0x10),&unaff_ESI->base);
                iVar5 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004c72d0(unaff_ESI);
                if (iVar5 != 0) {
                  core_glass_cpp_CGlass_shatter_FUN_004c6d40(unaff_ESI,&CStack_fc);
                }
              }
            }
          }
          else {
            iVar5 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570(pCVar3,this_ptr);
            if (iVar5 != 0) {
              core_actor_cpp_FUN_00408de0(pCVar3,&fStack_124,pCStack_18);
              out_box = (CBoundingBox3D *)auStack_19c;
              auStack_19c._0_4_ = pvStack_100;
              *(uint *)(auStack_19c + (uint)bVar10 * -8 + 4) =
                   *(uint *)((int)&CStack_fc + (uint)bVar10 * -8);
              *(uint *)(auStack_19c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                   *(uint *)((int)&CStack_fc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 4);
              (*((pCVar3->base).vtable._ub)->getBoundingBox)((CDemonActor *)pCVar3,out_box);
              puVar7 = auStack_20c;
              puVar9 = auStack_1fc;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
                puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
              }
              iVar5 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041bc20
                                (&CStack_1f4,(CVector3f *)in_stack_fffffc24,(float)in_stack_fffffc28
                                );
              if (iVar5 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)(auStack_378 + 0x34))
                ;
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)(auStack_378 + 0x34),&unaff_EBX->base);
                in_stack_fffffc24 = (CCharacter *)g_CConsolePtr;
                engine_console_cpp_CConsole_printf_FUN_00436710
                          (g_CConsolePtr,"%s causing %5.2f damage to %s\n");
                core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0
                          (unaff_EBX,(float)auStack_334._4_4_);
                in_stack_fffffc28 = (CVector3f *)0x40a6f3;
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)auStack_334,&unaff_EBX->base);
              }
            }
          }
        }
        else {
          if ((pCStack_14 != (CDemonActor *)0x0) &&
             (iVar5 = (*(((pCVar2->base).vtable._uc)->_uc).isInvulnerable)(pCVar2), iVar5 != 0)) {
            in_stack_fffffc24 = (CCharacter *)("@CHero" + 1);
            iVar5 = core_actor_cpp_isOfClass_FUN_0040c840(unaff_EBP,"@CHero" + 1);
            if (iVar5 != 0) goto LAB_0040a3a9;
          }
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)(auStack_334 + 0x24));
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_334 + 0x24),(CDemonActor *)pCVar2);
          in_stack_fffffc28 = &CStack_fc;
          in_stack_fffffc24 = pCVar2;
          iVar5 = (*(((pCVar2->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
                            (pCVar2,in_stack_fffffc28,(float)unaff_ESI,(SDamageInfo *)auStack_300);
          if ((iVar5 != 0) && (0.0 < fStack_2ec)) {
            fVar4 = (float)pCVar2->blood_type;
            fVar11 = (float10)1 + (float10)fStack_2ec * (float10)_DAT_005ca6ce;
            round();
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                      (g_CGorePtr,&CStack_ec,aCStack_164,(int)ROUND(fVar11),(EBloodType)fVar4);
            (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                      (this_ptr,hit_type,(SDamageInfo *)(auStack_300 + 0x10),(CDemonActor *)pCVar2);
          }
          iVar5 = (*(((pCVar2->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
                            (pCVar2,&CStack_64,in_stack_00000018,(SDamageInfo *)auStack_2e0);
          if ((iVar5 != 0) &&
             (auStack_38c._0_8_ = (ulonglong)(float)auStack_2d0._4_4_,
             0.0 < (double)auStack_38c._0_8_)) {
            fVar4 = (float)pCVar2->blood_type;
            fVar11 = (float10)1 + (float10)(float)auStack_2d0._4_4_ * (float10)_DAT_005ca6ce;
            round();
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                      (g_CGorePtr,&CStack_54,&CStack_144,(int)ROUND(fVar11),(EBloodType)fVar4);
            (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                      (this_ptr,hit_type,(SDamageInfo *)auStack_2d0,(CDemonActor *)pCVar2);
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
    fStack_28 = 0.0;
    while ((fVar4 = (float)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,&pCStack_70,&fStack_124),
           0.0 <= fVar4 && (fVar4 <= 1.0))) {
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
            iVar5 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570(pCVar3,this_ptr);
            if (iVar5 != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)(auStack_38c + 4));
              (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                        (this_ptr,hit_type,(SDamageInfo *)(auStack_38c + 4),(CDemonActor *)pCVar3);
              engine_console_cpp_CConsole_printf_FUN_00436710
                        (g_CConsolePtr,"%s causing %5.2f damage to %s\n");
              core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(pCVar3,(float)auStack_378._4_4_);
              (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                        (this_ptr,hit_type,(SDamageInfo *)auStack_378,(CDemonActor *)0x0);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&pCStack_30->base);
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)(auStack_2e0 + 0xc));
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_2e0 + 0xc),(CDemonActor *)this_ptr_00
                    );
          (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_2d0 + 0xc),(CDemonActor *)this_ptr_00
                    );
          iVar5 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004c72d0(this_ptr_00);
          if (iVar5 == 0) {
            return 0;
          }
          core_glass_cpp_CGlass_shatter_FUN_004c6d40
                    (this_ptr_00,&g_CDemonSetPtr->collision_impact_position);
        }
      }
      else if (((pCStack_14 == (CDemonActor *)0x0) ||
               (iVar5 = (*(((pCVar2->base).vtable._uc)->_uc).isInvulnerable)(pCVar2), iVar5 == 0))
              || (iVar5 = core_actor_cpp_isOfClass_FUN_0040c840(pCVar1,"CHero"), iVar5 == 0
                 )) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffc3c);
        (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                  (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffc3c,(CDemonActor *)pCVar2);
        CStack_144.x = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
        CStack_144.y = (float)((g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y);
        CStack_144.z = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
        pCStack_3c = (CDemonActor *)CStack_144.x;
        (&fStack_38)[(uint)bVar10 * -2] = afStack_138[(uint)bVar10 * -2 + -2];
        (&pvStack_34)[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
             (void *)afStack_138[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -1];
        fVar4 = (float)_DAT_005ca6d6 /
                SQRT((float)pvStack_34 * (float)pvStack_34 +
                     (float)pCStack_3c * (float)pCStack_3c + fStack_38 * fStack_38);
        afStack_9c[0] = (float)pCStack_3c * fVar4;
        afStack_9c[1] = fStack_38 * fVar4;
        afStack_9c[2] = (float)pvStack_34 * fVar4;
        fStack_48 = (float)pCStack_3c * fVar4;
        (&pvStack_44)[(uint)bVar10 * -2] = (void *)afStack_9c[(uint)bVar10 * -2 + 1];
        (&fStack_40)[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
             afStack_9c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 2];
        core_actor_cpp_FUN_00408de0(hit_type,&g_CDemonSetPtr->collision_impact_position);
        CStack_54.x = afStack_c4[1];
        *(void **)((int)&CStack_54 + (uint)bVar10 * -8 + 4) = apvStack_bc[(uint)bVar10 * -2];
        *(void **)((int)&CStack_54 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             apvStack_bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        if (&CStack_398 != &CStack_54) {
          CStack_398.x = CStack_54.x;
          CStack_398.y = CStack_54.y;
          CStack_398.z = CStack_54.z;
        }
        (**(code **)(*(int *)(hit_type + 0x2b0) + 0x110))
                  ((CCharacter *)hit_type,(SDamageInfo *)&stack0xfffffc4c);
        (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                  (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffc54,(CDemonActor *)hit_type);
        core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
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
