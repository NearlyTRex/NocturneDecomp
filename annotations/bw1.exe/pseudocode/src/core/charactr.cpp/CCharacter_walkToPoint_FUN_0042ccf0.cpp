// Name: core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
// Address: 0042ccf0
// Address Range: [[0042ccf0, 0042d53e]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance)

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
  float local_188;
  float local_17c;
  float local_178;
  float local_174;
  uint local_170;
  CVector3f local_164;
  float local_158;
  float local_154 [5];
  float local_140;
  float local_13c;
  float local_138;
  uint local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  uint local_110;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  uint local_ec;
  float local_e0;
  float local_dc;
  float local_d8;
  uint local_d4;
  float local_d0;
  float local_c8;
  uint local_bc;
  float local_b8;
  uint local_b0;
  float local_ac;
  float local_a4;
  float local_a0;
  float local_9c;
  uint local_98;
  float local_8c;
  float local_80 [3];
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
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(direction);
  local_d4 = local_98;
  local_154[(uint)bVar6 * -2 + 0x21] = local_154[(uint)bVar6 * -2 + 0x30];
  local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22] =
       local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x31];
  local_198 = local_d0;
  core_actor_cpp_FUN_00408bb0(this_ptr,target_pos);
  local_e0 = local_154[2];
  local_154[(uint)bVar6 * -2 + 0x1e] = local_154[(uint)bVar6 * -2 + 3];
  local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
       local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
  local_190 = SQRT(local_e0 * local_e0 + local_d8 * local_d8);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(local_154 + 0x1d);
  fVar5 = local_190 - local_194;
  local_bc = local_170;
  local_154[(uint)bVar6 * -2 + 0x27] = local_154[(uint)bVar6 * -2 + -6];
  local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28] =
       local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -5];
  local_3c = 0;
  local_1a0 = 0.0;
  local_19c = ABS(fVar5);
  if (0.0 < SQRT(direction->z * direction->z +
                 direction->x * direction->x + direction->y * direction->y)) {
    local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_b8 - local_d0);
    local_1a0 = ABS(local_18);
  }
  if (((local_19c < min_distance + (float)_DAT_005d58cf) &&
      (local_1a0 < max_distance + (float)_DAT_005d58cf)) && (ABS(local_dc) < (float)_DAT_005d58d7))
  {
    local_3c = 1;
  }
  (this_ptr->model).accumulated_root_motion.z = 0.0;
  (this_ptr->model).accumulated_root_motion.y = (this_ptr->model).accumulated_root_motion.z;
  (this_ptr->model).accumulated_root_motion.x = (this_ptr->model).accumulated_root_motion.y;
  local_74 = local_194 * (float)_DAT_005d58ef + (float)_DAT_005d58f7 +
             ABS(local_198) * (float)_DAT_005d58df * (float)_DAT_005d58e7;
  if ((this_ptr->is_spectral != 0) || ((local_190 < local_74 && (ABS(local_dc) <= 1.0)))) {
    if (local_18c * (float)_DAT_005d58ff + local_194 <= local_190) {
      pfVar2 = &(this_ptr->position_delta).z;
      local_6c = -local_18c;
      local_38 = local_190 - local_194;
      local_50 = local_6c;
      if ((local_6c <= local_38) && (local_50 = local_38, local_18c < local_38)) {
        local_50 = local_18c;
      }
      *pfVar2 = *pfVar2 + local_50;
      core_actor_cpp_FUN_00408b40(this_ptr,&this_ptr->position_delta);
      local_11c = local_c8;
      local_154[(uint)bVar6 * -2 + 0xf] = local_154[(uint)bVar6 * -2 + 0x24];
      local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
           local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25];
      core_actor_cpp_FUN_00408ac0(this_ptr,direction);
      local_158 = local_8c;
      local_154[(uint)bVar6 * -2] = local_154[(uint)bVar6 * -2 + 0x33];
      local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x34];
      local_f8 = target_pos->x - local_158;
      local_f4 = target_pos->y - local_154[0];
      local_f0 = target_pos->z - local_154[1];
      local_104 = local_f8;
      local_154[(uint)bVar6 * -2 + 0x15] = local_154[(uint)bVar6 * -2 + 0x18];
      local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
           local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
      local_140 = local_104 - local_11c;
      local_13c = local_100 - local_118;
      local_138 = local_fc - local_114;
      local_80[0] = local_104 - local_11c;
      local_154[(uint)bVar6 * -2 + 0x36] = local_154[(uint)bVar6 * -2 + 6];
      local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x37] =
           local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(local_154 + 0x35);
      local_b0 = local_110;
      local_154[(uint)bVar6 * -2 + 0x2a] = local_154[(uint)bVar6 * -2 + 0x12];
      local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b] =
           local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
      fVar3 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                               (local_ac - (this_ptr->base).orient.vec.y);
      fVar5 = -local_1c;
      if ((-local_1c <= fVar3) && (fVar5 = fVar3, local_1c < fVar3)) {
        fVar5 = local_1c;
      }
    }
    else {
      local_17c = local_e0 - direction->x;
      local_178 = local_dc - direction->y;
      local_174 = local_d8 - direction->z;
      local_a4 = local_17c;
      local_154[(uint)bVar6 * -2 + 0x2d] = *(float *)((int)&stack0xfffffe88 + (uint)bVar6 * -8);
      local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e] =
           local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -8];
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
      local_128 = local_e0 - pCVar1->x;
      local_124 = local_dc - (this_ptr->position_delta).y;
      local_120 = local_d8 - (this_ptr->position_delta).z;
      local_188 = local_128;
      *(float *)((int)&stack0xfffffe7c + (uint)bVar6 * 0xfffffffe * 4) =
           local_154[(uint)bVar6 * -2 + 0xc];
      *(float *)(&stack0xfffffe80 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&stack0xfffffe78);
      local_134 = local_ec;
      local_154[(uint)bVar6 * -2 + 9] = local_154[(uint)bVar6 * -2 + 0x1b];
      local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           local_154[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
      fVar3 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_130 - local_198);
      fVar5 = -local_1c;
      if ((fVar5 <= fVar3) && (fVar5 = fVar3, local_1c < fVar3)) {
        fVar5 = local_1c;
      }
    }
    this_ptr->turn_angle_accumulator = fVar5;
    if (this_ptr->is_spectral != 0) {
      fVar5 = -local_18c;
      local_dc = local_dc - direction->y;
      if ((fVar5 <= local_dc) && (fVar5 = local_dc, local_18c < local_dc)) {
        fVar5 = local_18c;
      }
      (this_ptr->position_delta).y = fVar5;
    }
  }
  else {
    if (path_map == (CPathMap *)0x0) {
      path_map = core_path_cpp_getPathMap_FUN_005351f0((CLocation *)target_pos);
    }
    iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0
                      (path_map,&(this_ptr->base).location.position,&local_164,
                       (this_ptr->base).direction_hint);
    if (iVar4 == 0) {
      if (local_3c == 0) {
        engine_console_cpp_FUN_00445430(g_CConsolePtr,"CCharacter::walkToPoint - go somewhere failed\n");
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
    fVar3 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_18);
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
