// Name: core_crossbow.cpp_CCrossbow_FUN_00448f20
// Address: 00448f20
// Address Range: [[00448f20, 0044953a]]
// Convention: __cdecl
// Signature: int core_crossbow.cpp_CCrossbow_FUN_00448f20(CCrossbow * this_ptr)

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_FUN_00448f20(CCrossbow *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  CDemonSet *pCVar4;
  CCrossbow *volume;
  double dVar5;
  CBoundingBox3D *pCVar6;
  CVector3f *in_stack_ffffff10;
  float fStack_d0;
  CDemonActor *pCStack_cc;
  float fStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CCrossbow *pCStack_a4;
  float fStack_a0;
  float fStack_9c;
  byte auStack_98 [12];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  byte auStack_78 [16];
  CVector3f CStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_34;
  float fStack_28;
  CDemonActor *pCStack_24;
  float fStack_20;
  CVector3f CStack_1c;
  
  pCVar1 = (CVector3f *)
           (*(this_ptr->base_weapon).base_actor.vtable[1].renderOpaque)((CDemonActor *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,(CVector3f *)(auStack_78 + 8),pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    return 0;
  }
  auStack_98._8_4_ = (this_ptr->base_weapon).bolt_velocity;
  auStack_98._0_4_ = 0.0;
  auStack_98._4_4_ = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_b0,(CVector3f *)auStack_98);
  fStack_88 = fStack_7c + CStack_b0.y;
  fStack_84 = (float)auStack_78._0_4_ + CStack_b0.z;
  fStack_80 = (float)auStack_78._4_4_ + (float)pCStack_a4;
  fStack_34 = (float)1.5 / (this_ptr->base_weapon).bolt_velocity;
  CStack_68.y = CStack_b0.y * fStack_34;
  CStack_68.z = CStack_b0.z * fStack_34;
  fStack_5c = (float)pCStack_a4 * fStack_34;
  fStack_a0 = fStack_7c - CStack_68.y;
  fStack_9c = (float)auStack_78._0_4_ - CStack_68.z;
  auStack_98._0_4_ = (float)auStack_78._4_4_ - fStack_5c;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar3 = *(CDemonActor **)&(this_ptr->base_weapon).carried_by_actor;
  if (pCVar3 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar3);
  }
  CStack_1c.x = 0.0;
  do {
    pCVar4 = g_CDemonSetPtr;
    fStack_20 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,(CVector3f *)(auStack_98 + 8),(CVector3f *)auStack_78);
    dVar5 = (double)fStack_20;
    if ((dVar5 < 0.0) || (1.0 < dVar5)) break;
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCVar3 != (CDemonActor *)0x0) &&
       (iVar2 = (*pCVar3->vtable[1].hasCollision)(pCVar3,(SCollisionInfo *)pCVar4), 0 < iVar2)) {
      pCVar3 = (CDemonActor *)0x0;
    }
    CStack_1c.x = (float)core_actor_cpp_castToClassHash_FUN_0040c790
                                   (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCStack_24 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    if (pCVar3 == (CDemonActor *)0x0) {
      if ((CGlass *)CStack_1c.y == (CGlass *)0x0) {
        if (pCStack_24 == (CDemonActor *)0x0) {
          core_fire_cpp_CFireEffect_createStake_FUN_004c7bb0
                    (g_CFireEffectPtr,&g_CDemonSetPtr->collision_impact_position,
                     (CVector3f *)&(this_ptr->base_weapon).base_actor.orient,
                     &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type);
          break;
        }
        core_trigger_cpp_FUN_005e0aa0();
        pCVar6 = (CBoundingBox3D *)((ulonglong)dVar5 >> 0x20);
        iVar2 = core_trigger_cpp_FUN_005e0ac0();
        if (iVar2 != 0) {
          (*(this_ptr->base_weapon).base_actor.vtable[1].getBoundingBox)
                    ((CDemonActor *)this_ptr,pCVar6);
          core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)CStack_1c.x);
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0((CGlass *)CStack_1c.y);
        if (extraout_EAX == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  ((CGlass *)CStack_1c.z,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (*pCVar3->vtable[1].renderOpaque)(pCVar3);
      pCVar4 = g_CDemonSetPtr;
      pCVar6 = SUB84 /* extract 2-byte value */(dVar5,0);
      if (iVar2 != 0) {
        if (fStack_20 == 0.0) {
          (this_ptr->base_weapon).ammo_count = (this_ptr->base_weapon).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(pCVar4);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff0c);
      volume = this_ptr;
      (*(this_ptr->base_weapon).base_actor.vtable[1].getBoundingBox)((CDemonActor *)this_ptr,pCVar6)
      ;
      auStack_98._4_4_ =
           (g_CDemonSetPtr->collision_result_vec2).x - (g_CDemonSetPtr->collision_result_vec1).x;
      auStack_98._8_4_ =
           (g_CDemonSetPtr->collision_result_vec2).y - (g_CDemonSetPtr->collision_result_vec1).y;
      fStack_8c = (g_CDemonSetPtr->collision_result_vec2).z -
                  (g_CDemonSetPtr->collision_result_vec1).z;
      fStack_20 = (float)10 /
                  SQRT(fStack_8c * fStack_8c +
                       (float)auStack_98._4_4_ * (float)auStack_98._4_4_ +
                       (float)auStack_98._8_4_ * (float)auStack_98._8_4_);
      fStack_28 = (float)auStack_98._4_4_ * fStack_20;
      pCStack_24 = (CDemonActor *)((float)auStack_98._8_4_ * fStack_20);
      fStack_20 = fStack_8c * fStack_20;
      if (&fStack_d0 != &fStack_28) {
        fStack_d0 = fStack_28;
        pCStack_cc = pCStack_24;
        fStack_c8 = fStack_20;
      }
      in_stack_ffffff10 = &CStack_1c;
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (pCVar3,in_stack_ffffff10,&g_CDemonSetPtr->collision_impact_position);
      if (&CStack_bc != pCVar1) {
        CStack_bc.x = pCVar1->x;
        CStack_bc.y = pCVar1->y;
        CStack_bc.z = pCVar1->z;
      }
      CStack_b0.x = (float)(this_ptr->base_weapon).ammo_type;
      CStack_b0.z = 1.45735e-43;
      pCStack_a4 = this_ptr;
      CStack_b0.y = 0.15;
      CStack_bc.x = (float)(*((this_ptr->base_weapon).base_actor.vtable)->getCarrier)
                                     ((CDemonActor *)this_ptr);
      (*pCVar3->vtable[1].playAmbientSoundWithVolume)(pCVar3,&stack0xffffff0c,(float)volume);
      if (*(int *)((this_ptr->base_weapon).field3_0x2d8 + 0xc) == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    CStack_1c.x = (float)((char *)CStack_1c.x + 1);
  } while ((int)CStack_1c.x < 4);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  if (1.0 < (float)in_stack_ffffff10) {
    in_stack_ffffff10 = (CVector3f *)0x3f800000;
  }
  fStack_5c = (float)auStack_98._0_4_ * (float)in_stack_ffffff10;
  fStack_58 = (float)auStack_98._4_4_ * (float)in_stack_ffffff10;
  fStack_54 = (float)auStack_98._8_4_ * (float)in_stack_ffffff10;
  CStack_b0.x = fStack_8c + fStack_5c;
  CStack_b0.y = fStack_88 + fStack_58;
  CStack_b0.z = fStack_84 + fStack_54;
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"bow-!.wav",&CStack_68);
  (this_ptr->base_weapon).field7_0x2f4[0xc] = -6;
  (this_ptr->base_weapon).field7_0x2f4[0xd] = '~';
  (this_ptr->base_weapon).field7_0x2f4[0xe] = '*';
  (this_ptr->base_weapon).field7_0x2f4[0xf] = '?';
  return 1;
}
