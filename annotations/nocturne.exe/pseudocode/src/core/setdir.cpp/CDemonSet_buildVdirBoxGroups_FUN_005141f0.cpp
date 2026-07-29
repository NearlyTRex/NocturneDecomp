// Name: core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0
// Address: 005141f0
// Address Range: [[005141f0, 005142fd]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0(CDemonSet *this_ptr)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0(CDemonSet *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CDemonSet *pCVar5;
  SVDBox *obb_a;
  SVDBox *obb_b;
  int local_28;
  int local_24;
  
  iVar1 = 0;
  pCVar5 = this_ptr;
  if (0 < (int)this_ptr->rooms[5].extents.z) {
    do {
      pCVar5->rooms[6].extents.z = -NAN;
      iVar1 = iVar1 + 1;
      pCVar5 = (CDemonSet *)(pCVar5->cameras[0].name + 0x40);
    } while (iVar1 < (int)this_ptr->rooms[5].extents.z);
  }
  local_24 = 0;
  if (0 < (int)this_ptr->rooms[5].extents.z) {
    local_28 = 0;
    do {
      fVar2 = (float)core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00514300(this_ptr,local_24);
      iVar1 = local_24 + 1;
      if (iVar1 < (int)this_ptr->rooms[5].extents.z) {
        obb_b = (SVDBox *)&this_ptr->rooms[local_24 + 6].rotation_matrix;
        do {
          fVar3 = (float)core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00514300(this_ptr,iVar1);
          if (fVar3 != fVar2) {
            obb_a = (SVDBox *)((int)&this_ptr->rooms[5].rotation_matrix.m[0].x + local_28);
            iVar4 = core_setdir_cpp_testOBBIntersection_FUN_00513e80(obb_a,obb_b);
            if ((iVar4 != 0) ||
               (iVar4 = core_setdir_cpp_testOBBIntersection_FUN_00513e80(obb_b,obb_a), iVar4 != 0))
            {
              this_ptr->rooms[(int)fVar3 + 6].extents.z = fVar2;
            }
          }
          iVar1 = iVar1 + 1;
          obb_b = obb_b + 1;
        } while (iVar1 < (int)this_ptr->rooms[5].extents.z);
      }
      local_28 = local_28 + 0x44;
      iVar1 = local_24 + 1;
      local_24 = iVar1;
    } while (iVar1 < (int)this_ptr->rooms[5].extents.z);
  }
  return iVar1;
}
