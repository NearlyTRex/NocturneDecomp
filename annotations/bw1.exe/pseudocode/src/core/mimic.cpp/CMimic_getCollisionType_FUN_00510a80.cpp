// Name: core_mimic.cpp_CMimic_getCollisionType_FUN_00510a80
// Address: 00510a80
// Address Range: [[00510a80, 00510af9]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_mimic_cpp_CMimic_getCollisionType_FUN_00510a80(CMimic *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ECollisionType __cdecl core_mimic_cpp_CMimic_getCollisionType_FUN_00510a80(CMimic *this_ptr,SCollisionInfo *collision_info)

{
  float fVar1;
  SMotion *pSVar2;
  
  *(uint *)&collision_info->field_0x18 = *(uint *)&this_ptr->field_0x2490;
  *(uint *)&collision_info->field_0x1c = 0x3f800000;
  if (*(int *)collision_info == 1) {
    *(uint *)&collision_info->field_0x14 = 0xbdcccccd;
    fVar1 = (float)_DAT_005e8a80;
    *(float *)&collision_info->field_0x18 = *(float *)&collision_info->field_0x18 + _DAT_005e8a88;
    *(float *)&collision_info->field_0x1c = *(float *)&collision_info->field_0x1c * fVar1;
  }
  else {
    *(uint *)&collision_info->field_0x14 = 0x40000000;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
  if (*(int *)(pSVar2 + 0x24) == 0xc) {
    return COLLISION_TYPE_NONE;
  }
  return COLLISION_TYPE_CYLINDER;
}
