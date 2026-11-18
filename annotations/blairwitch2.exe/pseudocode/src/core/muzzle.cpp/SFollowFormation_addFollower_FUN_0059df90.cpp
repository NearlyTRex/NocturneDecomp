// Name: core_muzzle.cpp_SFollowFormation_addFollower_FUN_0059df90
// Address: 0059df90
// Address Range: [[0059df90, 0059e099]]
// Convention: __cdecl
// Signature: int __cdecl core_muzzle_cpp_SFollowFormation_addFollower_FUN_0059df90(SFollowFormation *this_ptr,CCharacter *follower,float follow_distance)

#include "nocturne.h"

int __cdecl core_muzzle_cpp_SFollowFormation_addFollower_FUN_0059df90(SFollowFormation *this_ptr,CCharacter *follower,float follow_distance)

{
  SFollowSlotStruct *pSVar1;
  SFollowSlotStruct local_40;
  
  if ((this_ptr->leader != (CCharacter *)0x0) && (this_ptr->slot_count < 0x10)) {
    local_40.heading = 0.0;
    local_40.follower = follower;
    local_40.spread_angle = 0.0;
    local_40.follow_distance = follow_distance;
    local_40.follower_radius = 0.0;
    local_40._44_4_ = 0;
    local_40.next = (SFollowSlotStruct *)0x0;
    local_40._48_4_ = 0;
    local_40._52_4_ = 0;
    core_muzzle_cpp_SFollowFormation_updateSlot_FUN_0059dd00(this_ptr,&local_40);
    pSVar1 = this_ptr->slots + this_ptr->slot_count;
    pSVar1->follower = local_40.follower;
    pSVar1->follow_distance = local_40.follow_distance;
    if (&pSVar1->offset != &local_40.offset) {
      (pSVar1->offset).x = local_40.offset.x;
      (pSVar1->offset).y = local_40.offset.y;
      (pSVar1->offset).z = local_40.offset.z;
    }
    if (&pSVar1->target_position != &local_40.target_position) {
      (pSVar1->target_position).x = local_40.target_position.x;
      (pSVar1->target_position).y = local_40.target_position.y;
      (pSVar1->target_position).z = local_40.target_position.z;
    }
    pSVar1->heading = local_40.heading;
    pSVar1->spread_angle = local_40.spread_angle;
    pSVar1->follower_radius = local_40.follower_radius;
    *(uint *)&pSVar1->field_0x2c = local_40._44_4_;
    *(uint *)&pSVar1->field_0x30 = local_40._48_4_;
    *(uint *)&pSVar1->field_0x34 = local_40._52_4_;
    pSVar1->next = local_40.next;
    this_ptr->slot_count = this_ptr->slot_count + 1;
    return 2;
  }
  return -1;
}
