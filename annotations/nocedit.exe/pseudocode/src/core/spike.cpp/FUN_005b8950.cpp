// Name: core_spike.cpp_FUN_005b8950
// Address: 005b8950
// Address Range: [[005b8950, 005b8e8b]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_FUN_005b8950(void)

#include "nocturne.h"

/* Signature: byte actors_other_spike.cpp_FUN_005b8950(uint param_1) */

void __cdecl core_spike_cpp_FUN_005b8950(void)

{
  CLocation *input_world_point;
  CCharacter *this_ptr;
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  CVector3f *point;
  uint corner_index;
  CDemonActor *in_stack_00000004;
  byte auStack_1c8 [8];
  float fStack_1c0;
  byte auStack_15c [60];
  SCollisionInfo SStack_120;
  CVector3f CStack_f8;
  byte local_ec [12];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  byte auStack_cc [24];
  CVector3f CStack_b4;
  CVector3f CStack_a0;
  byte auStack_94 [8];
  float fStack_8c;
  CVector3f CStack_88;
  uint uStack_7c;
  byte auStack_70 [8];
  float fStack_68;
  CVector3f CStack_58;
  float fStack_4c;
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_1c;
  CLocation *pCStack_18;
  int iStack_14;
  
  (*((in_stack_00000004->vtable)._ub)->getBoundingBox)(in_stack_00000004,(CBoundingBox3D *)local_ec)
  ;
  CStack_88.y = 0.1;
  CStack_88.z = 0.1;
  uStack_7c = 0;
  local_ec._8_4_ = (float)local_ec._8_4_ + -0.1f;
  fStack_e0 = fStack_e0 + -0.1f;
  fStack_d8 = fStack_d8 + 0.1f;
  fStack_d4 = fStack_d4 + 0.1f;
  core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0((CBoundingBox3D *)auStack_cc);
  corner_index = 0;
  point = (CVector3f *)(auStack_1c8 + 4);
  __arrinit(auStack_1c8 + 4,8,&g_CVectorTypeInfo);
  do {
    pCVar4 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       ((CBoundingBox3D *)(local_ec + 8),&CStack_48,corner_index);
    pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (in_stack_00000004,(CVector3f *)(auStack_70 + 4),pCVar4);
    if (point != pCVar4) {
      point->x = pCVar4->x;
      point->y = pCVar4->y;
      point->z = pCVar4->z;
    }
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)auStack_cc,point);
    point = point + 1;
  } while ((int)corner_index < 8);
  fStack_3c = SQRT(fStack_dc * fStack_dc +
                   (float)local_ec._8_4_ * (float)local_ec._8_4_ + fStack_e0 * fStack_e0);
  fStack_2c = SQRT(fStack_d4 * fStack_d4 + fStack_d8 * fStack_d8 + fStack_d0 * fStack_d0);
  fStack_28 = fStack_3c;
  if (fStack_3c < fStack_2c) {
    fStack_28 = fStack_2c;
  }
  CStack_b4.z = fStack_d0 - fStack_dc;
  fStack_28 = fStack_28 * 2.0f + 10.0f;
  fStack_24 = fStack_28 * fStack_28;
  CStack_b4.x = 0.0;
  CStack_b4.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (in_stack_00000004,(CVector3f *)(auStack_94 + 4),&CStack_b4);
  pCStack_18 = &in_stack_00000004->location;
  iStack_14 = 0;
  iStack_1c = 0;
  while( true ) {
    if (g_CDemonSetPtr->damage_listener_count <= iStack_14) break;
    this_ptr = *(CCharacter **)(g_CDemonSetPtr->unk4 + iStack_1c + -4);
    input_world_point = &(this_ptr->base).location;
    fVar1 = (pCStack_18->position).x - (input_world_point->position).x;
    fVar3 = (pCStack_18->position).y - (this_ptr->base).location.position.y;
    fVar2 = (pCStack_18->position).z - (this_ptr->base).location.position.z;
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= fStack_24) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)(auStack_15c + 0x34));
      auStack_15c._52_4_ = (CDemonActor *)0x0;
      pCStack_18 = (CLocation *)
                   (*((this_ptr->base).vtable._ub)->hasCollision)
                             (&this_ptr->base,(SCollisionInfo *)(auStack_15c + 0x34));
      if (pCStack_18 != (CLocation *)0x0) {
        SStack_120.cylinder_bottom_y = 0.0;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (in_stack_00000004,&CStack_58,&input_world_point->position);
        if (CStack_58.x < fStack_dc) {
          CStack_58.x = fStack_dc;
        }
        if (fStack_d0 < CStack_58.x) {
          CStack_58.x = fStack_d0;
        }
        if (CStack_58.y < fStack_d8) {
          CStack_58.y = fStack_d8;
        }
        if ((float)auStack_cc._0_4_ < CStack_58.y) {
          CStack_58.y = (float)auStack_cc._0_4_;
        }
        CStack_58.z = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (in_stack_00000004,(CVector3f *)auStack_70,&CStack_58);
        fStack_1c0 = core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
                               (&this_ptr->base,(CVector3f *)auStack_70,&CStack_88,&CStack_f8,
                                &SStack_120,(int)pCStack_18,(CBoundingBox3D *)(auStack_cc + 8));
        auStack_1c8 = (byte  [8])(double)fStack_1c0;
        if ((0.0 <= (double)auStack_1c8) && ((double)auStack_1c8 <= 1.0)) {
          fStack_4c = CStack_88.x * fStack_1c0;
          CStack_48.x = CStack_88.y * fStack_1c0;
          CStack_48.y = CStack_88.z * fStack_1c0;
          CStack_a0.x = (float)auStack_70._0_4_ + fStack_4c;
          CStack_a0.y = (float)auStack_70._4_4_ + CStack_48.x;
          CStack_a0.z = fStack_68 + CStack_48.y;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (&this_ptr->base,(CVector3f *)auStack_94,&CStack_a0);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_15c);
          auStack_15c._4_4_ = in_stack_00000004[3].prev_actor;
          auStack_15c._48_4_ = 0x67;
          if (auStack_15c + 0x1c != auStack_94) {
            auStack_15c._28_4_ = auStack_94._0_4_;
            auStack_15c._32_4_ = auStack_94._4_4_;
            auStack_15c._36_4_ = fStack_8c;
          }
          auStack_15c._52_4_ = in_stack_00000004;
          (*(((this_ptr->base).vtable._uc)->_uc).processDamage)(this_ptr,(SDamageInfo *)auStack_15c)
          ;
        }
      }
    }
    iStack_14 = iStack_14 + 1;
    iStack_1c = iStack_1c + 4;
  }
  return;
}
