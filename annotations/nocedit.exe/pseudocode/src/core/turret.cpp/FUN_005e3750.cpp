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
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  SCollisionInfo *collision_info;
  double dVar6;
  CBoundingBox3D *out_box;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  CVector3f CStack_bc;
  int iStack_b0;
  float fStack_ac;
  int iStack_a8;
  CDemonActor *pCStack_a4;
  CVector3f CStack_a0;
  float fStack_94;
  float fStack_90;
  CVector3f CStack_8c;
  float fStack_80;
  CVector3f CStack_7c;
  CDemonActor *pCStack_70;
  float fStack_6c;
  CVector3f aCStack_68 [2];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CVector3f CStack_38;
  CDemonActor *pCStack_2c;
  CDemonActor *pCStack_24;
  int iStack_20;
  CGlass *pCStack_18;
  CGlass *pCStack_14;
  
  pCVar2 = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_a0,pCVar2);
  aCStack_68[0].z = in_stack_00000004[2].orient.heading;
  aCStack_68[0].x = 0.0;
  aCStack_68[0].y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&CStack_38,aCStack_68);
  fStack_94 = CStack_a0.x + CStack_38.y;
  fStack_90 = CStack_a0.y + CStack_38.z;
  CStack_8c.x = CStack_a0.z + (float)pCStack_2c;
  pCStack_70 = (CDemonActor *)CStack_a0.x;
  fStack_6c = CStack_a0.y;
  aCStack_68[0].x = CStack_a0.z;
  collision_info = (SCollisionInfo *)0x5e3822;
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  pCStack_18 = (CGlass *)0x0;
  do {
    pCStack_24 = (CDemonActor *)
                 core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                           (g_CDemonSetPtr,aCStack_68,&CStack_8c);
    dVar6 = (double)(float)pCStack_24;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
    this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((this_ptr != (CDemonActor *)0x0) &&
       (iVar3 = (*this_ptr->vtable[1].hasCollision)(this_ptr,collision_info), 0 < iVar3)) {
      this_ptr = (CDemonActor *)0x0;
    }
    pCStack_24 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_2c = pCVar4;
    pCStack_24 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    collision_info = (SCollisionInfo *)0x5e393b;
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (this_ptr == (CDemonActor *)0x0) {
      if (pCStack_18 == (CGlass *)0x0) {
        if (pCVar4 != (CDemonActor *)0x0) {
          core_trigger_cpp_FUN_005e0aa0();
          out_box = (CBoundingBox3D *)((ulonglong)dVar6 >> 0x20);
          iVar3 = core_trigger_cpp_FUN_005e0ac0();
          pCVar4 = pCStack_24;
          if (iVar3 != 0) {
            (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,out_box);
            collision_info = (SCollisionInfo *)0x5e3bc9;
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
            pCVar4 = pCStack_24;
          }
          goto LAB_005e3ae2;
        }
        if (iStack_20 == 0) {
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
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_18);
        if (extraout_EAX == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (pCStack_14,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff28);
      (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,SUB84 /* extract 2-byte value */(dVar6,0));
      CStack_8c.y = (g_CDemonSetPtr->collision_result_vec2).x -
                    (g_CDemonSetPtr->collision_result_vec1).x;
      CStack_8c.z = (g_CDemonSetPtr->collision_result_vec2).y -
                    (g_CDemonSetPtr->collision_result_vec1).y;
      fStack_80 = (g_CDemonSetPtr->collision_result_vec2).z -
                  (g_CDemonSetPtr->collision_result_vec1).z;
      pCStack_18 = (CGlass *)
                   ((float)10 /
                   SQRT(fStack_80 * fStack_80 +
                        CStack_8c.y * CStack_8c.y + CStack_8c.z * CStack_8c.z));
      fStack_4c = CStack_8c.y * (float)pCStack_18;
      fStack_48 = CStack_8c.z * (float)pCStack_18;
      fStack_44 = fStack_80 * (float)pCStack_18;
      if (&fStack_d0 != &fStack_4c) {
        fStack_d0 = fStack_4c;
        fStack_cc = fStack_48;
        fStack_c8 = fStack_44;
      }
      pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (this_ptr,&CStack_7c,&g_CDemonSetPtr->collision_impact_position);
      if (&CStack_bc != pCVar2) {
        CStack_bc.x = pCVar2->x;
        CStack_bc.y = pCVar2->y;
        CStack_bc.z = pCVar2->z;
      }
      iStack_b0 = *(int *)(in_stack_00000004[4].actor_name + 0xc);
      fStack_ac = 1.0;
      pCStack_a4 = in_stack_00000004;
      iStack_a8 = 0x65;
      pCVar4 = in_stack_00000004;
      pCStack_a4 = (*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
      collision_info = (SCollisionInfo *)0x5e3ac9;
      (*this_ptr->vtable[1].playAmbientSoundWithVolume)(this_ptr,&stack0xffffff24,(float)pCVar4);
      if (in_stack_00000004[2].orient.bank == 0.0) break;
LAB_005e3ae2:
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar4);
    }
    pCStack_18 = (CGlass *)((pCStack_18->base).actor_name + 1);
  } while ((int)pCStack_18 < 4);
  CStack_38.x = CStack_a0.z;
  CStack_38.z = fStack_90;
  CStack_38.y = fStack_94 + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  fVar1 = *(float *)(in_stack_00000004[5].create_event + 0x44);
  in_stack_00000004[6].create_event[0x28] = '\x02';
  in_stack_00000004[6].create_event[0x29] = '\0';
  in_stack_00000004[6].create_event[0x2a] = '\0';
  in_stack_00000004[6].create_event[0x2b] = '\0';
  in_stack_00000004[2].orient_matrix.m[1].z = fVar1;
  return 1;
}
