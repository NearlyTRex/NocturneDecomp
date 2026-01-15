// Name: core_tommygun.cpp_FUN_005ddb30
// Address: 005ddb30
// Address Range: [[005ddb30, 005ddded] [005ddebf, 005de32f]]
// Convention: unknown
// Signature: undefined core_tommygun.cpp_FUN_005ddb30()

#include "nocturne.h"

/* Signature: byte actors_weapon_tommygun.cpp_FUN_005ddb30(uint param_1) */

uint core_tommygun_cpp_FUN_005ddb30(void)

{
  float fVar1;
  CDemonActor_vtable *pCVar2;
  CDemonSet *this_ptr;
  CVector3f *pCVar3;
  int iVar4;
  CDemonActor *pCVar5;
  CDemonActor *pCVar6;
  CDemonActor *pCVar7;
  CVector3f *pCVar8;
  int extraout_EAX;
  CDemonActor *in_stack_00000004;
  SCollisionInfo *collision_info;
  double dVar9;
  SDamageInfo SStack_144;
  CMatrix3x3f CStack_108;
  CVector3f CStack_e0;
  CVector3f CStack_d4;
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CVector3f CStack_30;
  CDemonActor *pCStack_24;
  CDemonActor *pCStack_20;
  int iStack_1c;
  CGlass *pCStack_18;
  float fStack_14;
  
  fVar1 = in_stack_00000004[2].orient_matrix.m[1].z;
  in_stack_00000004[4].actor_name[0x18] = '\x02';
  in_stack_00000004[4].actor_name[0x19] = '\0';
  in_stack_00000004[4].actor_name[0x1a] = '\0';
  in_stack_00000004[4].actor_name[0x1b] = '\0';
  if (0.0 < fVar1) {
    return 0;
  }
  pCVar2 = in_stack_00000004->vtable;
  in_stack_00000004[2].orient_matrix.m[1].z =
       in_stack_00000004[2].orient_matrix.m[1].z + 0.1f;
  pCVar3 = (CVector3f *)(*pCVar2[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_80,pCVar3);
  iVar4 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar4 == 0) {
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
  CStack_bc.z = in_stack_00000004[2].orient.heading;
  CStack_bc.x = 0.0;
  CStack_bc.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&CStack_c8,&CStack_bc);
  CStack_d4.x = CStack_80.x + CStack_c8.x;
  CStack_d4.y = CStack_80.y + CStack_c8.y;
  CStack_d4.z = CStack_80.z + CStack_c8.z;
  CStack_30.z = (float)2.5 / in_stack_00000004[2].orient.heading;
  fStack_44 = CStack_c8.x * CStack_30.z;
  fStack_40 = CStack_c8.y * CStack_30.z;
  fStack_3c = CStack_c8.z * CStack_30.z;
  CStack_74.x = CStack_80.x - fStack_44;
  CStack_74.y = CStack_80.y - fStack_40;
  CStack_74.z = CStack_80.z - fStack_3c;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  pCVar5 = (CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x;
  if (pCVar5 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar5);
  }
  iStack_1c = 0;
  do {
    fStack_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,&CStack_74,&CStack_d4);
    dVar9 = (double)fStack_14;
    if ((dVar9 < 0.0) || (1.0 < dVar9)) goto LAB_005ddd4e;
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    collision_info = SUB84 /* extract 2-byte value */(dVar9,0);
    if ((pCVar5 != (CDemonActor *)0x0) &&
       (iVar4 = (*pCVar5->vtable[1].hasCollision)(pCVar5,collision_info), 0 < iVar4)) {
      pCVar5 = (CDemonActor *)0x0;
    }
    pCStack_18 = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_24 = pCVar6;
    pCStack_20 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (pCVar5 == (CDemonActor *)0x0) {
      if (pCStack_18 == (CGlass *)0x0) {
        if (pCVar6 == (CDemonActor *)0x0) {
          if (pCStack_20 == (CDemonActor *)0x0) {
            if (pCVar7 == (CDemonActor *)0x0) {
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
          iVar4 = core_trigger_cpp_FUN_005e0ac0();
          if (iVar4 != 0) {
            (*in_stack_00000004->vtable[1].getBoundingBox)
                      (in_stack_00000004,(CBoundingBox3D *)collision_info);
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_24);
        }
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_18);
        if (extraout_EAX == 0) goto LAB_005ddd4e;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (pCStack_18,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar4 = (*pCVar5->vtable[1].renderOpaque)(pCVar5);
      if ((iVar4 != 0) &&
         (pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                             ((CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x,
                              g_CHeroClassInfo.name_hash), this_ptr = g_CDemonSetPtr,
         pCVar6 != (CDemonActor *)0x0)) {
        if (iStack_1c == 0) {
          *(int *)(in_stack_00000004[4].actor_name + 8) =
               *(int *)(in_stack_00000004[4].actor_name + 8) + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr);
          return 0;
        }
        goto LAB_005ddd4e;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_144);
      SStack_144.field0_0x0 = g_CDemonSetPtr->field11_0x14d148;
      SStack_144.impact_point.x =
           (float)(*in_stack_00000004->vtable[1].getBoundingBox)
                            (in_stack_00000004,(CBoundingBox3D *)collision_info);
      SStack_144.impact_point.y = 0.4;
      fStack_48 = (g_CDemonSetPtr->collision_result_vec2).x -
                  (g_CDemonSetPtr->collision_result_vec1).x;
      fStack_44 = (g_CDemonSetPtr->collision_result_vec2).y -
                  (g_CDemonSetPtr->collision_result_vec1).y;
      fStack_40 = (g_CDemonSetPtr->collision_result_vec2).z -
                  (g_CDemonSetPtr->collision_result_vec1).z;
      pCStack_24 = (CDemonActor *)
                   ((float)10 /
                   SQRT(fStack_40 * fStack_40 + fStack_48 * fStack_48 + fStack_44 * fStack_44));
      local_60 = fStack_48 * (float)pCStack_24;
      fStack_5c = fStack_44 * (float)pCStack_24;
      fStack_58 = fStack_40 * (float)pCStack_24;
      if (&SStack_144.impact_point.z != &local_60) {
        SStack_144.impact_point.z = local_60;
        SStack_144.impact_force = fStack_5c;
        SStack_144.impact_direction.x = fStack_58;
      }
      pCVar3 = &CStack_30;
      pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (pCVar5,pCVar3,&g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)&SStack_144.impact_direction.z != pCVar8) {
        SStack_144.impact_direction.x = pCVar8->x;
        SStack_144.impact_direction.y = pCVar8->y;
        SStack_144.impact_direction.z = pCVar8->z;
      }
      SStack_144.ammo_type = *(int *)(in_stack_00000004[4].actor_name + 0xc);
      SStack_144.damage_type = 0x65;
      SStack_144.weapon_damage_modifier = 0.15;
      SStack_144.attacker = in_stack_00000004;
      SStack_144.wielder = (*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
      (*pCVar5->vtable[1].playAmbientSoundWithVolume)(pCVar5,(char *)&SStack_144,(float)pCVar3);
      if (in_stack_00000004[2].orient.bank == 0.0) goto LAB_005ddd4e;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_1c = iStack_1c + 1;
    if (3 < iStack_1c) {
LAB_005ddd4e:
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      if (*(int *)(in_stack_00000004[4].actor_name + 0x14) != 0) {
        fStack_98 = CStack_80.x;
        fStack_90 = CStack_80.z;
        fStack_94 = CStack_80.y + -0.125f;
        core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
        CStack_e0.x = 5.0;
        CStack_e0.y = 6.0;
        CStack_e0.z = -6.0;
        CStack_8c.x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
        fStack_14 = CStack_8c.x;
        CStack_8c.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
        CStack_8c.z = 0.0;
        fStack_14 = CStack_8c.y;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_108,&CStack_8c);
        pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (&CStack_108,&CStack_b0,&CStack_e0);
        pCVar3 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                           (in_stack_00000004,&CStack_a4,pCVar3);
        if (&CStack_e0 != pCVar3) {
          CStack_e0.x = pCVar3->x;
          CStack_e0.y = pCVar3->y;
          CStack_e0.z = pCVar3->z;
        }
        core_dmodel_cpp_loadModel_FUN_00478c00("bullet.kfm");
        core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
      }
      return 1;
    }
  } while( true );
}
