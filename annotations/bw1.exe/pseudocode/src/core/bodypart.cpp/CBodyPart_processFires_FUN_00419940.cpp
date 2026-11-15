// Name: core_bodypart.cpp_CBodyPart_processFires_FUN_00419940
// Address: 00419940
// Address Range: [[00419940, 00419a9b]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_processFires_FUN_00419940(CBodyPart *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_CBodyPart_processFires_FUN_00419940(CBodyPart *this_ptr,float delta_time)

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
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  (&this_ptr->base,input_local_point,&local_44);
        local_38 = local_44.x;
        local_34[(uint)bVar2 * -2] = *(float *)((int)&local_44 + (uint)bVar2 * -8 + 4);
        local_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
             *(float *)((int)&local_44 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
        (local_18->position).x = local_38;
        (local_18->position).y = local_34[0];
        (local_18->position).z = local_34[1];
        local_48 = 1.0;
        if ((float)this_ptr->fire_time_remaining < (float)_DAT_005d44c9) {
          local_48 = (float)this_ptr->fire_time_remaining * (float)_DAT_005d44c1;
        }
        local_24 = local_48 * (float)_DAT_005d44b1;
        fVar1 = (float)_DAT_005d44b9;
        input_local_point[0x1d].z = local_24;
        input_local_point[0x1e].x = local_48 * fVar1;
        input_local_point[0x1e].y = local_24;
        core_flame_cpp_CFlame_process_FUN_004b7b90((CFlame *)(input_local_point + 1),delta_time);
        local_18 = local_18 + 0x2b;
        local_1c = local_1c + 1;
      } while (local_1c < this_ptr->fire_count);
    }
  }
  return;
}
