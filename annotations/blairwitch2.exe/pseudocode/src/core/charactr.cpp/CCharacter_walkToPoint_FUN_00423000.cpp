// Name: core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
// Address: 00423000
// Address Range: [[00423000, 0042384e]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance)

{
  byte *puVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  byte bVar5;
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
  byte local_164 [12];
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
  
  bVar5 = 0;
  local_18c = *(float *)&this_ptr->field_0x2594;
  local_1c = *(float *)&this_ptr->field_0x2598;
  local_194 = SQRT(*(float *)direction * *(float *)direction +
                   *(float *)&direction->field_0x8 * *(float *)&direction->field_0x8);
  core_vecdir_cpp_FUN_005838f0(direction);
  local_d4 = local_98;
  local_154[(uint)bVar5 * -2 + 0x21] = local_154[(uint)bVar5 * -2 + 0x30];
  local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x22] =
       local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x31];
  local_198 = local_d0;
  core_actor_cpp_FUN_00408de0(this_ptr,target_pos);
  local_e0 = local_154[2];
  local_154[(uint)bVar5 * -2 + 0x1e] = local_154[(uint)bVar5 * -2 + 3];
  local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f] =
       local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  local_190 = SQRT(local_e0 * local_e0 + local_d8 * local_d8);
  core_vecdir_cpp_FUN_005838f0(local_154 + 0x1d);
  fVar4 = local_190 - local_194;
  local_bc = local_170;
  local_154[(uint)bVar5 * -2 + 0x27] = local_154[(uint)bVar5 * -2 + -6];
  local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x28] =
       local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -5];
  local_3c = 0;
  local_1a0 = 0.0;
  local_19c = ABS(fVar4);
  if (0.0 < SQRT(*(float *)&direction->field_0x8 * *(float *)&direction->field_0x8 +
                 *(float *)direction * *(float *)direction +
                 *(float *)&direction->field_0x4 * *(float *)&direction->field_0x4)) {
    local_18 = (float)core_actor_cpp_FUN_0040d0c0(local_b8 - local_d0);
    local_1a0 = ABS(local_18);
  }
  if (((local_19c < min_distance + (float)_DAT_005ccc3e) &&
      (local_1a0 < max_distance + (float)_DAT_005ccc3e)) && (ABS(local_dc) < (float)_DAT_005ccc46))
  {
    local_3c = 1;
  }
  *(uint *)&this_ptr->field_0x2510 = 0;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
  local_74 = local_194 * (float)_DAT_005ccc5e + (float)_DAT_005ccc66 +
             ABS(local_198) * (float)_DAT_005ccc4e * (float)_DAT_005ccc56;
  if ((*(int *)&this_ptr->field_0x2814 != 0) || ((local_190 < local_74 && (ABS(local_dc) <= 1.0))))
  {
    if (local_18c * (float)_DAT_005ccc6e + local_194 <= local_190) {
      local_6c = -local_18c;
      local_38 = local_190 - local_194;
      local_50 = local_6c;
      if ((local_6c <= local_38) && (local_50 = local_38, local_18c < local_38)) {
        local_50 = local_18c;
      }
      *(float *)&this_ptr->field_0x2584 = *(float *)&this_ptr->field_0x2584 + local_50;
      core_actor_cpp_FUN_00408d70(this_ptr,&this_ptr->field_0x257c);
      local_11c = local_c8;
      local_154[(uint)bVar5 * -2 + 0xf] = local_154[(uint)bVar5 * -2 + 0x24];
      local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
           local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25];
      core_actor_cpp_FUN_00408cf0(this_ptr,direction);
      local_158 = local_8c;
      local_154[(uint)bVar5 * -2] = local_154[(uint)bVar5 * -2 + 0x33];
      local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x34];
      local_f8 = *(float *)target_pos - local_158;
      local_f4 = *(float *)&target_pos->field_0x4 - local_154[0];
      local_f0 = *(float *)&target_pos->field_0x8 - local_154[1];
      local_104 = *(float *)target_pos - local_158;
      local_154[(uint)bVar5 * -2 + 0x15] = local_154[(uint)bVar5 * -2 + 0x18];
      local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16] =
           local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
      local_140 = local_104 - local_11c;
      local_13c = local_100 - local_118;
      local_138 = local_fc - local_114;
      local_80[0] = local_104 - local_11c;
      local_154[(uint)bVar5 * -2 + 0x36] = local_154[(uint)bVar5 * -2 + 6];
      local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x37] =
           local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
      core_vecdir_cpp_FUN_005838f0(local_154 + 0x35);
      local_b0 = local_110;
      local_154[(uint)bVar5 * -2 + 0x2a] = local_154[(uint)bVar5 * -2 + 0x12];
      local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2b] =
           local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
      fVar2 = (float)core_actor_cpp_FUN_0040d0c0(local_ac - *(float *)&this_ptr->field_0x34);
      fVar4 = -local_1c;
      if ((-local_1c <= fVar2) && (fVar4 = fVar2, local_1c < fVar2)) {
        fVar4 = local_1c;
      }
    }
    else {
      local_17c = local_e0 - *(float *)direction;
      local_178 = local_dc - *(float *)&direction->field_0x4;
      local_174 = local_d8 - *(float *)&direction->field_0x8;
      local_a4 = local_e0 - *(float *)direction;
      local_154[(uint)bVar5 * -2 + 0x2d] = *(float *)((int)&stack0xfffffe88 + (uint)bVar5 * -8);
      local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2e] =
           local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -8];
      local_68 = SQRT(local_9c * local_9c + local_a4 * local_a4);
      local_a0 = 0.0;
      if (local_18c < local_68) {
        local_34 = local_18c / local_68;
        local_a4 = local_a4 * local_34;
        local_a0 = local_34 * 0.0;
        local_9c = local_9c * local_34;
      }
      puVar1 = &this_ptr->field_0x257c;
      *(float *)puVar1 = *(float *)puVar1 + local_a4;
      *(float *)&this_ptr->field_0x2580 = *(float *)&this_ptr->field_0x2580 + local_a0;
      *(float *)&this_ptr->field_0x2584 = *(float *)&this_ptr->field_0x2584 + local_9c;
      local_128 = local_e0 - *(float *)puVar1;
      local_124 = local_dc - *(float *)&this_ptr->field_0x2580;
      local_120 = local_d8 - *(float *)&this_ptr->field_0x2584;
      local_188 = local_e0 - *(float *)puVar1;
      *(float *)((int)&stack0xfffffe7c + (uint)bVar5 * 0xfffffffe * 4) =
           local_154[(uint)bVar5 * -2 + 0xc];
      *(float *)(local_164 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + -0x1c) =
           local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
      core_vecdir_cpp_FUN_005838f0(&stack0xfffffe78);
      local_134 = local_ec;
      local_154[(uint)bVar5 * -2 + 9] = local_154[(uint)bVar5 * -2 + 0x1b];
      local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
           local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c];
      fVar2 = (float)core_actor_cpp_FUN_0040d0c0(local_130 - local_198);
      fVar4 = -local_1c;
      if ((fVar4 <= fVar2) && (fVar4 = fVar2, local_1c < fVar2)) {
        fVar4 = local_1c;
      }
    }
    *(float *)&this_ptr->field_0x2578 = fVar4;
    if (*(int *)&this_ptr->field_0x2814 != 0) {
      fVar4 = -local_18c;
      local_dc = local_dc - *(float *)&direction->field_0x4;
      if ((fVar4 <= local_dc) && (fVar4 = local_dc, local_18c < local_dc)) {
        fVar4 = local_18c;
      }
      *(float *)&this_ptr->field_0x2580 = fVar4;
    }
  }
  else {
    if (path_map == (CPathMap *)0x0) {
      path_map = core_path_cpp_getPathMap_FUN_00513ea0((CLocation *)target_pos);
    }
    iVar3 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                      (path_map,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)local_164,
                       *(int *)&this_ptr->field_0x6c);
    if (iVar3 == 0) {
      if (local_3c == 0) {
        engine_console_cpp_FUN_00436710(g_CConsolePtr,"CCharacter::walkToPoint - go somewhere failed\n");
        return -1;
      }
      return 1;
    }
    local_60 = -local_18c;
    local_40 = local_190 - local_194;
    local_2c = local_60;
    if ((local_60 <= local_40) && (local_2c = local_40, local_18c < local_40)) {
      local_2c = local_18c;
    }
    *(float *)&this_ptr->field_0x2584 = *(float *)&this_ptr->field_0x2584 + local_2c;
    local_18 = (float)local_164._4_4_ - *(float *)&this_ptr->field_0x34;
    fVar2 = (float)core_actor_cpp_FUN_0040d0c0(local_18);
    fVar4 = -local_1c;
    if ((fVar4 <= fVar2) && (fVar4 = fVar2, local_1c < fVar2)) {
      fVar4 = local_1c;
    }
    *(float *)&this_ptr->field_0x2578 = *(float *)&this_ptr->field_0x2578 + fVar4;
  }
  if (local_3c == 0) {
    return 0;
  }
  return 1;
}
