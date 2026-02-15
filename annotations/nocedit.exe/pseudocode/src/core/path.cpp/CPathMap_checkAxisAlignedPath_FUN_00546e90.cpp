// Name: core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90
// Address: 00546e90
// Address Range: [[00546e90, 005472f1]]
// Convention: __cdecl
// Signature: int __cdecl core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90(CPathMap *this_ptr,int start_x,int start_z,int start_height,int end_x,int end_z)

#include "nocturne.h"

int __cdecl core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90(CPathMap *this_ptr,int start_x,int start_z,int start_height,int end_x,int end_z)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int unaff_EDI;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_18;
  int local_14;
  
  uVar1 = start_x - start_height;
  uVar2 = start_z - end_x;
  local_14 = end_x;
  uVar6 = (int)uVar1 >> 0x1f;
  local_2c = (uVar1 ^ uVar6) - uVar6;
  if ((int)uVar1 < 0) {
    local_3c = -1;
  }
  else {
    local_3c = 1;
  }
  if ((int)uVar2 < 0) {
    local_40 = -1;
  }
  else {
    local_40 = 1;
  }
  iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                    (this_ptr,end_x,start_height,(this_ptr->dest_voxel_coords).y);
  iVar5 = start_height;
  if (0 < local_2c) {
    do {
      iVar4 = local_3c + iVar5;
      unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                            (this_ptr,end_x,iVar4,iVar3);
      uVar7 = unaff_EDI - iVar3 >> 0x1f;
      if (((g_PathfindingMaxClimbHeight < (int)((unaff_EDI - iVar3 ^ uVar7) - uVar7)) ||
          (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                 (this_ptr,end_x + -1,iVar5,iVar3),
          uVar7 = unaff_EDI - iVar3 >> 0x1f,
          g_PathfindingMaxClimbHeight < (int)((unaff_EDI - iVar3 ^ uVar7) - uVar7))) ||
         (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                (this_ptr,end_x + 1,iVar5,iVar3), uVar7 = unaff_EDI - iVar3 >> 0x1f,
         g_PathfindingMaxClimbHeight < (int)((unaff_EDI - iVar3 ^ uVar7) - uVar7))) break;
      iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(this_ptr,end_x,iVar4,iVar3);
      local_2c = local_2c + -1;
      iVar5 = iVar4;
    } while (0 < local_2c);
  }
  uVar7 = (int)uVar2 >> 0x1f;
  if (local_2c == 0) {
    local_30 = (uVar2 ^ uVar7) - uVar7;
    if (0 < local_30) {
      do {
        iVar4 = local_14 + local_40;
        unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                              (this_ptr,iVar4,iVar5,iVar3);
        uVar8 = unaff_EDI - iVar3 >> 0x1f;
        if (((g_PathfindingMaxClimbHeight < (int)((unaff_EDI - iVar3 ^ uVar8) - uVar8)) ||
            (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                   (this_ptr,local_14,iVar5 + -1,iVar3),
            uVar8 = unaff_EDI - iVar3 >> 0x1f,
            g_PathfindingMaxClimbHeight < (int)((unaff_EDI - iVar3 ^ uVar8) - uVar8))) ||
           (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                  (this_ptr,local_14,iVar5 + 1,iVar3),
           uVar8 = unaff_EDI - iVar3 >> 0x1f,
           g_PathfindingMaxClimbHeight < (int)((unaff_EDI - iVar3 ^ uVar8) - uVar8))) break;
        iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(this_ptr,iVar4,iVar5,iVar3)
        ;
        local_30 = local_30 + -1;
        local_14 = iVar4;
      } while (0 < local_30);
    }
    if ((local_30 == 0) &&
       (iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                          (this_ptr,start_z,start_x,(this_ptr->voxel_coords).y), unaff_EDI == iVar5)
       ) {
      return 1;
    }
  }
  local_18 = start_height;
  local_34 = (uVar2 ^ uVar7) - uVar7;
  iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                    (this_ptr,end_x,start_height,(this_ptr->dest_voxel_coords).y);
  if (0 < local_34) {
    do {
      iVar3 = local_40 + end_x;
      unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                            (this_ptr,iVar3,start_height,iVar5);
      uVar2 = unaff_EDI - iVar5 >> 0x1f;
      if (((g_PathfindingMaxClimbHeight < (int)((unaff_EDI - iVar5 ^ uVar2) - uVar2)) ||
          (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                 (this_ptr,end_x,start_height + -1,iVar5),
          uVar2 = unaff_EDI - iVar5 >> 0x1f,
          g_PathfindingMaxClimbHeight < (int)((unaff_EDI - iVar5 ^ uVar2) - uVar2))) ||
         (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                (this_ptr,end_x,start_height + 1,iVar5),
         uVar2 = unaff_EDI - iVar5 >> 0x1f,
         g_PathfindingMaxClimbHeight < (int)((unaff_EDI - iVar5 ^ uVar2) - uVar2))) break;
      iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                        (this_ptr,iVar3,start_height,iVar5);
      local_34 = local_34 + -1;
      end_x = iVar3;
    } while (0 < local_34);
  }
  if (local_34 == 0) {
    local_38 = (uVar1 ^ uVar6) - uVar6;
    if (0 < local_38) {
      do {
        iVar3 = local_18 + local_3c;
        unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                              (this_ptr,end_x,iVar3,iVar5);
        uVar1 = unaff_EDI - iVar5 >> 0x1f;
        if (((g_PathfindingMaxClimbHeight < (int)((unaff_EDI - iVar5 ^ uVar1) - uVar1)) ||
            (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                   (this_ptr,end_x + -1,local_18,iVar5),
            uVar1 = unaff_EDI - iVar5 >> 0x1f,
            g_PathfindingMaxClimbHeight < (int)((unaff_EDI - iVar5 ^ uVar1) - uVar1))) ||
           (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                  (this_ptr,end_x + 1,local_18,iVar5),
           uVar1 = unaff_EDI - iVar5 >> 0x1f,
           g_PathfindingMaxClimbHeight < (int)((unaff_EDI - iVar5 ^ uVar1) - uVar1))) break;
        iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(this_ptr,end_x,iVar3,iVar5)
        ;
        local_38 = local_38 + -1;
        local_18 = iVar3;
      } while (0 < local_38);
    }
    if ((local_38 == 0) &&
       (iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                          (this_ptr,start_z,start_x,(this_ptr->voxel_coords).y), unaff_EDI == iVar5)
       ) {
      return 2;
    }
  }
  return 0;
}
