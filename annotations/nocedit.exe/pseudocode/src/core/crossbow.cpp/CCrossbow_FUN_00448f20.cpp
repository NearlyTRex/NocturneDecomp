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
  int extraout_EAX;
  double dVar4;
  CBoundingBox3D *pCVar5;
  CDemonActor *pCVar6;
  float volume;
  CBoundingBox3D *pCStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  CVector3f CStack_c8;
  int iStack_bc;
  CDemonActor *pCStack_b8;
  CDemonActor *pCStack_b4;
  CCrossbow *pCStack_b0;
  float fStack_ac;
  CDemonActor *pCStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float local_4c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CVector3f CStack_24;
  int iStack_18;
  CGlass *pCStack_14;
  
  pCVar1 = (CVector3f *)
           (*(this_ptr->base_weapon).base_actor.vtable[1].renderOpaque)((CDemonActor *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_6c,pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    return 0;
  }
  CStack_84.z = (this_ptr->base_weapon).bolt_velocity;
  CStack_84.x = 0.0;
  CStack_84.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_9c,&CStack_84);
  CStack_78.x = CStack_6c.x + CStack_9c.x;
  CStack_78.y = CStack_6c.y + CStack_9c.y;
  CStack_78.z = CStack_6c.z + CStack_9c.z;
  CStack_24.x = (float)1.5 / (this_ptr->base_weapon).bolt_velocity;
  fStack_54 = CStack_9c.x * CStack_24.x;
  fStack_50 = CStack_9c.y * CStack_24.x;
  local_4c = CStack_9c.z * CStack_24.x;
  CStack_90.x = CStack_6c.x - fStack_54;
  CStack_90.y = CStack_6c.y - fStack_50;
  CStack_90.z = CStack_6c.z - local_4c;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar6 = *(CDemonActor **)&(this_ptr->base_weapon).carried_by_actor;
  if (pCVar6 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar6);
  }
  CStack_24.z = 0.0;
  do {
    pCVar3 = (CDemonActor *)
             core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&CStack_90,&CStack_78);
    dVar4 = (double)(float)pCVar3;
    pCVar6 = pCVar3;
    if ((dVar4 < 0.0) || (1.0 < dVar4)) break;
    pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCVar6 != (CDemonActor *)0x0) &&
       (iVar2 = (*pCVar6->vtable[1].hasCollision)(pCVar6,SUB84(dVar4,0)), 0 < iVar2)) {
      pCVar6 = (CDemonActor *)0x0;
    }
    pCStack_14 = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    CStack_24.y = (float)core_actor_cpp_castToClassHash_FUN_0040c790
                                   (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    if (pCVar6 == (CDemonActor *)0x0) {
      if (pCStack_14 == (CGlass *)0x0) {
        if ((CDemonActor *)CStack_24.y == (CDemonActor *)0x0) {
          core_fire_cpp_CFireEffect_createStake_FUN_004c7bb0
                    (g_CFireEffectPtr,&g_CDemonSetPtr->collision_impact_position,
                     (CVector3f *)&(this_ptr->base_weapon).base_actor.orient,
                     &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type);
          pCVar6 = pCVar3;
          break;
        }
        core_trigger_cpp_FUN_005e0aa0();
        pCVar5 = SUB84(dVar4,0);
        iVar2 = core_trigger_cpp_FUN_005e0ac0();
        if (iVar2 != 0) {
          (*(this_ptr->base_weapon).base_actor.vtable[1].getBoundingBox)
                    ((CDemonActor *)this_ptr,pCVar5);
          core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)CStack_24.y);
        pCVar6 = pCVar3;
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_14);
        pCVar6 = pCVar3;
        if (extraout_EAX == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (pCStack_14,&g_CDemonSetPtr->collision_impact_position);
        pCVar6 = pCVar3;
      }
    }
    else {
      iVar2 = (*pCVar6->vtable[1].renderOpaque)(pCVar6);
      this_ptr_00 = g_CDemonSetPtr;
      pCVar5 = (CBoundingBox3D *)((ulonglong)dVar4 >> 0x20);
      if (iVar2 != 0) {
        pCVar6 = pCVar3;
        if (iStack_18 == 0) {
          (this_ptr->base_weapon).ammo_count = (this_ptr->base_weapon).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff14);
      volume = (float)g_CDemonSetPtr->field11_0x14d148;
      pCStack_e0 = (*(this_ptr->base_weapon).base_actor.vtable[1].getBoundingBox)
                             ((CDemonActor *)this_ptr,pCVar5);
      fStack_dc = 0.4;
      CStack_9c.x = (g_CDemonSetPtr->collision_result_vec2).x -
                    (g_CDemonSetPtr->collision_result_vec1).x;
      CStack_9c.y = (g_CDemonSetPtr->collision_result_vec2).y -
                    (g_CDemonSetPtr->collision_result_vec1).y;
      CStack_9c.z = (g_CDemonSetPtr->collision_result_vec2).z -
                    (g_CDemonSetPtr->collision_result_vec1).z;
      fStack_28 = (float)10 /
                  SQRT(CStack_9c.z * CStack_9c.z +
                       CStack_9c.x * CStack_9c.x + CStack_9c.y * CStack_9c.y);
      fStack_30 = CStack_9c.x * fStack_28;
      fStack_2c = CStack_9c.y * fStack_28;
      fStack_28 = CStack_9c.z * fStack_28;
      if (&fStack_d8 != &fStack_30) {
        fStack_d8 = fStack_30;
        fStack_d4 = fStack_2c;
        fStack_d0 = fStack_28;
      }
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (pCVar6,&CStack_24,&g_CDemonSetPtr->collision_impact_position);
      if (&CStack_c8 != pCVar1) {
        CStack_c8.x = pCVar1->x;
        CStack_c8.y = pCVar1->y;
        CStack_c8.z = pCVar1->z;
      }
      iStack_bc = (this_ptr->base_weapon).ammo_type;
      pCStack_b4 = (CDemonActor *)0x68;
      pCStack_b0 = this_ptr;
      pCStack_b8 = (CDemonActor *)0x3e19999a;
      pCStack_a8 = (*((this_ptr->base_weapon).base_actor.vtable)->getCarrier)
                             ((CDemonActor *)this_ptr);
      (*pCVar6->vtable[1].playAmbientSoundWithVolume)(pCVar6,(char *)&pCStack_e0,volume);
      if (*(int *)((this_ptr->base_weapon).field3_0x2d8 + 0xc) == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    CStack_24.z = (float)((int)CStack_24.z + 1);
  } while ((int)CStack_24.z < 4);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  if (1.0 < (float)pCVar6) {
    pCVar6 = (CDemonActor *)0x3f800000;
  }
  fStack_60 = CStack_9c.x * (float)pCVar6;
  fStack_5c = CStack_9c.y * (float)pCVar6;
  fStack_58 = CStack_9c.z * (float)pCVar6;
  pCStack_b4 = (CDemonActor *)(CStack_90.x + fStack_60);
  pCStack_b0 = (CCrossbow *)(CStack_90.y + fStack_5c);
  fStack_ac = CStack_90.z + fStack_58;
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"bow-!.wav",&CStack_6c);
  (this_ptr->base_weapon).field7_0x2f4[0xc] = -6;
  (this_ptr->base_weapon).field7_0x2f4[0xd] = '~';
  (this_ptr->base_weapon).field7_0x2f4[0xe] = '*';
  (this_ptr->base_weapon).field7_0x2f4[0xf] = '?';
  return 1;
}
