// Name: core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f60
// Address: 00409f60
// Address Range: [[00409f60, 0040ac90]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_processMeleeHit_FUN_00409f60(CDemonActor *this_ptr,int hit_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_actor_cpp_CDemonActor_processMeleeHit_FUN_00409f60(CDemonActor *this_ptr,int hit_type)

{
  CDemonActor *pCVar1;
  float fVar2;
  CCharacter *this_ptr_00;
  float fVar3;
  EDeathState EVar4;
  CGlass *pCVar5;
  CTrigger *this_ptr_01;
  CFlameCan *this_ptr_02;
  int iVar6;
  CCharacter *unaff_EBX;
  CTrigger *unaff_EBP;
  CTrigger *unaff_ESI;
  EAmmoType *pEVar7;
  uint *puVar8;
  CDemonActor **ppCVar9;
  uint *puVar10;
  byte bVar11;
  double dVar12;
  float afStackY_1170 [79];
  CDemonActor *apCStackY_1034 [802];
  CBoundingBox3D *in_stack_fffffc58;
  CBoundingBox3D *pCVar13;
  char *in_stack_fffffc64;
  CVector3f *in_stack_fffffc68;
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
  byte auStack_254 [28];
  SDamageInfo SStack_238;
  CBoundingBox3D CStack_1f8;
  uint auStack_1e0 [3];
  uint auStack_1d4 [4];
  uint auStack_1c4 [7];
  float fStack_1a8;
  uint auStack_1a0 [2];
  byte auStack_198 [20];
  float fStack_184;
  CVector3f aCStack_180 [2];
  float fStack_168;
  float afStack_164 [2];
  CVector3f CStack_15c;
  float fStack_150;
  float afStack_14c [5];
  float fStack_138;
  float afStack_134 [2];
  CVector3f CStack_12c;
  byte auStack_120 [24];
  float fStack_108;
  CVector3f CStack_104;
  byte auStack_f8 [16];
  float fStack_e8;
  CVector3f CStack_e4;
  float fStack_d8;
  float afStack_d4 [5];
  CVector3f CStack_c0;
  float fStack_b4;
  CVector3f CStack_b0;
  float fStack_a4;
  byte auStack_a0 [8];
  float fStack_98;
  CVector3f CStack_94;
  CVector3f CStack_88;
  float fStack_7c;
  CVector3f aCStack_78 [2];
  byte auStack_58 [12];
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
  
  bVar11 = 0;
  afStack_4c[1] = 0.0;
  pCStack_44 = (CDemonActor *)0x0;
  afStack_d4[3] = 0.0;
  afStack_d4[4] = 0.0;
  (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,in_stack_fffffc58);
  puVar8 = auStack_1d4;
  puVar10 = auStack_1c4;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
  }
  CStack_c0.z = fStack_1a8;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(this_ptr,&CStack_c0,&CStack_15c);
  iVar6 = iStack_40;
  fStack_b4 = CStack_15c.x;
  *(uint *)((int)&CStack_b0 + (uint)bVar11 * -8) =
       *(uint *)((int)&CStack_15c + (uint)bVar11 * -8 + 4);
  *(uint *)((int)&CStack_b0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 4) =
       *(uint *)((int)&CStack_15c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
  if (iVar6 == 1) {
    CStack_e4.z = -3.0;
    CStack_e4.x = 0.0;
    CStack_e4.y = 0.0;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408b00(this_ptr,&CStack_e4,aCStack_78);
    fVar2 = CStack_b0.x;
    fVar3 = fStack_b4;
    afStack_d4[2] = aCStack_78[0].x;
    afStack_d4[(uint)bVar11 * -2 + 3] = *(float *)((int)aCStack_78 + (uint)bVar11 * -8 + 4);
    afStack_d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         *(float *)((int)aCStack_78 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    CStack_b0.z = fVar3 + afStack_d4[2];
    fStack_a4 = fVar2 + afStack_d4[3];
    auStack_a0._0_4_ = CStack_b0.y + afStack_d4[4];
    fStack_168 = fVar3 + afStack_d4[2];
    afStack_164[(uint)bVar11 * -2] = (&fStack_a4)[(uint)bVar11 * -2];
    afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         *(float *)(auStack_a0 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
    if (&fStack_108 != &fStack_168) {
      fStack_108 = fStack_168;
      CStack_104.x = afStack_164[0];
      CStack_104.y = afStack_164[1];
    }
  }
  iVar6 = core_actor_cpp_isOfClass_FUN_0040c790(this_ptr,"@CHolycross" + 1);
  if (iVar6 != 0) {
    iStack_40 = 1;
    if ((CLocation *)&fStack_108 != &this_ptr->location) {
      fStack_108 = (this_ptr->location).position.x;
      CStack_104.x = (this_ptr->location).position.y;
      CStack_104.y = (this_ptr->location).position.z;
    }
    auStack_120._0_4_ = 0.0;
    auStack_120._4_4_ = 2.0;
    auStack_120._8_4_ = 0.0;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
              (this_ptr,(CVector3f *)auStack_120,(CVector3f *)(auStack_a0 + 4));
    fStack_150 = (float)auStack_a0._4_4_;
    afStack_14c[(uint)bVar11 * -2] = (&fStack_98)[(uint)bVar11 * -2];
    afStack_14c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         *(float *)((int)&CStack_94 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
    fStack_d8 = (this_ptr->location).position.x + fStack_150;
    afStack_d4[0] = (this_ptr->location).position.y + afStack_14c[0];
    afStack_d4[1] = (this_ptr->location).position.z + afStack_14c[1];
    CStack_88.y = fStack_d8;
    *(float *)((int)&CStack_88 + (uint)bVar11 * -8 + 8) = afStack_d4[(uint)bVar11 * -2];
    (&fStack_7c)[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
         afStack_d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    if (&fStack_b4 != &CStack_88.y) {
      fStack_b4 = CStack_88.y;
      CStack_b0.x = CStack_88.z;
      CStack_b0.y = fStack_7c;
    }
  }
  iStack_28 = 0x40000000;
  CStack_12c.x = 0.0;
  CStack_12c.z = 1.0;
  CStack_12c.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408b00(this_ptr,&CStack_12c,aCStack_180);
  fStack_138 = aCStack_180[0].x;
  afStack_134[(uint)bVar11 * -2] = *(float *)((int)aCStack_180 + (uint)bVar11 * -8 + 4);
  afStack_134[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       *(float *)((int)aCStack_180 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
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
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                        (pCStack_44,&CStack_b0,(CVector3f *)(auStack_198 + 0x10));
              pCVar1 = pCStack_44;
              pCVar13 = (CBoundingBox3D *)(auStack_f8 + 0xc);
              auStack_f8._12_4_ = auStack_198._16_4_;
              (&fStack_e8)[(uint)bVar11 * -2] = (&fStack_184)[(uint)bVar11 * -2];
              *(uint *)((int)&CStack_e4 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
                   *(uint *)((int)aCStack_180 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
              (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,pCVar13);
              puVar8 = auStack_1e0;
              puVar10 = auStack_1a0;
              for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar10 = *puVar8;
                puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
                puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
              }
              iVar6 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041eed0
                                ((CBoundingBox3D *)auStack_198,(CVector3f *)in_stack_fffffc64,
                                 (float)in_stack_fffffc68);
              if (iVar6 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)(auStack_2f8 + 0x34))
                ;
                pCVar1 = pCStack_3c;
                in_stack_fffffc64 = auStack_2f8 + 0x34;
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)in_stack_fffffc64,pCStack_3c);
                in_stack_fffffc68 = (CVector3f *)0x40a635;
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)auStack_2b4,pCVar1);
                pCVar5 = pCStack_1c;
                iVar6 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(pCStack_1c);
                if (iVar6 != 0) {
                  core_glass_cpp_CGlass_shatter_FUN_004cc040(pCVar5,&CStack_88);
                }
              }
            }
          }
          else {
            iVar6 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0(unaff_EBP,this_ptr);
            if (iVar6 != 0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                        ((CDemonActor *)unaff_EBP,&CStack_b0,(CVector3f *)(auStack_58 + 8));
              pCVar13 = (CBoundingBox3D *)auStack_f8;
              auStack_f8._0_4_ = auStack_58._8_4_;
              *(float *)(auStack_f8 + (uint)bVar11 * -8 + 4) = afStack_4c[(uint)bVar11 * -2];
              *(float *)(auStack_f8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
                   afStack_4c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
              (*((unaff_EBP->base).vtable._ub)->getBoundingBox)((CDemonActor *)unaff_EBP,pCVar13);
              pEVar7 = &SStack_238.ammo_type;
              ppCVar9 = &SStack_238.wielder;
              for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                *ppCVar9 = (CDemonActor *)*pEVar7;
                pEVar7 = pEVar7 + (uint)bVar11 * -2 + 1;
                ppCVar9 = ppCVar9 + (uint)bVar11 * -2 + 1;
              }
              iVar6 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041eed0
                                (&CStack_1f8,(CVector3f *)in_stack_fffffc64,(float)in_stack_fffffc68
                                );
              if (iVar6 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)(auStack_370 + 0x34))
                ;
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)(auStack_370 + 0x34),&unaff_ESI->base);
                in_stack_fffffc64 = (char *)g_CConsolePtr;
                engine_console_cpp_CConsole_printf_FUN_00441ff0
                          (g_CConsolePtr,"%s causing %5.2f damage to %s\n");
                core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20
                          (unaff_ESI,(float)auStack_32c._4_4_);
                in_stack_fffffc68 = (CVector3f *)0x40a538;
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)auStack_32c,&unaff_ESI->base);
              }
            }
          }
        }
        else {
          if ((pCStack_18 != (CDemonActor *)0x0) &&
             (iVar6 = (*(((this_ptr_00->base).vtable._uc)->_uc).isInvulnerable)(this_ptr_00),
             iVar6 != 0)) {
            in_stack_fffffc64 = "CHero";
            iVar6 = core_actor_cpp_isOfClass_FUN_0040c790(&pCStack_14->base,"CHero");
            if (iVar6 != 0) goto LAB_0040a2aa;
          }
          uStack_24 = 0x40000000;
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)auStack_254);
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)auStack_254,(CDemonActor *)this_ptr_00);
          in_stack_fffffc68 = (CVector3f *)auStack_a0;
          in_stack_fffffc64 = (char *)this_ptr_00;
          (*(((this_ptr_00->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
                    (this_ptr_00,in_stack_fffffc68,2.0,(SDamageInfo *)(auStack_254 + 0x10));
          if (0.0 < (double)SStack_238.gore_multiplier) {
            blood_type = 0x40a3b1;
            dVar12 = round
                               ((double)SStack_238.gore_multiplier * _DAT_005b5679 + 1.0);
            in_stack_fffffc68 = (CVector3f *)0x40a3dc;
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                      (g_CGorePtr,&CStack_94,(CVector3f *)(auStack_120 + 8),(int)ROUND(dVar12),
                       blood_type);
            (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                      (this_ptr,hit_type,&SStack_238,(CDemonActor *)this_ptr_00);
          }
        }
      }
LAB_0040a2aa:
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
      fVar3 = core_setcolid_cpp_CDemonSet_raycast_FUN_0053ccc0
                        (g_CDemonSetPtr,&CStack_104,&CStack_b0);
      iVar6 = core_actor_cpp_isOfClass_FUN_0040c790(this_ptr,"CHolycross");
      if ((iVar6 != 0) && ((fVar3 < 0.0 || (1.0 < fVar3)))) {
        if ((CGlass *)&CStack_104 != pCStack_1c) {
          CStack_104.x = *(float *)&pCStack_1c->base;
          CStack_104.y = *(float *)((int)pCStack_1c + 4);
          CStack_104.z = *(float *)((int)pCStack_1c + 8);
        }
        CStack_104.y = CStack_104.y + _DAT_005b5689;
        fVar3 = core_setcolid_cpp_CDemonSet_raycast_FUN_0053ccc0
                          (g_CDemonSetPtr,&CStack_104,&CStack_b0);
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
      pCVar5 = (CGlass *)
               core_actor_cpp_castToClassHash_FUN_0040c840
                         (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
      this_ptr_01 = (CTrigger *)
                    core_actor_cpp_castToClassHash_FUN_0040c840
                              (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
      pCStack_34 = this_ptr_01;
      pCStack_30 = (CCrate *)
                   core_actor_cpp_castToClassHash_FUN_0040c840
                             (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
      this_ptr_02 = (CFlameCan *)
                    core_actor_cpp_castToClassHash_FUN_0040c840
                              (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
      pCVar1 = pCStack_18;
      if (pCStack_14 == (CCharacter *)0x0) {
        if (pCVar5 == (CGlass *)0x0) {
          if (this_ptr_01 == (CTrigger *)0x0) {
            if (pCStack_30 == (CCrate *)0x0) {
              if (this_ptr_02 == (CFlameCan *)0x0) {
                return iStack_38;
              }
              core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(this_ptr_02);
            }
            else {
              core_crate_cpp_CCrate_explode_FUN_004461c0(pCStack_30);
            }
          }
          else {
            iVar6 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0(this_ptr_01,this_ptr);
            if (iVar6 != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)(auStack_32c + 0x24));
              (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                        (this_ptr,hit_type,(SDamageInfo *)(auStack_32c + 0x24),
                         (CDemonActor *)this_ptr_01);
              engine_console_cpp_CConsole_printf_FUN_00441ff0
                        (g_CConsolePtr,"%s causing %5.2f damage to %s\n");
              core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20
                        (this_ptr_01,(float)auStack_2f8._4_4_);
              (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                        (this_ptr,hit_type,(SDamageInfo *)auStack_2f8,(CDemonActor *)0x0);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&pCStack_34->base);
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffc80);
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffc80,(CDemonActor *)pCVar5);
          (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                    (this_ptr,hit_type,(SDamageInfo *)auStack_370,(CDemonActor *)pCVar5);
          iVar6 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(pCVar5);
          if (iVar6 == 0) {
            return iStack_38;
          }
          core_glass_cpp_CGlass_shatter_FUN_004cc040
                    (pCVar5,&g_CDemonSetPtr->collision_impact_position);
        }
      }
      else if (((pCStack_18 == (CDemonActor *)0x0) ||
               (iVar6 = (*(((pCStack_14->base).vtable._uc)->_uc).isInvulnerable)(pCStack_14),
               iVar6 == 0)) ||
              (iVar6 = core_actor_cpp_isOfClass_FUN_0040c790(pCVar1,"CHero"), iVar6 == 0))
      {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)(auStack_2b4 + 0x24));
        auStack_2b4._36_4_ = g_CDemonSetPtr->collision_part_index;
        (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                  (this_ptr,hit_type,(SDamageInfo *)(auStack_2b4 + 0x24),&pCStack_14->base);
        afStack_134[1] = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
        CStack_12c.x = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
        CStack_12c.y = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
        afStack_164[1] = afStack_134[1];
        *(uint *)((int)&CStack_15c + (uint)bVar11 * -8) =
             *(uint *)((int)&CStack_12c + (uint)bVar11 * -8);
        *(uint *)((int)&CStack_15c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 4) =
             *(uint *)(auStack_120 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -8);
        pCStack_30 = (CCrate *)
                     ((float)_DAT_005b5681 /
                     SQRT(CStack_15c.y * CStack_15c.y +
                          afStack_164[1] * afStack_164[1] + CStack_15c.x * CStack_15c.x));
        afStack_4c[0] = afStack_164[1] * (float)pCStack_30;
        afStack_4c[1] = CStack_15c.x * (float)pCStack_30;
        pCStack_44 = (CDemonActor *)(CStack_15c.y * (float)pCStack_30);
        fStack_7c = afStack_164[1] * (float)pCStack_30;
        *(float *)((int)aCStack_78 + (uint)bVar11 * -8) = afStack_4c[(uint)bVar11 * -2 + 1];
        *(CDemonActor **)((int)aCStack_78 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 4) =
             (&pCStack_44)[(uint)bVar11 * -2 + (uint)bVar11 * -2];
        if (&fStack_274 != &fStack_7c) {
          fStack_274 = fStack_7c;
          fStack_270 = aCStack_78[0].x;
          fStack_26c = aCStack_78[0].y;
        }
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                  (&unaff_EBX->base,&g_CDemonSetPtr->collision_impact_position,
                   (CVector3f *)auStack_58);
        CStack_104.y = (float)auStack_58._0_4_;
        *(uint *)(auStack_f8 + (uint)bVar11 * -8 + -4) =
             *(uint *)(auStack_58 + (uint)bVar11 * -8 + 4);
        *(uint *)(auStack_f8 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
             *(uint *)(auStack_58 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        if (&fStack_264 != &CStack_104.y) {
          fStack_264 = CStack_104.y;
          fStack_260 = CStack_104.z;
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
