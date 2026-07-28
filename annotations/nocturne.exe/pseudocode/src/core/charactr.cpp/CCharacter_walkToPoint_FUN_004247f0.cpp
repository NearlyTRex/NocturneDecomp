// Name: core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
// Address: 004247f0
// Address Range: [[004247f0, 00424e8c]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float local_fc;
  byte local_f8 [12];
  byte local_ec [12];
  float local_e0;
  float local_dc;
  float local_d8;
  byte local_d4 [12];
  byte local_c8 [12];
  CVector3f local_bc;
  byte local_b0 [12];
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  CVector3f local_8c;
  float local_80;
  float local_7c;
  float local_78;
  CVector3f local_74;
  float local_64;
  float local_60;
  float local_54;
  float local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_30;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar5 = this_ptr->walk_step_speed;
  local_1c = this_ptr->turn_speed;
  fVar2 = SQRT(direction->x * direction->x + direction->z * direction->z);
  iVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_b0,direction);
  fVar6 = *(float *)(iVar4 + 4);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(&this_ptr->base,&local_bc,target_pos);
  fVar3 = SQRT(local_bc.x * local_bc.x + local_bc.z * local_bc.z);
  iVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_d4,&local_bc);
  local_20 = *(float *)(iVar4 + 4);
  local_4c = 0;
  local_fc = 0.0;
  if (0.0 < SQRT(direction->z * direction->z +
                 direction->x * direction->x + direction->y * direction->y)) {
    local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_20 - fVar6);
    local_fc = ABS(local_18);
  }
  if (((ABS(fVar3 - fVar2) < min_distance + (float)0.01) &&
      (local_fc < max_distance + (float)0.01)) &&
     (ABS(local_bc.y) < (float)5)) {
    local_4c = 1;
  }
  (this_ptr->model).accumulated_root_motion.z = 0.0;
  (this_ptr->model).accumulated_root_motion.y = (this_ptr->model).accumulated_root_motion.z;
  (this_ptr->model).accumulated_root_motion.x = (this_ptr->model).accumulated_root_motion.y;
  if ((fVar2 * (float)1.5 + (float)0.5 +
       ABS(fVar6) * (float)0.31830988619288902 * (float)2 <= fVar3) ||
     (1.0 < ABS(local_bc.y))) {
    if (path_map == (CPathMap *)0x0) {
      path_map = core_path_cpp_getPathMap_FUN_004f1e00((CLocation *)target_pos);
    }
    iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_004f1600
                      (path_map,&(this_ptr->base).location.position,&local_74,
                       (this_ptr->base).direction_hint);
    if (iVar4 == 0) {
      if (local_4c != 0) {
        return 1;
      }
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"CCharacter::walkToPoint - go somewhere failed\n");
      return -1;
    }
    pfVar7 = &(this_ptr->position_delta).z;
    local_54 = -fVar5;
    local_50 = fVar3 - fVar2;
    local_44 = local_54;
    if ((local_54 <= local_50) && (local_44 = local_50, fVar5 < local_50)) {
      local_44 = fVar5;
    }
    *pfVar7 = *pfVar7 + local_44;
    local_18 = local_74.y - (this_ptr->base).orient.vec.y;
    fVar6 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_18);
    fVar5 = -local_1c;
    if ((fVar5 <= fVar6) && (fVar5 = fVar6, local_1c < fVar6)) {
      fVar5 = local_1c;
    }
    this_ptr->turn_angle_accumulator = this_ptr->turn_angle_accumulator + fVar5;
  }
  else {
    if (fVar5 * (float)4 + fVar2 <= fVar3) {
      pfVar7 = &(this_ptr->position_delta).z;
      local_64 = -fVar5;
      local_3c = fVar3 - fVar2;
      local_30 = local_64;
      if ((local_64 <= local_3c) && (local_30 = local_3c, fVar5 < local_3c)) {
        local_30 = fVar5;
      }
      *pfVar7 = *pfVar7 + local_30;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                (&this_ptr->base,&local_8c,&this_ptr->position_delta);
      pfVar7 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                  (this_ptr,local_f8,direction);
      local_a4 = target_pos->x - *pfVar7;
      local_a0 = target_pos->y - pfVar7[1];
      local_98 = local_a4 - local_8c.x;
      local_9c = target_pos->z - pfVar7[2];
      local_94 = local_a0 - local_8c.y;
      local_90 = local_9c - local_8c.z;
      iVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_ec,&local_98);
      fVar6 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                               (*(float *)(iVar4 + 4) - (this_ptr->base).orient.vec.y);
      fVar5 = -local_1c;
      if ((-local_1c <= fVar6) && (fVar5 = fVar6, local_1c < fVar6)) {
        fVar5 = local_1c;
      }
    }
    else {
      local_e0 = local_bc.x - direction->x;
      local_d8 = local_bc.z - direction->z;
      local_60 = SQRT(local_d8 * local_d8 + local_e0 * local_e0);
      local_dc = 0.0;
      if (fVar5 < local_60) {
        local_48 = fVar5 / local_60;
        local_e0 = local_e0 * local_48;
        local_dc = local_48 * 0.0;
        local_d8 = local_d8 * local_48;
      }
      pCVar1 = &this_ptr->position_delta;
      pCVar1->x = pCVar1->x + local_e0;
      (this_ptr->position_delta).y = (this_ptr->position_delta).y + local_dc;
      (this_ptr->position_delta).z = (this_ptr->position_delta).z + local_d8;
      local_80 = local_bc.x - pCVar1->x;
      local_7c = local_bc.y - (this_ptr->position_delta).y;
      local_78 = local_bc.z - (this_ptr->position_delta).z;
      iVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_c8,&local_80);
      fVar6 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(float *)(iVar4 + 4) - fVar6);
      fVar5 = -local_1c;
      if ((fVar5 <= fVar6) && (fVar5 = fVar6, local_1c < fVar6)) {
        fVar5 = local_1c;
      }
    }
    this_ptr->turn_angle_accumulator = fVar5;
  }
  if (local_4c == 0) {
    return 0;
  }
  return 1;
}
