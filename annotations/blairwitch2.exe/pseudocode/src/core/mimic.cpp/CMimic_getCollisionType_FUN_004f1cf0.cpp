// Name: core_mimic.cpp_CMimic_getCollisionType_FUN_004f1cf0
// Address: 004f1cf0
// Address Range: [[004f1cf0, 004f1d69]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_mimic_cpp_CMimic_getCollisionType_FUN_004f1cf0(CMimic *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ECollisionType __cdecl core_mimic_cpp_CMimic_getCollisionType_FUN_004f1cf0(CMimic *this_ptr,SCollisionInfo *collision_info)

{
  float fVar1;
  int iVar2;
  
  *(uint *)&collision_info->field_0x18 =
       *(uint *)&(this_ptr->base).base.model.field_0x2248;
  *(uint *)&collision_info->field_0x1c = 0x3f800000;
  if (*(int *)collision_info == 1) {
    *(uint *)&collision_info->field_0x14 = 0xbdcccccd;
    fVar1 = (float)_DAT_005dd9f9;
    *(float *)&collision_info->field_0x18 = *(float *)&collision_info->field_0x18 + _DAT_005dda01;
    *(float *)&collision_info->field_0x1c = *(float *)&collision_info->field_0x1c * fVar1;
  }
  else {
    *(uint *)&collision_info->field_0x14 = 0x40000000;
  }
  iVar2 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
  if (*(int *)(iVar2 + 0x24) == 0xc) {
    return COLLISION_TYPE_NONE;
  }
  return COLLISION_TYPE_CYLINDER;
}
