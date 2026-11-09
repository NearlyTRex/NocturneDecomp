// Name: core_tentacle.cpp_FUN_00595c40
// Address: 00595c40
// Address Range: [[00595c40, 00595d37]]
// Convention: __cdecl
// Signature: int __cdecl core_tentacle_cpp_FUN_00595c40(CTentacle *this_ptr,char *class_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_tentacle_cpp_FUN_00595c40(CTentacle *this_ptr,char *class_name)

{
  CTentacle *actor_ptr;
  int iVar1;
  byte bVar2;
  float afStackY_1028 [1016];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float *local_20;
  int local_1c;
  int local_18;
  
  bVar2 = 0;
  local_20 = (float *)&this_ptr->field_0x20;
  local_18 = 0;
  local_1c = 0;
  do {
    if (*(int *)&g_CDemonSetPtr->field_0x14f0a8 <= local_1c) {
      return 0;
    }
    actor_ptr = *(CTentacle **)(&g_CDemonSetPtr->field_0x14f0ac + local_18);
    if (actor_ptr != this_ptr) {
      iVar1 = core_actor_cpp_FUN_0040c550((CDemonActor *)actor_ptr,class_name);
      if (iVar1 != 0) {
        local_34 = *(float *)&actor_ptr->field_0x20 - *local_20;
        local_30 = *(float *)&actor_ptr->field_0x24 - local_20[1];
        local_2c = *(float *)&actor_ptr->field_0x28 - local_20[2];
        local_40 = local_34;
        *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8) =
             *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8);
        *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
             *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
        local_3c = local_3c * (float)_DAT_005f77ae;
        if (SQRT(local_38 * local_38 + local_40 * local_40 + local_3c * local_3c) <
            *(float *)&this_ptr->field_0xc1e0) {
          *(CTentacle **)&this_ptr->field_0xc1e8 = actor_ptr;
          return 1;
        }
      }
    }
    local_1c = local_1c + 1;
    local_18 = local_18 + 4;
  } while( true );
}
