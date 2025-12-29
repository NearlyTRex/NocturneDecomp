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
  CDemonActor *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  float fVar3;
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  CDemonActor *pCVar6;
  CDemonActor *pCVar7;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  CDemonActor *in_stack_00000004;
  CGlass *in_stack_00000038;
  CGlass *in_stack_0000003c;
  CDemonActor *in_stack_00000048;
  CBoundingBox3D *out_box;
  double dVar8;
  CBoundingBox3D *in_stack_ffffff0c;
  byte auStack_bc [16];
  CVector3f CStack_ac;
  byte auStack_a0 [8];
  float fStack_98;
  byte auStack_94 [36];
  float fStack_70;
  CVector3f CStack_6c;
  CVector3f local_60 [2];
  CVector3f CStack_40;
  float fStack_30;
  float fStack_2c;
  byte auStack_28 [12];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  this_ptr_00 = in_stack_00000004;
  pCVar1 = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)(auStack_bc + 8),pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,in_stack_00000004,"45-dry-!.wav",&CStack_ac);
    return 0;
  }
  auStack_94._8_4_ = in_stack_00000004[2].orient.heading;
  auStack_94._0_4_ = 0.0;
  auStack_94._4_4_ = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (in_stack_00000004,(CVector3f *)auStack_28,(CVector3f *)auStack_94);
  auStack_a0._4_4_ = CStack_ac.y + (float)auStack_28._4_4_;
  fStack_98 = CStack_ac.z + (float)auStack_28._8_4_;
  auStack_94._0_4_ = (float)auStack_a0._0_4_ + fStack_1c;
  fStack_18 = (float)1.5 / in_stack_00000004[2].orient.heading;
  fStack_30 = (float)auStack_28._4_4_ * fStack_18;
  fStack_2c = (float)auStack_28._8_4_ * fStack_18;
  auStack_28._0_4_ = fStack_1c * fStack_18;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  pCVar4 = (CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x;
  if (pCVar4 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar4);
  }
  in_stack_00000004 = (CDemonActor *)0x0;
  do {
    out_box = (CBoundingBox3D *)0x4f0513;
    fVar3 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                      (g_CDemonSetPtr,(CVector3f *)auStack_bc,(CVector3f *)(auStack_94 + 8));
    dVar8 = (double)fVar3;
    if ((dVar8 < 0.0) || (1.0 < dVar8)) break;
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCVar4 != (CDemonActor *)0x0) &&
       (iVar2 = (*pCVar4->vtable[1].hasCollision)
                          (pCVar4,(SCollisionInfo *)((ulonglong)dVar8 >> 0x20)), 0 < iVar2)) {
      pCVar4 = (CDemonActor *)0x0;
    }
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    core_actor_cpp_castToClassHash_FUN_0040c790
              (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (pCVar4 == (CDemonActor *)0x0) {
      if (in_stack_00000038 == (CGlass *)0x0) {
        if (pCVar6 == (CDemonActor *)0x0) {
          if (pCVar5 == (CDemonActor *)0x0) {
            if (pCVar7 == (CDemonActor *)0x0) {
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
            (*this_ptr_00->vtable[1].getBoundingBox)(this_ptr_00,in_stack_ffffff0c);
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000048);
        }
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(in_stack_00000038);
        if (extraout_EAX == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (in_stack_0000003c,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (*pCVar4->vtable[1].renderOpaque)(pCVar4);
      this_ptr = g_CDemonSetPtr;
      if (iVar2 != 0) {
        if (unaff_EBP == 0) {
          *(int *)(this_ptr_00[4].actor_name + 8) = *(int *)(this_ptr_00[4].actor_name + 8) + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffecc);
      (*this_ptr_00->vtable[1].getBoundingBox)(this_ptr_00,out_box);
      fVar3 = 0.4;
      auStack_a0._0_4_ =
           (g_CDemonSetPtr->collision_result_vec2).x - (g_CDemonSetPtr->collision_result_vec1).x;
      auStack_a0._4_4_ =
           (g_CDemonSetPtr->collision_result_vec2).y - (g_CDemonSetPtr->collision_result_vec1).y;
      fStack_98 = (g_CDemonSetPtr->collision_result_vec2).z -
                  (g_CDemonSetPtr->collision_result_vec1).z;
      CStack_6c.y = (float)10 /
                    SQRT(fStack_98 * fStack_98 +
                         (float)auStack_a0._0_4_ * (float)auStack_a0._0_4_ +
                         (float)auStack_a0._4_4_ * (float)auStack_a0._4_4_);
      fStack_70 = (float)auStack_a0._0_4_ * CStack_6c.y;
      CStack_6c.x = (float)auStack_a0._4_4_ * CStack_6c.y;
      CStack_6c.y = fStack_98 * CStack_6c.y;
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (pCVar4,&CStack_40,&g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)&stack0xffffff04 != pCVar1) {
        in_stack_ffffff0c = (CBoundingBox3D *)pCVar1->z;
      }
      (*this_ptr_00->vtable->getCarrier)(this_ptr_00);
      (*pCVar4->vtable[1].playAmbientSoundWithVolume)(pCVar4,&stack0xfffffef4,fVar3);
      if (this_ptr_00[2].orient.bank == 0.0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    in_stack_00000004 = (CDemonActor *)((int)in_stack_00000004 + 1);
  } while ((int)in_stack_00000004 < 4);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,this_ptr_00,"45.wav",local_60);
  this_ptr_00[2].orient_matrix.m[1].z = 0.333;
  fStack_2c = 3.0;
  auStack_28._0_4_ = 3.0;
  auStack_28._4_4_ = -4.0;
  fStack_70 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  CStack_6c.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  CStack_6c.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30((CMatrix3x3f *)auStack_a0,&CStack_6c)
  ;
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     ((CMatrix3x3f *)(auStack_a0 + 4),(CVector3f *)&fStack_14,
                      (CVector3f *)(auStack_28 + 8));
  pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (this_ptr_00,(CVector3f *)&stack0xfffffffc,pCVar1);
  if ((CVector3f *)&fStack_18 != pCVar1) {
    fStack_18 = pCVar1->x;
    fStack_14 = pCVar1->y;
  }
  core_dmodel_cpp_loadModel_FUN_00478c00("gatbullet.kfm");
  core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
  return 1;
}
