// Name: core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0
// Address: 005141f0
// Address Range: [[005141f0, 005142fd]]
// Convention: unknown
// Signature: undefined8 core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0(CDemonSet *param_1)

#include "nocturne.h"

ulonglong core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0(CDemonSet *param_1)

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
  
  fVar2 = param_1->rooms[5].extents.z;
  iVar1 = 0;
  pCVar5 = param_1;
  if (0 < (int)fVar2) {
    do {
      pCVar5->rooms[6].extents.z = -NAN;
      iVar1 = iVar1 + 1;
      pCVar5 = (CDemonSet *)(pCVar5->cameras[0].name + 0x40);
    } while (iVar1 < (int)param_1->rooms[5].extents.z);
  }
  local_24 = 0;
  if (0 < (int)param_1->rooms[5].extents.z) {
    local_28 = 0;
    do {
      fVar2 = (float)core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00514300(param_1,local_24);
      iVar1 = local_24 + 1;
      if (iVar1 < (int)param_1->rooms[5].extents.z) {
        obb_b = (SVDBox *)&param_1->rooms[local_24 + 6].rotation_matrix;
        do {
          fVar3 = (float)core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00514300(param_1,iVar1);
          if (fVar3 != fVar2) {
            obb_a = (SVDBox *)((int)&param_1->rooms[5].rotation_matrix.m[0].x + local_28);
            iVar4 = core_setdir_cpp_testOBBIntersection_FUN_00513e80(obb_a,obb_b);
            if ((iVar4 != 0) ||
               (iVar4 = core_setdir_cpp_testOBBIntersection_FUN_00513e80(obb_b,obb_a), iVar4 != 0))
            {
              param_1->rooms[(int)fVar3 + 6].extents.z = fVar2;
            }
          }
          iVar1 = iVar1 + 1;
          obb_b = obb_b + 1;
        } while (iVar1 < (int)param_1->rooms[5].extents.z);
      }
      fVar2 = param_1->rooms[5].extents.z;
      local_28 = local_28 + 0x44;
      iVar1 = local_24 + 1;
      local_24 = iVar1;
    } while (iVar1 < (int)fVar2);
  }
  return CONCAT44(fVar2,iVar1);
}
