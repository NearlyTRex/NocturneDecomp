// Name: core_bodypart.cpp_CBodyPart_processFires_FUN_004164b0
// Address: 004164b0
// Address Range: [[004164b0, 0041660b]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_processFires_FUN_004164b0(CBodyPart *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_processFires_FUN_004164b0(CBodyPart *this_ptr,float delta_time)

{
  float fVar1;
  CVector3f *input_local_point;
  byte bVar2;
  float afStackY_102c [1013];
  float local_48;
  CVector3f local_44;
  float local_38;
  float local_34 [4];
  float local_24;
  SBodyPartFire *local_20;
  int local_1c;
  CLocation *local_18;
  
  bVar2 = 0;
  if (this_ptr->fire_count != 0) {
    fVar1 = (float)this_ptr->fire_time_remaining - delta_time;
    this_ptr->fire_time_remaining = (int)fVar1;
    if (fVar1 < 0.0) {
      this_ptr->fire_count = 0;
      this_ptr->fire_time_remaining = 0;
      return;
    }
    local_1c = 0;
    if (0 < this_ptr->fire_count) {
      local_20 = this_ptr->fires;
      local_18 = &this_ptr->fires[0].flame.base.location;
      do {
        input_local_point = &local_20[local_1c].local_position;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                  (&this_ptr->base,input_local_point,&local_44);
        local_38 = local_44.x;
        local_34[(uint)bVar2 * -2] = *(float *)((int)&local_44 + (uint)bVar2 * -8 + 4);
        local_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
             *(float *)((int)&local_44 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
        (local_18->position).x = local_38;
        (local_18->position).y = local_34[0];
        (local_18->position).z = local_34[1];
        local_48 = 1.0;
        if ((float)this_ptr->fire_time_remaining < (float)5) {
          local_48 = (float)this_ptr->fire_time_remaining * (float)0.20000000000000001;
        }
        local_24 = local_48 * (float)1.5;
        fVar1 = (float)3;
        input_local_point[0x3a].z = local_24;
        input_local_point[0x3b].x = local_48 * fVar1;
        input_local_point[0x3b].y = local_24;
        core_flame_cpp_CFlame_process_FUN_0049f2e0((CFlame *)(input_local_point + 1),delta_time);
        local_18 = (CLocation *)((int)(local_18 + 0x40) + 0xc);
        local_1c = local_1c + 1;
      } while (local_1c < this_ptr->fire_count);
    }
  }
  return;
}
