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
  float fVar3;
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  CDemonActor *pCVar6;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  SCollisionInfo *collision_info;
  double dVar7;
  CKeyFramedModel *pCStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_128;
  CVector3f CStack_124;
  float fStack_118;
  int iStack_114;
  CDemonActor *pCStack_110;
  CDemonActor *pCStack_10c;
  byte auStack_100 [32];
  CVector3f CStack_e0;
  float fStack_d0;
  CVector3f CStack_cc;
  float fStack_c0;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  CKeyFramedModel *pCStack_98;
  float fStack_94;
  float fStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  byte auStack_80 [12];
  CVector3f CStack_74;
  byte auStack_68 [24];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CVector3f CStack_38;
  float fStack_2c;
  CDemonActor *pCStack_28;
  int iStack_24;
  CDemonActor *pCStack_20;
  float fStack_1c;
  CGlass *pCStack_18;
  CDemonActor *pCStack_14;
  
  pCVar1 = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_bc,pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,in_stack_00000004,"45-dry-!.wav",&CStack_bc);
    return 0;
  }
  CStack_a4.z = in_stack_00000004[2].orient.heading;
  CStack_a4.x = 0.0;
  CStack_a4.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&CStack_38,&CStack_a4);
  CStack_b0.x = CStack_bc.x + CStack_38.x;
  CStack_b0.y = CStack_bc.y + CStack_38.y;
  CStack_b0.z = CStack_bc.z + CStack_38.z;
  fStack_2c = (float)1.5 / in_stack_00000004[2].orient.heading;
  fStack_44 = CStack_38.x * fStack_2c;
  fStack_40 = CStack_38.y * fStack_2c;
  fStack_3c = CStack_38.z * fStack_2c;
  CStack_e0.x = CStack_bc.x - fStack_44;
  CStack_e0.y = CStack_bc.y - fStack_40;
  CStack_e0.z = CStack_bc.z - fStack_3c;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  pCVar4 = (CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x;
  if (pCVar4 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar4);
  }
  pCStack_20 = (CDemonActor *)0x0;
  do {
    fVar3 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&CStack_e0,&CStack_b0);
    dVar7 = (double)fVar3;
    if ((dVar7 < 0.0) || (1.0 < dVar7)) break;
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    collision_info = SUB84 /* extract 2-byte value */(dVar7,0);
    if ((pCVar4 != (CDemonActor *)0x0) &&
       (iVar2 = (*pCVar4->vtable[1].hasCollision)(pCVar4,collision_info), 0 < iVar2)) {
      pCVar4 = (CDemonActor *)0x0;
    }
    pCStack_14 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_28 = pCVar5;
    pCStack_20 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (pCVar4 == (CDemonActor *)0x0) {
      if (pCStack_18 == (CGlass *)0x0) {
        if (pCVar5 == (CDemonActor *)0x0) {
          if (iStack_24 == 0) {
            if (pCVar6 == (CDemonActor *)0x0) {
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
            (*in_stack_00000004->vtable[1].getBoundingBox)
                      (in_stack_00000004,(CBoundingBox3D *)collision_info);
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_28);
        }
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_18);
        if (extraout_EAX == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (pCStack_18,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (*pCVar4->vtable[1].renderOpaque)(pCVar4);
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
      (*in_stack_00000004->vtable[1].getBoundingBox)
                (in_stack_00000004,(CBoundingBox3D *)collision_info);
      CStack_cc.y = (g_CDemonSetPtr->collision_result_vec2).x -
                    (g_CDemonSetPtr->collision_result_vec1).x;
      CStack_cc.z = (g_CDemonSetPtr->collision_result_vec2).y -
                    (g_CDemonSetPtr->collision_result_vec1).y;
      fStack_c0 = (g_CDemonSetPtr->collision_result_vec2).z -
                  (g_CDemonSetPtr->collision_result_vec1).z;
      fStack_1c = (float)10 /
                  SQRT(fStack_c0 * fStack_c0 + CStack_cc.y * CStack_cc.y + CStack_cc.z * CStack_cc.z
                      );
      pCStack_98 = (CKeyFramedModel *)(CStack_cc.y * fStack_1c);
      fStack_94 = CStack_cc.z * fStack_1c;
      fStack_90 = fStack_c0 * fStack_1c;
      if (&pCStack_138 != &pCStack_98) {
        pCStack_138 = pCStack_98;
        fStack_134 = fStack_94;
        fStack_130 = fStack_90;
      }
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (pCVar4,(CVector3f *)auStack_68,&g_CDemonSetPtr->collision_impact_position)
      ;
      if (&CStack_124 != pCVar1) {
        fStack_128 = pCVar1->x;
        CStack_124.x = pCVar1->y;
        CStack_124.y = pCVar1->z;
      }
      CStack_124.z = *(float *)(in_stack_00000004[4].actor_name + 0xc);
      fStack_118 = 0.15;
      pCStack_110 = in_stack_00000004;
      iStack_114 = 0x65;
      pCStack_10c = (*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
      (*pCVar4->vtable[1].playAmbientSoundWithVolume)(pCVar4,&stack0xfffffebc,(float)collision_info)
      ;
      if (in_stack_00000004[2].orient.bank == 0.0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    pCStack_20 = (CDemonActor *)(pCStack_20->actor_name + 1);
  } while ((int)pCStack_20 < 4);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  fStack_50 = CStack_bc.x;
  fStack_48 = CStack_bc.z;
  fStack_4c = CStack_bc.y + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,in_stack_00000004,"45.wav",&CStack_bc);
  in_stack_00000004[2].orient_matrix.m[1].z = 0.333;
  uStack_8c = 0x40400000;
  uStack_88 = 0x40400000;
  uStack_84 = 0xc0800000;
  fStack_d0 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  CStack_cc.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  CStack_cc.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)auStack_100,&CStack_cc);
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     ((CMatrix3x3f *)(auStack_100 + 4),&CStack_74,(CVector3f *)auStack_80);
  pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (in_stack_00000004,(CVector3f *)(auStack_68 + 4),pCVar1);
  if ((CVector3f *)(auStack_80 + 8) != pCVar1) {
    auStack_80._8_4_ = pCVar1->x;
    CStack_74.x = pCVar1->y;
    CStack_74.y = pCVar1->z;
  }
  pCStack_138 = core_dmodel_cpp_loadModel_FUN_00478c00("gatbullet.kfm");
  core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
  return 1;
}
