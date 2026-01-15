// Name: core_turret.cpp_FUN_005e3750
// Address: 005e3750
// Address Range: [[005e3750, 005e3c6a]]
// Convention: unknown
// Signature: undefined core_turret.cpp_FUN_005e3750()

#include "nocturne.h"

/* Signature: byte actors_weapon_turret.cpp_FUN_005e3750(uint param_1) */

uint core_turret_cpp_FUN_005e3750(void)

{
  float fVar1;
  CVector3f *pCVar2;
  CDemonActor *pCVar3;
  int iVar4;
  CDemonActor *pCVar5;
  CDemonActor *pCVar6;
  int extraout_EAX;
  CDemonActor *in_stack_00000004;
  SCollisionInfo *collision_info;
  double dVar7;
  SDamageInfo SStack_dc;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f aCStack_64 [2];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_34;
  CDemonActor *pCStack_28;
  CDemonActor *pCStack_24;
  int iStack_20;
  CGlass *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  pCVar2 = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_a0,pCVar2);
  aCStack_64[0].z = in_stack_00000004[2].orient.heading;
  aCStack_64[0].x = 0.0;
  aCStack_64[0].y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&CStack_34,aCStack_64);
  CStack_94.x = CStack_a0.x + CStack_34.x;
  CStack_94.y = CStack_a0.y + CStack_34.y;
  CStack_94.z = CStack_a0.z + CStack_34.z;
  CStack_70.x = CStack_a0.x;
  CStack_70.y = CStack_a0.y;
  CStack_70.z = CStack_a0.z;
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  iStack_20 = 0;
  do {
    fStack_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,&CStack_70,&CStack_94);
    dVar7 = (double)fStack_14;
    if ((dVar7 < 0.0) || (1.0 < dVar7)) break;
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    collision_info = SUB84 /* extract 2-byte value */(dVar7,0);
    if ((pCVar3 != (CDemonActor *)0x0) &&
       (iVar4 = (*pCVar3->vtable[1].hasCollision)(pCVar3,collision_info), 0 < iVar4)) {
      pCVar3 = (CDemonActor *)0x0;
    }
    pCStack_1c = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_28 = pCVar5;
    pCStack_24 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (pCVar3 == (CDemonActor *)0x0) {
      if (pCStack_1c == (CGlass *)0x0) {
        if (pCVar5 != (CDemonActor *)0x0) {
          core_trigger_cpp_FUN_005e0aa0();
          iVar4 = core_trigger_cpp_FUN_005e0ac0();
          pCVar3 = pCStack_28;
          if (iVar4 != 0) {
            (*in_stack_00000004->vtable[1].getBoundingBox)
                      (in_stack_00000004,(CBoundingBox3D *)collision_info);
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
            pCVar3 = pCStack_28;
          }
          goto LAB_005e3ae2;
        }
        if (pCStack_24 == (CDemonActor *)0x0) {
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
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_1c);
        if (extraout_EAX == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (pCStack_1c,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_dc);
      SStack_dc.field0_0x0 = g_CDemonSetPtr->field11_0x14d148;
      SStack_dc.damage_amount =
           (float)(*in_stack_00000004->vtable[1].getBoundingBox)
                            (in_stack_00000004,(CBoundingBox3D *)collision_info);
      SStack_dc.damage_flags = 0x3ecccccd;
      fStack_88 = (g_CDemonSetPtr->collision_result_vec2).x -
                  (g_CDemonSetPtr->collision_result_vec1).x;
      fStack_84 = (g_CDemonSetPtr->collision_result_vec2).y -
                  (g_CDemonSetPtr->collision_result_vec1).y;
      fStack_80 = (g_CDemonSetPtr->collision_result_vec2).z -
                  (g_CDemonSetPtr->collision_result_vec1).z;
      fStack_18 = (float)10 /
                  SQRT(fStack_80 * fStack_80 + fStack_88 * fStack_88 + fStack_84 * fStack_84);
      fStack_4c = fStack_88 * fStack_18;
      fStack_48 = fStack_84 * fStack_18;
      fStack_44 = fStack_80 * fStack_18;
      if (&SStack_dc.impact_point != (CVector3f *)&fStack_4c) {
        SStack_dc.impact_point.x = fStack_4c;
        SStack_dc.impact_point.y = fStack_48;
        SStack_dc.impact_point.z = fStack_44;
      }
      pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (pCVar3,&CStack_7c,&g_CDemonSetPtr->collision_impact_position);
      if (&SStack_dc.impact_direction != pCVar2) {
        SStack_dc.impact_direction.x = pCVar2->x;
        SStack_dc.impact_direction.y = pCVar2->y;
        SStack_dc.impact_direction.z = pCVar2->z;
      }
      SStack_dc.ammo_type = *(int *)(in_stack_00000004[4].actor_name + 0xc);
      SStack_dc.weapon_damage_modifier = 1.0;
      SStack_dc.attacker = in_stack_00000004;
      SStack_dc.damage_type = 0x65;
      SStack_dc.wielder = (*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
      (*pCVar3->vtable[1].playAmbientSoundWithVolume)
                (pCVar3,(char *)&SStack_dc,(float)collision_info);
      if (in_stack_00000004[2].orient.bank == 0.0) break;
      pCVar3 = g_CDemonSetPtr->collision_actor;
LAB_005e3ae2:
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar3);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  fStack_40 = CStack_a0.x;
  fStack_38 = CStack_a0.z;
  fStack_3c = CStack_a0.y + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  fVar1 = *(float *)(in_stack_00000004[5].create_event + 0x44);
  in_stack_00000004[6].create_event[0x28] = '\x02';
  in_stack_00000004[6].create_event[0x29] = '\0';
  in_stack_00000004[6].create_event[0x2a] = '\0';
  in_stack_00000004[6].create_event[0x2b] = '\0';
  in_stack_00000004[2].orient_matrix.m[1].z = fVar1;
  return 1;
}
