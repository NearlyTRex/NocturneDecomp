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
  int iVar4;
  float fVar5;
  CVector3f *point;
  BADSPACEBASE *in_ESP;
  uint corner_index;
  float unaff_retaddr;
  CDemonActor *in_stack_00000004;
  int iStack00000008;
  int iStack00000010;
  int in_stack_00000024;
  byte auStack_118 [24];
  byte auStack_100 [28];
  byte auStack_e4 [24];
  float fStack_cc;
  float fStack_c8;
  void *pvStack_c4;
  byte auStack_c0 [28];
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  CVector3f CStack_94;
  CBoundingBox3D CStack_88;
  CVector3f CStack_70;
  CVector3f CStack_60;
  byte auStack_54 [12];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  byte auStack_38 [8];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  byte auStack_24 [8];
  float fStack_1c;
  uint uStack_18;
  
  (*in_stack_00000004->vtable->getBoundingBox)
            (in_stack_00000004,(CBoundingBox3D *)(auStack_100 + 0x14));
  CStack_88.max.y = 0.1;
  CStack_88.max.z = 0.1;
  CStack_70.x = 0.0;
  auStack_e4._12_4_ = (float)auStack_e4._12_4_ + -0.1f;
  auStack_e4._16_4_ = (float)auStack_e4._16_4_ + -0.1f;
  fStack_cc = fStack_cc + 0.1f;
  fStack_c8 = fStack_c8 + 0.1f;
  core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0((CBoundingBox3D *)auStack_c0);
  corner_index = 0;
  point = (CVector3f *)&stack0xfffffe4c;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xfffffe4c,8,&g_CVectorTypeInfo);
  do {
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       ((CBoundingBox3D *)(auStack_e4 + 0x14),(CVector3f *)(auStack_38 + 4),
                        corner_index);
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (in_stack_00000004,(CVector3f *)auStack_54,pCVar3);
    if (point != pCVar3) {
      point->x = pCVar3->x;
      point->y = pCVar3->y;
      point->z = pCVar3->z;
    }
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)(auStack_c0 + 0x10),point);
    point = point + 1;
  } while ((int)corner_index < 8);
  fStack_1c = SQRT((float)auStack_c0._4_4_ * (float)auStack_c0._4_4_ +
                   (float)pvStack_c4 * (float)pvStack_c4 +
                   (float)auStack_c0._0_4_ * (float)auStack_c0._0_4_);
  CStack_94.z = (float)auStack_c0._16_4_ - (float)auStack_c0._4_4_;
  CStack_94.x = 0.0;
  CStack_94.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&CStack_70,&CStack_94);
  iStack00000008 = 0;
  for (iStack00000010 = 0; iStack00000010 < g_CDemonSetPtr->damage_listener_count;
      iStack00000010 = iStack00000010 + 1) {
    this_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iStack00000008 + -4);
    fVar5 = (in_stack_00000004->location).position.x - (this_ptr->location).position.x;
    fVar2 = (in_stack_00000004->location).position.y - (this_ptr->location).position.y;
    fVar1 = (in_stack_00000004->location).position.z - (this_ptr->location).position.z;
    if (fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5 <= unaff_retaddr) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)(auStack_118 + 0x14));
      auStack_100._0_4_ = 0.0;
      iVar4 = (*this_ptr->vtable->hasCollision)(this_ptr,(SCollisionInfo *)auStack_100);
      if (iVar4 != 0) {
        auStack_e4._12_4_ = 0.0;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (in_stack_00000004,(CVector3f *)auStack_24,&(this_ptr->location).position);
        if ((float)auStack_24._4_4_ < fStack_a4) {
          auStack_24._4_4_ = fStack_a4;
        }
        if (fStack_98 < (float)auStack_24._4_4_) {
          auStack_24._4_4_ = fStack_98;
        }
        if (fStack_1c < fStack_a0) {
          fStack_1c = fStack_a0;
        }
        if (CStack_94.x < fStack_1c) {
          fStack_1c = CStack_94.x;
        }
        uStack_18 = 0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (in_stack_00000004,(CVector3f *)auStack_38,(CVector3f *)(auStack_24 + 4));
        fVar5 = core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
                          (this_ptr,(CVector3f *)(auStack_38 + 4),(CVector3f *)(auStack_54 + 8),
                           (CVector3f *)(auStack_c0 + 4),(SCollisionInfo *)auStack_e4,
                           in_stack_00000024,&CStack_88);
        if ((0.0 <= fVar5) && (fVar5 <= 1.0)) {
          CStack_60.x = fStack_30 + fStack_48 * fVar5;
          CStack_60.y = fStack_2c + fStack_44 * fVar5;
          CStack_60.z = fStack_28 + fStack_40 * fVar5;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (this_ptr,(CVector3f *)auStack_54,&CStack_60);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_118);
          auStack_118._8_4_ = in_stack_00000004[3].field28_0x150;
          auStack_e4._0_4_ = (CDemonActor *)0x67;
          if (auStack_100 + 8 != auStack_54 + 8) {
            auStack_100._8_4_ = auStack_54._8_4_;
            auStack_100._12_4_ = fStack_48;
            auStack_100._16_4_ = fStack_44;
          }
          auStack_e4._4_4_ = in_stack_00000004;
          auStack_e4._8_4_ = in_stack_00000004;
          (*this_ptr->vtable[1].playAmbientSoundWithVolume)(this_ptr,auStack_118 + 4,fVar5);
        }
      }
    }
    iStack00000008 = iStack00000008 + 4;
  }
  return;
}
