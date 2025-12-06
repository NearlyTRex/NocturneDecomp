// Name: core_turret.cpp_FUN_005e3750
// Address: 005e3750
// Address Range: [[005e3750, 005e3c6a]]
// Convention: unknown
// Signature: undefined core_turret.cpp_FUN_005e3750()

#include "nocturne.h"

/* Signature: byte actors_weapon_turret.cpp_FUN_005e3750(uint param_1) */

uint core_turret_cpp_FUN_005e3750(void)

{
  CVector3f *pCVar1;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  CDemonActor *pCVar5;
  CDemonActor *pCVar6;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_00000020;
  CGlass *in_stack_00000028;
  CGlass *in_stack_0000002c;
  CBoundingBox3D *out_box;
  double dVar7;
  CBoundingBox3D *out_box_00;
  byte auStack_98 [60];
  float local_5c;
  CVector3f aCStack_58 [3];
  float fStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  float fStack_1c;
  int iVar8;
  
  pCVar1 = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)auStack_98,pCVar1);
  aCStack_58[0].z = in_stack_00000004[2].orient.heading;
  aCStack_58[0].x = 0.0;
  aCStack_58[0].y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&CStack_28,aCStack_58);
  auStack_98._20_4_ = (float)auStack_98._8_4_ + CStack_28.y;
  auStack_98._24_4_ = (float)auStack_98._12_4_ + CStack_28.z;
  auStack_98._28_4_ = (float)auStack_98._16_4_ + fStack_1c;
  auStack_98._56_4_ = auStack_98._8_4_;
  local_5c = (float)auStack_98._12_4_;
  aCStack_58[0].x = (float)auStack_98._16_4_;
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  iVar8 = 0;
  do {
    out_box = (CBoundingBox3D *)0x5e3854;
    fVar2 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                      (g_CDemonSetPtr,aCStack_58,(CVector3f *)(auStack_98 + 0x1c));
    dVar7 = (double)fVar2;
    if ((dVar7 < 0.0) || (1.0 < dVar7)) break;
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCVar3 != (CDemonActor *)0x0) &&
       (iVar4 = (*pCVar3->vtable[1].hasCollision)
                          (pCVar3,(SCollisionInfo *)((ulonglong)dVar7 >> 0x20)), 0 < iVar4)) {
      pCVar3 = (CDemonActor *)0x0;
    }
    core_actor_cpp_castToClassHash_FUN_0040c790
              (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    out_box_00 = (CBoundingBox3D *)0x5e3919;
    core_actor_cpp_castToClassHash_FUN_0040c790
              (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (pCVar3 == (CDemonActor *)0x0) {
      if (in_stack_00000028 == (CGlass *)0x0) {
        if (pCVar5 != (CDemonActor *)0x0) {
          core_trigger_cpp_FUN_005e0aa0();
          iVar4 = core_trigger_cpp_FUN_005e0ac0();
          pCVar3 = in_stack_00000020;
          if (iVar4 != 0) {
            (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,out_box_00);
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
          goto LAB_005e3ae2;
        }
        if (in_stack_00000020 == (CDemonActor *)0x0) {
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
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(in_stack_00000028);
        if (extraout_EAX == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (in_stack_0000002c,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_98);
      (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,out_box);
      fVar2 = 0.4;
      auStack_98._44_4_ =
           (g_CDemonSetPtr->collision_result_vec2).x - (g_CDemonSetPtr->collision_result_vec1).x;
      auStack_98._48_4_ =
           (g_CDemonSetPtr->collision_result_vec2).y - (g_CDemonSetPtr->collision_result_vec1).y;
      auStack_98._52_4_ =
           (g_CDemonSetPtr->collision_result_vec2).z - (g_CDemonSetPtr->collision_result_vec1).z;
      CStack_28.x = (float)10 /
                    SQRT((float)auStack_98._52_4_ * (float)auStack_98._52_4_ +
                         (float)auStack_98._44_4_ * (float)auStack_98._44_4_ +
                         (float)auStack_98._48_4_ * (float)auStack_98._48_4_);
      fStack_30 = (float)auStack_98._44_4_ * CStack_28.x;
      fStack_2c = (float)auStack_98._48_4_ * CStack_28.x;
      CStack_28.x = (float)auStack_98._52_4_ * CStack_28.x;
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (pCVar3,(CVector3f *)(auStack_98 + 0x38),
                          &g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)&stack0xffffff60 != pCVar1) {
        auStack_98._0_4_ = pCVar1->z;
      }
      auStack_98._4_4_ = *(uint *)(in_stack_00000004[4].actor_name + 0xc);
      auStack_98._8_4_ = (CDemonActor *)0x3f800000;
      auStack_98._16_4_ = in_stack_00000004;
      auStack_98._12_4_ = 1.41531e-43;
      auStack_98._32_4_ = (*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
      (*pCVar3->vtable[1].playAmbientSoundWithVolume)(pCVar3,&stack0xffffff50,fVar2);
      if (in_stack_00000004[2].orient.bank == 0.0) break;
      pCVar3 = g_CDemonSetPtr->collision_actor;
LAB_005e3ae2:
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar3);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  fVar2 = *(float *)(in_stack_00000004[5].create_event + 0x44);
  in_stack_00000004[6].create_event[0x28] = '\x02';
  in_stack_00000004[6].create_event[0x29] = '\0';
  in_stack_00000004[6].create_event[0x2a] = '\0';
  in_stack_00000004[6].create_event[0x2b] = '\0';
  in_stack_00000004[2].orient_matrix.m[1].z = fVar2;
  return 1;
}
