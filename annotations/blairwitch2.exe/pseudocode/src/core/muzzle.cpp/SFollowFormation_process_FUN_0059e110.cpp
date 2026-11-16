// Name: core_muzzle.cpp_SFollowFormation_process_FUN_0059e110
// Address: 0059e110
// Address Range: [[0059e110, 0059e366]]
// Convention: __cdecl
// Signature: void __cdecl core_muzzle_cpp_SFollowFormation_process_FUN_0059e110(SFollowFormation *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_muzzle_cpp_SFollowFormation_process_FUN_0059e110(SFollowFormation *this_ptr,float delta_time)

{
  float fVar1;
  SFollowSlotStruct *pSVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  SFollowSlotStruct *pSVar5;
  SFollowSlotStruct *pSVar6;
  SFollowFormation *local_30;
  SFollowSlotStruct *local_2c;
  SFollowSlotStruct *local_28;
  int local_20;
  int local_1c;
  
  fVar1 = this_ptr->update_timer - delta_time;
  this_ptr->update_timer = fVar1;
  if (fVar1 <= 0.0) {
    this_ptr->update_timer = this_ptr->update_interval;
    if (((this_ptr->leader != (CCharacter *)0x0) && (this_ptr->slot_count != 0)) &&
       (local_20 = 0, 0 < this_ptr->slot_count)) {
      pSVar2 = this_ptr->slots;
      local_30 = this_ptr;
      local_28 = this_ptr->slots;
      local_2c = pSVar2;
      do {
        local_28 = local_28 + 1;
        if (this_ptr->leader != (local_30->slots[0].follower)->follow_leader) {
          pSVar2[local_20].follower = (CCharacter *)0x0;
          pSVar2[local_20].follow_distance = 0.0;
          pSVar2[local_20].heading = 0.0;
          pSVar2[local_20].spread_angle = 0.0;
          pSVar2[local_20].follower_radius = 0.0;
          *(uint *)&pSVar2[local_20].field_0x2c = 0;
          pSVar2[local_20].next = (SFollowSlotStruct *)0x0;
          *(uint *)&pSVar2[local_20].field_0x30 = 0;
          *(uint *)&pSVar2[local_20].field_0x34 = 0;
          local_1c = local_20 + 1;
          if (local_1c < this_ptr->slot_count) {
            pCVar4 = &pSVar2[local_1c].offset;
            pCVar3 = &pSVar2[local_20].offset;
            pSVar5 = pSVar2 + local_20;
            pSVar6 = pSVar2 + local_1c;
            do {
              pSVar5->follower = pSVar6->follower;
              pSVar5->follow_distance = pSVar6->follow_distance;
              if (pCVar3 != pCVar4) {
                pCVar3->x = pCVar4->x;
                pCVar3->y = pCVar4->y;
                pCVar3->z = pCVar4->z;
              }
              if (&pSVar5->target_position != &pSVar6->target_position) {
                (pSVar5->target_position).x = (pSVar6->target_position).x;
                (pSVar5->target_position).y = (pSVar6->target_position).y;
                (pSVar5->target_position).z = (pSVar6->target_position).z;
              }
              pCVar4 = pCVar4 + 5;
              pCVar3 = pCVar3 + 5;
              pSVar5->heading = pSVar6->heading;
              pSVar5->spread_angle = pSVar6->spread_angle;
              pSVar5->follower_radius = pSVar6->follower_radius;
              *(uint *)&pSVar5->field_0x2c = *(uint *)&pSVar6->field_0x2c;
              *(uint *)&pSVar5->field_0x30 = *(uint *)&pSVar6->field_0x30;
              *(uint *)&pSVar5->field_0x34 = *(uint *)&pSVar6->field_0x34;
              local_1c = local_1c + 1;
              pSVar5->next = pSVar6->next;
              pSVar5 = pSVar5 + 1;
              pSVar6 = pSVar6 + 1;
            } while (local_1c < this_ptr->slot_count);
          }
          this_ptr->slot_count = this_ptr->slot_count + -1;
        }
        core_muzzle_cpp_SFollowFormation_updateSlot_FUN_0059dd00(this_ptr,local_2c);
        if (local_20 < this_ptr->slot_count + -1) {
          this_ptr->slots[local_20].next = local_28;
        }
        local_30 = (SFollowFormation *)&local_30->slots[0].next;
        local_20 = local_20 + 1;
        local_2c = local_2c + 1;
      } while (local_20 < this_ptr->slot_count);
    }
  }
  return;
}
