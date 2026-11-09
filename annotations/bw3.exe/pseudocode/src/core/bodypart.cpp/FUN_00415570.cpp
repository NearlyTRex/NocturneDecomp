// Name: core_bodypart.cpp_FUN_00415570
// Address: 00415570
// Address Range: [[00415570, 004156cb]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_FUN_00415570(CBodyPart *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_FUN_00415570(CBodyPart *this_ptr,float delta_time)

{
  float fVar1;
  uint uVar2;
  byte *puVar3;
  byte bVar4;
  float afStackY_102c [1013];
  float local_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  float local_24;
  byte *local_20;
  int local_1c;
  uint *local_18;
  
  bVar4 = 0;
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
        puVar3 = local_20 + local_1c * 0x2b0;
        core_actor_cpp_FUN_00408b80(this_ptr,puVar3);
        uVar2 = local_38;
        *(uint *)((int)&stack0xffffffc0 + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffcc + (uint)bVar4 * -8);
        *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        *local_18 = uVar2;
        local_18[1] = local_40;
        local_18[2] = local_3c;
        local_48 = 1.0;
        if (*(float *)&this_ptr->field_0xccc < (float)_DAT_005b6c72) {
          local_48 = *(float *)&this_ptr->field_0xccc * (float)_DAT_005b6c6a;
        }
        local_24 = local_48 * (float)_DAT_005b6c5a;
        fVar1 = (float)_DAT_005b6c62;
        *(float *)(puVar3 + 0x164) = local_24;
        *(float *)(puVar3 + 0x168) = local_48 * fVar1;
        *(float *)(puVar3 + 0x16c) = local_24;
        core_flame_cpp_FUN_004a5b10((CFlame *)(puVar3 + 0xc),delta_time);
        local_18 = local_18 + 0xac;
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)&this_ptr->field_0x74c);
    }
  }
  return;
}
