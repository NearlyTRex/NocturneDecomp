// Name: core_path.cpp_CPathMap_findPathToDestination_FUN_004f0c20
// Address: 004f0c20
// Address Range: [[004f0c20, 004f14fe]]
// Convention: __cdecl
// Signature: int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_004f0c20(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_004f0c20(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)

{
  uint *puVar1;
  CVector3f *pCVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *unaff_EBX;
  float *unaff_ESI;
  float *pfVar8;
  byte bVar9;
  double dVar10;
  int unaff_retaddr;
  float afStackY_1040 [959];
  float fStack_128;
  float fStack_124;
  float *pfStack_120;
  CVector3f *apCStack_11c [3];
  float local_110;
  float local_10c;
  float fStack_108;
  byte local_f8 [28];
  CVector3f local_dc;
  byte local_d0 [8];
  float fStack_c8;
  float local_c4;
  float fStack_c0;
  int local_b0;
  uint local_ac;
  int iStack_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  uint local_98;
  float local_8c;
  float local_88;
  float fStack_84;
  byte local_70 [12];
  CVector3f local_64;
  int local_58;
  float afStack_54 [2];
  CVector3f local_4c;
  CVector3f local_40;
  uint local_2c;
  uint local_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  int local_18;
  
  bVar9 = 0;
  apCStack_11c[0] = dest_position;
  pfStack_120 = (float *)&DAT_01fba938;
  fStack_124 = 7.259422e-39;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700();
  pfVar8 = (float *)((int)this_ptr + (uint)bVar9 * -8 + 0x1c);
  (this_ptr->dest_voxel_coords).x = local_58;
  *pfVar8 = afStack_54[(uint)bVar9 * -2];
  pfVar8[(uint)bVar9 * -2 + 1] = afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  local_a0 = 0.0;
  local_9c = 0.0;
  local_98 = 0;
  switch(direction_hint % 9) {
  case 1:
    local_a0 = 5.60519e-45;
    break;
  case 2:
    local_a0 = -NAN;
    break;
  case 3:
    local_98 = 4;
    break;
  case 4:
    local_98 = 0xfffffffc;
    break;
  case 5:
    local_98 = 4;
    local_a0 = 5.60519e-45;
    break;
  case 6:
    local_98 = 4;
    local_a0 = -NAN;
    break;
  case 7:
    local_98 = 0xfffffffc;
    local_a0 = -NAN;
    break;
  case 8:
    local_98 = 0xfffffffc;
    local_a0 = 5.60519e-45;
  }
  local_ac = (this_ptr->voxel_coords).x - (this_ptr->dest_voxel_coords).x;
  if (0x31 < (int)((local_ac ^ (int)local_ac >> 0x1f) - ((int)local_ac >> 0x1f))) {
    local_4c.x = (this_ptr->current_position).x - dest_position->x;
    local_4c.y = (this_ptr->current_position).y - dest_position->y;
    local_4c.z = (this_ptr->current_position).z - dest_position->z;
    apCStack_11c[0] = &local_4c;
    pfStack_120 = (float *)local_d0;
LAB_004f0ce0:
    puVar1 = (uint *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
    if (puVar1 != unaff_EBX) {
      *unaff_EBX = *puVar1;
      unaff_EBX[1] = puVar1[1];
      unaff_EBX[2] = puVar1[2];
    }
    return 2;
  }
  local_a4 = (float)((this_ptr->voxel_coords).z - (this_ptr->dest_voxel_coords).z);
  if (0x31 < (int)(((uint)local_a4 ^ (int)local_a4 >> 0x1f) - ((int)local_a4 >> 0x1f))) {
    local_64.x = (this_ptr->current_position).x - dest_position->x;
    local_64.y = (this_ptr->current_position).y - dest_position->y;
    local_64.z = (this_ptr->current_position).z - dest_position->z;
    apCStack_11c[0] = &local_64;
    pfStack_120 = &local_88;
    fStack_124 = 7.26003e-39;
    pCVar2 = (CVector3f *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
    if (pCVar2 == out_euler_angles) {
      return 2;
    }
    out_euler_angles->x = pCVar2->x;
    out_euler_angles->y = pCVar2->y;
    out_euler_angles->z = pCVar2->z;
    return 2;
  }
  _DAT_01e3161c = (this_ptr->dest_voxel_coords).x - (this_ptr->grid_origin).x;
  _DAT_01e31628 = 0x32;
  _DAT_01e31624 = 0x32;
  _DAT_01e31620 = (this_ptr->dest_voxel_coords).z - (this_ptr->grid_origin).z;
  if ((((_DAT_01e3161c < 0) || (99 < _DAT_01e3161c)) || (_DAT_01e31620 < 0)) || (99 < _DAT_01e31620)
     ) {
    local_dc.x = (this_ptr->current_position).x - dest_position->x;
    local_dc.y = (this_ptr->current_position).y - dest_position->y;
    local_dc.z = (this_ptr->current_position).z - dest_position->z;
    apCStack_11c[0] = &local_dc;
    pfStack_120 = &local_c4;
    fStack_124 = 7.260253e-39;
    pCVar2 = (CVector3f *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
    if (pCVar2 == out_euler_angles) {
      return 2;
    }
    out_euler_angles->x = pCVar2->x;
    out_euler_angles->y = pCVar2->y;
    out_euler_angles->z = pCVar2->z;
    return 2;
  }
  if ((_DAT_01e3161c == 0x32) && (_DAT_01e31620 == 0x32)) {
    local_40.x = (this_ptr->current_position).x - dest_position->x;
    local_40.y = (this_ptr->current_position).y - dest_position->y;
    local_40.z = (this_ptr->current_position).z - dest_position->z;
    apCStack_11c[0] = &local_40;
    pfStack_120 = (float *)local_70;
    fStack_124 = 7.261122e-39;
    pCVar2 = (CVector3f *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
    if (pCVar2 != out_euler_angles) {
      out_euler_angles->x = pCVar2->x;
      out_euler_angles->y = pCVar2->y;
      out_euler_angles->z = pCVar2->z;
    }
    return 1;
  }
  apCStack_11c[0] = (CVector3f *)0x4f0ef9;
  dVar10 = round((double)(this_ptr->current_position).x);
  local_18 = (int)ROUND(dVar10);
  pfStack_120 = (float *)0x4f0f07;
  dVar10 = round((double)dest_position->x);
  local_1c = (int)ROUND(dVar10);
  fStack_124 = 7.260452e-39;
  dVar10 = round((double)(this_ptr->current_position).z);
  iStack_20 = (int)ROUND(dVar10);
  fStack_128 = 7.260473e-39;
  dVar10 = round((double)*(float *)(unaff_retaddr + 8));
  iStack_24 = (int)ROUND(dVar10);
  iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
                    (this_ptr,_DAT_01e31620,_DAT_01e3161c,(this_ptr->dest_voxel_coords).y);
  iVar4 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
                    (this_ptr,_DAT_01e31628,_DAT_01e31624,(this_ptr->voxel_coords).y);
  iVar3 = core_path_cpp_CPathMap_isLineWalkable_FUN_004f0540
                    (this_ptr,_DAT_01e3161c,_DAT_01e31620,iVar3,_DAT_01e31624,_DAT_01e31628,iVar4);
  if (iVar3 != 0) {
    local_4c.z = _DAT_01fba96c;
    local_40.x = _DAT_01fba970;
    local_40.y = _DAT_01fba974;
    if ((CPathMap *)&local_8c != this_ptr) {
      local_8c = (this_ptr->current_position).x;
      local_88 = (this_ptr->current_position).y;
      fStack_84 = (this_ptr->current_position).z;
    }
    iStack_24 = iStack_a8;
    local_8c = (float)local_b0 * _DAT_01fba96c + local_8c;
    fStack_84 = (float)iStack_a8 * _DAT_01fba974 + fStack_84;
    fStack_c8 = (this_ptr->current_position).x - *unaff_ESI;
    local_c4 = (this_ptr->current_position).y - unaff_ESI[1];
    fStack_c0 = (this_ptr->current_position).z - unaff_ESI[2];
    puVar1 = (uint *)
             core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                       (&local_40.z,&fStack_c8);
    if (puVar1 != unaff_EBX) {
      *unaff_EBX = *puVar1;
      unaff_EBX[1] = puVar1[1];
      unaff_EBX[2] = puVar1[2];
    }
    return 1;
  }
  iVar3 = core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_004f0790
                    (this_ptr,_DAT_01e31624,_DAT_01e31628,_DAT_01e3161c,_DAT_01e31620);
  if (iVar3 == 0) {
    uVar6 = core_path_cpp_CPathMap_searchGrid_FUN_004f20a0(this_ptr,(this_ptr->dest_voxel_coords).y)
    ;
    if (uVar6 != 0) {
      uVar6 = this_ptr->height_cache[_DAT_01e31628][_DAT_01e31624] - (this_ptr->voxel_coords).y;
      uVar7 = (int)uVar6 >> 0x1f;
      if (3 < (int)((uVar6 ^ uVar7) - uVar7)) {
        local_a4 = (this_ptr->current_position).x - *unaff_ESI;
        local_a0 = (this_ptr->current_position).y - unaff_ESI[1];
        local_9c = (this_ptr->current_position).z - unaff_ESI[2];
        puVar1 = (uint *)
                 core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                           (local_f8,&local_a4);
        if (puVar1 == unaff_EBX) {
          return 2;
        }
        *unaff_EBX = *puVar1;
        unaff_EBX[1] = puVar1[1];
        unaff_EBX[2] = puVar1[2];
        return 2;
      }
      local_28 = 0xffffffff;
      iVar3 = _DAT_01e31624;
      iVar4 = _DAT_01e31628;
      uVar6 = 0xffffffff;
      do {
        uVar7 = (uint)*(byte *)(iVar4 * 100 + 0x1e40098 + iVar3);
        local_2c = local_28;
        local_28 = uVar6;
        if (uVar7 == 0) {
          fStack_128 = (this_ptr->current_position).x - *unaff_ESI;
          fStack_124 = (this_ptr->current_position).y - unaff_ESI[1];
          pfStack_120 = (float *)((this_ptr->current_position).z - unaff_ESI[2]);
          puVar1 = (uint *)
                   core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                             (apCStack_11c,&fStack_128);
          if (puVar1 == unaff_EBX) {
            return 2;
          }
          *unaff_EBX = *puVar1;
          unaff_EBX[1] = puVar1[1];
          unaff_EBX[2] = puVar1[2];
          return 2;
        }
        iVar3 = iVar3 - *(int *)(&DAT_005be0e8 + uVar7 * 4);
        iVar4 = iVar4 - *(int *)(&DAT_005be10c + uVar7 * 4);
        if (iVar3 < 0) {
          PTR_01cc4800 = "..\\core\\path.cpp";
          INT_01cc4804 = 0x547;
          core_main_c_FUN_004c8440("Out of bounds1!");
        }
        if (iVar4 < 0) {
          PTR_01cc4800 = "..\\core\\path.cpp";
          INT_01cc4804 = 0x548;
          core_main_c_FUN_004c8440("Out of bounds2!");
        }
        if (99 < iVar3) {
          PTR_01cc4800 = "..\\core\\path.cpp";
          INT_01cc4804 = 0x549;
          core_main_c_FUN_004c8440("Out of bounds3!");
        }
        if (99 < iVar4) {
          PTR_01cc4800 = "..\\core\\path.cpp";
          INT_01cc4804 = 0x54a;
          core_main_c_FUN_004c8440("Out of bounds4!");
        }
        uVar6 = uVar7;
      } while ((iVar3 != _DAT_01e3161c) || (iVar4 != _DAT_01e31620));
      *unaff_EBX = 0;
      unaff_EBX[2] = 0;
      uVar5 = core_path_cpp_CPathMap_getDirection_FUN_004efeb0
                        (this_ptr,uVar7,local_28,local_2c,unaff_ESI);
      unaff_EBX[1] = uVar5;
      return 1;
    }
    local_110 = (this_ptr->current_position).x - *unaff_ESI;
    local_10c = (this_ptr->current_position).y - unaff_ESI[1];
    fStack_108 = (this_ptr->current_position).z - unaff_ESI[2];
    goto LAB_004f0ce0;
  }
  if (iVar3 == 1) {
    if (_DAT_01e31624 <= _DAT_01e3161c) {
      if (_DAT_01e31624 < _DAT_01e3161c) {
        uVar5 = 4;
      }
      else if (_DAT_01e31620 < _DAT_01e31628) {
        uVar5 = 1;
      }
      else {
        uVar5 = 2;
      }
      goto LAB_004f1185;
    }
  }
  else {
    if (_DAT_01e31620 < _DAT_01e31628) {
      uVar5 = 1;
      goto LAB_004f1185;
    }
    if (_DAT_01e31628 < _DAT_01e31620) {
      uVar5 = 2;
      goto LAB_004f1185;
    }
    if (_DAT_01e31624 <= _DAT_01e3161c) {
      uVar5 = 4;
      goto LAB_004f1185;
    }
  }
  uVar5 = 3;
LAB_004f1185:
  *unaff_EBX = 0;
  unaff_EBX[2] = 0;
  uVar5 = core_path_cpp_CPathMap_getDirection_FUN_004efeb0
                    (this_ptr,uVar5,0xffffffff,0xffffffff,unaff_ESI);
  unaff_EBX[1] = uVar5;
  return 1;
}
