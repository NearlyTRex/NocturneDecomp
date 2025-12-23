// Name: core_gun.cpp_FUN_004f0350
// Address: 004f0350
// Address Range: [[004f0350, 004f05f2] [004f06df, 004f0b16]]
// Convention: unknown
// Signature: undefined core_gun.cpp_FUN_004f0350()

#include "nocturne.h"

/* Signature: byte actors_weapon_gun.cpp_FUN_004f0350(uint param_1) */

uint core_gun_cpp_FUN_004f0350(void)

{
  CDemonSet *this_ptr;
  CVector3f *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  CGlass *unaff_EBP;
  CDemonActor *in_stack_00000004;
  SCollisionInfo *collision_info;
  CBoundingBox3D *out_box;
  double dVar6;
  CBoundingBox3D *out_box_00;
  CVector3f CStack_124;
  float fStack_118;
  int iStack_114;
  CDemonActor *pCStack_110;
  CDemonActor *pCStack_10c;
  byte auStack_ec [8];
  float fStack_e4;
  float fStack_e0;
  CVector3f CStack_d8;
  CVector3f CStack_c8;
  byte auStack_bc [8];
  float fStack_b4;
  byte auStack_b0 [8];
  CBoundingBox3D CStack_a8;
  float fStack_90;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  byte auStack_6c [8];
  byte auStack_64 [8];
  float fStack_5c;
  CVector3f CStack_50;
  CVector3f CStack_44;
  float fStack_38;
  float fStack_34;
  CDemonActor *pCStack_2c;
  CDemonActor *pCStack_24;
  CDemonActor *pCStack_20;
  float fStack_1c;
  int iStack_18;
  CGlass *pCStack_14;
  
  pCVar1 = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)auStack_bc,pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,in_stack_00000004,"45-dry-!.wav",&CStack_c8);
    return 0;
  }
  CStack_a8.min.x = in_stack_00000004[2].orient.heading;
  auStack_b0._0_4_ = 0.0;
  auStack_b0._4_4_ = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (in_stack_00000004,&CStack_44,(CVector3f *)auStack_b0);
  auStack_bc._4_4_ = CStack_c8.y + CStack_44.y;
  fStack_b4 = CStack_c8.z + CStack_44.z;
  auStack_b0._0_4_ = (float)auStack_bc._0_4_ + fStack_38;
  fStack_34 = (float)1.5 / in_stack_00000004[2].orient.heading;
  CStack_50.y = CStack_44.y * fStack_34;
  CStack_50.z = CStack_44.z * fStack_34;
  CStack_44.x = fStack_38 * fStack_34;
  auStack_ec._4_4_ = CStack_c8.y - CStack_50.y;
  fStack_e4 = CStack_c8.z - CStack_50.z;
  fStack_e0 = (float)auStack_bc._0_4_ - CStack_44.x;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  collision_info = (SCollisionInfo *)0x4f04e0;
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  pCVar3 = (CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x;
  if (pCVar3 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar3);
  }
  iStack_18 = 0;
  do {
    out_box = &CStack_a8;
    pCStack_24 = (CDemonActor *)
                 core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                           (g_CDemonSetPtr,&CStack_d8,&out_box->min);
    dVar6 = (double)(float)pCStack_24;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    out_box_00 = (CBoundingBox3D *)((ulonglong)dVar6 >> 0x20);
    if ((pCVar3 != (CDemonActor *)0x0) &&
       (iVar2 = (*pCVar3->vtable[1].hasCollision)(pCVar3,collision_info), 0 < iVar2)) {
      pCVar3 = (CDemonActor *)0x0;
    }
    pCStack_20 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_2c = pCVar4;
    pCStack_24 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    collision_info = (SCollisionInfo *)0x4f07de;
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (pCVar3 == (CDemonActor *)0x0) {
      if (pCStack_14 == (CGlass *)0x0) {
        if (pCVar4 == (CDemonActor *)0x0) {
          if (pCStack_20 == (CDemonActor *)0x0) {
            if (pCVar5 == (CDemonActor *)0x0) {
              core_fire_cpp_CFireEffect_FUN_004c76a0(g_CFireEffectPtr);
              break;
            }
            core_flamecan_cpp_FUN_004cb340();
          }
          else {
            core_crate_cpp_FUN_00448a70();
          }
        }
        else {
          core_trigger_cpp_FUN_005e0aa0();
          iVar2 = core_trigger_cpp_FUN_005e0ac0();
          if (iVar2 != 0) {
            (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,out_box_00);
            collision_info = (SCollisionInfo *)0x4f0aa2;
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_24);
        }
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_14);
        if (extraout_EAX == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (unaff_EBP,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (*pCVar3->vtable[1].renderOpaque)(pCVar3);
      this_ptr = g_CDemonSetPtr;
      if (iVar2 != 0) {
        if (pCStack_20 == (CDemonActor *)0x0) {
          *(int *)(in_stack_00000004[4].actor_name + 8) =
               *(int *)(in_stack_00000004[4].actor_name + 8) + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffebc);
      (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,out_box);
      CStack_c8.x = (g_CDemonSetPtr->collision_result_vec2).x -
                    (g_CDemonSetPtr->collision_result_vec1).x;
      CStack_c8.y = (g_CDemonSetPtr->collision_result_vec2).y -
                    (g_CDemonSetPtr->collision_result_vec1).y;
      CStack_c8.z = (g_CDemonSetPtr->collision_result_vec2).z -
                    (g_CDemonSetPtr->collision_result_vec1).z;
      fStack_1c = (float)10 /
                  SQRT(CStack_c8.z * CStack_c8.z +
                       CStack_c8.x * CStack_c8.x + CStack_c8.y * CStack_c8.y);
      CStack_a8.max.y = CStack_c8.x * fStack_1c;
      CStack_a8.max.z = CStack_c8.y * fStack_1c;
      fStack_90 = CStack_c8.z * fStack_1c;
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (pCVar3,(CVector3f *)(auStack_6c + 4),
                          &g_CDemonSetPtr->collision_impact_position);
      if (&CStack_124 != pCVar1) {
        CStack_124.x = pCVar1->x;
        CStack_124.y = pCVar1->y;
        CStack_124.z = pCVar1->z;
      }
      fStack_118 = *(float *)(in_stack_00000004[4].actor_name + 0xc);
      iStack_114 = 0x3e19999a;
      pCStack_10c = in_stack_00000004;
      pCStack_110 = (CDemonActor *)0x65;
      pCVar4 = in_stack_00000004;
      pCStack_10c = (*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
      (*pCVar3->vtable[1].playAmbientSoundWithVolume)(pCVar3,&stack0xfffffebc,(float)pCVar4);
      if (in_stack_00000004[2].orient.bank == 0.0) break;
      collision_info = (SCollisionInfo *)0x4f0a2b;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_18 = iStack_18 + 1;
  } while (iStack_18 < 4);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  CStack_44.x = (float)auStack_b0._0_4_;
  CStack_44.z = CStack_a8.min.x;
  CStack_44.y = (float)auStack_b0._4_4_ + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,in_stack_00000004,"45.wav",(CVector3f *)(auStack_b0 + 4));
  in_stack_00000004[2].orient_matrix.m[1].z = 0.333;
  uStack_78 = 0x40400000;
  uStack_74 = 0x40400000;
  uStack_70 = 0xc0800000;
  auStack_bc._0_4_ = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  fStack_b4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  auStack_b0._0_4_ = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)auStack_ec,(CVector3f *)(auStack_bc + 4));
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     ((CMatrix3x3f *)(auStack_ec + 4),(CVector3f *)(auStack_64 + 4),
                      (CVector3f *)auStack_6c);
  pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (in_stack_00000004,&CStack_50,pCVar1);
  if ((CVector3f *)auStack_64 != pCVar1) {
    auStack_64._0_4_ = pCVar1->x;
    auStack_64._4_4_ = pCVar1->y;
    fStack_5c = pCVar1->z;
  }
  CStack_124.x = (float)core_dmodel_cpp_loadModel_FUN_00478c00("gatbullet.kfm");
  core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
  return 1;
}
