// Name: core_tentacle.cpp_CTentacle_findNearbyTarget_FUN_00573010
// Address: 00573010
// Address Range: [[00573010, 00573107]]
// Convention: __cdecl
// Signature: int __cdecl core_tentacle_cpp_CTentacle_findNearbyTarget_FUN_00573010(CTentacle *this_ptr,char *class_name)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_tentacle_cpp_CTentacle_findNearbyTarget_FUN_00573010(CTentacle *this_ptr,char *class_name)

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
  CLocation *local_20;
  int local_1c;
  int local_18;
  
  bVar2 = 0;
  local_20 = &(this_ptr->base).base.base.location;
  local_18 = 0;
  local_1c = 0;
  do {
    if (g_CDemonSetPtr->character_count <= local_1c) {
      return 0;
    }
    actor_ptr = *(CTentacle **)((int)g_CDemonSetPtr->characters + local_18);
    if (actor_ptr != this_ptr) {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c840((CDemonActor *)actor_ptr,class_name);
      if (iVar1 != 0) {
        local_34 = (actor_ptr->base).base.base.location.position.x - (local_20->position).x;
        local_30 = (actor_ptr->base).base.base.location.position.y - (local_20->position).y;
        local_2c = (actor_ptr->base).base.base.location.position.z - (local_20->position).z;
        local_40 = local_34;
        *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8) =
             *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8);
        *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
             *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
        local_3c = local_3c * (float)_DAT_005ec53a;
        if (SQRT(local_38 * local_38 + local_40 * local_40 + local_3c * local_3c) <
            (this_ptr->base).guard_distance) {
          (this_ptr->base).victim = (CCharacter *)actor_ptr;
          return 1;
        }
      }
    }
    local_1c = local_1c + 1;
    local_18 = local_18 + 4;
  } while( true );
}
