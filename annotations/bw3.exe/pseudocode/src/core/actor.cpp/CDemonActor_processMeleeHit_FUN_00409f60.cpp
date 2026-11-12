// Name: core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f60
// Address: 00409f60
// Address Range: [[00409f60, 0040ac90]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_processMeleeHit_FUN_00409f60(CDemonActor *this_ptr,int hit_type)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_actor_cpp_CDemonActor_processMeleeHit_FUN_00409f60(CDemonActor *this_ptr,int hit_type)

{
  CDemonActor *pCVar1;
  float fVar2;
  CCharacter *this_ptr_00;
  float fVar3;
  EDeathState EVar4;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  CFlameCan *this_ptr_03;
  int iVar5;
  CCharacter *unaff_EBX;
  CTrigger *unaff_EBP;
  CTrigger *unaff_ESI;
  float *pfVar6;
  uint *puVar7;
  CDemonActor **ppCVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  float afStackY_1170 [76];
  CDemonActor *apCStackY_1040 [2];
  float fStackY_1038;
  CDemonActor *apCStackY_1034 [802];
  CBoundingBox3D *in_stack_fffffc58;
  CBoundingBox3D *pCVar12;
  EBloodType blood_type;
  byte auStack_370 [68];
  byte auStack_32c [52];
  byte auStack_2f8 [68];
  byte auStack_2b4 [52];
  byte auStack_280 [12];
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  byte auStack_254 [32];
  SDamageInfo SStack_234;
  byte auStack_1f8 [24];
  uint auStack_1e0 [3];
  uint auStack_1d4 [4];
  uint auStack_1c4 [7];
  uint uStack_1a8;
  uint auStack_1a0 [2];
  byte auStack_198 [16];
  float fStack_188;
  float afStack_184 [7];
  float fStack_168;
  float afStack_164 [5];
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  uint uStack_138;
  float afStack_134 [8];
  CVector3f CStack_114;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  byte auStack_f8 [16];
  float afStack_e8 [5];
  float afStack_d4 [5];
  byte auStack_c0 [8];
  uint uStack_b8;
  float fStack_b4;
  float afStack_b0 [4];
  CVector3f CStack_a0;
  float fStack_94;
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [10];
  float fStack_58;
  CDemonActor *pCStack_54;
  float fStack_50;
  float afStack_4c [2];
  CDemonActor *pCStack_44;
  int iStack_40;
  CDemonActor *pCStack_3c;
  int iStack_38;
  CTrigger *pCStack_34;
  CCrate *pCStack_30;
  CDemonActor *pCStack_2c;
  int iStack_28;
  uint uStack_24;
  CDemonActor *pCStack_20;
  CGlass *pCStack_1c;
  CDemonActor *pCStack_18;
  CCharacter *pCStack_14;
  
  bVar10 = 0;
  afStack_4c[1] = 0.0;
  pCStack_44 = (CDemonActor *)0x0;
  afStack_d4[3] = 0.0;
  afStack_d4[4] = 0.0;
  (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,in_stack_fffffc58);
  puVar7 = auStack_1d4;
  puVar9 = auStack_1c4;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
  }
  uStack_b8 = uStack_1a8;
  core_actor_cpp_FUN_00408b80(this_ptr,auStack_c0);
  iVar5 = iStack_40;
  fStack_b4 = afStack_164[2];
  afStack_b0[(uint)bVar10 * -2] = afStack_164[(uint)bVar10 * -2 + 3];
  afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
  if (iVar5 == 1) {
    afStack_e8[3] = -3.0;
    afStack_e8[1] = 0.0;
    afStack_e8[2] = 0.0;
    core_actor_cpp_FUN_00408b00(this_ptr,afStack_e8 + 1);
    fVar2 = afStack_b0[0];
    fVar3 = fStack_b4;
    afStack_d4[2] = afStack_80[2];
    afStack_d4[(uint)bVar10 * -2 + 3] = afStack_80[(uint)bVar10 * -2 + 3];
    *(float *)(auStack_c0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -4) =
         afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    afStack_b0[2] = fVar3 + afStack_d4[2];
    afStack_b0[3] = fVar2 + afStack_d4[3];
    CStack_a0.x = afStack_b0[1] + afStack_d4[4];
    fStack_168 = fVar3 + afStack_d4[2];
    afStack_164[(uint)bVar10 * -2] = afStack_b0[(uint)bVar10 * -2 + 3];
    afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         *(float *)((int)&CStack_a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    if (&fStack_108 != &fStack_168) {
      fStack_108 = fStack_168;
      fStack_104 = afStack_164[0];
      fStack_100 = afStack_164[1];
    }
  }
  iVar5 = core_actor_cpp_isOfClass_FUN_0040c790(this_ptr,"@CHolycross" + 1);
  if (iVar5 != 0) {
    iStack_40 = 1;
    if ((CLocation *)&fStack_108 != &this_ptr->location) {
      fStack_108 = (this_ptr->location).position.x;
      fStack_104 = (this_ptr->location).position.y;
      fStack_100 = (this_ptr->location).position.z;
    }
    afStack_134[5] = 0.0;
    afStack_134[6] = 2.0;
    afStack_134[7] = 0.0;
    core_actor_cpp_FUN_00408b00(this_ptr,afStack_134 + 5);
    fStack_150 = CStack_a0.y;
    afStack_164[(uint)bVar10 * -2 + 6] = *(float *)((int)&CStack_a0 + (uint)bVar10 * -8 + 8);
    afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         (&fStack_94)[(uint)bVar10 * -2 + (uint)bVar10 * -2];
    afStack_e8[4] = (this_ptr->location).position.x + fStack_150;
    afStack_d4[0] = (this_ptr->location).position.y + fStack_14c;
    afStack_d4[1] = (this_ptr->location).position.z + fStack_148;
    fStack_84 = afStack_e8[4];
    afStack_80[(uint)bVar10 * -2] = afStack_d4[(uint)bVar10 * -2];
    afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    if (&fStack_b4 != &fStack_84) {
      fStack_b4 = fStack_84;
      afStack_b0[0] = afStack_80[0];
      afStack_b0[1] = afStack_80[1];
    }
  }
  iStack_28 = 0x40000000;
  afStack_134[2] = 0.0;
  afStack_134[4] = 1.0;
  afStack_134[3] = 0.0;
  core_actor_cpp_FUN_00408b00(this_ptr,afStack_134 + 2);
  uStack_138 = afStack_184[1];
  afStack_134[(uint)bVar10 * -2] = afStack_184[(uint)bVar10 * -2 + 2];
  afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       afStack_184[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 3];
  pCStack_18 = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
  if (pCStack_3c == (CDemonActor *)0x0) {
    pCStack_20 = pCStack_3c;
    for (pCStack_2c = pCStack_3c; (int)pCStack_2c < g_CDemonSetPtr->actor_count;
        pCStack_2c = (CDemonActor *)(pCStack_2c->actor_name + 1)) {
      pCVar1 = *(CDemonActor **)
                (pCStack_20[0xf7e].actor_name + (int)(g_CDemonSetPtr->cameras[0].name + 0x14));
      if ((pCVar1 != this_ptr) && (pCVar1 != pCStack_18)) {
        this_ptr_00 = (CCharacter *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (pCVar1,g_CCharacterClassInfo.name_hash);
        if (this_ptr_00 == (CCharacter *)0x0) {
          unaff_EBP = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (pCVar1,g_CTriggerClassInfo.name_hash);
          if (unaff_EBP == (CTrigger *)0x0) {
            pCStack_44 = core_actor_cpp_castToClassHash_FUN_0040c840
                                   (pCVar1,g_CGlassClassInfo.name_hash);
            if (pCStack_44 != (CDemonActor *)0x0) {
              core_actor_cpp_FUN_00408bf0(pCStack_44,afStack_b0,uStack_24);
              pCVar1 = pCStack_44;
              pCVar12 = (CBoundingBox3D *)(auStack_f8 + 0xc);
              auStack_f8._12_4_ = fStack_188;
              afStack_e8[(uint)bVar10 * -2] = afStack_184[(uint)bVar10 * -2];
              afStack_e8[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 1] =
                   afStack_184[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
              (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,pCVar12);
              puVar7 = auStack_1e0;
              puVar9 = auStack_1a0;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
                puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
              }
              iVar5 = core_box_cpp_FUN_0041eed0(auStack_198);
              if (iVar5 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)(auStack_2f8 + 0x34))
                ;
                pCVar1 = pCStack_3c;
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)(auStack_2f8 + 0x34),pCStack_3c);
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)auStack_2b4,pCVar1);
                iVar5 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(pCStack_1c);
                if (iVar5 != 0) {
                  core_glass_cpp_FUN_004cc040();
                }
              }
            }
          }
          else {
            iVar5 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0(unaff_EBP,this_ptr);
            if (iVar5 != 0) {
              core_actor_cpp_FUN_00408bf0(unaff_EBP,afStack_b0,uStack_24);
              pCVar12 = (CBoundingBox3D *)auStack_f8;
              auStack_f8._0_4_ = fStack_50;
              *(float *)(auStack_f8 + (uint)bVar10 * -8 + 4) = afStack_4c[(uint)bVar10 * -2];
              *(float *)(auStack_f8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                   afStack_4c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
              (*((unaff_EBP->base).vtable._ub)->getBoundingBox)((CDemonActor *)unaff_EBP,pCVar12);
              pfVar6 = &SStack_234.impact_direction.z;
              ppCVar8 = &SStack_234.attacker;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *ppCVar8 = (CDemonActor *)*pfVar6;
                pfVar6 = pfVar6 + (uint)bVar10 * -2 + 1;
                ppCVar8 = ppCVar8 + (uint)bVar10 * -2 + 1;
              }
              iVar5 = core_box_cpp_FUN_0041eed0(auStack_1f8);
              if (iVar5 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)(auStack_370 + 0x34))
                ;
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)(auStack_370 + 0x34),&unaff_ESI->base);
                engine_console_cpp_CConsole_printf_FUN_00441ff0
                          (g_CConsolePtr,"%s causing %5.2f damage to %s\n");
                core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20
                          (unaff_ESI,(float)auStack_32c._4_4_);
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)auStack_32c,&unaff_ESI->base);
              }
            }
          }
        }
        else if (((pCStack_18 == (CDemonActor *)0x0) ||
                 (iVar5 = (*(((this_ptr_00->base).vtable._uc)->_uc).isInvulnerable)(this_ptr_00),
                 iVar5 == 0)) ||
                (iVar5 = core_actor_cpp_isOfClass_FUN_0040c790(&pCStack_14->base,"CHero"),
                iVar5 == 0)) {
          uStack_24 = 0x40000000;
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)auStack_254);
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)auStack_254,(CDemonActor *)this_ptr_00);
          (*(((this_ptr_00->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
                    (this_ptr_00,&CStack_a0,2.0,(SDamageInfo *)(auStack_254 + 0x10));
          if (0.0 < SStack_234.damage_amount) {
            blood_type = this_ptr_00->blood_type;
            fVar11 = (float10)1 + (float10)SStack_234.damage_amount * (float10)_DAT_005b5679;
            round();
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                      (g_CGorePtr,&CStack_90,&CStack_114,(int)ROUND(fVar11),blood_type);
            (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                      (this_ptr,hit_type,&SStack_234,(CDemonActor *)this_ptr_00);
            unaff_ESI = (CTrigger *)0x1;
          }
        }
      }
      pCStack_20 = (CDemonActor *)(pCStack_20->actor_name + 4);
    }
  }
  if (pCStack_3c == (CDemonActor *)0x1) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,this_ptr);
    core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(g_CDemonSetPtr);
    if (pCStack_18 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCStack_18);
    }
    iStack_28 = 0;
    pCStack_1c = (CGlass *)&this_ptr->location;
    while( true ) {
      fVar3 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,&fStack_104,afStack_b0);
      iVar5 = core_actor_cpp_isOfClass_FUN_0040c790(this_ptr,"CHolycross");
      if ((iVar5 != 0) && ((fVar3 < 0.0 || (1.0 < fVar3)))) {
        if ((CGlass *)&fStack_104 != pCStack_1c) {
          fStack_104 = ((CVector3f *)&pCStack_1c->base)->x;
          fStack_100 = ((CVector3f *)&pCStack_1c->base)->y;
          fStack_fc = ((CVector3f *)&pCStack_1c->base)->z;
        }
        fStack_100 = fStack_100 + _DAT_005b5689;
        fVar3 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,&fStack_104,afStack_b0);
      }
      if ((fVar3 < 0.0) || (1.0 < fVar3)) break;
      pCStack_14 = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c840
                             (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
      if ((pCStack_14 != (CCharacter *)0x0) &&
         (EVar4 = (*(((pCStack_14->base).vtable._uc)->_uc).getDeathState)(pCStack_14),
         0 < (int)EVar4)) {
        unaff_EBP = (CTrigger *)0x0;
      }
      this_ptr_01 = (CGlass *)
                    core_actor_cpp_castToClassHash_FUN_0040c840
                              (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
      this_ptr_02 = (CTrigger *)
                    core_actor_cpp_castToClassHash_FUN_0040c840
                              (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
      pCStack_34 = this_ptr_02;
      pCStack_30 = (CCrate *)
                   core_actor_cpp_castToClassHash_FUN_0040c840
                             (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
      this_ptr_03 = (CFlameCan *)
                    core_actor_cpp_castToClassHash_FUN_0040c840
                              (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
      pCVar1 = pCStack_18;
      if (pCStack_14 == (CCharacter *)0x0) {
        if (this_ptr_01 == (CGlass *)0x0) {
          if (this_ptr_02 == (CTrigger *)0x0) {
            if (pCStack_30 == (CCrate *)0x0) {
              if (this_ptr_03 == (CFlameCan *)0x0) {
                return iStack_38;
              }
              core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(this_ptr_03);
            }
            else {
              core_crate_cpp_FUN_004461c0(pCStack_30);
            }
          }
          else {
            iVar5 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0(this_ptr_02,this_ptr);
            if (iVar5 != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)(auStack_32c + 0x24));
              (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                        (this_ptr,hit_type,(SDamageInfo *)(auStack_32c + 0x24),
                         (CDemonActor *)this_ptr_02);
              engine_console_cpp_CConsole_printf_FUN_00441ff0
                        (g_CConsolePtr,"%s causing %5.2f damage to %s\n");
              core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20
                        (this_ptr_02,(float)auStack_2f8._4_4_);
              (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                        (this_ptr,hit_type,(SDamageInfo *)auStack_2f8,(CDemonActor *)0x0);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&pCStack_34->base);
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffc80);
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffc80,(CDemonActor *)this_ptr_01);
          (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                    (this_ptr,hit_type,(SDamageInfo *)auStack_370,(CDemonActor *)this_ptr_01);
          iVar5 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_01);
          if (iVar5 == 0) {
            return iStack_38;
          }
          core_glass_cpp_FUN_004cc040(this_ptr_01);
        }
      }
      else if (((pCStack_18 == (CDemonActor *)0x0) ||
               (iVar5 = (*(((pCStack_14->base).vtable._uc)->_uc).isInvulnerable)(pCStack_14),
               iVar5 == 0)) ||
              (iVar5 = core_actor_cpp_isOfClass_FUN_0040c790(pCVar1,"CHero"), iVar5 == 0))
      {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)(auStack_2b4 + 0x24));
        auStack_2b4._36_4_ = g_CDemonSetPtr->collision_part_index;
        (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                  (this_ptr,hit_type,(SDamageInfo *)(auStack_2b4 + 0x24),&pCStack_14->base);
        afStack_134[1] = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
        afStack_134[2] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
        afStack_134[3] = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
        afStack_164[1] = afStack_134[1];
        afStack_164[(uint)bVar10 * -2 + 2] = afStack_134[(uint)bVar10 * -2 + 2];
        afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 3] =
             afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 3];
        pCStack_30 = (CCrate *)
                     ((float)_DAT_005b5681 /
                     SQRT(afStack_164[3] * afStack_164[3] +
                          afStack_164[1] * afStack_164[1] + afStack_164[2] * afStack_164[2]));
        afStack_4c[0] = afStack_164[1] * (float)pCStack_30;
        afStack_4c[1] = afStack_164[2] * (float)pCStack_30;
        pCStack_44 = (CDemonActor *)(afStack_164[3] * (float)pCStack_30);
        afStack_80[1] = afStack_164[1] * (float)pCStack_30;
        afStack_80[(uint)bVar10 * -2 + 2] = afStack_4c[(uint)bVar10 * -2 + 1];
        afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 3] =
             (float)(&pCStack_44)[(uint)bVar10 * -2 + (uint)bVar10 * -2];
        if (&fStack_274 != afStack_80 + 1) {
          fStack_274 = afStack_80[1];
          fStack_270 = afStack_80[2];
          fStack_26c = afStack_80[3];
        }
        core_actor_cpp_FUN_00408bf0(unaff_EBX,&g_CDemonSetPtr->collision_impact_position);
        fStack_100 = fStack_58;
        (&fStack_fc)[(uint)bVar10 * -2] = (float)(&pCStack_54)[(uint)bVar10 * -2];
        *(CDemonActor **)(auStack_f8 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
             (&pCStack_54)[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        if (&fStack_264 != &fStack_100) {
          fStack_264 = fStack_100;
          fStack_260 = fStack_fc;
          fStack_25c = (float)auStack_f8._0_4_;
        }
        (*(((unaff_EBX->base).vtable._uc)->_uc).processDamage)(unaff_EBX,(SDamageInfo *)auStack_280)
        ;
        pCStack_20 = (CDemonActor *)0x1;
        (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                  (this_ptr,hit_type,(SDamageInfo *)(auStack_280 + 8),&unaff_EBX->base);
        return (int)unaff_EBP;
      }
      iStack_28 = iStack_28 + 1;
      if (3 < iStack_28) {
        return iStack_38;
      }
    }
  }
  return iStack_38;
}
