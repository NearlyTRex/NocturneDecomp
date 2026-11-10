// Name: core_bodypart.cpp_CBodyPart_processFires_FUN_004164b0
// Address: 004164b0
// Address Range: [[004164b0, 0041660b]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_processFires_FUN_004164b0(CBodyPart *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_CBodyPart_processFires_FUN_004164b0(CBodyPart *this_ptr,float delta_time)

{
  float fVar1;
  SBodyPartFire *pSVar2;
  byte bVar3;
  float afStackY_102c [1013];
  float local_48;
  uint local_44;
  uint local_38;
  uint local_34;
  uint local_30;
  float local_24;
  SBodyPartFire *local_20;
  int local_1c;
  uint *local_18;
  
  bVar3 = 0;
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
      local_18 = (uint *)&this_ptr->fires[0].field_0x2c;
      do {
        pSVar2 = local_20 + local_1c;
        core_actor_cpp_FUN_00408d70(this_ptr,pSVar2);
        local_38 = local_44;
        *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffc0 + (uint)bVar3 * -8);
        *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        *local_18 = local_38;
        local_18[1] = local_34;
        local_18[2] = local_30;
        local_48 = 1.0;
        if ((float)this_ptr->fire_time_remaining < (float)_DAT_005cbf52) {
          local_48 = (float)this_ptr->fire_time_remaining * (float)_DAT_005cbf4a;
        }
        local_24 = local_48 * (float)_DAT_005cbf3a;
        fVar1 = (float)_DAT_005cbf42;
        *(float *)&pSVar2->field_0x2c0 = local_24;
        *(float *)&pSVar2->field_0x2c4 = local_48 * fVar1;
        *(float *)&pSVar2->field_0x2c8 = local_24;
        core_flame_cpp_CFlame_process_FUN_0049f2e0((CFlame *)&pSVar2->field_0xc,delta_time);
        local_18 = local_18 + 0x103;
        local_1c = local_1c + 1;
      } while (local_1c < this_ptr->fire_count);
    }
  }
  return;
}
