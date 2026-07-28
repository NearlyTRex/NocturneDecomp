// Name: core_dracbrid.cpp_CDraculaBride_getTargetPoints_FUN_0045a9e0
// Address: 0045a9e0
// Address Range: [[0045a9e0, 0045aaa1]]
// Convention: unknown
// Signature: undefined4 core_dracbrid_cpp_CDraculaBride_getTargetPoints_FUN_0045a9e0(int param_1,CVector3f *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dracbrid_cpp_CDraculaBride_getTargetPoints_FUN_0045a9e0(int param_1,CVector3f *param_2)

{
  CVector3f *pCVar1;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  if (*(int *)(param_1 + 0xbdb0) != 0) {
    return 0;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_24,_DAT_01b4d260);
  if (param_2 != pCVar1) {
    param_2->x = pCVar1->x;
    param_2->y = pCVar1->y;
    param_2->z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_18,_DAT_01b4d274);
  if (param_2 + 1 != pCVar1) {
    param_2[1].x = pCVar1->x;
    param_2[1].y = pCVar1->y;
    param_2[1].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_30,_DAT_01b4d27c);
  if (param_2 + 2 != pCVar1) {
    param_2[2].x = pCVar1->x;
    param_2[2].y = pCVar1->y;
    param_2[2].z = pCVar1->z;
  }
  return 3;
}
