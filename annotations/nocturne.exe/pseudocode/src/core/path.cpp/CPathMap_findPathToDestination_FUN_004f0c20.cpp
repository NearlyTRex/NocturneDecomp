// Name: core_path.cpp_CPathMap_findPathToDestination_FUN_004f0c20
// Address: 004f0c20
// Address Range: [[004f0c20, 004f14fe]]
// Convention: __cdecl
// Signature: int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_004f0c20(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_004f0c20(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)

{
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  CVector3f *unaff_EBX;
  CVector3f *unaff_ESI;
  uint *puVar7;
  byte bVar8;
  double dVar9;
  int unaff_retaddr;
  float afStackY_1040 [959];
  CVector3f *in_stack_fffffed0;
  CVector3f *in_stack_fffffed4;
  float fStack_128;
  float fStack_124;
  CVector3f local_110;
  CVector3f CStack_104;
  CVector3f local_f8 [2];
  CVector3f local_dc;
  byte auStack_c8 [8];
  float fStack_c0;
  int local_b0;
  uint local_ac;
  int iStack_a8;
  CVector3f local_a4;
  uint local_98;
  float local_8c;
  CVector3f local_88 [2];
  CVector3f local_70;
  CVector3f local_64;
  CVector3i local_58;
  float local_4c;
  float local_48;
  float local_44;
  byte local_40 [20];
  uint local_2c;
  uint local_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  int local_18;
  
  bVar8 = 0;
  fStack_124 = 7.259422e-39;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700
            (&g_CDemonRaytrace_01fba938,dest_position,&local_58);
  puVar7 = (uint *)((int)this_ptr + (uint)bVar8 * -8 + 0x1c);
  (this_ptr->dest_voxel_coords).x = local_58.x;
  *puVar7 = *(uint *)((int)&local_58 + (uint)bVar8 * -8 + 4);
  puVar7[(uint)bVar8 * -2 + 1] =
       *(uint *)((int)&local_58 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  local_a4.y = 0.0;
  local_a4.z = 0.0;
  local_98 = 0;
  switch(direction_hint % 9) {
  case 1:
    local_a4.y = 5.60519e-45;
    break;
  case 2:
    local_a4.y = -NAN;
    break;
  case 3:
    local_98 = 4;
    break;
  case 4:
    local_98 = 0xfffffffc;
    break;
  case 5:
    local_98 = 4;
    local_a4.y = 5.60519e-45;
    break;
  case 6:
    local_98 = 4;
    local_a4.y = -NAN;
    break;
  case 7:
    local_98 = 0xfffffffc;
    local_a4.y = -NAN;
    break;
  case 8:
    local_98 = 0xfffffffc;
    local_a4.y = 5.60519e-45;
  }
  local_ac = (this_ptr->voxel_coords).x - (this_ptr->dest_voxel_coords).x;
  if (0x31 < (int)((local_ac ^ (int)local_ac >> 0x1f) - ((int)local_ac >> 0x1f))) {
    local_4c = (this_ptr->current_position).x - dest_position->x;
    local_48 = (this_ptr->current_position).y - dest_position->y;
    local_44 = (this_ptr->current_position).z - dest_position->z;
LAB_004f0ce0:
    pCVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                       (in_stack_fffffed0,in_stack_fffffed4);
    if (pCVar1 != unaff_EBX) {
      unaff_EBX->x = pCVar1->x;
      unaff_EBX->y = pCVar1->y;
      unaff_EBX->z = pCVar1->z;
    }
    return 2;
  }
  local_a4.x = (float)((this_ptr->voxel_coords).z - (this_ptr->dest_voxel_coords).z);
  if (0x31 < (int)(((uint)local_a4.x ^ (int)local_a4.x >> 0x1f) - ((int)local_a4.x >> 0x1f))) {
    local_64.x = (this_ptr->current_position).x - dest_position->x;
    local_64.y = (this_ptr->current_position).y - dest_position->y;
    local_64.z = (this_ptr->current_position).z - dest_position->z;
    fStack_124 = 7.26003e-39;
    pCVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_88,&local_64);
    if (pCVar1 == out_euler_angles) {
      return 2;
    }
    out_euler_angles->x = pCVar1->x;
    out_euler_angles->y = pCVar1->y;
    out_euler_angles->z = pCVar1->z;
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
    fStack_124 = 7.260253e-39;
    pCVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                       ((CVector3f *)(auStack_c8 + 4),&local_dc);
    if (pCVar1 == out_euler_angles) {
      return 2;
    }
    out_euler_angles->x = pCVar1->x;
    out_euler_angles->y = pCVar1->y;
    out_euler_angles->z = pCVar1->z;
    return 2;
  }
  if ((_DAT_01e3161c == 0x32) && (_DAT_01e31620 == 0x32)) {
    local_40._0_4_ = (this_ptr->current_position).x - dest_position->x;
    local_40._4_4_ = (this_ptr->current_position).y - dest_position->y;
    local_40._8_4_ = (this_ptr->current_position).z - dest_position->z;
    fStack_124 = 7.261122e-39;
    pCVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                       (&local_70,(CVector3f *)local_40);
    if (pCVar1 != out_euler_angles) {
      out_euler_angles->x = pCVar1->x;
      out_euler_angles->y = pCVar1->y;
      out_euler_angles->z = pCVar1->z;
    }
    return 1;
  }
  dVar9 = round((double)(this_ptr->current_position).x);
  local_18 = (int)ROUND(dVar9);
  dVar9 = round((double)dest_position->x);
  local_1c = (int)ROUND(dVar9);
  fStack_124 = 7.260452e-39;
  dVar9 = round((double)(this_ptr->current_position).z);
  iStack_20 = (int)ROUND(dVar9);
  fStack_128 = 7.260473e-39;
  dVar9 = round((double)*(float *)(unaff_retaddr + 8));
  iStack_24 = (int)ROUND(dVar9);
  iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
                    (this_ptr,_DAT_01e31620,_DAT_01e3161c,(this_ptr->dest_voxel_coords).y);
  iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
                    (this_ptr,_DAT_01e31628,_DAT_01e31624,(this_ptr->voxel_coords).y);
  iVar2 = core_path_cpp_CPathMap_isLineWalkable_FUN_004f0540
                    (this_ptr,_DAT_01e3161c,_DAT_01e31620,iVar2,_DAT_01e31624,_DAT_01e31628,iVar3);
  if (iVar2 != 0) {
    local_44 = g_CDemonRaytrace_01fba938.adjusted_size.x;
    local_40._0_4_ = g_CDemonRaytrace_01fba938.adjusted_size.y;
    local_40._4_4_ = g_CDemonRaytrace_01fba938.adjusted_size.z;
    if ((CPathMap *)&local_8c != this_ptr) {
      local_8c = (this_ptr->current_position).x;
      local_88[0].x = (this_ptr->current_position).y;
      local_88[0].y = (this_ptr->current_position).z;
    }
    iStack_24 = iStack_a8;
    local_8c = (float)local_b0 * g_CDemonRaytrace_01fba938.adjusted_size.x + local_8c;
    local_88[0].y = (float)iStack_a8 * g_CDemonRaytrace_01fba938.adjusted_size.z + local_88[0].y;
    auStack_c8._0_4_ = (this_ptr->current_position).x - unaff_ESI->x;
    auStack_c8._4_4_ = (this_ptr->current_position).y - unaff_ESI->y;
    fStack_c0 = (this_ptr->current_position).z - unaff_ESI->z;
    pCVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                       ((CVector3f *)(local_40 + 8),(CVector3f *)auStack_c8);
    if (pCVar1 != unaff_EBX) {
      unaff_EBX->x = pCVar1->x;
      unaff_EBX->y = pCVar1->y;
      unaff_EBX->z = pCVar1->z;
    }
    return 1;
  }
  iVar2 = core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_004f0790
                    (this_ptr,_DAT_01e31624,_DAT_01e31628,_DAT_01e3161c,_DAT_01e31620);
  if (iVar2 == 0) {
    uVar5 = core_path_cpp_CPathMap_searchGrid_FUN_004f20a0(this_ptr,(this_ptr->dest_voxel_coords).y)
    ;
    if (uVar5 != 0) {
      uVar5 = this_ptr->height_cache[_DAT_01e31628][_DAT_01e31624] - (this_ptr->voxel_coords).y;
      uVar6 = (int)uVar5 >> 0x1f;
      if (3 < (int)((uVar5 ^ uVar6) - uVar6)) {
        local_a4.x = (this_ptr->current_position).x - unaff_ESI->x;
        local_a4.y = (this_ptr->current_position).y - unaff_ESI->y;
        local_a4.z = (this_ptr->current_position).z - unaff_ESI->z;
        pCVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                           (local_f8,&local_a4);
        if (pCVar1 == unaff_EBX) {
          return 2;
        }
        unaff_EBX->x = pCVar1->x;
        unaff_EBX->y = pCVar1->y;
        unaff_EBX->z = pCVar1->z;
        return 2;
      }
      local_28 = 0xffffffff;
      iVar2 = _DAT_01e31624;
      iVar3 = _DAT_01e31628;
      uVar5 = 0xffffffff;
      do {
        uVar6 = (uint)*(byte *)(iVar3 * 100 + 0x1e40098 + iVar2);
        local_2c = local_28;
        local_28 = uVar5;
        if (uVar6 == 0) {
          fStack_128 = (this_ptr->current_position).x - unaff_ESI->x;
          fStack_124 = (this_ptr->current_position).y - unaff_ESI->y;
          pCVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                             ((CVector3f *)&stack0xfffffee4,(CVector3f *)&stack0xfffffed8);
          if (pCVar1 == unaff_EBX) {
            return 2;
          }
          unaff_EBX->x = pCVar1->x;
          unaff_EBX->y = pCVar1->y;
          unaff_EBX->z = pCVar1->z;
          return 2;
        }
        iVar2 = iVar2 - *(int *)(&DAT_005be0e8 + uVar6 * 4);
        iVar3 = iVar3 - *(int *)(&DAT_005be10c + uVar6 * 4);
        if (iVar2 < 0) {
          g_CHAR_PTR_01cc4800 = "..\\core\\path.cpp";
          g_INT_01cc4804 = 0x547;
          core_main_c_FUN_004c8440("Out of bounds1!");
        }
        if (iVar3 < 0) {
          g_CHAR_PTR_01cc4800 = "..\\core\\path.cpp";
          g_INT_01cc4804 = 0x548;
          core_main_c_FUN_004c8440("Out of bounds2!");
        }
        if (99 < iVar2) {
          g_CHAR_PTR_01cc4800 = "..\\core\\path.cpp";
          g_INT_01cc4804 = 0x549;
          core_main_c_FUN_004c8440("Out of bounds3!");
        }
        if (99 < iVar3) {
          g_CHAR_PTR_01cc4800 = "..\\core\\path.cpp";
          g_INT_01cc4804 = 0x54a;
          core_main_c_FUN_004c8440("Out of bounds4!");
        }
        uVar5 = uVar6;
      } while ((iVar2 != _DAT_01e3161c) || (iVar3 != _DAT_01e31620));
      unaff_EBX->x = 0.0;
      unaff_EBX->z = 0.0;
      fVar4 = core_path_cpp_CPathMap_getDirection_FUN_004efeb0
                        (this_ptr,uVar6,local_28,local_2c,unaff_ESI);
      unaff_EBX->y = fVar4;
      return 1;
    }
    local_110.x = (this_ptr->current_position).x - unaff_ESI->x;
    local_110.y = (this_ptr->current_position).y - unaff_ESI->y;
    local_110.z = (this_ptr->current_position).z - unaff_ESI->z;
    in_stack_fffffed4 = &local_110;
    in_stack_fffffed0 = &CStack_104;
    goto LAB_004f0ce0;
  }
  if (iVar2 == 1) {
    if (_DAT_01e31624 <= _DAT_01e3161c) {
      if (_DAT_01e31624 < _DAT_01e3161c) {
        iVar2 = 4;
      }
      else if (_DAT_01e31620 < _DAT_01e31628) {
        iVar2 = 1;
      }
      else {
        iVar2 = 2;
      }
      goto LAB_004f1185;
    }
  }
  else {
    if (_DAT_01e31620 < _DAT_01e31628) {
      iVar2 = 1;
      goto LAB_004f1185;
    }
    if (_DAT_01e31628 < _DAT_01e31620) {
      iVar2 = 2;
      goto LAB_004f1185;
    }
    if (_DAT_01e31624 <= _DAT_01e3161c) {
      iVar2 = 4;
      goto LAB_004f1185;
    }
  }
  iVar2 = 3;
LAB_004f1185:
  unaff_EBX->x = 0.0;
  unaff_EBX->z = 0.0;
  fVar4 = core_path_cpp_CPathMap_getDirection_FUN_004efeb0(this_ptr,iVar2,-1,-1,unaff_ESI);
  unaff_EBX->y = fVar4;
  return 1;
}
