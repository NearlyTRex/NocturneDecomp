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
  float fVar3;
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  CBoundingBox3D *volume;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  float fStack00000008;
  CGlass *in_stack_00000034;
  CGlass *in_stack_00000038;
  CDemonActor *in_stack_00000048;
  CBoundingBox3D *out_box;
  double dVar6;
  CBoundingBox3D *in_stack_ffffff54;
  float fStack_a4;
  CVector3f CStack_8c;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  byte auStack_74 [16];
  CVector3f CStack_64;
  float fStack_58;
  CVector3f CStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_1c;
  
  pCVar1 = (CVector3f *)
           (*(this_ptr->base_weapon).base_actor.vtable[1].renderOpaque)((CDemonActor *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_64,pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    return 0;
  }
  auStack_74._8_4_ = (this_ptr->base_weapon).bolt_velocity;
  auStack_74._0_4_ = 0.0;
  auStack_74._4_4_ = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_8c,(CVector3f *)auStack_74);
  CStack_64.x = fStack_58 + CStack_8c.y;
  CStack_64.y = CStack_54.x + CStack_8c.z;
  CStack_64.z = CStack_54.y + fStack_80;
  fStack_38 = (float)1.5 / (this_ptr->base_weapon).bolt_velocity;
  fStack_40 = CStack_8c.y * fStack_38;
  fStack_3c = CStack_8c.z * fStack_38;
  fStack_38 = fStack_80 * fStack_38;
  fStack_7c = fStack_58 - fStack_40;
  fStack_78 = CStack_54.x - fStack_3c;
  auStack_74._0_4_ = CStack_54.y - fStack_38;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  out_box = (CBoundingBox3D *)0x44908c;
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar4 = *(CDemonActor **)&(this_ptr->base_weapon).carried_by_actor;
  if (pCVar4 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar4);
  }
  fStack00000008 = 0.0;
  do {
    fVar3 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                      (g_CDemonSetPtr,(CVector3f *)(auStack_74 + 8),&CStack_54);
    dVar6 = (double)fVar3;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCVar4 != (CDemonActor *)0x0) &&
       (iVar2 = (*pCVar4->vtable[1].hasCollision)
                          (pCVar4,(SCollisionInfo *)((ulonglong)dVar6 >> 0x20)), 0 < iVar2)) {
      pCVar4 = (CDemonActor *)0x0;
    }
    core_actor_cpp_castToClassHash_FUN_0040c790
              (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    if (pCVar4 == (CDemonActor *)0x0) {
      if (in_stack_00000034 == (CGlass *)0x0) {
        if (pCVar5 == (CDemonActor *)0x0) {
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
                    ((CDemonActor *)this_ptr,in_stack_ffffff54);
          fStack_a4 = 6.297431e-39;
          core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000048);
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(in_stack_00000034);
        if (extraout_EAX == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (in_stack_00000038,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (*pCVar4->vtable[1].renderOpaque)(pCVar4);
      this_ptr_00 = g_CDemonSetPtr;
      if (iVar2 != 0) {
        if (CStack_1c.z == 0.0) {
          (this_ptr->base_weapon).ammo_count = (this_ptr->base_weapon).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff18);
      volume = (*(this_ptr->base_weapon).base_actor.vtable[1].getBoundingBox)
                         ((CDemonActor *)this_ptr,out_box);
      CStack_8c.y = (g_CDemonSetPtr->collision_result_vec2).x -
                    (g_CDemonSetPtr->collision_result_vec1).x;
      CStack_8c.z = (g_CDemonSetPtr->collision_result_vec2).y -
                    (g_CDemonSetPtr->collision_result_vec1).y;
      fStack_80 = (g_CDemonSetPtr->collision_result_vec2).z -
                  (g_CDemonSetPtr->collision_result_vec1).z;
      fStack00000008 =
           (float)10 /
           SQRT(fStack_80 * fStack_80 + CStack_8c.y * CStack_8c.y + CStack_8c.z * CStack_8c.z);
      CStack_1c.x = CStack_8c.y * fStack00000008;
      CStack_1c.y = CStack_8c.z * fStack00000008;
      CStack_1c.z = fStack_80 * fStack00000008;
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (pCVar4,(CVector3f *)&stack0xfffffff0,
                          &g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)&stack0xffffff50 != pCVar1) {
        in_stack_ffffff54 = (CBoundingBox3D *)pCVar1->y;
      }
      fStack_a4 = (float)(this_ptr->base_weapon).ammo_type;
      CStack_8c.y = (float)(*((this_ptr->base_weapon).base_actor.vtable)->getCarrier)
                                     ((CDemonActor *)this_ptr);
      (*pCVar4->vtable[1].playAmbientSoundWithVolume)(pCVar4,&stack0xffffff40,(float)volume);
      if (*(int *)((this_ptr->base_weapon).field3_0x2d8 + 0xc) == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    fStack00000008 = (float)((int)fStack00000008 + 1);
  } while ((int)fStack00000008 < 4);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  if (1.0 < fStack_a4) {
    fStack_a4 = 1.0;
  }
  CStack_64.x = fStack_40 + CStack_54.z * fStack_a4;
  CStack_64.y = fStack_3c + fStack_48 * fStack_a4;
  CStack_64.z = fStack_38 + fStack_44 * fStack_a4;
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"bow-!.wav",&CStack_1c);
  (this_ptr->base_weapon).field7_0x2f4[0xc] = -6;
  (this_ptr->base_weapon).field7_0x2f4[0xd] = '~';
  (this_ptr->base_weapon).field7_0x2f4[0xe] = '*';
  (this_ptr->base_weapon).field7_0x2f4[0xf] = '?';
  return 1;
}
