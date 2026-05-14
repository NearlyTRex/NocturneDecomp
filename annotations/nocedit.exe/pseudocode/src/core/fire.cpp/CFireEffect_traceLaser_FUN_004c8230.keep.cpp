// Name: core_fire.cpp_CFireEffect_traceLaser_FUN_004c8230
// Address: 004c8230
// MANUAL RECONSTRUCTION
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
  CVector3f local_140;
  CVector3f local_134;
  CVector3f local_11c;
  CVector3f local_110;
  CVector3f local_104;
  CVector3f local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  CVector3f local_e0;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_b0;
  CVector3f local_a4;
  float local_2c;
  float local_28;
  CDemonActor *this_ptr_00;
  float fVar1;
  
  if (recursion_depth < 3) {
    pCVar1 = &laser_info->local_origin;
    pCVar3 = &laser_info->local_hit_position;
    pCVar4 = &laser_info->local_normal;
    while( true ) {
      core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00574270
                (g_CDemonSetPtr,laser_info->laser_type,(laser_info->color).r,(laser_info->color).g,
                 (laser_info->color).b);
      local_e0 = *origin;
      local_134.x = local_e0.x + direction->x;
      local_134.y = local_e0.y + direction->y;
      local_134.z = local_e0.z + direction->z;
      fVar8 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&local_e0,&local_134);
      if ((fVar8 < 0.0) || (1.0 <= fVar8)) {
        local_110.x = -direction->x;
        local_110.y = -direction->y;
        local_110.z = -direction->z;
        local_a4 = local_110;
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
        local_134 = local_140;
        if (&local_a4 != &g_CDemonSetPtr->collision_normal) {
          local_a4 = g_CDemonSetPtr->collision_normal;
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
          *pCVar1 = *pCVar2;
        }
        pCVar9 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (this_ptr_00,&local_b0,&g_CDemonSetPtr->collision_impact_position);
        if (pCVar9 != pCVar3) {
          *pCVar3 = *pCVar9;
        }
        pCVar9 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                           (this_ptr_00,&local_11c,&g_CDemonSetPtr->collision_normal);
        if (pCVar9 != pCVar4) {
          *pCVar4 = *pCVar9;
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
        local_bc = local_f8;
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
        local_23c = *laser_info;
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
    local_104 = *direction;
    core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr_00);
    local_1e8 = *laser_info;
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
