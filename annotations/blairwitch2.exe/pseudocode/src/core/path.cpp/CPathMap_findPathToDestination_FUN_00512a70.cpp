// Name: core_path.cpp_CPathMap_findPathToDestination_FUN_00512a70
// Address: 00512a70
// Address Range: [[00512a70, 00513547]]
// Convention: __cdecl
// Signature: int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_00512a70(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_00512a70(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_11cc [1011];
  CVector3f local_1e4;
  float local_1d8;
  float local_1d4 [2];
  CVector3f local_1cc;
  CVector3f local_1c0;
  int local_1b4;
  uint local_1b0;
  int local_1ac;
  CVector3f local_1a8;
  float local_19c;
  float local_198 [5];
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  CVector3f local_160;
  CVector3f local_154;
  float local_148;
  float afStack_144 [4];
  float local_134;
  float local_130;
  float local_12c [2];
  uint local_124;
  uint local_11c;
  float local_118;
  float afStack_114 [4];
  float local_104;
  uint local_100;
  float local_f4 [3];
  CVector3f local_e8;
  float local_dc;
  float afStack_d8 [4];
  float local_c8;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  CVector3f local_a0;
  CVector3f local_94;
  float local_88;
  float afStack_84 [5];
  float local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  float local_40;
  float afStack_3c [4];
  float local_2c;
  CVector3f local_28;
  uint local_1c;
  uint local_18;
  int local_14;
  
  bVar7 = 0;
  core_dtrace_cpp_FUN_00476a50(&g_CDemonRaytraceInstance,dest_position);
  pfVar6 = (float *)((int)this_ptr + (uint)bVar7 * -8 + 0x1c);
  *(uint *)&this_ptr->field_0x18 = local_100;
  *pfVar6 = afStack_114[(uint)bVar7 * -2 + 6];
  pfVar6[(uint)bVar7 * -2 + 1] = afStack_114[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  local_1b4 = 0;
  local_1b0 = 0;
  local_1ac = 0;
  switch(direction_hint % 9) {
  case 1:
    local_1b4 = 4;
    break;
  case 2:
    local_1b4 = -4;
    break;
  case 3:
    local_1ac = 4;
    break;
  case 4:
    local_1ac = -4;
    break;
  case 5:
    local_1ac = 4;
    local_1b4 = 4;
    break;
  case 6:
    local_1ac = 4;
    local_1b4 = -4;
    break;
  case 7:
    local_1ac = -4;
    local_1b4 = -4;
    break;
  case 8:
    local_1ac = -4;
    local_1b4 = 4;
  }
  local_124 = *(int *)&this_ptr->field_0xc - *(int *)&this_ptr->field_0x18;
  if (0x31 < (int)((local_124 ^ (int)local_124 >> 0x1f) - ((int)local_124 >> 0x1f))) {
    local_130 = *(float *)this_ptr - *(float *)dest_position;
    local_12c[0] = *(float *)&this_ptr->field_0x4 - *(float *)&dest_position->field_0x4;
    local_12c[1] = *(float *)&this_ptr->field_0x8 - *(float *)&dest_position->field_0x8;
    local_dc = *(float *)this_ptr - *(float *)dest_position;
    afStack_d8[(uint)bVar7 * -2] = local_12c[(uint)bVar7 * -2];
    afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         local_12c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    core_vecdir_cpp_FUN_005838f0(&local_dc);
    local_c4._0_4_ = local_1a8._0_4_;
    *(uint *)((int)&local_c4 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&local_1a8 + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&local_c4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&local_1a8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (&local_c4 != out_euler_angles) {
      *(uint *)out_euler_angles = local_c4._0_4_;
      *(uint *)&out_euler_angles->field_0x4 = local_c4._4_4_;
      *(uint *)&out_euler_angles->field_0x8 = local_c4._8_4_;
    }
    return 2;
  }
  local_11c = *(int *)&this_ptr->field_0x14 - *(int *)&this_ptr->field_0x20;
  if (0x31 < (int)((local_11c ^ (int)local_11c >> 0x1f) - ((int)local_11c >> 0x1f))) {
    local_1d8 = *(float *)this_ptr - *(float *)dest_position;
    local_1d4[0] = *(float *)&this_ptr->field_0x4 - *(float *)&dest_position->field_0x4;
    local_1d4[1] = *(float *)&this_ptr->field_0x8 - *(float *)&dest_position->field_0x8;
    local_88 = *(float *)this_ptr - *(float *)dest_position;
    afStack_84[(uint)bVar7 * -2] = local_1d4[(uint)bVar7 * -2];
    afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         local_1d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    core_vecdir_cpp_FUN_005838f0(&local_88);
    local_58._0_4_ = local_94._0_4_;
    *(uint *)((int)&local_58 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&local_94 + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&local_58 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&local_94 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (&local_58 == out_euler_angles) {
      return 2;
    }
    *(uint *)out_euler_angles = local_58._0_4_;
    *(uint *)&out_euler_angles->field_0x4 = local_58._4_4_;
    *(uint *)&out_euler_angles->field_0x8 = local_58._8_4_;
    return 2;
  }
  _DAT_01e501fc = *(int *)&this_ptr->field_0x18 - *(int *)&this_ptr->field_0x24;
  _DAT_01e50208 = 0x32;
  _DAT_01e50204 = 0x32;
  _DAT_01e50200 = *(int *)&this_ptr->field_0x20 - *(int *)&this_ptr->field_0x2c;
  if ((((_DAT_01e501fc < 0) || (99 < _DAT_01e501fc)) || (_DAT_01e50200 < 0)) || (99 < _DAT_01e50200)
     ) {
    local_16c = *(float *)this_ptr - *(float *)dest_position;
    local_168 = *(float *)&this_ptr->field_0x4 - *(float *)&dest_position->field_0x4;
    local_164 = *(float *)&this_ptr->field_0x8 - *(float *)&dest_position->field_0x8;
    local_148 = *(float *)this_ptr - *(float *)dest_position;
    afStack_144[(uint)bVar7 * -2] = local_198[(uint)bVar7 * -2 + 0xc];
    afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         local_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    core_vecdir_cpp_FUN_005838f0(&local_148);
    local_a0._0_4_ = local_4c._0_4_;
    *(uint *)((int)&local_a0 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&local_4c + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&local_a0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&local_4c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (&local_a0 == out_euler_angles) {
      return 2;
    }
    *(uint *)out_euler_angles = local_a0._0_4_;
    *(uint *)&out_euler_angles->field_0x4 = local_a0._4_4_;
    *(uint *)&out_euler_angles->field_0x8 = local_a0._8_4_;
    return 2;
  }
  if ((_DAT_01e501fc == 0x32) && (_DAT_01e50200 == 0x32)) {
    afStack_3c[2] = *(float *)this_ptr - *(float *)dest_position;
    afStack_3c[3] = *(float *)&this_ptr->field_0x4 - *(float *)&dest_position->field_0x4;
    local_2c = *(float *)&this_ptr->field_0x8 - *(float *)&dest_position->field_0x8;
    local_40 = *(float *)this_ptr - *(float *)dest_position;
    afStack_3c[(uint)bVar7 * -2] = afStack_3c[(uint)bVar7 * -2 + 3];
    afStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    core_vecdir_cpp_FUN_005838f0(&local_40);
    local_1e4._0_4_ = local_1c0._0_4_;
    *(uint *)((int)&local_1e4 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&local_1c0 + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&local_1e4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&local_1c0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (&local_1e4 != out_euler_angles) {
      *(uint *)out_euler_angles = local_1e4._0_4_;
      *(uint *)&out_euler_angles->field_0x4 = local_1e4._4_4_;
      *(uint *)&out_euler_angles->field_0x8 = local_1e4._8_4_;
    }
    return 1;
  }
  fVar8 = (float10)*(float *)this_ptr;
  pfVar6 = (float *)round();
  local_14 = (int)ROUND(fVar8);
  fVar8 = (float10)*pfVar6;
  round();
  local_14 = (int)ROUND(fVar8);
  fVar8 = (float10)*(float *)&this_ptr->field_0x8;
  iVar1 = round();
  local_14 = (int)ROUND(fVar8);
  fVar8 = (float10)*(float *)(iVar1 + 8);
  round();
  local_14 = (int)ROUND(fVar8);
  iVar1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
                    (this_ptr,_DAT_01e50200,_DAT_01e501fc,*(int *)&this_ptr->field_0x1c);
  iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
                    (this_ptr,_DAT_01e50208,_DAT_01e50204,*(int *)&this_ptr->field_0x10);
  iVar1 = core_path_cpp_CPathMap_isLineWalkable_FUN_00512390
                    (this_ptr,_DAT_01e501fc,_DAT_01e50200,iVar1,_DAT_01e50204,_DAT_01e50208,iVar2);
  if (iVar1 != 0) {
    local_70 = (float)g_CDemonRaytraceInstance._52_4_;
    afStack_84[(uint)bVar7 * -2 + 6] =
         *(float *)((int)&g_CDemonRaytraceInstance + (uint)bVar7 * -8 + 0x38);
    afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
         *(float *)((uint)bVar7 * -8 + 0x1fc9ca4 + (uint)bVar7 * -8);
    afStack_d8[2] = local_70;
    afStack_d8[(uint)bVar7 * -2 + 3] = afStack_84[(uint)bVar7 * -2 + 6];
    afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    if ((CPathMap *)(afStack_144 + 2) != this_ptr) {
      afStack_144[2] = *(float *)this_ptr;
      afStack_144[3] = (float)*(uint *)&this_ptr->field_0x4;
      local_134 = *(float *)&this_ptr->field_0x8;
    }
    local_14 = local_1ac;
    afStack_144[2] = (float)local_1b4 * afStack_d8[2] + afStack_144[2];
    local_134 = (float)local_1ac * local_c8 + local_134;
    afStack_114[2] = *(float *)this_ptr - *(float *)dest_position;
    afStack_114[3] = *(float *)&this_ptr->field_0x4 - *(float *)&dest_position->field_0x4;
    local_104 = *(float *)&this_ptr->field_0x8 - *(float *)&dest_position->field_0x8;
    local_118 = *(float *)this_ptr - *(float *)dest_position;
    afStack_114[(uint)bVar7 * -2] = afStack_114[(uint)bVar7 * -2 + 3];
    afStack_114[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_114[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    core_vecdir_cpp_FUN_005838f0(&local_118);
    local_e8._0_4_ = local_ac._0_4_;
    *(uint *)((int)&local_e8 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&local_ac + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&local_e8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&local_ac + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (&local_e8 != out_euler_angles) {
      *(uint *)out_euler_angles = local_e8._0_4_;
      *(uint *)&out_euler_angles->field_0x4 = local_e8._4_4_;
      *(uint *)&out_euler_angles->field_0x8 = local_e8._8_4_;
    }
    return 1;
  }
  iVar1 = core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_005125e0
                    (this_ptr,_DAT_01e50204,_DAT_01e50208,_DAT_01e501fc,_DAT_01e50200);
  if (iVar1 == 0) {
    uVar4 = core_path_cpp_CPathMap_searchGrid_FUN_00514140(this_ptr,*(int *)&this_ptr->field_0x1c);
    if (uVar4 != 0) {
      uVar4 = *(int *)(&this_ptr->field_0x30 + _DAT_01e50204 * 4 + _DAT_01e50208 * 400) -
              *(int *)&this_ptr->field_0x10;
      uVar5 = (int)uVar4 >> 0x1f;
      if (3 < (int)((uVar4 ^ uVar5) - uVar5)) {
        local_178 = *(float *)this_ptr - *(float *)dest_position;
        local_174 = *(float *)&this_ptr->field_0x4 - *(float *)&dest_position->field_0x4;
        local_170 = *(float *)&this_ptr->field_0x8 - *(float *)&dest_position->field_0x8;
        local_f4[0] = *(float *)this_ptr - *(float *)dest_position;
        afStack_114[(uint)bVar7 * -2 + 9] = local_198[(uint)bVar7 * -2 + 9];
        afStack_114[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
             local_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
        core_vecdir_cpp_FUN_005838f0(afStack_114 + 8);
        local_1cc._0_4_ = local_b8._0_4_;
        *(uint *)((int)&local_1cc + (uint)bVar7 * -8 + 4) =
             *(uint *)((int)&local_b8 + (uint)bVar7 * -8 + 4);
        *(uint *)((int)&local_1cc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)&local_b8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        if (&local_1cc == out_euler_angles) {
          return 2;
        }
        *(uint *)out_euler_angles = local_1cc._0_4_;
        *(uint *)&out_euler_angles->field_0x4 = local_1cc._4_4_;
        *(uint *)&out_euler_angles->field_0x8 = local_1cc._8_4_;
        return 2;
      }
      uVar4 = 0xffffffff;
      local_18 = 0xffffffff;
      iVar1 = _DAT_01e50208;
      iVar2 = _DAT_01e50204;
      do {
        local_1c = local_18;
        local_18 = uVar4;
        uVar4 = (uint)*(byte *)(iVar2 + 0x1e5ec78 + iVar1 * 100);
        if (uVar4 == 0) {
          local_184 = *(float *)this_ptr - *(float *)dest_position;
          local_180 = *(float *)&this_ptr->field_0x4 - *(float *)&dest_position->field_0x4;
          local_17c = *(float *)&this_ptr->field_0x8 - *(float *)&dest_position->field_0x8;
          local_198[2] = *(float *)this_ptr - *(float *)dest_position;
          local_198[(uint)bVar7 * -2 + 3] = local_198[(uint)bVar7 * -2 + 6];
          local_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               local_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          core_vecdir_cpp_FUN_005838f0(local_198 + 2);
          local_160._0_4_ = local_154._0_4_;
          *(uint *)((int)&local_160 + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&local_154 + (uint)bVar7 * -8 + 4);
          *(uint *)((int)&local_160 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               *(uint *)((int)&local_154 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          if (&local_160 == out_euler_angles) {
            return 2;
          }
          *(uint *)out_euler_angles = local_160._0_4_;
          *(uint *)&out_euler_angles->field_0x4 = local_160._4_4_;
          *(uint *)&out_euler_angles->field_0x8 = local_160._8_4_;
          return 2;
        }
        iVar2 = iVar2 - *(int *)(&DAT_0061b328 + uVar4 * 4);
        iVar1 = iVar1 - *(int *)(&DAT_0061b34c + uVar4 * 4);
        if (iVar2 < 0) {
          _DAT_01d046a0 = "..\\core\\path.cpp";
          _DAT_01d046a4 = 0x547;
          core_main_c_FUN_004e4500("Out of bounds1!");
        }
        if (iVar1 < 0) {
          _DAT_01d046a0 = "..\\core\\path.cpp";
          _DAT_01d046a4 = 0x548;
          core_main_c_FUN_004e4500("Out of bounds2!");
        }
        if (99 < iVar2) {
          _DAT_01d046a0 = "..\\core\\path.cpp";
          _DAT_01d046a4 = 0x549;
          core_main_c_FUN_004e4500("Out of bounds3!");
        }
        if (99 < iVar1) {
          _DAT_01d046a0 = "..\\core\\path.cpp";
          _DAT_01d046a4 = 0x54a;
          core_main_c_FUN_004e4500("Out of bounds4!");
        }
      } while ((iVar2 != _DAT_01e501fc) || (iVar1 != _DAT_01e50200));
      *(uint *)out_euler_angles = 0;
      *(uint *)&out_euler_angles->field_0x8 = 0;
      uVar3 = core_path_cpp_FUN_00511df0(this_ptr,uVar4,local_18,local_1c,dest_position);
      *(uint *)&out_euler_angles->field_0x4 = uVar3;
      return 1;
    }
    local_19c = *(float *)this_ptr - *(float *)dest_position;
    local_198[0] = *(float *)&this_ptr->field_0x4 - *(float *)&dest_position->field_0x4;
    local_198[1] = *(float *)&this_ptr->field_0x8 - *(float *)&dest_position->field_0x8;
    afStack_84[2] = *(float *)this_ptr - *(float *)dest_position;
    afStack_84[(uint)bVar7 * -2 + 3] = local_198[(uint)bVar7 * -2];
    afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         local_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    core_vecdir_cpp_FUN_005838f0(afStack_84 + 2);
    local_64._0_4_ = local_28._0_4_;
    *(uint *)((int)&local_64 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&local_28 + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&local_64 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&local_28 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (&local_64 == out_euler_angles) {
      return 2;
    }
    *(uint *)out_euler_angles = local_64._0_4_;
    *(uint *)&out_euler_angles->field_0x4 = local_64._4_4_;
    *(uint *)&out_euler_angles->field_0x8 = local_64._8_4_;
    return 2;
  }
  if (iVar1 == 1) {
    if (_DAT_01e50204 <= _DAT_01e501fc) {
      if (_DAT_01e50204 < _DAT_01e501fc) {
        uVar3 = 4;
      }
      else if (_DAT_01e50200 < _DAT_01e50208) {
        uVar3 = 1;
      }
      else {
        uVar3 = 2;
      }
      goto LAB_005130ef;
    }
  }
  else {
    if (_DAT_01e50200 < _DAT_01e50208) {
      uVar3 = 1;
      goto LAB_005130ef;
    }
    if (_DAT_01e50208 < _DAT_01e50200) {
      uVar3 = 2;
      goto LAB_005130ef;
    }
    if (_DAT_01e50204 <= _DAT_01e501fc) {
      uVar3 = 4;
      goto LAB_005130ef;
    }
  }
  uVar3 = 3;
LAB_005130ef:
  *(uint *)out_euler_angles = 0;
  *(uint *)&out_euler_angles->field_0x8 = 0;
  uVar3 = core_path_cpp_FUN_00511df0(this_ptr,uVar3,0xffffffff,0xffffffff,dest_position);
  *(uint *)&out_euler_angles->field_0x4 = uVar3;
  return 1;
}
