// Name: core_spike.cpp_CSpike_testCollisionWithCharacters_FUN_005b8950
// Address: 005b8950
// MANUAL RECONSTRUCTION
// Address Range: [[005b8950, 005b8e8b]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_CSpike_testCollisionWithCharacters_FUN_005b8950(CSpike *this_ptr)

#include "nocturne.h"

void __cdecl core_spike_cpp_CSpike_testCollisionWithCharacters_FUN_005b8950(CSpike *this_ptr)

{
  CLocation *input_world_point_00;
  CCharacter *this_ptr_01;
  float fVar4;
  CVector3f *pCVar4;
  CVector3f *pCVar5;
  ECollisionType bbox_type;
  float fVar6;
  CVector3f *point;
  uint corner_index;
  CVector3f aCStack_1cc [8];
  SDamageInfo SStack_16c;
  SCollisionInfo SStack_130;
  CVector3f aCStack_108 [2];
  CBoundingBox3D local_ec;
  CBoundingBox3D CStack_d4;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_50;
  float fStack_30;
  int iStack_1c;
  float fVar3;
  float fVar2;
  float fVar1;

  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_ec);
  local_ec.min.x = local_ec.min.x + -0.1f;
  local_ec.min.y = local_ec.min.y + -0.1f;
  local_ec.max.x = local_ec.max.x + 0.1f;
  local_ec.max.y = local_ec.max.y + 0.1f;
  core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0(&CStack_d4);
  corner_index = 0;
  point = aCStack_1cc;
  __arrinit(aCStack_1cc,8,&g_CVectorTypeInfo);
  do {
    pCVar4 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(&local_ec,&CStack_50,corner_index);
    pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base,&CStack_74,pCVar4);
    if (point != pCVar5) {
      point->x = pCVar5->x;
      point->y = pCVar5->y;
      point->z = pCVar5->z;
    }
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&CStack_d4,point);
    point = point + 1;
  } while ((int)corner_index < 8);
  fStack_30 = SQRT(local_ec.min.z * local_ec.min.z +
                   local_ec.min.x * local_ec.min.x + local_ec.min.y * local_ec.min.y);
  fVar4 = SQRT(local_ec.max.y * local_ec.max.y + local_ec.max.x * local_ec.max.x +
               local_ec.max.z * local_ec.max.z);
  if (fStack_30 < fVar4) {
    fStack_30 = fVar4;
  }
  CStack_bc.z = local_ec.max.z - local_ec.min.z;
  fVar4 = fStack_30 * 2.0f + 10.0f;
  CStack_bc.x = 0.0;
  CStack_bc.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(&this_ptr->base,&CStack_98,&CStack_bc);
  for (iStack_1c = 0; iStack_1c < g_CDemonSetPtr->character_count; iStack_1c = iStack_1c + 1) {
    this_ptr_01 = g_CDemonSetPtr->characters[iStack_1c];
    input_world_point_00 = &(this_ptr_01->base).location;
    fVar1 = (this_ptr->base).location.position.x - (input_world_point_00->position).x;
    fVar3 = (this_ptr->base).location.position.y - (this_ptr_01->base).location.position.y;
    fVar2 = (this_ptr->base).location.position.z - (this_ptr_01->base).location.position.z;
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= fVar4 * fVar4) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_130);
      SStack_130.ray_type = 0;
      bbox_type = (*((this_ptr_01->base).vtable._ub)->getCollisionType)
                            (&this_ptr_01->base,&SStack_130);
      if (bbox_type != COLLISION_TYPE_NONE) {
        SStack_130.cylinder_bottom_y = 0.0;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (&this_ptr->base,&CStack_68,&input_world_point_00->position);
        if (CStack_68.x < local_ec.min.x) {
          CStack_68.x = local_ec.min.x;
        }
        if (local_ec.max.x < CStack_68.x) {
          CStack_68.x = local_ec.max.x;
        }
        if (CStack_68.y < local_ec.min.y) {
          CStack_68.y = local_ec.min.y;
        }
        if (local_ec.max.y < CStack_68.y) {
          CStack_68.y = local_ec.max.y;
        }
        CStack_68.z = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (&this_ptr->base,&CStack_80,&CStack_68);
        fVar6 = core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
                          (&this_ptr_01->base,&CStack_80,&CStack_98,aCStack_108,&SStack_130,
                           bbox_type,&CStack_d4);
        if ((0.0 <= fVar6) && (fVar6 <= 1.0)) {
          CStack_b0.x = CStack_80.x + CStack_98.x * fVar6;
          CStack_b0.y = CStack_80.y + CStack_98.y * fVar6;
          CStack_b0.z = CStack_80.z + CStack_98.z * fVar6;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (&this_ptr_01->base,&CStack_a4,&CStack_b0);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_16c);
          SStack_16c.damage_amount = this_ptr->damage_strength;
          SStack_16c.damage_type = DAMAGE_TYPE_MELEE;
          if (&SStack_16c.impact_direction != &CStack_a4) {
            SStack_16c.impact_direction.x = CStack_a4.x;
            SStack_16c.impact_direction.y = CStack_a4.y;
            SStack_16c.impact_direction.z = CStack_a4.z;
          }
          SStack_16c.attacker = &this_ptr->base;
          SStack_16c.wielder = &this_ptr->base;
          (*(((this_ptr_01->base).vtable._uc)->_uc).processDamage)(this_ptr_01,&SStack_16c);
        }
      }
    }
  }
  return;
}
