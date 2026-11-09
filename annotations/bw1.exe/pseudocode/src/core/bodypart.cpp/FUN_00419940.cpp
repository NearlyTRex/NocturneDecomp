// Name: core_bodypart.cpp_FUN_00419940
// Address: 00419940
// Address Range: [[00419940, 00419a9b]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_FUN_00419940(CBodyPart *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_FUN_00419940(CBodyPart *this_ptr,float delta_time)

{
  float fVar1;
  byte *puVar2;
  byte bVar3;
  float afStackY_102c [1013];
  float local_48;
  uint local_44;
  uint local_38;
  uint local_34;
  uint local_30;
  float local_24;
  byte *local_20;
  int local_1c;
  uint *local_18;
  
  bVar3 = 0;
  if (*(int *)&this_ptr->field_0x74c != 0) {
    fVar1 = *(float *)&this_ptr->field_0xccc - delta_time;
    *(float *)&this_ptr->field_0xccc = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)&this_ptr->field_0x74c = 0;
      *(uint *)&this_ptr->field_0xccc = 0;
      return;
    }
    local_1c = 0;
    if (0 < *(int *)&this_ptr->field_0x74c) {
      local_20 = &this_ptr->field_0x750;
      local_18 = (uint *)&this_ptr->field_0x77c;
      do {
        puVar2 = local_20 + local_1c * 0x2b0;
        core_actor_cpp_FUN_00408b40(this_ptr,puVar2);
        local_38 = local_44;
        *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffc0 + (uint)bVar3 * -8);
        *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        *local_18 = local_38;
        local_18[1] = local_34;
        local_18[2] = local_30;
        local_48 = 1.0;
        if (*(float *)&this_ptr->field_0xccc < (float)_DAT_005d44c9) {
          local_48 = *(float *)&this_ptr->field_0xccc * (float)_DAT_005d44c1;
        }
        local_24 = local_48 * (float)_DAT_005d44b1;
        fVar1 = (float)_DAT_005d44b9;
        *(float *)(puVar2 + 0x164) = local_24;
        *(float *)(puVar2 + 0x168) = local_48 * fVar1;
        *(float *)(puVar2 + 0x16c) = local_24;
        core_flame_cpp_FUN_004b7b90((CFlame *)(puVar2 + 0xc),delta_time);
        local_18 = local_18 + 0xac;
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)&this_ptr->field_0x74c);
    }
  }
  return;
}
