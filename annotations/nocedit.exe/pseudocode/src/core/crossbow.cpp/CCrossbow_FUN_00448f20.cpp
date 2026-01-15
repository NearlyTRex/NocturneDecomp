// Name: core_crossbow.cpp_CCrossbow_FUN_00448f20
// Address: 00448f20
// Address Range: [[00448f20, 0044953a]]
// Convention: __cdecl
// Signature: int core_crossbow.cpp_CCrossbow_FUN_00448f20(CCrossbow * this_ptr)

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_FUN_00448f20(CCrossbow *this_ptr)

{
  CDemonSet *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  CVector3f *pCVar4;
  int extraout_EAX;
  SCollisionInfo *collision_info;
  double dVar5;
  float fStack_f8;
  SDamageInfo SStack_f4;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_a4;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  int iStack_20;
  CGlass *pCStack_18;
  float fStack_14;
  
  pCVar1 = (CVector3f *)
           (*(this_ptr->base_weapon).base_actor.vtable[1].renderOpaque)((CDemonActor *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_70,pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    return 0;
  }
  CStack_88.z = (this_ptr->base_weapon).bolt_velocity;
  CStack_88.x = 0.0;
  CStack_88.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_a0,&CStack_88);
  CStack_7c.x = CStack_70.x + CStack_a0.x;
  CStack_7c.y = CStack_70.y + CStack_a0.y;
  CStack_7c.z = CStack_70.z + CStack_a0.z;
  CStack_2c.y = (float)1.5 / (this_ptr->base_weapon).bolt_velocity;
  fStack_58 = CStack_a0.x * CStack_2c.y;
  fStack_54 = CStack_a0.y * CStack_2c.y;
  fStack_50 = CStack_a0.z * CStack_2c.y;
  CStack_94.x = CStack_70.x - fStack_58;
  CStack_94.y = CStack_70.y - fStack_54;
  CStack_94.z = CStack_70.z - fStack_50;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar3 = *(CDemonActor **)&(this_ptr->base_weapon).carried_by_actor;
  if (pCVar3 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar3);
  }
  iStack_20 = 0;
  do {
    fStack_f8 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,&CStack_94,&CStack_7c);
    dVar5 = (double)fStack_f8;
    fStack_14 = fStack_f8;
    if ((dVar5 < 0.0) || (1.0 < dVar5)) break;
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    collision_info = SUB84 /* extract 2-byte value */(dVar5,0);
    if ((pCVar3 != (CDemonActor *)0x0) &&
       (iVar2 = (*pCVar3->vtable[1].hasCollision)(pCVar3,collision_info), 0 < iVar2)) {
      pCVar3 = (CDemonActor *)0x0;
    }
    pCStack_18 = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    CStack_2c.z = (float)core_actor_cpp_castToClassHash_FUN_0040c790
                                   (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    if (pCVar3 == (CDemonActor *)0x0) {
      if (pCStack_18 == (CGlass *)0x0) {
        if ((CDemonActor *)CStack_2c.z == (CDemonActor *)0x0) {
          core_fire_cpp_CFireEffect_createStake_FUN_004c7bb0
                    (g_CFireEffectPtr,&g_CDemonSetPtr->collision_impact_position,
                     (CVector3f *)&(this_ptr->base_weapon).base_actor.orient,
                     &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type);
          break;
        }
        core_trigger_cpp_FUN_005e0aa0();
        iVar2 = core_trigger_cpp_FUN_005e0ac0();
        if (iVar2 != 0) {
          (*(this_ptr->base_weapon).base_actor.vtable[1].getBoundingBox)
                    ((CDemonActor *)this_ptr,(CBoundingBox3D *)collision_info);
          core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)CStack_2c.z);
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
      this_ptr_00 = g_CDemonSetPtr;
      if (iVar2 != 0) {
        if (iStack_20 == 0) {
          (this_ptr->base_weapon).ammo_count = (this_ptr->base_weapon).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_f4);
      SStack_f4.field0_0x0 = g_CDemonSetPtr->field11_0x14d148;
      SStack_f4.impact_point.x =
           (float)(*(this_ptr->base_weapon).base_actor.vtable[1].getBoundingBox)
                            ((CDemonActor *)this_ptr,(CBoundingBox3D *)collision_info);
      SStack_f4.impact_point.y = 0.4;
      fStack_a4 = (g_CDemonSetPtr->collision_result_vec2).x -
                  (g_CDemonSetPtr->collision_result_vec1).x;
      CStack_a0.x = (g_CDemonSetPtr->collision_result_vec2).y -
                    (g_CDemonSetPtr->collision_result_vec1).y;
      CStack_a0.y = (g_CDemonSetPtr->collision_result_vec2).z -
                    (g_CDemonSetPtr->collision_result_vec1).z;
      fStack_14 = (float)10 /
                  SQRT(CStack_a0.y * CStack_a0.y + fStack_a4 * fStack_a4 + CStack_a0.x * CStack_a0.x
                      );
      fStack_38 = fStack_a4 * fStack_14;
      fStack_34 = CStack_a0.x * fStack_14;
      fStack_30 = CStack_a0.y * fStack_14;
      if (&SStack_f4.impact_point.z != &fStack_38) {
        SStack_f4.impact_point.z = fStack_38;
        SStack_f4.impact_force = fStack_34;
        SStack_f4.impact_direction.x = fStack_30;
      }
      pCVar1 = &CStack_2c;
      pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (pCVar3,pCVar1,&g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)&SStack_f4.impact_direction.z != pCVar4) {
        SStack_f4.impact_direction.x = pCVar4->x;
        SStack_f4.impact_direction.y = pCVar4->y;
        SStack_f4.impact_direction.z = pCVar4->z;
      }
      SStack_f4.ammo_type = (this_ptr->base_weapon).ammo_type;
      SStack_f4.damage_type = 0x68;
      SStack_f4.attacker = (CDemonActor *)this_ptr;
      SStack_f4.weapon_damage_modifier = 0.15;
      SStack_f4.wielder =
           (*((this_ptr->base_weapon).base_actor.vtable)->getCarrier)((CDemonActor *)this_ptr);
      (*pCVar3->vtable[1].playAmbientSoundWithVolume)(pCVar3,(char *)&SStack_f4,(float)pCVar1);
      if (*(int *)((this_ptr->base_weapon).field3_0x2d8 + 0xc) == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  if (1.0 < fStack_f8) {
    fStack_f8 = 1.0;
  }
  fStack_64 = CStack_a0.x * fStack_f8;
  fStack_60 = CStack_a0.y * fStack_f8;
  fStack_5c = CStack_a0.z * fStack_f8;
  fStack_b8 = CStack_94.x + fStack_64;
  fStack_b4 = CStack_94.y + fStack_60;
  fStack_b0 = CStack_94.z + fStack_5c;
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"bow-!.wav",&CStack_70);
  (this_ptr->base_weapon).field7_0x2f4[0xc] = -6;
  (this_ptr->base_weapon).field7_0x2f4[0xd] = '~';
  (this_ptr->base_weapon).field7_0x2f4[0xe] = '*';
  (this_ptr->base_weapon).field7_0x2f4[0xf] = '?';
  return 1;
}
