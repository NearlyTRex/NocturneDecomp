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
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  float in_stack_00000018;
  float afStackY_1184 [868];
  CBoundingBox3D *in_stack_fffffc10;
  CBoundingBox3D *in_stack_fffffc18;
  CBoundingBox3D *out_box;
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
  uint auStack_258 [3];
  float fStack_24c;
  uint uStack_23c;
  uint auStack_230 [9];
  uint auStack_20c [4];
  uint auStack_1fc [2];
  byte auStack_1f4 [4];
  uint auStack_1f0 [9];
  uint auStack_1cc [2];
  byte auStack_1c4 [24];
  uint auStack_1ac [4];
  byte auStack_19c [16];
  float afStack_18c [4];
  float afStack_17c [3];
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  CVector3f aCStack_164 [2];
  float fStack_14c;
  float fStack_148;
  CVector3f CStack_144;
  float afStack_138 [4];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float afStack_11c [4];
  uint uStack_10c;
  uint uStack_108;
  float fStack_100;
  CVector3f CStack_fc;
  float fStack_f0;
  CVector3f CStack_ec;
  uint uStack_e0;
  float fStack_c8;
  float afStack_c4 [8];
  float fStack_a4;
  float afStack_a0 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_80;
  uint uStack_7c;
  uint uStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  CVector3f CStack_64;
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  CTrigger *pCStack_30;
  CCrate *pCStack_2c;
  int iStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_1c;
  uint uStack_18;
  CDemonActor *pCStack_14;
  
  bVar8 = 0;
  fStack_f0 = 0.0;
  CStack_ec.x = 0.0;
  pCStack_2c = (CCrate *)0x3f800000;
  fStack_48 = 0.0;
  (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,in_stack_fffffc10);
  puVar6 = auStack_1f0;
  puVar7 = auStack_258;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  uStack_e0 = uStack_23c;
  core_actor_cpp_FUN_00408d70(this_ptr,&CStack_ec.y);
  uStack_16c = 0;
  uStack_168 = 0;
  afStack_138[2] = CStack_fc.z;
  afStack_138[(uint)bVar8 * -2 + 3] = (&fStack_f0)[(uint)bVar8 * -2];
  afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       *(float *)((int)&CStack_ec + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,in_stack_fffffc18);
  puVar6 = auStack_230;
  puVar7 = auStack_268;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  aCStack_164[0].z = fStack_24c + _DAT_005ca6ca;
  core_actor_cpp_FUN_00408d70(this_ptr,aCStack_164);
  fStack_14c = fStack_8c;
  (&fStack_148)[(uint)bVar8 * -2] = afStack_a0[(uint)bVar8 * -2 + 6];
  *(float *)((int)&CStack_144 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
  if (afStack_a0 + 2 != &fStack_14c) {
    afStack_a0[2] = fStack_14c;
    afStack_a0[3] = fStack_148;
    fStack_90 = CStack_144.x;
  }
  afStack_17c[2] = (float)uStack_1c;
  afStack_17c[0] = 0.0;
  afStack_17c[1] = 0.0;
  core_actor_cpp_FUN_00408d70(this_ptr,afStack_18c + 4);
  fStack_80 = afStack_c4[2];
  afStack_a0[(uint)bVar8 * -2 + 9] = afStack_c4[(uint)bVar8 * -2 + 3];
  afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
       afStack_c4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
  if (afStack_138 + 10 != afStack_a0 + 8) {
    afStack_11c[3] = fStack_80;
    uStack_10c = uStack_7c;
    uStack_108 = uStack_78;
  }
  if (afStack_44[3] == 1.4013e-45) {
    uStack_170 = 0;
    uStack_168 = 0xc0400000;
    uStack_16c = 0;
    core_actor_cpp_FUN_00408cf0(this_ptr,&uStack_170);
    fStack_c8 = CStack_144.y;
    afStack_c4[(uint)bVar8 * -2] = afStack_138[(uint)bVar8 * -2 + -1];
    afStack_c4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2];
    afStack_44[0] = fStack_128 + fStack_c8;
    afStack_44[1] = fStack_124 + afStack_c4[0];
    afStack_44[2] = fStack_120 + afStack_c4[1];
    fStack_a4 = fStack_128 + fStack_c8;
    afStack_a0[(uint)bVar8 * -2] = afStack_44[(uint)bVar8 * -2 + 1];
    afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2];
    if (afStack_a0 + 0xb != &fStack_a4) {
      fStack_74 = fStack_a4;
      fStack_70 = afStack_a0[0];
      fStack_6c = afStack_a0[1];
    }
  }
  afStack_11c[0] = 0.0;
  afStack_11c[1] = 0.0;
  afStack_11c[2] = 1.0;
  core_actor_cpp_FUN_00408cf0(this_ptr,afStack_138 + 7);
  afStack_18c[1] = afStack_138[1];
  afStack_18c[(uint)bVar8 * -2 + 2] = afStack_138[(uint)bVar8 * -2 + 2];
  afStack_18c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3] =
       afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3];
  pCStack_14 = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
  if (fStack_34 == 0.0) {
    fStack_20 = fStack_34;
    for (fStack_24 = fStack_34; (int)fStack_24 < g_CDemonSetPtr->actor_count;
        fStack_24 = (float)((int)fStack_24 + 1)) {
      pCVar1 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + (int)fStack_20);
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
              core_actor_cpp_FUN_00408de0(unaff_EBP,afStack_138 + 5,uStack_18);
              auStack_19c._12_4_ = CStack_fc.z;
              afStack_18c[(uint)bVar8 * -2] = (&fStack_f0)[(uint)bVar8 * -2];
              afStack_18c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                   *(float *)((int)&CStack_ec + (uint)bVar8 * -8 + (uint)bVar8 * -8);
              (*((unaff_EBP->vtable)._ub)->getBoundingBox)
                        (unaff_EBP,(CBoundingBox3D *)(auStack_19c + 0xc));
              puVar6 = auStack_1ac;
              puVar7 = auStack_1cc;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
                puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
              }
              iVar5 = core_box_cpp_FUN_0041bc20(auStack_1c4);
              if (iVar5 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)auStack_290);
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)auStack_290,&unaff_ESI->base);
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)(auStack_290 + 0x10),&unaff_ESI->base);
                iVar5 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004c72d0(unaff_ESI);
                if (iVar5 != 0) {
                  core_glass_cpp_FUN_004c6d40();
                }
              }
            }
          }
          else {
            iVar5 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570(pCVar3,this_ptr);
            if (iVar5 != 0) {
              core_actor_cpp_FUN_00408de0(pCVar3,afStack_138 + 5,uStack_18);
              out_box = (CBoundingBox3D *)auStack_19c;
              auStack_19c._0_4_ = fStack_100;
              *(uint *)(auStack_19c + (uint)bVar8 * -8 + 4) =
                   *(uint *)((int)&CStack_fc + (uint)bVar8 * -8);
              *(uint *)(auStack_19c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                   *(uint *)((int)&CStack_fc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4);
              (*((pCVar3->base).vtable._ub)->getBoundingBox)((CDemonActor *)pCVar3,out_box);
              puVar6 = auStack_20c;
              puVar7 = auStack_1fc;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
                puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
              }
              iVar5 = core_box_cpp_FUN_0041bc20(auStack_1f4);
              if (iVar5 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)(auStack_378 + 0x34))
                ;
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)(auStack_378 + 0x34),&unaff_EBX->base);
                engine_console_cpp_CConsole_printf_FUN_00436710
                          (g_CConsolePtr,"%s causing %5.2f damage to %s\n");
                core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0
                          (unaff_EBX,(float)auStack_334._4_4_);
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)auStack_334,&unaff_EBX->base);
              }
            }
          }
        }
        else if (((pCStack_14 == (CDemonActor *)0x0) ||
                 (iVar5 = (*(((pCVar2->base).vtable._uc)->_uc).isInvulnerable)(pCVar2), iVar5 == 0))
                || (iVar5 = core_actor_cpp_isOfClass_FUN_0040c840(unaff_EBP,"@CHero" + 1),
                   iVar5 == 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)(auStack_334 + 0x24));
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_334 + 0x24),(CDemonActor *)pCVar2);
          iVar5 = (*(((pCVar2->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
                            (pCVar2,&CStack_fc,(float)unaff_ESI,(SDamageInfo *)auStack_300);
          if ((iVar5 != 0) && (0.0 < fStack_2ec)) {
            fVar4 = (float)pCVar2->blood_type;
            fVar9 = (float10)1 + (float10)fStack_2ec * (float10)_DAT_005ca6ce;
            round();
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                      (g_CGorePtr,&CStack_ec,aCStack_164,(int)ROUND(fVar9),(EBloodType)fVar4);
            (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                      (this_ptr,hit_type,(SDamageInfo *)(auStack_300 + 0x10),(CDemonActor *)pCVar2);
          }
          iVar5 = (*(((pCVar2->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
                            (pCVar2,&CStack_64,in_stack_00000018,(SDamageInfo *)auStack_2e0);
          if ((iVar5 != 0) &&
             (auStack_38c._0_8_ = (ulonglong)(float)auStack_2d0._4_4_,
             0.0 < (double)auStack_38c._0_8_)) {
            fVar4 = (float)pCVar2->blood_type;
            fVar9 = (float10)1 + (float10)(float)auStack_2d0._4_4_ * (float10)_DAT_005ca6ce;
            round();
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                      (g_CGorePtr,&CStack_54,&CStack_144,(int)ROUND(fVar9),(EBloodType)fVar4);
            (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                      (this_ptr,hit_type,(SDamageInfo *)auStack_2d0,(CDemonActor *)pCVar2);
          }
        }
      }
      fStack_20 = (float)((int)fStack_20 + 4);
    }
  }
  if (fStack_34 == 1.4013e-45) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,this_ptr);
    core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_00537df0(g_CDemonSetPtr);
    if (pCStack_14 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,pCStack_14);
    }
    iStack_28 = 0;
    while ((fVar4 = (float)core_setcolid_cpp_FUN_00535ee0
                                     (g_CDemonSetPtr,afStack_a0 + 0xc,afStack_138 + 5), 0.0 <= fVar4
           && (fVar4 <= 1.0))) {
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
          core_glass_cpp_FUN_004c6d40();
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
        CStack_144.y = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
        CStack_144.z = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
        afStack_44[2] = CStack_144.x;
        afStack_44[(uint)bVar8 * -2 + 3] = afStack_138[(uint)bVar8 * -2 + -2];
        afStack_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_138[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -1];
        fVar4 = (float)_DAT_005ca6d6 /
                SQRT(fStack_34 * fStack_34 +
                     afStack_44[2] * afStack_44[2] + afStack_44[3] * afStack_44[3]);
        afStack_a0[1] = afStack_44[2] * fVar4;
        afStack_a0[2] = afStack_44[3] * fVar4;
        afStack_a0[3] = fStack_34 * fVar4;
        fStack_48 = afStack_44[2] * fVar4;
        afStack_44[(uint)bVar8 * -2] = afStack_a0[(uint)bVar8 * -2 + 2];
        afStack_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3];
        core_actor_cpp_FUN_00408de0(hit_type,&g_CDemonSetPtr->collision_impact_position);
        CStack_54.x = afStack_c4[1];
        *(float *)((int)&CStack_54 + (uint)bVar8 * -8 + 4) = afStack_c4[(uint)bVar8 * -2 + 2];
        *(float *)((int)&CStack_54 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_c4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3];
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
      iStack_28 = iStack_28 + 1;
      if (3 < iStack_28) {
        return 0;
      }
    }
  }
  return 0;
}
