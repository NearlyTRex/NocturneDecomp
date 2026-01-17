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
  CDemonActor *this_ptr;
  int iVar3;
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  int extraout_EAX;
  CDemonActor *in_stack_00000004;
  SCollisionInfo *collision_info;
  double dVar6;
  float in_stack_ffffff28;
  CDemonActor *pCStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  CVector3f CStack_b8;
  int iStack_ac;
  CDemonActor *pCStack_a8;
  CDemonActor *pCStack_a4;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  byte auStack_74 [8];
  float fStack_6c;
  CDemonActor *pCStack_68;
  CVector3f aCStack_64 [2];
  float fStack_44;
  CDemonActor *pCStack_40;
  float fStack_3c;
  CDemonActor *pCStack_38;
  CVector3f CStack_34;
  CDemonActor *pCStack_28;
  CDemonActor *pCStack_24;
  int iStack_20;
  CGlass *pCStack_1c;
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
  auStack_74._4_4_ = CStack_a0.x;
  fStack_6c = CStack_a0.y;
  pCStack_68 = (CDemonActor *)CStack_a0.z;
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  iStack_20 = 0;
  do {
    fStack_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,(CVector3f *)(auStack_74 + 4),&CStack_94);
    dVar6 = (double)fStack_14;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
    this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    collision_info = SUB84 /* extract 2-byte value */(dVar6,0);
    if ((this_ptr != (CDemonActor *)0x0) &&
       (iVar3 = (*this_ptr->vtable[1].hasCollision)(this_ptr,collision_info), 0 < iVar3)) {
      this_ptr = (CDemonActor *)0x0;
    }
    pCStack_1c = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_28 = pCVar4;
    pCStack_24 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (this_ptr == (CDemonActor *)0x0) {
      if (pCStack_1c == (CGlass *)0x0) {
        if (pCVar4 != (CDemonActor *)0x0) {
          core_trigger_cpp_FUN_005e0aa0();
          iVar3 = core_trigger_cpp_FUN_005e0ac0();
          pCVar4 = pCStack_28;
          if (iVar3 != 0) {
            (*in_stack_00000004->vtable[1].getBoundingBox)
                      (in_stack_00000004,(CBoundingBox3D *)collision_info);
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
            pCVar4 = pCStack_28;
          }
          goto LAB_005e3ae2;
        }
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
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_1c);
        if (extraout_EAX == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (pCStack_1c,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff24);
      pCStack_d0 = (CDemonActor *)
                   (*in_stack_00000004->vtable[1].getBoundingBox)
                             (in_stack_00000004,(CBoundingBox3D *)collision_info);
      fStack_cc = 0.4;
      fStack_80 = (g_CDemonSetPtr->collision_result_vec2).x -
                  (g_CDemonSetPtr->collision_result_vec1).x;
      fStack_7c = (g_CDemonSetPtr->collision_result_vec2).y -
                  (g_CDemonSetPtr->collision_result_vec1).y;
      fStack_78 = (g_CDemonSetPtr->collision_result_vec2).z -
                  (g_CDemonSetPtr->collision_result_vec1).z;
      fStack_3c = (float)10 /
                  SQRT(fStack_78 * fStack_78 + fStack_80 * fStack_80 + fStack_7c * fStack_7c);
      fStack_44 = fStack_80 * fStack_3c;
      pCStack_40 = (CDemonActor *)(fStack_7c * fStack_3c);
      fStack_3c = fStack_78 * fStack_3c;
      if (&fStack_c8 != &fStack_44) {
        fStack_c8 = fStack_44;
        fStack_c4 = (float)pCStack_40;
        fStack_c0 = fStack_3c;
      }
      pCVar4 = this_ptr;
      pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (this_ptr,(CVector3f *)auStack_74,
                          &g_CDemonSetPtr->collision_impact_position);
      if (&CStack_b8 != pCVar2) {
        CStack_b8.x = pCVar2->x;
        CStack_b8.y = pCVar2->y;
        CStack_b8.z = pCVar2->z;
      }
      iStack_ac = *(int *)(in_stack_00000004[4].actor_name + 0xc);
      pCStack_a8 = (CDemonActor *)0x3f800000;
      CStack_a0.x = (float)in_stack_00000004;
      pCStack_a4 = (CDemonActor *)0x65;
      CStack_a0.z = (float)(*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
      (*this_ptr->vtable[1].playAmbientSoundWithVolume)
                (this_ptr,(char *)&pCStack_d0,in_stack_ffffff28);
      if (in_stack_00000004[2].orient.bank == 0.0) break;
      pCStack_d0 = g_CDemonSetPtr->collision_actor;
LAB_005e3ae2:
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar4);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  pCStack_40 = (CDemonActor *)CStack_a0.x;
  pCStack_38 = (CDemonActor *)CStack_a0.z;
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
