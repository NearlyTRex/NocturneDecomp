// Name: core_crossbow.cpp_CCrossbow_FUN_00448f20
// Address: 00448f20
// Address Range: [[00448f20, 0044953a]]
// Convention: __cdecl
// Signature: int core_crossbow.cpp_CCrossbow_FUN_00448f20(CCrossbow * this_ptr)

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_FUN_00448f20(CCrossbow *this_ptr)

{
  double dVar1;
  float fVar2;
  CDemonSet *this_ptr_00;
  CVector3f *pCVar3;
  int iVar4;
  CDemonActor *pCVar5;
  CDemonActor *this_ptr_01;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  SCollisionInfo *collision_info;
  float fStack_d4;
  float fStack_d0;
  CDemonActor *pCStack_cc;
  float fStack_c8;
  int iStack_c4;
  CVector3f CStack_c0;
  float fStack_b4;
  float fStack_b0;
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
  float fStack_2c;
  float fStack_28;
  CDemonActor *pCStack_24;
  CVector3f CStack_20;
  CDemonActor *pCStack_14;
  
  pCVar3 = (CVector3f *)
           (*(this_ptr->base_weapon).base_actor.vtable[1].renderOpaque)((CDemonActor *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_70,pCVar3);
  iVar4 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar4 == 0) {
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
  fStack_28 = (float)1.5 / (this_ptr->base_weapon).bolt_velocity;
  fStack_58 = CStack_a0.x * fStack_28;
  fStack_54 = CStack_a0.y * fStack_28;
  fStack_50 = CStack_a0.z * fStack_28;
  CStack_94.x = CStack_70.x - fStack_58;
  CStack_94.y = CStack_70.y - fStack_54;
  CStack_94.z = CStack_70.z - fStack_50;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar5 = *(CDemonActor **)&(this_ptr->base_weapon).carried_by_actor;
  if (pCVar5 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar5);
  }
  CStack_20.x = 0.0;
  do {
    pCVar5 = (CDemonActor *)
             core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&CStack_94,&CStack_7c);
    dVar1 = (double)(float)pCVar5;
    if ((dVar1 < 0.0) || (1.0 < dVar1)) break;
    this_ptr_01 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    collision_info = SUB84 /* extract 2-byte value */(dVar1,0);
    if ((this_ptr_01 != (CDemonActor *)0x0) &&
       (iVar4 = (*this_ptr_01->vtable[1].hasCollision)(this_ptr_01,collision_info), 0 < iVar4)) {
      this_ptr_01 = (CDemonActor *)0x0;
    }
    pCStack_14 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCStack_24 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    if (this_ptr_01 == (CDemonActor *)0x0) {
      if ((CGlass *)CStack_20.z == (CGlass *)0x0) {
        if (pCStack_24 == (CDemonActor *)0x0) {
          core_fire_cpp_CFireEffect_createStake_FUN_004c7bb0
                    (g_CFireEffectPtr,&g_CDemonSetPtr->collision_impact_position,
                     (CVector3f *)&(this_ptr->base_weapon).base_actor.orient,
                     &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type);
          break;
        }
        core_trigger_cpp_FUN_005e0aa0();
        iVar4 = core_trigger_cpp_FUN_005e0ac0();
        if (iVar4 != 0) {
          (*(this_ptr->base_weapon).base_actor.vtable[1].getBoundingBox)
                    ((CDemonActor *)this_ptr,(CBoundingBox3D *)collision_info);
          core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_24);
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0((CGlass *)CStack_20.z);
        if (extraout_EAX == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  ((CGlass *)CStack_20.z,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar4 = (*this_ptr_01->vtable[1].renderOpaque)(this_ptr_01);
      this_ptr_00 = g_CDemonSetPtr;
      if (iVar4 != 0) {
        if (CStack_20.x == 0.0) {
          (this_ptr->base_weapon).ammo_count = (this_ptr->base_weapon).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff0c);
      (*(this_ptr->base_weapon).base_actor.vtable[1].getBoundingBox)
                ((CDemonActor *)this_ptr,(CBoundingBox3D *)collision_info);
      CStack_a0.z = (g_CDemonSetPtr->collision_result_vec2).x -
                    (g_CDemonSetPtr->collision_result_vec1).x;
      CStack_94.x = (g_CDemonSetPtr->collision_result_vec2).y -
                    (g_CDemonSetPtr->collision_result_vec1).y;
      CStack_94.y = (g_CDemonSetPtr->collision_result_vec2).z -
                    (g_CDemonSetPtr->collision_result_vec1).z;
      fVar2 = (float)10 /
              SQRT(CStack_94.y * CStack_94.y + CStack_a0.z * CStack_a0.z + CStack_94.x * CStack_94.x
                  );
      fStack_2c = CStack_a0.z * fVar2;
      fStack_28 = CStack_94.x * fVar2;
      pCStack_24 = (CDemonActor *)(CStack_94.y * fVar2);
      if (&fStack_d4 != &fStack_2c) {
        fStack_d4 = fStack_2c;
        fStack_d0 = fStack_28;
        pCStack_cc = pCStack_24;
      }
      pCVar5 = this_ptr_01;
      pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (this_ptr_01,&CStack_20,&g_CDemonSetPtr->collision_impact_position);
      if (&CStack_c0 != pCVar3) {
        fStack_d4 = pCVar3->y;
        fStack_d0 = pCVar3->z;
      }
      pCStack_cc = (CDemonActor *)(this_ptr->base_weapon).ammo_type;
      iStack_c4 = 0x68;
      CStack_c0.x = (float)this_ptr;
      fStack_c8 = 0.15;
      CStack_c0.y = (float)(*((this_ptr->base_weapon).base_actor.vtable)->getCarrier)
                                     ((CDemonActor *)this_ptr);
      (*this_ptr_01->vtable[1].playAmbientSoundWithVolume)
                (this_ptr_01,&stack0xffffff0c,(float)collision_info);
      if (*(int *)((this_ptr->base_weapon).field3_0x2d8 + 0xc) == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    CStack_20.x = (float)((int)CStack_20.x + 1);
  } while ((int)CStack_20.x < 4);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  if (1.0 < (float)pCVar5) {
    pCVar5 = (CDemonActor *)0x3f800000;
  }
  fStack_64 = CStack_a0.x * (float)pCVar5;
  fStack_60 = CStack_a0.y * (float)pCVar5;
  fStack_5c = CStack_a0.z * (float)pCVar5;
  CStack_c0.z = CStack_94.x + fStack_64;
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
