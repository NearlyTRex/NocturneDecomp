// Name: core_fire.cpp_CFireEffect_traceLaser_FUN_0048b6f0
// Address: 0048b6f0
// Address Range: [[0048b6f0, 0048c0c9]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_traceLaser_FUN_0048b6f0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *direction,SLaserInfo *laser_info,int recursion_depth)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_traceLaser_FUN_0048b6f0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *direction,SLaserInfo *laser_info,int recursion_depth)

{
  CDemonActor *this_ptr_00;
  float fVar1;
  CVector3f *pCVar2;
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
  
  if (recursion_depth < 3) {
    local_20 = &laser_info->local_origin;
    local_50 = &(laser_info->local_origin).y;
    local_4c = &(laser_info->local_origin).z;
    local_1c = &laser_info->local_hit_position;
    local_18 = &laser_info->local_normal;
    local_54 = recursion_depth + 1;
    local_60 = &direction->y;
    local_5c = &direction->z;
    local_80 = &origin->y;
    local_58 = &origin->z;
    while( true ) {
      core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00511840
                (g_CDemonSet_PTR_005be368,laser_info->laser_type,(laser_info->color).r,
                 (laser_info->color).g,(laser_info->color).b);
      local_e0.x = origin->x;
      local_e0.y = *local_80;
      local_e0.z = *local_58;
      local_134.x = local_e0.x + direction->x;
      local_134.y = local_e0.y + direction->y;
      local_134.z = local_e0.z + direction->z;
      local_24 = (float *)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                                    (g_CDemonSet_PTR_005be368,&local_e0,&local_134);
      local_90 = (double)(float)local_24;
      if ((local_90 < 0.0) || (1.0 <= local_90)) {
        local_110.x = -direction->x;
        local_110.y = -direction->y;
        local_110.z = -direction->z;
        if (&local_a4 != &local_110) {
          local_a4.x = local_110.x;
          local_a4.y = local_110.y;
          local_a4.z = local_110.z;
        }
        local_40 = SQRT(local_a4.z * local_a4.z + local_a4.x * local_a4.x + local_a4.y * local_a4.y)
        ;
        if (local_40 <= 0.0) {
          local_a4.z = 0.0;
          local_a4.y = 0.0;
          local_a4.x = 0.0;
        }
        else {
          fVar1 = 1.0 / local_40;
          local_a4.x = local_a4.x * fVar1;
          local_a4.y = local_a4.y * fVar1;
          local_a4.z = local_a4.z * fVar1;
        }
      }
      else {
        local_128 = direction->x * (float)local_24;
        local_124 = direction->y * (float)local_24;
        local_120 = (float)local_24 * direction->z;
        local_140.x = origin->x + local_128;
        local_140.y = origin->y + local_124;
        local_140.z = origin->z + local_120;
        if (&local_134 != &local_140) {
          local_134.x = local_140.x;
          local_134.y = local_140.y;
          local_134.z = local_140.z;
        }
        if (&local_a4 != &g_CDemonSet_PTR_005be368->collision_normal) {
          local_a4.x = (g_CDemonSet_PTR_005be368->collision_normal).x;
          local_a4.y = (g_CDemonSet_PTR_005be368->collision_normal).y;
          local_a4.z = (g_CDemonSet_PTR_005be368->collision_normal).z;
        }
      }
      this_ptr_00 = g_CDemonSet_PTR_005be368->collision_actor;
      laser_info->reflectivity = 0.0;
      laser_info->stored_angle = 0.0;
      laser_info->transparency = 0.0;
      local_14 = local_24;
      if (this_ptr_00 != (CDemonActor *)0x0) {
        pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                           (this_ptr_00,&local_c8,origin);
        if (pCVar2 != local_20) {
          local_20->x = pCVar2->x;
          local_20->y = pCVar2->y;
          local_20->z = pCVar2->z;
        }
        pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                           (this_ptr_00,&local_b0,
                            &g_CDemonSet_PTR_005be368->collision_impact_position);
        if (pCVar2 != local_1c) {
          local_1c->x = pCVar2->x;
          local_1c->y = pCVar2->y;
          local_1c->z = pCVar2->z;
        }
        pCVar2 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                           (this_ptr_00,&local_11c,&g_CDemonSet_PTR_005be368->collision_normal);
        if (pCVar2 != local_18) {
          local_18->x = pCVar2->x;
          local_18->y = pCVar2->y;
          local_18->z = pCVar2->z;
        }
        if ((((recursion_depth == 0) && (laser_info->is_hero_weapon != 0)) &&
            (this_ptr_01 = (CCharacter *)
                           core_actor_cpp_castToClassHash_FUN_0040d890
                                     (this_ptr_00,g_CCharacterActorType_00765a60.name_hash),
            this_ptr_01 != (CCharacter *)0x0)) &&
           (iVar3 = (*(((this_ptr_01->base).vtable._uc)->_uc).canWalk)(this_ptr_01), iVar3 != 0)) {
          (laser_info->color).g = 0xff;
          (laser_info->color).b = 0;
          (laser_info->color).r = 0xff;
        }
        local_ec = direction->x;
        local_e8 = *local_60;
        local_e4 = *local_5c;
        local_48 = SQRT(local_e4 * local_e4 + local_ec * local_ec + local_e8 * local_e8);
        if (local_48 <= 0.0) {
          local_e8 = 0.0;
          local_ec = 0.0;
          local_e4 = 0.0;
        }
        else {
          fVar1 = 1.0 / local_48;
          local_ec = local_ec * fVar1;
          local_e8 = local_e8 * fVar1;
          local_e4 = local_e4 * fVar1;
        }
        fVar1 = local_e4 * direction->z + local_ec * direction->x + local_e8 * direction->y;
        local_98 = (double)fVar1;
        if ((float)-1 < fVar1) {
          if (local_98 < 1.0) {
            dVar4 = acos(local_98);
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
        local_30 = (local_a4.z * direction->z +
                   local_a4.x * direction->x + local_a4.y * direction->y) * 5.3049894774131808e-315._0_4_;
        local_d4 = local_a4.x * local_30;
        local_d0 = local_a4.y * local_30;
        local_cc = local_a4.z * local_30;
        local_bc.x = local_d4 - direction->x;
        local_bc.y = local_d0 - direction->y;
        local_f8.x = -local_bc.x;
        local_bc.z = local_cc - direction->z;
        local_f8.y = -local_bc.y;
        local_f8.z = -local_bc.z;
        if (&local_bc != &local_f8) {
          local_bc.x = local_f8.x;
          local_bc.y = local_f8.y;
          local_bc.z = local_f8.z;
        }
        local_34 = &local_1c->y;
        local_3c = &local_1c->z;
        local_38 = &local_18->y;
        local_44 = &local_18->z;
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(g_CDemonSet_PTR_005be368);
        core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
        local_23c.intensity = laser_info->intensity;
        local_23c.beam_width = laser_info->beam_width;
        local_23c.laser_type = laser_info->laser_type;
        local_23c.color.r = (laser_info->color).r;
        local_23c.color.g = (laser_info->color).g;
        local_23c.color.b = (laser_info->color).b;
        local_23c.is_hero_weapon = laser_info->is_hero_weapon;
        local_23c.is_damaging = laser_info->is_damaging;
        local_23c.local_origin.x = local_20->x;
        local_23c.local_origin.y = *local_50;
        local_23c.local_origin.z = *local_4c;
        local_23c.local_hit_position.x = local_1c->x;
        local_23c.local_hit_position.y = *local_34;
        local_23c.local_hit_position.z = *local_3c;
        local_23c.local_normal.x = local_18->x;
        local_23c.local_normal.y = *local_38;
        local_23c.local_normal.z = *local_44;
        local_23c.incidence_angle = laser_info->incidence_angle;
        local_23c.reflectivity = laser_info->reflectivity;
        local_23c.stored_angle = laser_info->stored_angle;
        local_23c.transparency = laser_info->transparency;
        core_fire_cpp_CFireEffect_traceLaser_FUN_0048b6f0
                  (this_ptr,&local_134,&local_bc,&local_23c,local_54);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(g_CDemonSet_PTR_005be368);
        local_28 = (1.0 - laser_info->transparency) * (float)0.25 * local_28;
      }
      if (laser_info->reflectivity <= 0.0) goto LAB_0048bfa9;
      if ((laser_info->reflectivity != 1.0) ||
         (laser_info->stored_angle != laser_info->incidence_angle)) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,this_ptr_00);
    }
    local_104.x = direction->x;
    local_104.y = direction->y;
    local_104.z = direction->z;
    local_190 = laser_info->beam_width;
    local_18c = laser_info->laser_type;
    local_188 = (laser_info->color).r;
    local_184 = (laser_info->color).g;
    local_180 = (laser_info->color).b;
    local_17c = laser_info->is_hero_weapon;
    local_178 = laser_info->is_damaging;
    local_7c = &laser_info->local_origin;
    local_174 = local_7c->x;
    local_78 = &(laser_info->local_origin).y;
    local_170 = *local_78;
    local_74 = &(laser_info->local_origin).z;
    local_16c = *local_74;
    local_168 = (laser_info->local_hit_position).x;
    local_64 = &(laser_info->local_hit_position).y;
    local_164 = *local_64;
    local_70 = &(laser_info->local_hit_position).z;
    local_160 = *local_70;
    local_6c = &laser_info->local_normal;
    local_15c = local_6c->x;
    local_68 = &(laser_info->local_normal).y;
    local_158 = *local_68;
    local_14 = &(laser_info->local_normal).z;
    local_154 = *local_14;
    local_150 = laser_info->incidence_angle;
    local_14c = laser_info->reflectivity;
    local_148 = laser_info->stored_angle;
    local_144 = laser_info->transparency;
    local_194 = laser_info->intensity * laser_info->reflectivity;
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,this_ptr_00);
    local_1e8.intensity = laser_info->intensity;
    local_1e8.beam_width = laser_info->beam_width;
    local_1e8.laser_type = laser_info->laser_type;
    local_1e8.color.r = (laser_info->color).r;
    local_1e8.color.g = (laser_info->color).g;
    local_1e8.color.b = (laser_info->color).b;
    local_1e8.is_hero_weapon = laser_info->is_hero_weapon;
    local_1e8.is_damaging = laser_info->is_damaging;
    local_1e8.local_origin.x = local_7c->x;
    local_1e8.local_origin.y = *local_78;
    local_1e8.local_origin.z = *local_74;
    local_1e8.local_hit_position.x = (laser_info->local_hit_position).x;
    local_1e8.local_hit_position.y = *local_64;
    local_1e8.local_hit_position.z = *local_70;
    local_1e8.local_normal.x = local_6c->x;
    local_1e8.local_normal.y = *local_68;
    local_1e8.local_normal.z = *local_14;
    local_1e8.incidence_angle = laser_info->incidence_angle;
    local_1e8.reflectivity = laser_info->reflectivity;
    local_1e8.stored_angle = laser_info->stored_angle;
    local_1e8.transparency = laser_info->transparency;
    core_fire_cpp_CFireEffect_traceLaser_FUN_0048b6f0
              (this_ptr,&local_134,&local_104,&local_1e8,recursion_depth + 1);
    local_28 = (1.0 - laser_info->reflectivity) * (float)0.25 * local_28;
LAB_0048bfa9:
    core_fire_cpp_CFireEffect_createLaserSegment_FUN_0048b370
              (this_ptr,&local_e0,&local_134,laser_info->intensity,local_28,&local_a4,
               (laser_info->color).r,(laser_info->color).g,(laser_info->color).b,
               laser_info->beam_width);
  }
  return;
}
