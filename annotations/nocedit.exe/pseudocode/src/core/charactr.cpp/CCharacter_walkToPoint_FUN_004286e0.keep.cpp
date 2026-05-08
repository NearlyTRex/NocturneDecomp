// Name: core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
// Address: 004286e0
// MANUAL RECONSTRUCTION
// Address Range: [[004286e0, 00428d7c]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance)

{
  float *pfVar2;
  float fVar4;
  float fVar5;
  bool bVar6;
  CVector3f *pCVar4;
  CVector3f *pCVar7;
  int iVar5;
  float fVar8;
  float fVar9;
  float fVar6;
  float fVar7;
  float local_fc;
  CVector3f local_f8;
  CVector3f local_ec;
  float local_e0;
  float local_dc;
  float local_d8;
  CVector3f local_d4;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_b0;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  float fVar3;
  float fVar2;
  float *pfVar1;
  
  fVar9 = this_ptr->walk_step_speed;
  fVar4 = this_ptr->turn_speed;
  fVar2 = SQRT(direction->x * direction->x + direction->z * direction->z);
  pCVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_b0,direction);
  fVar5 = pCVar4->y;
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(&this_ptr->base,&local_bc,target_pos);
  fVar3 = SQRT(local_bc.x * local_bc.x + local_bc.z * local_bc.z);
  pCVar7 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_d4,&local_bc);
  bVar6 = false;
  local_fc = 0.0;
  if (0.0 < SQRT(direction->z * direction->z +
                 direction->x * direction->x + direction->y * direction->y)) {
    fVar8 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar7->y - fVar5);
    local_fc = ABS(fVar8);
  }
  if (((ABS(fVar3 - fVar2) < min_distance + (float)0.01) &&
      (local_fc < max_distance + (float)0.01)) &&
     (ABS(local_bc.y) < (float)5)) {
    bVar6 = true;
  }
  (this_ptr->model).accumulated_root_motion.x = 0.0;
  (this_ptr->model).accumulated_root_motion.y = 0.0;
  (this_ptr->model).accumulated_root_motion.z = 0.0;
  if ((fVar2 * (float)1.5 + (float)0.5 +
       ABS(fVar5) * (float)0.31830988619288902 * (float)2 <= fVar3) ||
     (1.0 < ABS(local_bc.y))) {
    if (path_map == (CPathMap *)0x0) {
      path_map = core_path_cpp_getPathMap_FUN_00548500((CLocation *)target_pos);
    }
    iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                      (path_map,&(this_ptr->base).location.position,&local_74,
                       (this_ptr->base).direction_hint);
    if (iVar5 == 0) {
      if (bVar6) {
        return 1;
      }
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"CCharacter::walkToPoint - go somewhere failed\n");
      return -1;
    }
    pfVar1 = &(this_ptr->position_delta).z;
    fVar8 = -fVar9;
    fVar5 = fVar3 - fVar2;
    if ((fVar8 <= fVar5) && (fVar8 = fVar5, fVar9 < fVar5)) {
      fVar8 = fVar9;
    }
    *pfVar1 = *pfVar1 + fVar8;
    fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                      (local_74.y - (this_ptr->base).orient.vec.y);
    fVar9 = -fVar4;
    if ((fVar9 <= fVar7) && (fVar9 = fVar7, fVar4 < fVar7)) {
      fVar9 = fVar4;
    }
    this_ptr->turn_angle_accumulator = this_ptr->turn_angle_accumulator + fVar9;
  }
  else {
    if (fVar9 * (float)4 + fVar2 <= fVar3) {
      pfVar2 = &(this_ptr->position_delta).z;
      fVar8 = -fVar9;
      fVar5 = fVar3 - fVar2;
      if ((fVar8 <= fVar5) && (fVar8 = fVar5, fVar9 < fVar5)) {
        fVar8 = fVar9;
      }
      *pfVar2 = *pfVar2 + fVar8;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base,&local_8c,&this_ptr->position_delta);
      pCVar7 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (&this_ptr->base,&local_f8,direction);
      local_98.x = (target_pos->x - pCVar7->x) - local_8c.x;
      local_98.y = (target_pos->y - pCVar7->y) - local_8c.y;
      local_98.z = (target_pos->z - pCVar7->z) - local_8c.z;
      pCVar7 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_ec,&local_98)
      ;
      fVar9 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        (pCVar7->y - (this_ptr->base).orient.vec.y);
      fVar6 = -fVar4;
      if ((-fVar4 <= fVar9) && (fVar6 = fVar9, fVar4 < fVar9)) {
        fVar6 = fVar4;
      }
    }
    else {
      local_e0 = local_bc.x - direction->x;
      local_d8 = local_bc.z - direction->z;
      fVar8 = SQRT(local_d8 * local_d8 + local_e0 * local_e0);
      local_dc = 0.0;
      if (fVar9 < fVar8) {
        fVar9 = fVar9 / fVar8;
        local_e0 = local_e0 * fVar9;
        local_dc = fVar9 * 0.0;
        local_d8 = local_d8 * fVar9;
      }
      pCVar7 = &this_ptr->position_delta;
      pCVar7->x = pCVar7->x + local_e0;
      (this_ptr->position_delta).y = (this_ptr->position_delta).y + local_dc;
      (this_ptr->position_delta).z = (this_ptr->position_delta).z + local_d8;
      local_80.x = local_bc.x - pCVar7->x;
      local_80.y = local_bc.y - (this_ptr->position_delta).y;
      local_80.z = local_bc.z - (this_ptr->position_delta).z;
      pCVar7 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_c8,&local_80)
      ;
      fVar9 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar7->y - fVar5);
      fVar6 = -fVar4;
      if ((fVar6 <= fVar9) && (fVar6 = fVar9, fVar4 < fVar9)) {
        fVar6 = fVar4;
      }
    }
    this_ptr->turn_angle_accumulator = fVar6;
  }
  if (!bVar6) {
    return 0;
  }
  return 1;
}
