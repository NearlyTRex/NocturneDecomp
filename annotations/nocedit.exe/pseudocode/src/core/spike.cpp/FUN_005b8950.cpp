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
  double dVar5;
  CVector3f aCStack_1c8 [8];
  SDamageInfo SStack_168;
  SCollisionInfo SStack_12c;
  CVector3f aCStack_104 [2];
  CBoundingBox3D CStack_e8;
  CBoundingBox3D CStack_d0;
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f CStack_4c;
  float fStack_40;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  CLocation *pCStack_1c;
  int iStack_18;
  float fStack_14;
  
  (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&CStack_e8);
  uStack_88 = 0x3dcccccd;
  uStack_84 = 0x3dcccccd;
  uStack_80 = 0;
  CStack_e8.min.x = CStack_e8.min.x + -0.1f;
  CStack_e8.min.y = CStack_e8.min.y + -0.1f;
  CStack_e8.max.x = CStack_e8.max.x + 0.1f;
  CStack_e8.max.y = CStack_e8.max.y + 0.1f;
  core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0(&CStack_d0);
  corner_index = 0;
  point = aCStack_1c8;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(aCStack_1c8,8,&g_CVectorTypeInfo);
  do {
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(&CStack_e8,&CStack_4c,corner_index);
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (in_stack_00000004,&CStack_70,pCVar3);
    if (point != pCVar3) {
      point->x = pCVar3->x;
      point->y = pCVar3->y;
      point->z = pCVar3->z;
    }
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&CStack_d0,point);
    point = point + 1;
  } while ((int)corner_index < 8);
  fStack_40 = SQRT(CStack_e8.min.z * CStack_e8.min.z +
                   CStack_e8.min.x * CStack_e8.min.x + CStack_e8.min.y * CStack_e8.min.y);
  fStack_30 = SQRT(CStack_e8.max.y * CStack_e8.max.y + CStack_e8.max.x * CStack_e8.max.x +
                   CStack_e8.max.z * CStack_e8.max.z);
  fStack_2c = fStack_40;
  if (fStack_40 < fStack_30) {
    fStack_2c = fStack_30;
  }
  CStack_b8.z = CStack_e8.max.z - CStack_e8.min.z;
  fStack_2c = fStack_2c * 2f + 10f;
  fStack_28 = fStack_2c * fStack_2c;
  CStack_b8.x = 0.0;
  CStack_b8.y = 0.0;
  fStack_14 = CStack_b8.z;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&CStack_94,&CStack_b8);
  pCStack_1c = &in_stack_00000004->location;
  iStack_20 = 0;
  for (iStack_18 = 0; iStack_18 < g_CDemonSetPtr->damage_listener_count; iStack_18 = iStack_18 + 1)
  {
    this_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_20 + -4);
    fVar4 = (pCStack_1c->position).x - (this_ptr->location).position.x;
    fVar2 = (pCStack_1c->position).y - (this_ptr->location).position.y;
    fVar1 = (pCStack_1c->position).z - (this_ptr->location).position.z;
    if (fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4 <= fStack_28) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_12c);
      SStack_12c.ray_type = 0;
      iStack_24 = (*this_ptr->vtable->hasCollision)(this_ptr,&SStack_12c);
      if (iStack_24 != 0) {
        SStack_12c.cylinder_bottom_y = 0.0;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (in_stack_00000004,&CStack_64,&(this_ptr->location).position);
        if (CStack_64.x < CStack_e8.min.x) {
          CStack_64.x = CStack_e8.min.x;
        }
        if (CStack_e8.max.x < CStack_64.x) {
          CStack_64.x = CStack_e8.max.x;
        }
        if (CStack_64.y < CStack_e8.min.y) {
          CStack_64.y = CStack_e8.min.y;
        }
        if (CStack_e8.max.y < CStack_64.y) {
          CStack_64.y = CStack_e8.max.y;
        }
        CStack_64.z = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (in_stack_00000004,&CStack_7c,&CStack_64);
        fVar4 = core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
                          (this_ptr,&CStack_7c,&CStack_94,aCStack_104,&SStack_12c,iStack_24,
                           &CStack_d0);
        dVar5 = (double)fVar4;
        if ((0.0 <= dVar5) && (dVar5 <= 1.0)) {
          fStack_58 = CStack_94.x * fVar4;
          fStack_54 = CStack_94.y * fVar4;
          fStack_50 = CStack_94.z * fVar4;
          CStack_ac.x = CStack_7c.x + fStack_58;
          CStack_ac.y = CStack_7c.y + fStack_54;
          CStack_ac.z = CStack_7c.z + fStack_50;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(this_ptr,&CStack_a0,&CStack_ac);
          fVar4 = SUB84 /* extract 2-byte value */(dVar5,0);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_168);
          SStack_168.damage_amount = (float)in_stack_00000004[3].field28_0x150;
          SStack_168.damage_type = 0x67;
          if (&SStack_168.impact_direction != &CStack_a0) {
            SStack_168.impact_direction.x = CStack_a0.x;
            SStack_168.impact_direction.y = CStack_a0.y;
            SStack_168.impact_direction.z = CStack_a0.z;
          }
          SStack_168.attacker = in_stack_00000004;
          SStack_168.wielder = in_stack_00000004;
          (*this_ptr->vtable[1].playAmbientSoundWithVolume)(this_ptr,(char *)&SStack_168,fVar4);
        }
      }
    }
    iStack_20 = iStack_20 + 4;
  }
  return;
}
