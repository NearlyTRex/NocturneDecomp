// Name: core_path.cpp_CPathMap_findPathToDestination_FUN_0050baa0
// Address: 0050baa0
// Address Range: [[0050baa0, 0050c577]]
// Convention: __cdecl
// Signature: int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_0050baa0(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_0050baa0(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  byte bVar8;
  float10 fVar9;
  int aiStackY_11cc [3];
  float afStackY_11c0 [6];
  int aiStackY_11a8 [6];
  float afStackY_1190 [996];
  CVector3f local_1e4;
  float local_1d8;
  float local_1d4 [2];
  CVector3f local_1cc;
  float local_1c0;
  int aiStack_1bc [5];
  float local_1a8;
  float afStack_1a4 [4];
  float local_194;
  float local_190 [3];
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
  float local_154;
  float afStack_150 [5];
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c [2];
  uint local_124;
  uint local_11c;
  float local_118;
  float afStack_114 [4];
  float local_104;
  int local_100;
  float afStack_fc [5];
  CVector3f local_e8;
  float local_dc;
  float afStack_d8 [4];
  float local_c8;
  CVector3f local_c4;
  float local_b8;
  float afStack_b4 [5];
  CVector3f local_a0;
  float local_94;
  float afStack_90 [5];
  float local_7c [3];
  float local_70;
  CVector3f local_64;
  CVector3f local_58;
  float local_4c;
  float afStack_48 [5];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  uint local_1c;
  uint local_18;
  int local_14;
  
  bVar8 = 0;
  core_dtrace_cpp_FUN_00477ac0(&g_CDemonRaytraceInstance,dest_position);
  pfVar7 = (float *)((int)this_ptr + (uint)bVar8 * -8 + 0x1c);
  (this_ptr->dest_voxel_coords).x = local_100;
  *pfVar7 = afStack_fc[(uint)bVar8 * -2];
  pfVar7[(uint)bVar8 * -2 + 1] = afStack_fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  aiStack_1bc[2] = 0;
  aiStack_1bc[3] = 0;
  aiStack_1bc[4] = 0;
  switch(direction_hint % 9) {
  case 1:
    aiStack_1bc[2] = 4;
    break;
  case 2:
    aiStack_1bc[2] = -4;
    break;
  case 3:
    aiStack_1bc[4] = 4;
    break;
  case 4:
    aiStack_1bc[4] = -4;
    break;
  case 5:
    aiStack_1bc[4] = 4;
    aiStack_1bc[2] = 4;
    break;
  case 6:
    aiStack_1bc[4] = 4;
    aiStack_1bc[2] = -4;
    break;
  case 7:
    aiStack_1bc[4] = -4;
    aiStack_1bc[2] = -4;
    break;
  case 8:
    aiStack_1bc[4] = -4;
    aiStack_1bc[2] = 4;
  }
  local_124 = (this_ptr->voxel_coords).x - (this_ptr->dest_voxel_coords).x;
  if (0x31 < (int)((local_124 ^ (int)local_124 >> 0x1f) - ((int)local_124 >> 0x1f))) {
    local_130 = (this_ptr->current_position).x - dest_position->x;
    local_12c[0] = (this_ptr->current_position).y - dest_position->y;
    local_12c[1] = (this_ptr->current_position).z - dest_position->z;
    local_dc = local_130;
    afStack_d8[(uint)bVar8 * -2] = local_12c[(uint)bVar8 * -2];
    afStack_d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         local_12c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&local_dc);
    local_c4.x = local_1a8;
    *(float *)((int)&local_c4 + (uint)bVar8 * -8 + 4) = afStack_1a4[(uint)bVar8 * -2];
    *(float *)((int)&local_c4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_1a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if (&local_c4 != out_euler_angles) {
      out_euler_angles->x = local_c4.x;
      out_euler_angles->y = local_c4.y;
      out_euler_angles->z = local_c4.z;
    }
    return 2;
  }
  local_11c = (this_ptr->voxel_coords).z - (this_ptr->dest_voxel_coords).z;
  if (0x31 < (int)((local_11c ^ (int)local_11c >> 0x1f) - ((int)local_11c >> 0x1f))) {
    local_1d8 = (this_ptr->current_position).x - dest_position->x;
    local_1d4[0] = (this_ptr->current_position).y - dest_position->y;
    local_1d4[1] = (this_ptr->current_position).z - dest_position->z;
    afStack_90[2] = local_1d8;
    afStack_90[(uint)bVar8 * -2 + 3] = local_1d4[(uint)bVar8 * -2];
    afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         local_1d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_90 + 2);
    local_58.x = local_94;
    *(float *)((int)&local_58 + (uint)bVar8 * -8 + 4) = afStack_90[(uint)bVar8 * -2];
    *(float *)((int)&local_58 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if (&local_58 == out_euler_angles) {
      return 2;
    }
    out_euler_angles->x = local_58.x;
    out_euler_angles->y = local_58.y;
    out_euler_angles->z = local_58.z;
    return 2;
  }
  _DAT_01ec183c = (this_ptr->dest_voxel_coords).x - (this_ptr->grid_origin).x;
  _DAT_01ec1848 = 0x32;
  _DAT_01ec1844 = 0x32;
  _DAT_01ec1840 = (this_ptr->dest_voxel_coords).z - (this_ptr->grid_origin).z;
  if ((((_DAT_01ec183c < 0) || (99 < _DAT_01ec183c)) || (_DAT_01ec1840 < 0)) || (99 < _DAT_01ec1840)
     ) {
    local_16c = (this_ptr->current_position).x - dest_position->x;
    local_168 = (this_ptr->current_position).y - dest_position->y;
    local_164 = (this_ptr->current_position).z - dest_position->z;
    afStack_150[2] = local_16c;
    afStack_150[(uint)bVar8 * -2 + 3] = afStack_1a4[(uint)bVar8 * -2 + 0xf];
    afStack_150[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_1a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_150 + 2);
    local_a0.x = local_4c;
    *(float *)((int)&local_a0 + (uint)bVar8 * -8 + 4) = afStack_48[(uint)bVar8 * -2];
    *(float *)((int)&local_a0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if (&local_a0 == out_euler_angles) {
      return 2;
    }
    out_euler_angles->x = local_a0.x;
    out_euler_angles->y = local_a0.y;
    out_euler_angles->z = local_a0.z;
    return 2;
  }
  if ((_DAT_01ec183c == 0x32) && (_DAT_01ec1840 == 0x32)) {
    local_34 = (this_ptr->current_position).x - dest_position->x;
    local_30 = (this_ptr->current_position).y - dest_position->y;
    local_2c = (this_ptr->current_position).z - dest_position->z;
    afStack_48[2] = local_34;
    afStack_48[(uint)bVar8 * -2 + 3] = afStack_48[(uint)bVar8 * -2 + 6];
    afStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_48 + 2);
    local_1e4.x = local_1c0;
    *(int *)((int)&local_1e4 + (uint)bVar8 * -8 + 4) = aiStack_1bc[(uint)bVar8 * -2];
    *(int *)((int)&local_1e4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         aiStack_1bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if (&local_1e4 != out_euler_angles) {
      out_euler_angles->x = local_1e4.x;
      out_euler_angles->y = local_1e4.y;
      out_euler_angles->z = local_1e4.z;
    }
    return 1;
  }
  fVar9 = (float10)(this_ptr->current_position).x;
  pfVar7 = (float *)round();
  local_14 = (int)ROUND(fVar9);
  fVar9 = (float10)*pfVar7;
  round();
  local_14 = (int)ROUND(fVar9);
  fVar9 = (float10)(this_ptr->current_position).z;
  iVar1 = round();
  local_14 = (int)ROUND(fVar9);
  fVar9 = (float10)*(float *)(iVar1 + 8);
  round();
  local_14 = (int)ROUND(fVar9);
  iVar1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_0050b320
                    (this_ptr,_DAT_01ec1840,_DAT_01ec183c,(this_ptr->dest_voxel_coords).y);
  iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_0050b320
                    (this_ptr,_DAT_01ec1848,_DAT_01ec1844,(this_ptr->voxel_coords).y);
  iVar1 = core_path_cpp_CPathMap_isLineWalkable_FUN_0050b3c0
                    (this_ptr,_DAT_01ec183c,_DAT_01ec1840,iVar1,_DAT_01ec1844,_DAT_01ec1848,iVar2);
  if (iVar1 != 0) {
    local_70 = g_CDemonRaytraceInstance.adjusted_size.x;
    afStack_90[(uint)bVar8 * -2 + 9] =
         *(float *)((int)&g_CDemonRaytraceInstance + (uint)bVar8 * -8 + 0x38);
    afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
         *(float *)((uint)bVar8 * -8 + 0x203b3b8 + (uint)bVar8 * -8);
    afStack_d8[2] = local_70;
    afStack_d8[(uint)bVar8 * -2 + 3] = afStack_90[(uint)bVar8 * -2 + 9];
    afStack_d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
    if ((CPathMap *)(afStack_150 + 5) != this_ptr) {
      local_13c = (this_ptr->current_position).x;
      local_138 = (this_ptr->current_position).y;
      local_134 = (this_ptr->current_position).z;
    }
    local_14 = aiStack_1bc[4];
    local_13c = (float)aiStack_1bc[2] * afStack_d8[2] + local_13c;
    local_134 = (float)aiStack_1bc[4] * local_c8 + local_134;
    afStack_114[2] = (this_ptr->current_position).x - dest_position->x;
    afStack_114[3] = (this_ptr->current_position).y - dest_position->y;
    local_104 = (this_ptr->current_position).z - dest_position->z;
    local_118 = afStack_114[2];
    afStack_114[(uint)bVar8 * -2] = afStack_114[(uint)bVar8 * -2 + 3];
    afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&local_118);
    local_e8.x = afStack_b4[2];
    *(float *)((int)&local_e8 + (uint)bVar8 * -8 + 4) = afStack_b4[(uint)bVar8 * -2 + 3];
    *(float *)((int)&local_e8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_b4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    if (&local_e8 != out_euler_angles) {
      out_euler_angles->x = local_e8.x;
      out_euler_angles->y = local_e8.y;
      out_euler_angles->z = local_e8.z;
    }
    return 1;
  }
  iVar1 = core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_0050b610
                    (this_ptr,_DAT_01ec1844,_DAT_01ec1848,_DAT_01ec183c,_DAT_01ec1840);
  if (iVar1 == 0) {
    uVar5 = core_path_cpp_CPathMap_searchGrid_FUN_0050d170(this_ptr,(this_ptr->dest_voxel_coords).y)
    ;
    if (uVar5 != 0) {
      uVar5 = this_ptr->height_cache[_DAT_01ec1848][_DAT_01ec1844] - (this_ptr->voxel_coords).y;
      uVar6 = (int)uVar5 >> 0x1f;
      if (3 < (int)((uVar5 ^ uVar6) - uVar6)) {
        local_178 = (this_ptr->current_position).x - dest_position->x;
        local_174 = (this_ptr->current_position).y - dest_position->y;
        local_170 = (this_ptr->current_position).z - dest_position->z;
        afStack_fc[2] = local_178;
        afStack_fc[(uint)bVar8 * -2 + 3] = afStack_1a4[(uint)bVar8 * -2 + 0xc];
        afStack_fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_1a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_fc + 2);
        local_1cc.x = local_b8;
        *(float *)((int)&local_1cc + (uint)bVar8 * -8 + 4) = afStack_b4[(uint)bVar8 * -2];
        *(float *)((int)&local_1cc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_b4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        if (&local_1cc == out_euler_angles) {
          return 2;
        }
        out_euler_angles->x = local_1cc.x;
        out_euler_angles->y = local_1cc.y;
        out_euler_angles->z = local_1cc.z;
        return 2;
      }
      uVar5 = 0xffffffff;
      local_18 = 0xffffffff;
      iVar1 = _DAT_01ec1848;
      iVar2 = _DAT_01ec1844;
      do {
        local_1c = local_18;
        local_18 = uVar5;
        uVar5 = (uint)*(byte *)(iVar2 + 0x1ed02b8 + iVar1 * 100);
        if (uVar5 == 0) {
          local_184 = (this_ptr->current_position).x - dest_position->x;
          local_180 = (this_ptr->current_position).y - dest_position->y;
          local_17c = (this_ptr->current_position).z - dest_position->z;
          local_190[0] = local_184;
          afStack_1a4[(uint)bVar8 * -2 + 6] = afStack_1a4[(uint)bVar8 * -2 + 9];
          afStack_1a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
               afStack_1a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_1a4 + 5);
          local_160.x = local_154;
          *(float *)((int)&local_160 + (uint)bVar8 * -8 + 4) = afStack_150[(uint)bVar8 * -2];
          *(float *)((int)&local_160 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               afStack_150[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if (&local_160 == out_euler_angles) {
            return 2;
          }
          out_euler_angles->x = local_160.x;
          out_euler_angles->y = local_160.y;
          out_euler_angles->z = local_160.z;
          return 2;
        }
        iVar2 = iVar2 - *(int *)(&DAT_00603664 + uVar5 * 4);
        iVar1 = iVar1 - *(int *)(&DAT_00603688 + uVar5 * 4);
        if (iVar2 < 0) {
          _DAT_01d71de0 = "..\\core\\path.cpp";
          _DAT_01d71de4 = 0x548;
          core_main_c_FUN_004e4330("Out of bounds1!");
        }
        if (iVar1 < 0) {
          _DAT_01d71de0 = "..\\core\\path.cpp";
          _DAT_01d71de4 = 0x549;
          core_main_c_FUN_004e4330("Out of bounds2!");
        }
        if (99 < iVar2) {
          _DAT_01d71de0 = "..\\core\\path.cpp";
          _DAT_01d71de4 = 0x54a;
          core_main_c_FUN_004e4330("Out of bounds3!");
        }
        if (99 < iVar1) {
          _DAT_01d71de0 = "..\\core\\path.cpp";
          _DAT_01d71de4 = 0x54b;
          core_main_c_FUN_004e4330("Out of bounds4!");
        }
      } while ((iVar2 != _DAT_01ec183c) || (iVar1 != _DAT_01ec1840));
      out_euler_angles->x = 0.0;
      out_euler_angles->z = 0.0;
      fVar4 = (float)core_path_cpp_FUN_0050ae20(this_ptr,uVar5,local_18,local_1c,dest_position);
      out_euler_angles->y = fVar4;
      return 1;
    }
    afStack_1a4[2] = (this_ptr->current_position).x - dest_position->x;
    afStack_1a4[3] = (this_ptr->current_position).y - dest_position->y;
    local_194 = (this_ptr->current_position).z - dest_position->z;
    local_7c[0] = afStack_1a4[2];
    afStack_90[(uint)bVar8 * -2 + 6] = afStack_1a4[(uint)bVar8 * -2 + 3];
    afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
         afStack_1a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_90 + 5);
    local_64.x = local_28;
    *(float *)((int)&local_64 + (uint)bVar8 * -8 + 4) = afStack_48[(uint)bVar8 * -2 + 9];
    *(float *)((int)&local_64 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
    if (&local_64 == out_euler_angles) {
      return 2;
    }
    out_euler_angles->x = local_64.x;
    out_euler_angles->y = local_64.y;
    out_euler_angles->z = local_64.z;
    return 2;
  }
  if (iVar1 == 1) {
    if (_DAT_01ec1844 <= _DAT_01ec183c) {
      if (_DAT_01ec1844 < _DAT_01ec183c) {
        uVar3 = 4;
      }
      else if (_DAT_01ec1840 < _DAT_01ec1848) {
        uVar3 = 1;
      }
      else {
        uVar3 = 2;
      }
      goto LAB_0050c11f;
    }
  }
  else {
    if (_DAT_01ec1840 < _DAT_01ec1848) {
      uVar3 = 1;
      goto LAB_0050c11f;
    }
    if (_DAT_01ec1848 < _DAT_01ec1840) {
      uVar3 = 2;
      goto LAB_0050c11f;
    }
    if (_DAT_01ec1844 <= _DAT_01ec183c) {
      uVar3 = 4;
      goto LAB_0050c11f;
    }
  }
  uVar3 = 3;
LAB_0050c11f:
  out_euler_angles->x = 0.0;
  out_euler_angles->z = 0.0;
  fVar4 = (float)core_path_cpp_FUN_0050ae20(this_ptr,uVar3,0xffffffff,0xffffffff,dest_position);
  out_euler_angles->y = fVar4;
  return 1;
}
