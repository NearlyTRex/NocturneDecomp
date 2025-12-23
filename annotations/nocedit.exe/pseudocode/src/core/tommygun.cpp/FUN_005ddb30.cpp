// Name: core_tommygun.cpp_FUN_005ddb30
// Address: 005ddb30
// Address Range: [[005ddb30, 005ddded] [005ddebf, 005de32f]]
// Convention: unknown
// Signature: undefined core_tommygun.cpp_FUN_005ddb30()

#include "nocturne.h"

/* Signature: byte actors_weapon_tommygun.cpp_FUN_005ddb30(uint param_1) */

uint core_tommygun_cpp_FUN_005ddb30(void)

{
  CDemonActor_vtable *pCVar1;
  CDemonSet *this_ptr;
  CVector3f *pCVar2;
  int iVar3;
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  CDemonActor *pCVar6;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  CGlass *unaff_EBP;
  CDemonActor *in_stack_00000004;
  SCollisionInfo *collision_info;
  float fVar7;
  double dVar8;
  CBoundingBox3D *out_box;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  CDemonActor *pCStack_10c;
  CVector3f CStack_104;
  uint uStack_f8;
  uint uStack_f4;
  byte auStack_f0 [20];
  float fStack_dc;
  float fStack_d8;
  byte auStack_d4 [12];
  byte auStack_c8 [8];
  float fStack_c0;
  CVector3f aCStack_bc [3];
  CVector3f CStack_94;
  float fStack_88;
  byte auStack_84 [8];
  float fStack_7c;
  float fStack_78;
  byte auStack_74 [40];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_30;
  float fStack_2c;
  CDemonActor *pCStack_28;
  float fStack_24;
  CDemonActor *pCStack_20;
  int iStack_1c;
  CGlass *pCStack_14;
  
  fVar7 = in_stack_00000004[2].orient_matrix.m[1].z;
  in_stack_00000004[4].actor_name[0x18] = '\x02';
  in_stack_00000004[4].actor_name[0x19] = '\0';
  in_stack_00000004[4].actor_name[0x1a] = '\0';
  in_stack_00000004[4].actor_name[0x1b] = '\0';
  if (0.0 < fVar7) {
    return 0;
  }
  pCVar1 = in_stack_00000004->vtable;
  in_stack_00000004[2].orient_matrix.m[1].z =
       in_stack_00000004[2].orient_matrix.m[1].z + 0.1f;
  pCVar2 = (CVector3f *)(*pCVar1[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)(auStack_84 + 4),pCVar2);
  iVar3 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar3 == 0) {
    in_stack_00000004[4].actor_name[0x18] = '\0';
    in_stack_00000004[4].actor_name[0x19] = '\0';
    in_stack_00000004[4].actor_name[0x1a] = '\0';
    in_stack_00000004[4].actor_name[0x1b] = '\0';
    (*in_stack_00000004->vtable->playSound)(in_stack_00000004,"45-dry-!.wav @2.0");
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[4].actor_name + 0x1c));
    in_stack_00000004[4].actor_name[0x1c] = '\0';
    in_stack_00000004[4].actor_name[0x1d] = '\0';
    in_stack_00000004[4].actor_name[0x1e] = '\0';
    in_stack_00000004[4].actor_name[0x1f] = '\0';
    return 0;
  }
  fStack_c0 = in_stack_00000004[2].orient.heading;
  auStack_c8._0_4_ = 0.0;
  auStack_c8._4_4_ = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (in_stack_00000004,(CVector3f *)auStack_d4,(CVector3f *)auStack_c8);
  fStack_dc = fStack_88 + (float)auStack_d4._4_4_;
  fStack_d8 = (float)auStack_84._0_4_ + (float)auStack_d4._8_4_;
  auStack_d4._0_4_ = (float)auStack_84._4_4_ + (float)auStack_c8._0_4_;
  fStack_30 = (float)2.5 / in_stack_00000004[2].orient.heading;
  fStack_4c = (float)auStack_d4._4_4_ * fStack_30;
  fStack_48 = (float)auStack_d4._8_4_ * fStack_30;
  fStack_44 = (float)auStack_c8._0_4_ * fStack_30;
  fStack_7c = fStack_88 - fStack_4c;
  fStack_78 = (float)auStack_84._0_4_ - fStack_48;
  auStack_74._0_4_ = (float)auStack_84._4_4_ - fStack_44;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  collision_info = (SCollisionInfo *)0x5ddcf7;
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  pCVar4 = (CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x;
  if (pCVar4 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar4);
  }
  pCStack_14 = (CGlass *)0x0;
  do {
    fStack_24 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,(CVector3f *)(auStack_74 + 8),
                           (CVector3f *)(auStack_d4 + 8));
    dVar8 = (double)fStack_24;
    if ((dVar8 < 0.0) || (1.0 < dVar8)) goto LAB_005ddd4e;
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    out_box = (CBoundingBox3D *)((ulonglong)dVar8 >> 0x20);
    if ((pCVar4 != (CDemonActor *)0x0) &&
       (iVar3 = (*pCVar4->vtable[1].hasCollision)(pCVar4,collision_info), 0 < iVar3)) {
      pCVar4 = (CDemonActor *)0x0;
    }
    pCStack_20 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_28 = pCVar5;
    pCStack_20 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    collision_info = (SCollisionInfo *)0x5ddfde;
    pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (pCVar4 == (CDemonActor *)0x0) {
      if (pCStack_14 == (CGlass *)0x0) {
        if (pCVar5 == (CDemonActor *)0x0) {
          if (iStack_1c == 0) {
            if (pCVar6 == (CDemonActor *)0x0) {
              core_fire_cpp_CFireEffect_FUN_004c76a0(g_CFireEffectPtr);
              goto LAB_005ddd4e;
            }
            core_flamecan_cpp_FUN_004cb340();
          }
          else {
            core_crate_cpp_FUN_00448a70();
          }
        }
        else {
          core_trigger_cpp_FUN_005e0aa0();
          iVar3 = core_trigger_cpp_FUN_005e0ac0();
          if (iVar3 != 0) {
            (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,out_box);
            collision_info = (SCollisionInfo *)0x5de2bb;
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_20);
        }
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_14);
        if (extraout_EAX == 0) goto LAB_005ddd4e;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (unaff_EBP,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar3 = (*pCVar4->vtable[1].renderOpaque)(pCVar4);
      if ((iVar3 != 0) &&
         (pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                             ((CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x,
                              g_CHeroClassInfo.name_hash), this_ptr = g_CDemonSetPtr,
         pCVar5 != (CDemonActor *)0x0)) {
        if (pCStack_14 == (CGlass *)0x0) {
          *(int *)(in_stack_00000004[4].actor_name + 8) =
               *(int *)(in_stack_00000004[4].actor_name + 8) + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr);
          return 0;
        }
        goto LAB_005ddd4e;
      }
      fVar7 = 8.621252e-39;
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffec4);
      (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,out_box);
      fStack_30 = (g_CDemonSetPtr->collision_result_vec2).x -
                  (g_CDemonSetPtr->collision_result_vec1).x;
      fStack_2c = (g_CDemonSetPtr->collision_result_vec2).y -
                  (g_CDemonSetPtr->collision_result_vec1).y;
      pCStack_28 = (CDemonActor *)
                   ((g_CDemonSetPtr->collision_result_vec2).z -
                   (g_CDemonSetPtr->collision_result_vec1).z);
      fStack_40 = (float)10 /
                  SQRT((float)pCStack_28 * (float)pCStack_28 +
                       fStack_30 * fStack_30 + fStack_2c * fStack_2c);
      fStack_48 = fStack_30 * fStack_40;
      fStack_44 = fStack_2c * fStack_40;
      fStack_40 = (float)pCStack_28 * fStack_40;
      if (&fStack_118 != &fStack_48) {
        fStack_118 = fStack_48;
        fStack_114 = fStack_44;
        fStack_110 = fStack_40;
      }
      pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (pCVar4,(CVector3f *)&stack0xffffffe8,
                          &g_CDemonSetPtr->collision_impact_position);
      if (&CStack_104 != pCVar2) {
        CStack_104.x = pCVar2->x;
        CStack_104.y = pCVar2->y;
        CStack_104.z = pCVar2->z;
      }
      uStack_f8 = *(uint *)(in_stack_00000004[4].actor_name + 0xc);
      auStack_f0._0_4_ = 1.41531e-43;
      uStack_f4 = 0x3e19999a;
      auStack_f0._4_4_ = in_stack_00000004;
      pCStack_10c = (*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
      (*pCVar4->vtable[1].playAmbientSoundWithVolume)(pCVar4,&stack0xfffffebc,fVar7);
      if (in_stack_00000004[2].orient.bank == 0.0) goto LAB_005ddd4e;
      collision_info = (SCollisionInfo *)0x5de244;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    pCStack_14 = (CGlass *)((pCStack_14->base).actor_name + 1);
    if (3 < (int)pCStack_14) {
LAB_005ddd4e:
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      if (*(int *)(in_stack_00000004[4].actor_name + 0x14) != 0) {
        CStack_94.z = (float)auStack_74._0_4_;
        auStack_84._0_4_ = auStack_74._8_4_;
        fStack_88 = (float)auStack_74._4_4_ + -0.125f;
        core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
        auStack_d4._4_4_ = 5.0;
        auStack_d4._8_4_ = 6.0;
        auStack_c8._0_4_ = -6.0;
        fStack_78 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
        auStack_74._4_4_ = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
        auStack_74._8_4_ = 0.0;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  ((CMatrix3x3f *)auStack_f0,(CVector3f *)auStack_74);
        pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           ((CMatrix3x3f *)(auStack_f0 + 4),&CStack_94,(CVector3f *)(auStack_c8 + 4)
                           );
        pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                           (in_stack_00000004,(CVector3f *)auStack_84,pCVar2);
        if (aCStack_bc != pCVar2) {
          aCStack_bc[0].x = pCVar2->x;
          aCStack_bc[0].y = pCVar2->y;
          aCStack_bc[0].z = pCVar2->z;
        }
        core_dmodel_cpp_loadModel_FUN_00478c00("bullet.kfm");
        core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
      }
      return 1;
    }
  } while( true );
}
