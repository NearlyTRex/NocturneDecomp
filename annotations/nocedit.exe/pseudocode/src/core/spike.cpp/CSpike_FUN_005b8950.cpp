// Name: core_spike.cpp_CSpike_FUN_005b8950
// Address: 005b8950
// Address Range: [[005b8950, 005b8e8b]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_CSpike_FUN_005b8950(CSpike *this_ptr)

#include "nocturne.h"

void __cdecl core_spike_cpp_CSpike_FUN_005b8950(CSpike *this_ptr)

{
  CLocation *input_world_point;
  CCharacter *this_ptr_00;
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
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
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  float fStack_44;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  CLocation *pCStack_20;
  int iStack_1c;
  float fStack_18;
  
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_ec);
  uStack_8c = 0x3dcccccd;
  uStack_88 = 0x3dcccccd;
  uStack_84 = 0;
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
    pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base,&CStack_74,pCVar4);
    if (point != pCVar4) {
      point->x = pCVar4->x;
      point->y = pCVar4->y;
      point->z = pCVar4->z;
    }
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&CStack_d4,point);
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
  CStack_bc.z = local_ec.max.z - local_ec.min.z;
  fStack_30 = fStack_30 * 2.0f + 10.0f;
  fStack_2c = fStack_30 * fStack_30;
  CStack_bc.x = 0.0;
  CStack_bc.y = 0.0;
  fStack_18 = CStack_bc.z;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(&this_ptr->base,&CStack_98,&CStack_bc);
  pCStack_20 = &(this_ptr->base).location;
  iStack_24 = 0;
  for (iStack_1c = 0; iStack_1c < g_CDemonSetPtr->character_count; iStack_1c = iStack_1c + 1) {
    this_ptr_00 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iStack_24);
    input_world_point = &(this_ptr_00->base).location;
    fVar1 = (pCStack_20->position).x - (input_world_point->position).x;
    fVar3 = (pCStack_20->position).y - (this_ptr_00->base).location.position.y;
    fVar2 = (pCStack_20->position).z - (this_ptr_00->base).location.position.z;
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= fStack_2c) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_130);
      SStack_130.ray_type = 0;
      iStack_28 = (*((this_ptr_00->base).vtable._ub)->hasCollision)(&this_ptr_00->base,&SStack_130);
      if (iStack_28 != 0) {
        SStack_130.cylinder_bottom_y = 0.0;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (&this_ptr->base,&CStack_68,&input_world_point->position);
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
        fStack_18 = core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
                              (&this_ptr_00->base,&CStack_80,&CStack_98,aCStack_108,&SStack_130,
                               iStack_28,&CStack_d4);
        if ((0.0 <= fStack_18) && (fStack_18 <= 1.0)) {
          fStack_5c = CStack_98.x * fStack_18;
          fStack_58 = CStack_98.y * fStack_18;
          fStack_54 = CStack_98.z * fStack_18;
          CStack_b0.x = CStack_80.x + fStack_5c;
          CStack_b0.y = CStack_80.y + fStack_58;
          CStack_b0.z = CStack_80.z + fStack_54;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (&this_ptr_00->base,&CStack_a4,&CStack_b0);
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
          (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)(this_ptr_00,&SStack_16c);
        }
      }
    }
    iStack_24 = iStack_24 + 4;
  }
  return;
}
