// Name: core_spike.cpp_FUN_005b8950
// Address: 005b8950
// Address Range: [[005b8950, 005b8e8b]]
// Convention: unknown
// Signature: undefined core_spike.cpp_FUN_005b8950()

#include "nocturne.h"

/* Signature: byte actors_other_spike.cpp_FUN_005b8950(uint param_1) */

void core_spike_cpp_FUN_005b8950(void)

{
  CDemonActor *this_ptr;
  float fVar1;
  float fVar2;
  CVector3f *pCVar3;
  float fVar4;
  CVector3f *point;
  BADSPACEBASE *in_ESP;
  uint corner_index;
  CDemonActor *in_stack_00000004;
  byte auStack_164 [56];
  byte auStack_12c [20];
  float fStack_118;
  CVector3f aCStack_108 [2];
  float fStack_f0;
  CBoundingBox3D local_ec;
  byte auStack_d4 [8];
  byte auStack_cc [20];
  float fStack_b8;
  float fStack_b4;
  CVector3f CStack_ac;
  byte auStack_a0 [12];
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint uStack_88;
  byte auStack_84 [8];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  byte auStack_70 [8];
  float fStack_68;
  CVector3f CStack_64;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  float fStack_44;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  CLocation *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&local_ec);
  uStack_88 = 0x3dcccccd;
  auStack_84._0_4_ = 0.1;
  auStack_84._4_4_ = 0.0;
  local_ec.min.y = local_ec.min.y + -0.1f;
  local_ec.min.z = local_ec.min.z + -0.1f;
  local_ec.max.y = local_ec.max.y + 0.1f;
  local_ec.max.z = local_ec.max.z + 0.1f;
  core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0((CBoundingBox3D *)(auStack_d4 + 4));
  corner_index = 0;
  point = (CVector3f *)&stack0xfffffe30;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xfffffe30,8,&g_CVectorTypeInfo);
  do {
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(&local_ec,&CStack_50,corner_index);
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (in_stack_00000004,(CVector3f *)auStack_70,pCVar3);
    if (point != pCVar3) {
      point->x = pCVar3->x;
      point->y = pCVar3->y;
      point->z = pCVar3->z;
    }
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)auStack_cc,point);
    point = point + 1;
  } while ((int)corner_index < 8);
  fStack_44 = SQRT(local_ec.min.z * local_ec.min.z +
                   local_ec.min.x * local_ec.min.x + local_ec.min.y * local_ec.min.y);
  fStack_34 = SQRT(local_ec.max.y * local_ec.max.y + local_ec.max.x * local_ec.max.x +
                   local_ec.max.z * local_ec.max.z);
  fStack_30 = fStack_44;
  if (fStack_44 < fStack_34) {
    fStack_30 = fStack_34;
  }
  fStack_b4 = local_ec.max.z - local_ec.min.z;
  fStack_30 = fStack_30 * 2f + 10f;
  fStack_2c = fStack_30 * fStack_30;
  auStack_cc._16_4_ = 0.0;
  fStack_b8 = 0.0;
  fStack_18 = fStack_b4;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (in_stack_00000004,(CVector3f *)(auStack_a0 + 8),(CVector3f *)(auStack_cc + 0x10));
  pCStack_1c = &in_stack_00000004->location;
  iStack_20 = 0;
  for (fStack_18 = 0.0; (int)fStack_18 < g_CDemonSetPtr->damage_listener_count;
      fStack_18 = (float)((int)fStack_18 + 1)) {
    this_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_20 + -4);
    fVar4 = (pCStack_1c->position).x - (this_ptr->location).position.x;
    fVar2 = (pCStack_1c->position).y - (this_ptr->location).position.y;
    fVar1 = (pCStack_1c->position).z - (this_ptr->location).position.z;
    if (fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4 <= fStack_28) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)auStack_12c);
      auStack_12c._4_4_ = (CDemonActor *)0x0;
      iStack_24 = (*this_ptr->vtable->hasCollision)(this_ptr,(SCollisionInfo *)(auStack_12c + 4));
      if (iStack_24 != 0) {
        fStack_118 = 0.0;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (in_stack_00000004,&CStack_64,&(this_ptr->location).position);
        if ((float)auStack_70._4_4_ < fStack_f0) {
          auStack_70._4_4_ = fStack_f0;
        }
        if (local_ec.min.z < (float)auStack_70._4_4_) {
          auStack_70._4_4_ = local_ec.min.z;
        }
        if (fStack_68 < local_ec.min.x) {
          fStack_68 = local_ec.min.x;
        }
        if (local_ec.max.x < fStack_68) {
          fStack_68 = local_ec.max.x;
        }
        CStack_64.x = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (in_stack_00000004,(CVector3f *)auStack_84,(CVector3f *)(auStack_70 + 4));
        fVar4 = core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
                          (this_ptr,(CVector3f *)(auStack_84 + 4),(CVector3f *)(auStack_a0 + 8),
                           aCStack_108,(SCollisionInfo *)(auStack_164 + 0x34),(int)fStack_28,
                           (CBoundingBox3D *)auStack_d4);
        fStack_14 = fVar4;
        if ((0.0 <= fVar4) && (fVar4 <= 1.0)) {
          fStack_58 = fStack_94 * fVar4;
          fStack_54 = fStack_90 * fVar4;
          CStack_50.x = fStack_8c * fVar4;
          CStack_ac.x = fStack_7c + fStack_58;
          CStack_ac.y = fStack_78 + fStack_54;
          CStack_ac.z = fStack_74 + CStack_50.x;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (this_ptr,(CVector3f *)auStack_a0,&CStack_ac);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_164);
          auStack_164._8_4_ = in_stack_00000004[3].field28_0x150;
          auStack_164._52_4_ = (CDemonActor *)0x67;
          if (auStack_164 + 0x20 != auStack_a0 + 8) {
            auStack_164._32_4_ = auStack_a0._8_4_;
            auStack_164._36_4_ = fStack_94;
            auStack_164._40_4_ = fStack_90;
          }
          auStack_12c._0_4_ = in_stack_00000004;
          auStack_12c._4_4_ = in_stack_00000004;
          (*this_ptr->vtable[1].playAmbientSoundWithVolume)(this_ptr,auStack_164 + 4,fVar4);
        }
      }
    }
    iStack_20 = iStack_20 + 4;
  }
  return;
}
