// Name: core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90
// Address: 00546e90
// Address Range: [[00546e90, 005472f1]]
// Convention: __cdecl
// Signature: int core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90(CPathMap * this_ptr, int start_x, int start_z, int start_height, int end_x, int end_z)

#include "nocturne.h"

int __cdecl
core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90
          (CPathMap *this_ptr,int start_x,int start_z,int start_height,int end_x,int end_z)

{
  uint uVar1;
  int iVar2;
  int current_height;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int unaff_EDI;
  int local_60;
  uint local_5c;
  int local_58;
  int local_48;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  uVar1 = start_x - start_height;
  iVar2 = start_z - end_x;
  uVar4 = (int)uVar1 >> 0x1f;
  local_2c = (uVar1 ^ uVar4) - uVar4;
  if ((int)uVar1 < 0) {
    local_3c = -1;
  }
  else {
    local_3c = 1;
  }
  current_height =
       core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                 (this_ptr,end_x,start_height,this_ptr->field3_0x1c);
  iVar3 = start_height;
  if (0 < local_28) {
    local_58 = unaff_EBP + 1;
    do {
      local_20 = local_38 + iVar3;
      unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                            (this_ptr,unaff_EBP,local_20,current_height);
      uVar5 = unaff_EDI - current_height >> 0x1f;
      if (((g_PathfindingMaxClimbHeight < (int)((unaff_EDI - current_height ^ uVar5) - uVar5)) ||
          (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                 (this_ptr,local_58,iVar3,current_height),
          uVar5 = unaff_EDI - current_height >> 0x1f,
          g_PathfindingMaxClimbHeight < (int)((unaff_EDI - current_height ^ uVar5) - uVar5))) ||
         (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                (this_ptr,local_60,iVar3,current_height),
         uVar5 = unaff_EDI - current_height >> 0x1f,
         g_PathfindingMaxClimbHeight < (int)((unaff_EDI - current_height ^ uVar5) - uVar5))) break;
      current_height =
           core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                     (this_ptr,end_x,local_24,current_height);
      local_28 = local_28 + -1;
      iVar3 = local_24;
    } while (0 < local_28);
  }
  if (local_28 == 0) {
    local_2c = (uVar1 ^ uVar4) - uVar4;
    if (0 < local_2c) {
      local_5c = iVar3 - 1;
      do {
        local_1c = unaff_EBP + local_3c;
        unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                              (this_ptr,local_1c,iVar3,current_height);
        uVar4 = unaff_EDI - current_height >> 0x1f;
        if (((g_PathfindingMaxClimbHeight < (int)((unaff_EDI - current_height ^ uVar4) - uVar4)) ||
            (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                   (this_ptr,local_1c,iVar2,current_height),
            uVar4 = unaff_EDI - current_height >> 0x1f,
            g_PathfindingMaxClimbHeight < (int)((unaff_EDI - current_height ^ uVar4) - uVar4))) ||
           (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                  (this_ptr,local_18,local_58,current_height),
           uVar4 = unaff_EDI - current_height >> 0x1f,
           g_PathfindingMaxClimbHeight < (int)((unaff_EDI - current_height ^ uVar4) - uVar4)))
        break;
        current_height =
             core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                       (this_ptr,local_20,iVar3,current_height);
        local_2c = local_2c + -1;
      } while (0 < local_2c);
    }
    if ((local_2c == 0) &&
       (iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                          (this_ptr,start_height,start_z,(this_ptr->voxel_coords).y),
       unaff_EDI == iVar2)) {
      return 1;
    }
  }
  iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                    (this_ptr,end_z,end_x,this_ptr->field3_0x1c);
  if (0 < (int)uVar1) {
    iVar3 = end_z + 1;
    do {
      unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                            (this_ptr,local_38 + end_z,unaff_EBP,iVar2);
      uVar1 = unaff_EDI - iVar2 >> 0x1f;
      if (((g_PathfindingMaxClimbHeight < (int)((unaff_EDI - iVar2 ^ uVar1) - uVar1)) ||
          (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                 (this_ptr,end_z,iVar3,iVar2), uVar1 = unaff_EDI - iVar2 >> 0x1f,
          g_PathfindingMaxClimbHeight < (int)((unaff_EDI - iVar2 ^ uVar1) - uVar1))) ||
         (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                (this_ptr,end_z,local_58,iVar2), uVar1 = unaff_EDI - iVar2 >> 0x1f,
         g_PathfindingMaxClimbHeight < (int)((unaff_EDI - iVar2 ^ uVar1) - uVar1))) break;
      iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                        (this_ptr,local_24,end_x,iVar2);
      local_2c = local_2c + -1;
      end_z = local_24;
    } while (0 < local_2c);
  }
  if (local_2c == 0) {
    iVar3 = (local_5c ^ (int)local_5c >> 0x1f) - ((int)local_5c >> 0x1f);
    while (((0 < iVar3 &&
            (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                   (this_ptr,end_z,unaff_EBP + local_34,iVar2),
            uVar1 = unaff_EDI - iVar2 >> 0x1f,
            (int)((unaff_EDI - iVar2 ^ uVar1) - uVar1) <= g_PathfindingMaxClimbHeight)) &&
           ((unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                   (this_ptr,local_48,local_1c,iVar2),
            uVar1 = unaff_EDI - iVar2 >> 0x1f,
            (int)((unaff_EDI - iVar2 ^ uVar1) - uVar1) <= g_PathfindingMaxClimbHeight &&
            (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                   (this_ptr,local_48,local_18,iVar2),
            uVar1 = unaff_EDI - iVar2 >> 0x1f,
            (int)((unaff_EDI - iVar2 ^ uVar1) - uVar1) <= g_PathfindingMaxClimbHeight))))) {
      iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                        (this_ptr,end_z,local_18,iVar2);
      iVar3 = iVar3 + -1;
    }
    if ((iVar3 == 0) &&
       (iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                          (this_ptr,end_x,start_height,(this_ptr->voxel_coords).y),
       unaff_EDI == iVar2)) {
      return 2;
    }
  }
  return 0;
}
