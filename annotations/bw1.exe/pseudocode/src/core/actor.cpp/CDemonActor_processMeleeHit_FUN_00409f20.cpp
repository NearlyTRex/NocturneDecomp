// Name: core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f20
// Address: 00409f20
// Address Range: [[00409f20, 0040aa5e]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_processMeleeHit_FUN_00409f20(CDemonActor *this_ptr,int hit_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_actor_cpp_CDemonActor_processMeleeHit_FUN_00409f20(CDemonActor *this_ptr,int hit_type)

{
  CDemonActor *pCVar1;
  CCharacter *pCVar2;
  float fVar3;
  CGlass *this_ptr_00;
  CTrigger *this_ptr_01;
  CFlameCan *this_ptr_02;
  int iVar4;
  CDemonActor *unaff_EBP;
  CVector3f *pCVar5;
  float *pfVar6;
  uint *puVar7;
  CDemonActor *unaff_EDI;
  CBoundingBox3D *pCVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  CCharacter *unaff_retaddr;
  CGlass *in_stack_00000010;
  float afStackY_1130 [47];
  CDemonActor *apCStackY_1074 [5];
  float afStackY_1060 [833];
  CBoundingBox3D *in_stack_fffffca8;
  CCharacter *in_stack_fffffcb4;
  CVector3f *in_stack_fffffcb8;
  ulonglong uStack_324;
  byte auStack_2f8 [52];
  byte auStack_2c4 [24];
  byte auStack_2ac [52];
  byte auStack_278 [60];
  byte auStack_23c [20];
  float fStack_228;
  byte auStack_210 [20];
  float fStack_1fc;
  uint auStack_1cc [6];
  float afStack_1b4 [4];
  uint auStack_1a4 [2];
  CBoundingBox3D CStack_19c;
  CBoundingBox3D CStack_184;
  float afStack_168 [7];
  float fStack_14c;
  float fStack_148;
  float afStack_144 [5];
  byte auStack_130 [8];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float afStack_114 [4];
  CVector3f CStack_104;
  byte auStack_f4 [12];
  float afStack_e8 [4];
  CBoundingBox3D CStack_d8;
  float fStack_c0;
  float afStack_bc [9];
  float fStack_98;
  float afStack_94 [4];
  CDemonActor *apCStack_84 [3];
  float fStack_78;
  float afStack_74 [4];
  CVector3f CStack_64;
  CBoundingBox3D CStack_54;
  CDemonActor *pCStack_3c;
  CDemonActor *pCStack_38;
  CTrigger *pCStack_34;
  CCrate *pCStack_30;
  CDemonActor *pCStack_2c;
  CDemonActor *pCStack_28;
  float fStack_24;
  float fStack_20;
  CDemonActor *pCStack_18;
  CTrigger *pCStack_14;
  
  bVar10 = 0;
  CStack_54.max.y = 0.0;
  afStack_144[3] = 0.0;
  afStack_144[4] = 0.0;
  (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,in_stack_fffffca8);
  pCVar5 = &CStack_184.max;
  pfVar6 = afStack_168;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = pCVar5->x;
    pCVar5 = (CVector3f *)((int)pCVar5 + ((uint)bVar10 * -2 + 1) * 4);
    pfVar6 = pfVar6 + (uint)bVar10 * -2 + 1;
  }
  fStack_128 = fStack_14c;
  core_actor_cpp_FUN_00408b40(this_ptr,auStack_130);
  fStack_118 = afStack_144[2];
  afStack_114[(uint)bVar10 * -2] = afStack_144[(uint)bVar10 * -2 + 3];
  afStack_114[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       *(float *)(auStack_130 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -4);
  if (pCStack_3c == (CDemonActor *)0x1) {
    afStack_94[0] = 0.0;
    afStack_94[1] = 0.0;
    afStack_94[2] = -3.0;
    core_actor_cpp_FUN_00408ac0(this_ptr,afStack_94);
    fVar3 = fStack_118;
    afStack_114[2] = afStack_74[1];
    afStack_114[(uint)bVar10 * -2 + 3] = afStack_74[(uint)bVar10 * -2 + 2];
    *(float *)((int)&CStack_104 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         afStack_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 3];
    fStack_148 = fVar3 + afStack_114[2];
    afStack_144[0] = afStack_114[0] + afStack_114[3];
    afStack_144[1] = afStack_114[1] + CStack_104.x;
    afStack_bc[1] = fVar3 + afStack_114[2];
    afStack_bc[(uint)bVar10 * -2 + 2] = afStack_144[(uint)bVar10 * -2];
    afStack_bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 3] =
         afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    if (&fStack_124 != afStack_bc + 1) {
      fStack_124 = afStack_bc[1];
      fStack_120 = afStack_bc[2];
      fStack_11c = afStack_bc[3];
    }
  }
  pCStack_28 = (CDemonActor *)0x40000000;
  CStack_54.min.z = 0.0;
  CStack_54.max.y = 1.0;
  CStack_54.max.x = 0.0;
  core_actor_cpp_FUN_00408ac0(this_ptr,&CStack_54.min.z);
  afStack_94[3] = afStack_e8[0];
  apCStack_84[(uint)bVar10 * -2] = (CDemonActor *)afStack_e8[(uint)bVar10 * -2 + 1];
  apCStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       (CDemonActor *)afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 2];
  pCStack_3c = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
  if (pCStack_38 == (CDemonActor *)0x0) {
    pCStack_28 = pCStack_38;
    for (pCStack_2c = pCStack_38; (int)pCStack_2c < g_CDemonSetPtr->actor_count;
        pCStack_2c = (CDemonActor *)(pCStack_2c->actor_name + 1)) {
      pCVar1 = *(CDemonActor **)
                (pCStack_28[0xf7e].actor_name + (int)(g_CDemonSetPtr->cameras[0].name + 0x14));
      if ((pCVar1 != this_ptr) && (pCVar1 != pCStack_3c)) {
        pCVar2 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c600(pCVar1,g_CCharacterClassInfo.name_hash)
        ;
        if (pCVar2 == (CCharacter *)0x0) {
          pCStack_14 = (CTrigger *)
                       core_actor_cpp_castToClassHash_FUN_0040c600
                                 (pCVar1,g_CTriggerClassInfo.name_hash);
          if (pCStack_14 == (CTrigger *)0x0) {
            pCStack_18 = core_actor_cpp_castToClassHash_FUN_0040c600
                                   (pCVar1,g_CGlassClassInfo.name_hash);
            if (pCStack_18 != (CDemonActor *)0x0) {
              core_actor_cpp_FUN_00408bb0(pCStack_18,afStack_114,fStack_24);
              CStack_d8.min.x = fStack_c0;
              *(float *)((int)&CStack_d8 + (uint)bVar10 * -8 + 4) = afStack_bc[(uint)bVar10 * -2];
              *(float *)((int)&CStack_d8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                   afStack_bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
              (*((pCStack_18->vtable)._ub)->getBoundingBox)(pCStack_18,&CStack_d8);
              puVar7 = auStack_1cc;
              puVar9 = auStack_1a4;
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
                puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
              }
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_00421b90
                                (&CStack_19c,(CVector3f *)in_stack_fffffcb4,(float)in_stack_fffffcb8
                                );
              if (iVar4 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)auStack_2f8);
                in_stack_fffffcb4 = (CCharacter *)auStack_2f8;
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)in_stack_fffffcb4,unaff_EBP);
                in_stack_fffffcb8 = (CVector3f *)0x40a4d6;
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)(auStack_2f8 + 0x10),unaff_EBP);
                iVar4 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004e3a40
                                  (in_stack_00000010);
                if (iVar4 != 0) {
                  core_glass_cpp_CGlass_shatter_FUN_004e34b0
                            (in_stack_00000010,(CVector3f *)(auStack_f4 + 8));
                }
              }
            }
          }
          else {
            iVar4 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0(pCStack_14,this_ptr);
            if (iVar4 != 0) {
              core_actor_cpp_FUN_00408bb0(pCStack_14,afStack_114,fStack_24);
              CStack_54.min.x = fStack_78;
              *(float *)((int)&CStack_54 + (uint)bVar10 * -8 + 4) = afStack_74[(uint)bVar10 * -2];
              *(float *)((int)&CStack_54 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                   afStack_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
              (*((pCStack_14->base).vtable._ub)->getBoundingBox)(&pCStack_14->base,&CStack_54);
              pfVar6 = afStack_1b4;
              pCVar8 = &CStack_184;
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                (pCVar8->min).x = *pfVar6;
                pfVar6 = pfVar6 + (uint)bVar10 * -2 + 1;
                pCVar8 = (CBoundingBox3D *)((int)pCVar8 + ((uint)bVar10 * -2 + 1) * 4);
              }
              iVar4 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_00421b90
                                (&CStack_184,(CVector3f *)in_stack_fffffcb4,(float)in_stack_fffffcb8
                                );
              if (iVar4 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&stack0xfffffccc);
                (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffccc,unaff_EDI);
                in_stack_fffffcb4 = (CCharacter *)g_CConsolePtr;
                engine_console_cpp_CConsole_printf_FUN_00445430
                          (g_CConsolePtr,"%s causing %5.2f damage to %s\n");
                core_trigger_cpp_CTrigger_applyDamage_FUN_0059be30
                          ((CTrigger *)this_ptr,uStack_324._4_4_);
                in_stack_fffffcb8 = (CVector3f *)0x40a3e0;
                (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)&uStack_324,this_ptr);
              }
            }
          }
        }
        else {
          if ((pCStack_3c != (CDemonActor *)0x0) &&
             (iVar4 = (*(((pCVar2->base).vtable._uc)->_uc).isInvulnerable)(pCVar2), iVar4 != 0)) {
            in_stack_fffffcb4 = (CCharacter *)("@CHero" + 1);
            iVar4 = core_actor_cpp_isOfClass_FUN_0040c550(pCStack_38,"@CHero" + 1);
            if (iVar4 != 0) goto LAB_0040a14a;
          }
          fStack_24 = 2.0;
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)(auStack_278 + 0x2c));
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_278 + 0x2c),(CDemonActor *)pCVar2);
          in_stack_fffffcb8 = &CStack_104;
          in_stack_fffffcb4 = pCVar2;
          (*(((pCVar2->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
                    (pCVar2,in_stack_fffffcb8,2.0,(SDamageInfo *)auStack_23c);
          uStack_324 = (double)fStack_228;
          if (0.0 < uStack_324) {
            fVar3 = (float)pCVar2->blood_type;
            fVar11 = (float10)1 + (float10)fStack_228 * (float10)_DAT_005d2631;
            round();
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                      (g_CGorePtr,(CVector3f *)auStack_f4,&CStack_64,(int)ROUND(fVar11),
                       (EBloodType)fVar3);
            (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                      (this_ptr,hit_type,(SDamageInfo *)(auStack_23c + 0x10),(CDemonActor *)pCVar2);
          }
        }
      }
LAB_0040a14a:
      pCStack_28 = (CDemonActor *)(pCStack_28->actor_name + 4);
    }
  }
  if (pCStack_38 == (CDemonActor *)0x1) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,this_ptr);
    core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_00559210(g_CDemonSetPtr);
    if (pCStack_3c != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCStack_3c);
    }
    fStack_20 = 0.0;
    while ((fVar3 = (float)core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr,&fStack_120,afStack_114),
           0.0 <= fVar3 && (fVar3 <= 1.0))) {
      pCVar2 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c600
                         (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
      if (pCVar2 != (CCharacter *)0x0) {
        (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2);
      }
      this_ptr_00 = (CGlass *)
                    core_actor_cpp_castToClassHash_FUN_0040c600
                              (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
      this_ptr_01 = (CTrigger *)
                    core_actor_cpp_castToClassHash_FUN_0040c600
                              (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
      pCStack_34 = this_ptr_01;
      pCStack_30 = (CCrate *)
                   core_actor_cpp_castToClassHash_FUN_0040c600
                             (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
      this_ptr_02 = (CFlameCan *)
                    core_actor_cpp_castToClassHash_FUN_0040c600
                              (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
      pCVar1 = pCStack_3c;
      if (pCVar2 == (CCharacter *)0x0) {
        if (this_ptr_00 == (CGlass *)0x0) {
          if (this_ptr_01 == (CTrigger *)0x0) {
            if (pCStack_30 == (CCrate *)0x0) {
              if (this_ptr_02 == (CFlameCan *)0x0) {
                return 0;
              }
              core_flamecan_cpp_CFlameCan_ignite_FUN_004b9180(this_ptr_02);
            }
            else {
              core_crate_cpp_FUN_00449600(pCStack_30);
            }
          }
          else {
            iVar4 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0(this_ptr_01,this_ptr);
            if (iVar4 != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)auStack_210);
              (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                        (this_ptr,hit_type,(SDamageInfo *)auStack_210,(CDemonActor *)this_ptr_01);
              engine_console_cpp_CConsole_printf_FUN_00445430
                        (g_CConsolePtr,"%s causing %5.2f damage to %s\n");
              core_trigger_cpp_CTrigger_applyDamage_FUN_0059be30(this_ptr_01,fStack_1fc);
              (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                        (this_ptr,hit_type,(SDamageInfo *)(auStack_210 + 0x10),(CDemonActor *)0x0);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,&pCStack_34->base);
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)(auStack_2ac + 0x24));
          (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_2ac + 0x24),
                     (CDemonActor *)this_ptr_00);
          (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                    (this_ptr,hit_type,(SDamageInfo *)auStack_278,(CDemonActor *)this_ptr_00);
          iVar4 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004e3a40(this_ptr_00);
          if (iVar4 == 0) {
            return 0;
          }
          core_glass_cpp_CGlass_shatter_FUN_004e34b0
                    (this_ptr_00,&g_CDemonSetPtr->collision_impact_position);
        }
      }
      else if (((pCStack_3c == (CDemonActor *)0x0) ||
               (iVar4 = (*(((pCVar2->base).vtable._uc)->_uc).isInvulnerable)(pCVar2), iVar4 == 0))
              || (iVar4 = core_actor_cpp_isOfClass_FUN_0040c550(pCVar1,"CHero"), iVar4 == 0
                 )) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)auStack_2c4);
        auStack_2c4._0_4_ = g_CDemonSetPtr->collision_part_index;
        (*((this_ptr->vtable)._ub)->fillAttackDamageInfo)
                  (this_ptr,hit_type,(SDamageInfo *)auStack_2c4,(CDemonActor *)pCVar2);
        afStack_bc[0] = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
        afStack_bc[1] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
        afStack_bc[2] = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
        auStack_f4._8_4_ = afStack_bc[0];
        afStack_e8[(uint)bVar10 * -2] = afStack_bc[(uint)bVar10 * -2 + 1];
        afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 2];
        fVar3 = (float)_DAT_005d2639 /
                SQRT(afStack_e8[1] * afStack_e8[1] +
                     (float)auStack_f4._8_4_ * (float)auStack_f4._8_4_ +
                     afStack_e8[0] * afStack_e8[0]);
        CStack_54.min.y = (float)auStack_f4._8_4_ * fVar3;
        CStack_54.min.z = afStack_e8[0] * fVar3;
        CStack_54.max.x = afStack_e8[1] * fVar3;
        afStack_e8[2] = (float)auStack_f4._8_4_ * fVar3;
        afStack_e8[(uint)bVar10 * -2 + 3] = *(float *)((int)&CStack_54 + (uint)bVar10 * -8 + 8);
        *(uint *)((int)&CStack_d8 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
             *(uint *)((int)&CStack_54 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 0xc);
        if ((float *)(auStack_2ac + 4) != afStack_e8 + 2) {
          auStack_2ac._4_4_ = afStack_e8[2];
          auStack_2ac._8_4_ = afStack_e8[3];
          auStack_2ac._12_4_ = CStack_d8.min.x;
        }
        core_actor_cpp_FUN_00408bb0(unaff_retaddr,&g_CDemonSetPtr->collision_impact_position);
        afStack_94[2] = fStack_98;
        afStack_94[(uint)bVar10 * -2 + 3] = afStack_94[(uint)bVar10 * -2];
        apCStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
             (CDemonActor *)afStack_94[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        if ((float *)(auStack_2ac + 0x14) != afStack_94 + 2) {
          auStack_2ac._20_4_ = afStack_94[2];
          auStack_2ac._24_4_ = afStack_94[3];
          auStack_2ac._28_4_ = apCStack_84[0];
        }
        (*(((unaff_retaddr->base).vtable._uc)->_uc).processDamage)
                  (unaff_retaddr,(SDamageInfo *)(auStack_2c4 + 0x10));
        (*((this_ptr->vtable)._ub)->playAttackHitEffects)
                  (this_ptr,hit_type,(SDamageInfo *)auStack_2ac,&unaff_retaddr->base);
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                  (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
      }
      fStack_20 = (float)((int)fStack_20 + 1);
      if (3 < (int)fStack_20) {
        return 0;
      }
    }
  }
  return 0;
}
