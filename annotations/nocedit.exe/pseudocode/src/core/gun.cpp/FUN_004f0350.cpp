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
  CDemonActor *in_stack_00000004;
  SCollisionInfo *collision_info;
  double dVar6;
  SDamageInfo SStack_144;
  CMatrix3x3f CStack_108;
  CVector3f CStack_e0;
  CVector3f CStack_d4;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f aCStack_68 [2];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CVector3f CStack_38;
  float fStack_2c;
  CDemonActor *pCStack_28;
  CDemonActor *pCStack_24;
  int iStack_20;
  float fStack_1c;
  CGlass *pCStack_18;
  float fStack_14;
  
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
  pCVar3 = (CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x;
  if (pCVar3 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar3);
  }
  iStack_20 = 0;
  do {
    fStack_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,&CStack_e0,&CStack_b0);
    dVar6 = (double)fStack_14;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    collision_info = SUB84 /* extract 2-byte value */(dVar6,0);
    if ((pCVar3 != (CDemonActor *)0x0) &&
       (iVar2 = (*pCVar3->vtable[1].hasCollision)(pCVar3,collision_info), 0 < iVar2)) {
      pCVar3 = (CDemonActor *)0x0;
    }
    pCStack_18 = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_28 = pCVar4;
    pCStack_24 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (pCVar3 == (CDemonActor *)0x0) {
      if (pCStack_18 == (CGlass *)0x0) {
        if (pCVar4 == (CDemonActor *)0x0) {
          if (pCStack_24 == (CDemonActor *)0x0) {
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
      iVar2 = (*pCVar3->vtable[1].renderOpaque)(pCVar3);
      this_ptr = g_CDemonSetPtr;
      if (iVar2 != 0) {
        if (iStack_20 == 0) {
          *(int *)(in_stack_00000004[4].actor_name + 8) =
               *(int *)(in_stack_00000004[4].actor_name + 8) + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_144);
      SStack_144.field0_0x0 = g_CDemonSetPtr->field11_0x14d148;
      SStack_144.damage_amount =
           (float)(*in_stack_00000004->vtable[1].getBoundingBox)
                            (in_stack_00000004,(CBoundingBox3D *)collision_info);
      SStack_144.damage_flags = 0x3ecccccd;
      fStack_c8 = (g_CDemonSetPtr->collision_result_vec2).x -
                  (g_CDemonSetPtr->collision_result_vec1).x;
      fStack_c4 = (g_CDemonSetPtr->collision_result_vec2).y -
                  (g_CDemonSetPtr->collision_result_vec1).y;
      fStack_c0 = (g_CDemonSetPtr->collision_result_vec2).z -
                  (g_CDemonSetPtr->collision_result_vec1).z;
      fStack_1c = (float)10 /
                  SQRT(fStack_c0 * fStack_c0 + fStack_c8 * fStack_c8 + fStack_c4 * fStack_c4);
      fStack_98 = fStack_c8 * fStack_1c;
      fStack_94 = fStack_c4 * fStack_1c;
      fStack_90 = fStack_c0 * fStack_1c;
      if (&SStack_144.impact_point != (CVector3f *)&fStack_98) {
        SStack_144.impact_point.x = fStack_98;
        SStack_144.impact_point.y = fStack_94;
        SStack_144.impact_point.z = fStack_90;
      }
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (pCVar3,aCStack_68,&g_CDemonSetPtr->collision_impact_position);
      if (&SStack_144.impact_direction != pCVar1) {
        SStack_144.impact_direction.x = pCVar1->x;
        SStack_144.impact_direction.y = pCVar1->y;
        SStack_144.impact_direction.z = pCVar1->z;
      }
      SStack_144.ammo_type = *(int *)(in_stack_00000004[4].actor_name + 0xc);
      SStack_144.weapon_damage_modifier = 0.15;
      SStack_144.attacker = in_stack_00000004;
      SStack_144.damage_type = 0x65;
      SStack_144.wielder = (*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
      (*pCVar3->vtable[1].playAmbientSoundWithVolume)
                (pCVar3,(char *)&SStack_144,(float)collision_info);
      if (in_stack_00000004[2].orient.bank == 0.0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  fStack_50 = CStack_bc.x;
  fStack_48 = CStack_bc.z;
  fStack_4c = CStack_bc.y + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,in_stack_00000004,"45.wav",&CStack_bc);
  in_stack_00000004[2].orient_matrix.m[1].z = 0.333;
  CStack_8c.x = 3.0;
  CStack_8c.y = 3.0;
  CStack_8c.z = -4.0;
  CStack_d4.x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  fStack_14 = CStack_d4.x;
  CStack_d4.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  CStack_d4.z = 0.0;
  fStack_14 = CStack_d4.y;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_108,&CStack_d4);
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     (&CStack_108,&CStack_80,&CStack_8c);
  pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (in_stack_00000004,&CStack_74,pCVar1);
  if (&CStack_8c != pCVar1) {
    CStack_8c.x = pCVar1->x;
    CStack_8c.y = pCVar1->y;
    CStack_8c.z = pCVar1->z;
  }
  core_dmodel_cpp_loadModel_FUN_00478c00("gatbullet.kfm");
  core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
  return 1;
}
