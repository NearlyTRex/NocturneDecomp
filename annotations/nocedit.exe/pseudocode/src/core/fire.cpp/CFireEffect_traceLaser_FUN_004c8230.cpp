// Name: core_fire.cpp_CFireEffect_traceLaser_FUN_004c8230
// Address: 004c8230
// Address Range: [[004c8230, 004c8c09]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_traceLaser_FUN_004c8230(CFireEffect *this_ptr,CVector3f *origin,CVector3f *direction,SLaserInfo *laser_info,int recursion_depth)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_traceLaser_FUN_004c8230(CFireEffect *this_ptr,CVector3f *origin,CVector3f *direction,SLaserInfo *laser_info,int recursion_depth)

{
  CVector3f *pCVar1;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  double x;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CVector3f *pCVar2;
  CVector3f *pCVar9;
  CCharacter *this_ptr_01;
  int iVar3;
  double dVar4;
  SLaserInfo local_23c;
  SLaserInfo local_1e8;
  float local_194;
  float local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  CVector3f local_140;
  CVector3f local_134;
  float local_128;
  float local_124;
  float local_120;
  CVector3f local_11c;
  CVector3f local_110;
  CVector3f local_104;
  CVector3f local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  CVector3f local_e0;
  float local_d4;
  float local_d0;
  float local_cc;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_b0;
  CVector3f local_a4;
  double local_98;
  double local_90;
  float *local_80;
  CVector3f *local_7c;
  float *local_78;
  float *local_74;
  float *local_70;
  CVector3f *local_6c;
  float *local_68;
  float *local_64;
  float *local_60;
  float *local_5c;
  float *local_58;
  int local_54;
  float *local_50;
  float *local_4c;
  float local_48;
  float *local_44;
  float local_40;
  float *local_3c;
  float *local_38;
  float *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float *local_24;
  CVector3f *local_20;
  CVector3f *local_1c;
  CVector3f *local_18;
  float *local_14;
  CDemonActor *this_ptr_00;
  float fVar1;
  
  if (recursion_depth < 3) {
    pCVar1 = &laser_info->local_origin;
    pCVar3 = &laser_info->local_hit_position;
    pCVar4 = &laser_info->local_normal;
    while( true ) {
      core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00574270
                (g_CDemonSetPtr,(float)laser_info->laser_type,(float)(laser_info->color).r,
                 (float)(laser_info->color).g,(float)(laser_info->color).b);
      local_e0.x = origin->x;
      local_e0.y = origin->y;
      local_e0.z = origin->z;
      local_134.x = local_e0.x + direction->x;
      local_134.y = local_e0.y + direction->y;
      local_134.z = local_e0.z + direction->z;
      fVar8 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&local_e0,&local_134);
      if ((fVar8 < 0.0) || (1.0 <= fVar8)) {
        local_110.x = -direction->x;
        local_110.y = -direction->y;
        local_110.z = -direction->z;
        if (&local_a4 != &local_110) {
          local_a4.x = local_110.x;
          local_a4.y = local_110.y;
          local_a4.z = local_110.z;
        }
        fVar8 = SQRT(local_a4.z * local_a4.z + local_a4.x * local_a4.x + local_a4.y * local_a4.y);
        if (fVar8 <= 0.0) {
          local_a4.z = 0.0;
          local_a4.y = 0.0;
          local_a4.x = 0.0;
        }
        else {
          fVar8 = 1.0 / fVar8;
          local_a4.x = local_a4.x * fVar8;
          local_a4.y = local_a4.y * fVar8;
          local_a4.z = local_a4.z * fVar8;
        }
      }
      else {
        local_140.x = origin->x + direction->x * fVar8;
        local_140.y = origin->y + direction->y * fVar8;
        local_140.z = origin->z + fVar8 * direction->z;
        if (&local_134 != &local_140) {
          local_134.x = local_140.x;
          local_134.y = local_140.y;
          local_134.z = local_140.z;
        }
        if (&local_a4 != &g_CDemonSetPtr->collision_normal) {
          local_a4.x = (g_CDemonSetPtr->collision_normal).x;
          local_a4.y = (g_CDemonSetPtr->collision_normal).y;
          local_a4.z = (g_CDemonSetPtr->collision_normal).z;
        }
      }
      this_ptr_00 = g_CDemonSetPtr->collision_actor;
      laser_info->reflectivity = 0.0;
      laser_info->stored_angle = 0.0;
      laser_info->transparency = 0.0;
      if (this_ptr_00 != (CDemonActor *)0x0) {
        pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (this_ptr_00,&local_c8,origin);
        if (pCVar2 != pCVar1) {
          pCVar1->x = pCVar2->x;
          (laser_info->local_origin).y = pCVar2->y;
          (laser_info->local_origin).z = pCVar2->z;
        }
        pCVar9 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (this_ptr_00,&local_b0,&g_CDemonSetPtr->collision_impact_position);
        if (pCVar9 != pCVar3) {
          pCVar3->x = pCVar9->x;
          (laser_info->local_hit_position).y = pCVar9->y;
          (laser_info->local_hit_position).z = pCVar9->z;
        }
        pCVar9 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                           (this_ptr_00,&local_11c,&g_CDemonSetPtr->collision_normal);
        if (pCVar9 != pCVar4) {
          pCVar4->x = pCVar9->x;
          (laser_info->local_normal).y = pCVar9->y;
          (laser_info->local_normal).z = pCVar9->z;
        }
        if ((((recursion_depth == 0) && (laser_info->is_hero_weapon != 0)) &&
            (this_ptr_01 = (CCharacter *)
                           core_actor_cpp_castToClassHash_FUN_0040c790
                                     (this_ptr_00,g_CCharacterClassInfo.name_hash),
            this_ptr_01 != (CCharacter *)0x0)) &&
           (iVar3 = (*(((this_ptr_01->base).vtable._uc)->_uc).canWalk)(this_ptr_01), iVar3 != 0)) {
          (laser_info->color).g = 0xff;
          (laser_info->color).b = 0;
          (laser_info->color).r = 0xff;
        }
        fVar8 = direction->x;
        fVar5 = direction->y;
        fVar6 = direction->z;
        fVar7 = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar5 * fVar5);
        if (fVar7 <= 0.0) {
          local_e8 = 0.0;
          local_ec = 0.0;
          local_e4 = 0.0;
        }
        else {
          fVar1 = 1.0 / fVar7;
          local_ec = fVar8 * fVar1;
          local_e8 = fVar5 * fVar1;
          local_e4 = fVar6 * fVar1;
        }
        fVar8 = local_e4 * direction->z + local_ec * direction->x + local_e8 * direction->y;
        x = (double)fVar8;
        if ((float)-1 < fVar8) {
          if (x < 1.0) {
            dVar4 = acos(x);
            local_2c = (float)dVar4;
          }
          else {
            local_2c = 0.0;
          }
        }
        else {
          local_2c = 3.1415927;
        }
        laser_info->incidence_angle = local_2c;
        (*((this_ptr_00->vtable)._ub)->getSurfaceProperties)(this_ptr_00,laser_info);
      }
      local_28 = 0.0;
      if (laser_info->is_damaging != 0) {
        local_28 = laser_info->intensity;
      }
      if (0.0 < laser_info->transparency) {
        fVar8 = (local_a4.z * direction->z + local_a4.x * direction->x + local_a4.y * direction->y)
                * 2.0f;
        local_bc.x = local_a4.x * fVar8 - direction->x;
        local_bc.y = local_a4.y * fVar8 - direction->y;
        local_f8.x = -local_bc.x;
        local_bc.z = local_a4.z * fVar8 - direction->z;
        local_f8.y = -local_bc.y;
        local_f8.z = -local_bc.z;
        if (&local_bc != &local_f8) {
          local_bc.x = local_f8.x;
          local_bc.y = local_f8.y;
          local_bc.z = local_f8.z;
        }
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
        local_23c.intensity = laser_info->intensity;
        local_23c.beam_width = laser_info->beam_width;
        local_23c.laser_type = laser_info->laser_type;
        local_23c.color.r = (laser_info->color).r;
        local_23c.color.g = (laser_info->color).g;
        local_23c.color.b = (laser_info->color).b;
        local_23c.is_hero_weapon = laser_info->is_hero_weapon;
        local_23c.is_damaging = laser_info->is_damaging;
        local_23c.local_origin.x = pCVar1->x;
        local_23c.local_origin.y = (laser_info->local_origin).y;
        local_23c.local_origin.z = (laser_info->local_origin).z;
        local_23c.local_hit_position.x = pCVar3->x;
        local_23c.local_hit_position.y = (laser_info->local_hit_position).y;
        local_23c.local_hit_position.z = (laser_info->local_hit_position).z;
        local_23c.local_normal.x = pCVar4->x;
        local_23c.local_normal.y = (laser_info->local_normal).y;
        local_23c.local_normal.z = (laser_info->local_normal).z;
        local_23c.incidence_angle = laser_info->incidence_angle;
        local_23c.reflectivity = laser_info->reflectivity;
        local_23c.stored_angle = laser_info->stored_angle;
        local_23c.transparency = laser_info->transparency;
        core_fire_cpp_CFireEffect_traceLaser_FUN_004c8230
                  (this_ptr,&local_134,&local_bc,&local_23c,recursion_depth + 1);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
        local_28 = (1.0 - laser_info->transparency) * (float)0.25 * local_28;
      }
      if (laser_info->reflectivity <= 0.0) goto LAB_004c8ae9;
      if ((laser_info->reflectivity != 1.0) ||
         (laser_info->stored_angle != laser_info->incidence_angle)) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr_00);
    }
    local_104.x = direction->x;
    local_104.y = direction->y;
    local_104.z = direction->z;
    core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr_00);
    local_1e8.intensity = laser_info->intensity;
    local_1e8.beam_width = laser_info->beam_width;
    local_1e8.laser_type = laser_info->laser_type;
    local_1e8.color.r = (laser_info->color).r;
    local_1e8.color.g = (laser_info->color).g;
    local_1e8.color.b = (laser_info->color).b;
    local_1e8.is_hero_weapon = laser_info->is_hero_weapon;
    local_1e8.is_damaging = laser_info->is_damaging;
    local_1e8.local_origin.x = (laser_info->local_origin).x;
    local_1e8.local_origin.y = (laser_info->local_origin).y;
    local_1e8.local_origin.z = (laser_info->local_origin).z;
    local_1e8.local_hit_position.x = (laser_info->local_hit_position).x;
    local_1e8.local_hit_position.y = (laser_info->local_hit_position).y;
    local_1e8.local_hit_position.z = (laser_info->local_hit_position).z;
    local_1e8.local_normal.x = (laser_info->local_normal).x;
    local_1e8.local_normal.y = (laser_info->local_normal).y;
    local_1e8.local_normal.z = (laser_info->local_normal).z;
    local_1e8.incidence_angle = laser_info->incidence_angle;
    local_1e8.reflectivity = laser_info->reflectivity;
    local_1e8.stored_angle = laser_info->stored_angle;
    local_1e8.transparency = laser_info->transparency;
    core_fire_cpp_CFireEffect_traceLaser_FUN_004c8230
              (this_ptr,&local_134,&local_104,&local_1e8,recursion_depth + 1);
    local_28 = (1.0 - laser_info->reflectivity) * (float)0.25 * local_28;
LAB_004c8ae9:
    core_fire_cpp_CFireEffect_createLaserSegment_FUN_004c7eb0
              (this_ptr,&local_e0,&local_134,laser_info->intensity,local_28,&local_a4,
               (laser_info->color).r,(laser_info->color).g,(laser_info->color).b,
               laser_info->beam_width);
  }
  return;
}
