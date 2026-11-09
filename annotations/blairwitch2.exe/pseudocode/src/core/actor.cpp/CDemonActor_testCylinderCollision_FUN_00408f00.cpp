// Name: core_actor.cpp_CDemonActor_testCylinderCollision_FUN_00408f00
// Address: 00408f00
// Address Range: [[00408f00, 00408f88]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_testCylinderCollision_FUN_00408f00(CDemonActor *this_ptr,SCollisionReturnInfo *collision_info,float tolerance)

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_testCylinderCollision_FUN_00408f00(CDemonActor *this_ptr,SCollisionReturnInfo *collision_info,float tolerance)

{
  int iVar1;
  byte local_30 [24];
  float fStack_18;
  float fStack_14;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0((SCollisionInfo *)local_30);
  local_30._0_4_ = 0;
  iVar1 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x44))(this_ptr,local_30);
  if ((((iVar1 == 2) && ((float)local_30._20_4_ - tolerance <= *(float *)(collision_info + 4))) &&
      (*(float *)(collision_info + 4) <= fStack_18 + tolerance)) &&
     (*(float *)collision_info * *(float *)collision_info +
      *(float *)(collision_info + 8) * *(float *)(collision_info + 8) <=
      (fStack_14 + tolerance) * (fStack_14 + tolerance))) {
    return 1;
  }
  return 0;
}
