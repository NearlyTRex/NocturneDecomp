// Name: core_ghoul.cpp_FUN_004ab830
// Address: 004ab830
// Address Range: [[004ab830, 004aba26]]
// Convention: unknown
// Signature: int core_ghoul_cpp_FUN_004ab830(int param_1,CVector3f *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_ghoul_cpp_FUN_004ab830(int param_1,CVector3f *param_2)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  int bone_index;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  int local_18;
  
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
            ((CDeformableModelInstance *)(param_1 + 0x150),&local_30,_DAT_01c78c38);
  if (&local_30 != param_2) {
    param_2->x = local_30.x;
    param_2->y = local_30.y;
    param_2->z = local_30.z;
  }
  iVar3 = 1;
  local_18 = 0;
  this_ptr = (CDeformableModelInstance *)(param_1 + 0x150);
  do {
    switch((local_18 + *(int *)(param_1 + 0x6c)) % 4) {
    case 0:
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd48) * 4) != 0) {
        pCVar1 = &local_24;
        bone_index = _DAT_01c78c28;
LAB_004ab8bc:
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                           (this_ptr,pCVar1,bone_index);
        if (&local_48 != pCVar1) {
          local_48.x = pCVar1->x;
          local_48.y = pCVar1->y;
          local_48.z = pCVar1->z;
        }
        local_48.y = local_30.y * (float)0.29999999999999999 + local_48.y * (float)0.69999999999999996;
        local_48.x = local_30.x * (float)0.5 + local_48.x * (float)0.5;
        pCVar1 = param_2 + iVar3;
        if (pCVar1 != &local_48) {
          pCVar1->x = local_48.x;
          pCVar1->y = local_48.y;
          pCVar1->z = local_48.z;
        }
LAB_004ab93e:
        iVar3 = iVar3 + 1;
      }
      break;
    case 1:
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd50) * 4) != 0) {
        pCVar1 = &local_54;
        bone_index = _DAT_01c78c2c;
        goto LAB_004ab8bc;
      }
      break;
    case 2:
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd70) * 4) != 0) {
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                           (this_ptr,&local_3c,_DAT_01c78c14);
        pCVar2 = param_2 + iVar3;
        if (pCVar2 != pCVar1) {
          pCVar2->x = pCVar1->x;
          pCVar2->y = pCVar1->y;
          pCVar2->z = pCVar1->z;
        }
        goto LAB_004ab93e;
      }
      break;
    case 3:
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd6c) * 4) != 0) {
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                           (this_ptr,&local_60,_DAT_01c78c3c);
        pCVar2 = param_2 + iVar3;
        if (pCVar2 != pCVar1) {
          pCVar2->x = pCVar1->x;
          pCVar2->y = pCVar1->y;
          pCVar2->z = pCVar1->z;
        }
        goto LAB_004ab93e;
      }
    }
    local_18 = local_18 + 1;
    if (3 < local_18) {
      return iVar3;
    }
  } while( true );
}
