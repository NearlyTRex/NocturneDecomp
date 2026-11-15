// Name: core_path.cpp_CPathMap_findPathToDestination_FUN_00512a70
// Address: 00512a70
// Address Range: [[00512a70, 00513547]]
// Convention: __cdecl
// Signature: int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_00512a70(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_00512a70(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  float *unaff_EBX;
  float *unaff_ESI;
  float *pfVar7;
  byte bVar8;
  double dVar9;
  int unaff_retaddr;
  float afStackY_11cc [1007];
  uint uStack_1f4;
  uint uStack_1f0;
  CVector3f local_1e4;
  float local_1d8 [5];
  int local_1c4;
  float local_1c0;
  float afStack_1bc [6];
  float fStack_1a4;
  float afStack_1a0 [3];
  float local_194;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float local_184;
  float local_180;
  float local_170;
  float local_16c [8];
  float fStack_14c;
  float local_148;
  float afStack_144 [5];
  float local_130;
  float local_12c [2];
  uint local_124;
  float local_11c;
  float local_118;
  float fStack_114;
  float local_104;
  CVector3i local_100;
  float local_f4 [5];
  float local_e0;
  float local_dc [5];
  float local_c8;
  CVector3f local_c4;
  float local_b8 [6];
  CVector3f local_a0;
  float local_94;
  float afStack_90 [4];
  float fStack_80;
  float fStack_74;
  float local_70;
  float fStack_6c;
  CVector3f local_58;
  float local_4c;
  float afStack_48 [4];
  float fStack_38;
  float local_34;
  float local_30;
  float local_2c;
  uint local_28;
  float fStack_24;
  int iStack_20;
  int local_1c;
  int local_18;
  
  bVar8 = 0;
  uStack_1f0 = 0x512aa1;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00476a50
            (&g_CDemonRaytraceInstance,dest_position,&local_100);
  pfVar7 = (float *)((int)this_ptr + (uint)bVar8 * -8 + 0x1c);
  (this_ptr->dest_voxel_coords).x = local_100.x;
  *pfVar7 = local_f4[(uint)bVar8 * -2 + -2];
  pfVar7[(uint)bVar8 * -2 + 1] = local_f4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -1];
  afStack_1bc[2] = 0.0;
  afStack_1bc[3] = 0.0;
  afStack_1bc[4] = 0.0;
  switch(direction_hint % 9) {
  case 1:
    afStack_1bc[2] = 5.60519e-45;
    break;
  case 2:
    afStack_1bc[2] = -NAN;
    break;
  case 3:
    afStack_1bc[4] = 5.60519e-45;
    break;
  case 4:
    afStack_1bc[4] = -NAN;
    break;
  case 5:
    afStack_1bc[4] = 5.60519e-45;
    afStack_1bc[2] = 5.60519e-45;
    break;
  case 6:
    afStack_1bc[4] = 5.60519e-45;
    afStack_1bc[2] = -NAN;
    break;
  case 7:
    afStack_1bc[4] = -NAN;
    afStack_1bc[2] = -NAN;
    break;
  case 8:
    afStack_1bc[4] = -NAN;
    afStack_1bc[2] = 5.60519e-45;
  }
  local_124 = (this_ptr->voxel_coords).x - (this_ptr->dest_voxel_coords).x;
  if (0x31 < (int)((local_124 ^ (int)local_124 >> 0x1f) - ((int)local_124 >> 0x1f))) {
    local_130 = (this_ptr->current_position).x - dest_position->x;
    local_12c[0] = (this_ptr->current_position).y - dest_position->y;
    local_12c[1] = (this_ptr->current_position).z - dest_position->z;
    local_dc[0] = local_130;
    local_dc[(uint)bVar8 * -2 + 1] = local_12c[(uint)bVar8 * -2];
    local_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2] =
         local_12c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(local_dc);
    local_c4.x = afStack_1bc[5];
    local_b8[(uint)bVar8 * -2 + -2] = afStack_1bc[(uint)bVar8 * -2 + 6];
    local_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -1] =
         afStack_1bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    if (&local_c4 != out_euler_angles) {
      out_euler_angles->x = local_c4.x;
      out_euler_angles->y = local_c4.y;
      out_euler_angles->z = local_c4.z;
    }
    return 2;
  }
  local_11c = (float)((this_ptr->voxel_coords).z - (this_ptr->dest_voxel_coords).z);
  if (0x31 < (int)(((uint)local_11c ^ (int)local_11c >> 0x1f) - ((int)local_11c >> 0x1f))) {
    local_1d8[0] = (this_ptr->current_position).x - dest_position->x;
    local_1d8[1] = (this_ptr->current_position).y - dest_position->y;
    local_1d8[2] = (this_ptr->current_position).z - dest_position->z;
    afStack_90[2] = local_1d8[0];
    afStack_90[(uint)bVar8 * 0xfffffffe + 3] = local_1d8[(uint)bVar8 * -2 + 1];
    afStack_90[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 4] =
         local_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_90 + 2);
    local_58.x = local_94;
    *(float *)((int)&local_58 + (uint)bVar8 * -8 + 4) = afStack_90[(uint)bVar8 * -2];
    *(float *)((int)&local_58 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_90[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 1];
    if (&local_58 == out_euler_angles) {
      return 2;
    }
    out_euler_angles->x = local_58.x;
    out_euler_angles->y = local_58.y;
    out_euler_angles->z = local_58.z;
    return 2;
  }
  _DAT_01e501fc = (this_ptr->dest_voxel_coords).x - (this_ptr->grid_origin).x;
  _DAT_01e50208 = 0x32;
  _DAT_01e50204 = 0x32;
  _DAT_01e50200 = (this_ptr->dest_voxel_coords).z - (this_ptr->grid_origin).z;
  if ((((_DAT_01e501fc < 0) || (99 < _DAT_01e501fc)) || (_DAT_01e50200 < 0)) || (99 < _DAT_01e50200)
     ) {
    local_16c[0] = (this_ptr->current_position).x - dest_position->x;
    local_16c[1] = (this_ptr->current_position).y - dest_position->y;
    local_16c[2] = (this_ptr->current_position).z - dest_position->z;
    local_148 = local_16c[0];
    afStack_144[(uint)bVar8 * -2] = local_16c[(uint)bVar8 * -2 + 1];
    afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         local_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_148);
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
  if ((_DAT_01e501fc == 0x32) && (_DAT_01e50200 == 0x32)) {
    local_34 = (this_ptr->current_position).x - dest_position->x;
    local_30 = (this_ptr->current_position).y - dest_position->y;
    local_2c = (this_ptr->current_position).z - dest_position->z;
    afStack_48[2] = local_34;
    afStack_48[(uint)bVar8 * -2 + 3] = afStack_48[(uint)bVar8 * -2 + 6];
    afStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_48 + 2);
    local_1e4.x = local_1c0;
    local_1d8[(uint)bVar8 * -2 + -2] = afStack_1bc[(uint)bVar8 * -2];
    local_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -1] =
         afStack_1bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if (&local_1e4 != out_euler_angles) {
      out_euler_angles->x = local_1e4.x;
      out_euler_angles->y = local_1e4.y;
      out_euler_angles->z = local_1e4.z;
    }
    return 1;
  }
  dVar9 = round((double)(this_ptr->current_position).x);
  local_18 = (int)ROUND(dVar9);
  dVar9 = round((double)dest_position->x);
  local_1c = (int)ROUND(dVar9);
  uStack_1f0 = 0x512e35;
  dVar9 = round((double)(this_ptr->current_position).z);
  iStack_20 = (int)ROUND(dVar9);
  uStack_1f4 = 0x512e44;
  dVar9 = round((double)*(float *)(unaff_retaddr + 8));
  fStack_24 = (float)(int)ROUND(dVar9);
  iVar1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
                    (this_ptr,_DAT_01e50200,_DAT_01e501fc,(this_ptr->dest_voxel_coords).y);
  iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
                    (this_ptr,_DAT_01e50208,_DAT_01e50204,(this_ptr->voxel_coords).y);
  iVar1 = core_path_cpp_CPathMap_isLineWalkable_FUN_00512390
                    (this_ptr,_DAT_01e501fc,_DAT_01e50200,iVar1,_DAT_01e50204,_DAT_01e50208,iVar2);
  if (iVar1 != 0) {
    fStack_80 = g_CDemonRaytraceInstance.adjusted_size.x;
    afStack_90[(uint)bVar8 * 0xfffffffe + 5] =
         (float)*(uint *)((int)&g_CDemonRaytraceInstance + (uint)bVar8 * -8 + 0x38);
    afStack_90[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 6] =
         (float)*(uint *)((uint)bVar8 * -8 + 0x1fc9ca4 + (uint)bVar8 * -8);
    local_e0 = fStack_80;
    local_dc[(uint)bVar8 * -2] = afStack_90[(uint)bVar8 * 0xfffffffe + 5];
    local_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_90[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 6];
    if ((CPathMap *)&fStack_14c != this_ptr) {
      fStack_14c = (this_ptr->current_position).x;
      local_148 = (this_ptr->current_position).y;
      afStack_144[0] = (this_ptr->current_position).z;
    }
    fStack_24 = afStack_1bc[0];
    fStack_14c = (float)local_1c4 * local_e0 + fStack_14c;
    afStack_144[0] = (float)(int)afStack_1bc[0] * local_dc[1] + afStack_144[0];
    local_11c = (this_ptr->current_position).x - *unaff_ESI;
    local_118 = (this_ptr->current_position).y - unaff_ESI[1];
    fStack_114 = (this_ptr->current_position).z - unaff_ESI[2];
    local_12c[1] = local_11c;
    local_12c[(uint)bVar8 * 0xfffffffe + 2] = local_12c[(uint)bVar8 * 0xfffffffe + 5];
    local_12c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3] =
         local_12c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 6];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(local_12c + 1);
    local_100.z = (int)local_c4.z;
    local_f4[(uint)bVar8 * -2] = local_b8[(uint)bVar8 * -2];
    local_f4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         local_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if ((float *)&local_100.z != unaff_EBX) {
      *unaff_EBX = (float)local_100.z;
      unaff_EBX[1] = local_f4[0];
      unaff_EBX[2] = local_f4[1];
    }
    return 1;
  }
  iVar1 = core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_005125e0
                    (this_ptr,_DAT_01e50204,_DAT_01e50208,_DAT_01e501fc,_DAT_01e50200);
  if (iVar1 == 0) {
    uVar5 = core_path_cpp_CPathMap_searchGrid_FUN_00514140(this_ptr,(this_ptr->dest_voxel_coords).y)
    ;
    if (uVar5 != 0) {
      uVar5 = this_ptr->height_cache[_DAT_01e50208][_DAT_01e50204] - (this_ptr->voxel_coords).y;
      uVar6 = (int)uVar5 >> 0x1f;
      if (3 < (int)((uVar5 ^ uVar6) - uVar6)) {
        fStack_188 = (this_ptr->current_position).x - *unaff_ESI;
        local_184 = (this_ptr->current_position).y - unaff_ESI[1];
        local_180 = (this_ptr->current_position).z - unaff_ESI[2];
        local_104 = fStack_188;
        local_f4[(uint)bVar8 * -2 + -3] = afStack_1bc[(uint)bVar8 * -2 + 0xe];
        local_f4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -2] =
             afStack_1bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xf];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_104);
        local_1e4.z = local_c8;
        local_1d8[(uint)bVar8 * -2] = *(float *)((int)&local_c4 + (uint)bVar8 * -8);
        local_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             local_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -2];
        if (&local_1e4.z == unaff_EBX) {
          return 2;
        }
        *unaff_EBX = local_1e4.z;
        unaff_EBX[1] = local_1d8[0];
        unaff_EBX[2] = local_1d8[1];
        return 2;
      }
      uVar5 = 0xffffffff;
      local_28 = 0xffffffff;
      iVar1 = _DAT_01e50208;
      iVar2 = _DAT_01e50204;
      do {
        local_2c = (float)local_28;
        local_28 = uVar5;
        uVar5 = (uint)*(byte *)(iVar2 + 0x1e5ec78 + iVar1 * 100);
        if (uVar5 == 0) {
          local_194 = (this_ptr->current_position).x - *unaff_ESI;
          local_190 = (this_ptr->current_position).y - unaff_ESI[1];
          fStack_18c = (this_ptr->current_position).z - unaff_ESI[2];
          afStack_1a0[0] = local_194;
          afStack_1bc[(uint)bVar8 * -2 + 8] = afStack_1bc[(uint)bVar8 * -2 + 0xb];
          afStack_1bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 9] =
               afStack_1bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xc];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_1bc + 7);
          local_170 = local_16c[2];
          local_16c[(uint)bVar8 * -2] = local_16c[(uint)bVar8 * -2 + 3];
          local_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               local_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
          if (&local_170 == unaff_EBX) {
            return 2;
          }
          *unaff_EBX = local_170;
          unaff_EBX[1] = local_16c[0];
          unaff_EBX[2] = local_16c[1];
          return 2;
        }
        iVar2 = iVar2 - *(int *)(&DAT_0061b328 + uVar5 * 4);
        iVar1 = iVar1 - *(int *)(&DAT_0061b34c + uVar5 * 4);
        if (iVar2 < 0) {
          _DAT_01d046a0 = "..\\core\\path.cpp";
          _DAT_01d046a4 = 0x547;
          core_main_c_displayErrorAndQuit_FUN_004e4500("Out of bounds1!");
        }
        if (iVar1 < 0) {
          _DAT_01d046a0 = "..\\core\\path.cpp";
          _DAT_01d046a4 = 0x548;
          core_main_c_displayErrorAndQuit_FUN_004e4500("Out of bounds2!");
        }
        if (99 < iVar2) {
          _DAT_01d046a0 = "..\\core\\path.cpp";
          _DAT_01d046a4 = 0x549;
          core_main_c_displayErrorAndQuit_FUN_004e4500("Out of bounds3!");
        }
        if (99 < iVar1) {
          _DAT_01d046a0 = "..\\core\\path.cpp";
          _DAT_01d046a4 = 0x54a;
          core_main_c_displayErrorAndQuit_FUN_004e4500("Out of bounds4!");
        }
      } while ((iVar2 != _DAT_01e501fc) || (iVar1 != _DAT_01e50200));
      *unaff_EBX = 0.0;
      unaff_EBX[2] = 0.0;
      fVar4 = (float)core_path_cpp_FUN_00511df0(this_ptr,uVar5,local_28,local_2c,unaff_ESI);
      unaff_EBX[1] = fVar4;
      return 1;
    }
    afStack_1bc[4] = (this_ptr->current_position).x - *unaff_ESI;
    afStack_1bc[5] = (this_ptr->current_position).y - unaff_ESI[1];
    fStack_1a4 = (this_ptr->current_position).z - unaff_ESI[2];
    afStack_90[1] = afStack_1bc[4];
    afStack_90[(uint)bVar8 * 0xfffffffe + 2] = afStack_1bc[(uint)bVar8 * -2 + 5];
    afStack_90[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 3] =
         afStack_1bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 6];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_90 + 1);
    fStack_74 = fStack_38;
    afStack_90[(uint)bVar8 * 0xfffffffe + 8] = afStack_48[(uint)bVar8 * -2 + 5];
    afStack_90[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 9] =
         afStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 6];
    if (afStack_90 + 7 == unaff_EBX) {
      return 2;
    }
    *unaff_EBX = fStack_74;
    unaff_EBX[1] = local_70;
    unaff_EBX[2] = fStack_6c;
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
  *unaff_EBX = 0.0;
  unaff_EBX[2] = 0.0;
  fVar4 = (float)core_path_cpp_FUN_00511df0(this_ptr,uVar3,0xffffffff,0xffffffff,unaff_ESI);
  unaff_EBX[1] = fVar4;
  return 1;
}
