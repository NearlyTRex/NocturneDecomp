// Name: core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
// Address: 00423000
// Address Range: [[00423000, 0042384e]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance)

{
  CVector3f *pCVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  byte bVar6;
  float afStackY_1170 [1008];
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  CVector3f local_188;
  float local_17c;
  float local_178 [2];
  CVector3f local_170;
  CVector3f local_164;
  float local_158;
  float local_154 [2];
  CVector3f local_14c;
  float local_140;
  float local_13c [5];
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  CVector3f local_110;
  float local_104;
  float local_100 [4];
  float local_f0;
  CVector3f local_ec;
  CVector3f local_e0;
  float local_d4;
  float local_d0 [2];
  CVector3f local_c8;
  float local_bc;
  float local_b8 [5];
  float local_a4;
  float local_a0;
  float local_9c;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  float local_74;
  float local_6c;
  float local_68;
  float local_60;
  float local_50;
  float local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_1c;
  float local_18;
  
  bVar6 = 0;
  local_18c = this_ptr->walk_step_speed;
  local_1c = this_ptr->turn_speed;
  local_194 = SQRT(direction->x * direction->x + direction->z * direction->z);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(direction,&local_98);
  local_d4 = local_98.x;
  local_d0[(uint)bVar6 * -2] = *(float *)((int)&local_98 + (uint)bVar6 * -8 + 4);
  local_d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       *(float *)((int)&local_98 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  local_198 = local_d0[0];
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0(&this_ptr->base,target_pos,&local_14c);
  local_e0.x = local_14c.x;
  *(uint *)((int)&local_e0 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_14c + (uint)bVar6 * -8 + 4);
  *(uint *)((int)&local_e0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)((int)&local_14c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  local_190 = SQRT(local_e0.x * local_e0.x + local_e0.z * local_e0.z);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_e0,&local_170);
  fVar5 = local_190 - local_194;
  local_bc = local_170.x;
  local_b8[(uint)bVar6 * -2] = *(float *)((int)&local_170 + (uint)bVar6 * -8 + 4);
  local_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       *(float *)((int)&local_170 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  local_3c = 0;
  local_1a0 = 0.0;
  local_19c = ABS(fVar5);
  if (0.0 < SQRT(direction->z * direction->z +
                 direction->x * direction->x + direction->y * direction->y)) {
    local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_b8[0] - local_d0[0]);
    local_1a0 = ABS(local_18);
  }
  if (((local_19c < min_distance + (float)0.01) &&
      (local_1a0 < max_distance + (float)0.01)) &&
     (ABS(local_e0.y) < (float)5)) {
    local_3c = 1;
  }
  (this_ptr->model).accumulated_root_motion.z = 0.0;
  (this_ptr->model).accumulated_root_motion.y = (this_ptr->model).accumulated_root_motion.z;
  (this_ptr->model).accumulated_root_motion.x = (this_ptr->model).accumulated_root_motion.y;
  local_74 = local_194 * (float)1.5 + (float)0.5 +
             ABS(local_198) * (float)0.31830988619288902 * (float)2;
  if ((this_ptr->is_spectral != 0) || ((local_190 < local_74 && (ABS(local_e0.y) <= 1.0)))) {
    if (local_18c * (float)4 + local_194 <= local_190) {
      pfVar2 = &(this_ptr->position_delta).z;
      local_6c = -local_18c;
      local_38 = local_190 - local_194;
      local_50 = local_6c;
      if ((local_6c <= local_38) && (local_50 = local_38, local_18c < local_38)) {
        local_50 = local_18c;
      }
      *pfVar2 = *pfVar2 + local_50;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                (&this_ptr->base,&this_ptr->position_delta,&local_c8);
      local_11c = local_c8.x;
      local_13c[(uint)bVar6 * -2 + 9] = *(float *)((int)&local_c8 + (uint)bVar6 * -8 + 4);
      local_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           *(float *)((int)&local_c8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0(&this_ptr->base,direction,&local_8c);
      local_158 = local_8c.x;
      local_154[(uint)bVar6 * -2] = *(float *)((int)&local_8c + (uint)bVar6 * -8 + 4);
      local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           *(float *)((int)&local_8c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      local_100[2] = target_pos->x - local_158;
      local_100[3] = target_pos->y - local_154[0];
      local_f0 = target_pos->z - local_154[1];
      local_104 = local_100[2];
      local_100[(uint)bVar6 * -2] = local_100[(uint)bVar6 * -2 + 3];
      local_100[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           local_100[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      local_140 = local_104 - local_11c;
      local_13c[0] = local_100[0] - local_118;
      local_13c[1] = local_100[1] - local_114;
      local_80.x = local_104 - local_11c;
      *(float *)((int)&local_80 + (uint)bVar6 * -8 + 4) = local_13c[(uint)bVar6 * -2];
      *(float *)((int)&local_80 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           local_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_80,&local_110);
      local_b8[2] = local_110.x;
      local_b8[(uint)bVar6 * -2 + 3] = *(float *)((int)&local_110 + (uint)bVar6 * -8 + 4);
      local_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           *(float *)((int)&local_110 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      fVar3 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                        (local_b8[3] - (this_ptr->base).orient.vec.y);
      fVar5 = -local_1c;
      if ((-local_1c <= fVar3) && (fVar5 = fVar3, local_1c < fVar3)) {
        fVar5 = local_1c;
      }
    }
    else {
      local_17c = local_e0.x - direction->x;
      local_178[0] = local_e0.y - direction->y;
      local_178[1] = local_e0.z - direction->z;
      local_a4 = local_17c;
      local_b8[(uint)bVar6 * -2 + 6] = local_178[(uint)bVar6 * -2];
      local_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           local_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      local_68 = SQRT(local_9c * local_9c + local_a4 * local_a4);
      local_a0 = 0.0;
      if (local_18c < local_68) {
        local_34 = local_18c / local_68;
        local_a4 = local_a4 * local_34;
        local_a0 = local_34 * 0.0;
        local_9c = local_9c * local_34;
      }
      pCVar1 = &this_ptr->position_delta;
      pCVar1->x = pCVar1->x + local_a4;
      (this_ptr->position_delta).y = (this_ptr->position_delta).y + local_a0;
      (this_ptr->position_delta).z = (this_ptr->position_delta).z + local_9c;
      local_128 = local_e0.x - pCVar1->x;
      local_124 = local_e0.y - (this_ptr->position_delta).y;
      local_120 = local_e0.z - (this_ptr->position_delta).z;
      local_188.x = local_128;
      *(float *)((int)&local_188 + (uint)bVar6 * -8 + 4) = local_13c[(uint)bVar6 * -2 + 6];
      *(float *)((int)&local_188 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           local_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_188,&local_ec);
      local_13c[2] = local_ec.x;
      local_13c[(uint)bVar6 * -2 + 3] = *(float *)((int)&local_ec + (uint)bVar6 * -8 + 4);
      local_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           *(float *)((int)&local_ec + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      fVar3 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_13c[3] - local_198);
      fVar5 = -local_1c;
      if ((fVar5 <= fVar3) && (fVar5 = fVar3, local_1c < fVar3)) {
        fVar5 = local_1c;
      }
    }
    this_ptr->turn_angle_accumulator = fVar5;
    if (this_ptr->is_spectral != 0) {
      fVar5 = -local_18c;
      local_e0.y = local_e0.y - direction->y;
      if ((fVar5 <= local_e0.y) && (fVar5 = local_e0.y, local_18c < local_e0.y)) {
        fVar5 = local_18c;
      }
      (this_ptr->position_delta).y = fVar5;
    }
  }
  else {
    if (path_map == (CPathMap *)0x0) {
      path_map = core_path_cpp_getPathMap_FUN_00513ea0((CLocation *)target_pos);
    }
    iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                      (path_map,&(this_ptr->base).location.position,&local_164,
                       (this_ptr->base).direction_hint);
    if (iVar4 == 0) {
      if (local_3c == 0) {
        engine_console_cpp_CConsole_printf_FUN_00436710
                  (g_CConsolePtr,"CCharacter::walkToPoint - go somewhere failed\n");
        return -1;
      }
      return 1;
    }
    pfVar2 = &(this_ptr->position_delta).z;
    local_60 = -local_18c;
    local_40 = local_190 - local_194;
    local_2c = local_60;
    if ((local_60 <= local_40) && (local_2c = local_40, local_18c < local_40)) {
      local_2c = local_18c;
    }
    *pfVar2 = *pfVar2 + local_2c;
    local_18 = local_164.y - (this_ptr->base).orient.vec.y;
    fVar3 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_18);
    fVar5 = -local_1c;
    if ((fVar5 <= fVar3) && (fVar5 = fVar3, local_1c < fVar3)) {
      fVar5 = local_1c;
    }
    this_ptr->turn_angle_accumulator = this_ptr->turn_angle_accumulator + fVar5;
  }
  if (local_3c == 0) {
    return 0;
  }
  return 1;
}
