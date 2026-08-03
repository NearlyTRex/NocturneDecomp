// Name: core_dest.cpp_CActorDestination_process_FUN_0044b850
// Address: 0044b850
// Address Range: [[0044b850, 0044ba09]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_process_FUN_0044b850(CActorDestination *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_dest_cpp_CActorDestination_process_FUN_0044b850(CActorDestination *this_ptr,float delta_time)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  if ((this_ptr->needs_actor_search != 0) && (this_ptr->dest_actor == (CDemonActor *)0x0)) {
    iVar3 = 0;
    for (iVar4 = 0; iVar4 < g_CDemonSet_PTR_005be368->actor_count; iVar4 = iVar4 + 1) {
      iVar2 = *(int *)((int)g_CDemonSet_PTR_005be368->actors + iVar3);
      local_2c = (this_ptr->base).location.position.x - *(float *)(iVar2 + 0x20);
      local_28 = (this_ptr->base).location.position.y - *(float *)(iVar2 + 0x24);
      local_24 = (this_ptr->base).location.position.z - *(float *)(iVar2 + 0x28);
      if ((SQRT(local_24 * local_24 + local_2c * local_2c + local_28 * local_28) <
           (float)0.10000000000000001) &&
         (iVar2 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0044bab0
                            (this_ptr,*(CDemonActor **)
                                       ((int)g_CDemonSet_PTR_005be368->actors + iVar3)), iVar2 != 0)
         ) break;
      iVar3 = iVar3 + 4;
    }
  }
  pCVar1 = this_ptr->dest_actor;
  if (pCVar1 != (CDemonActor *)0x0) {
    local_38 = (pCVar1->location).position.x - (this_ptr->base).location.position.x;
    local_34 = (pCVar1->location).position.y - (this_ptr->base).location.position.y;
    local_30 = (pCVar1->location).position.z - (this_ptr->base).location.position.z;
    if (&local_20 != &local_38) {
      local_20 = local_38;
      local_1c = local_34;
      local_18 = local_30;
    }
    if ((((float)0.25 <= ABS(local_20)) || ((float)0.25 <= ABS(local_1c))) ||
       ((float)0.25 <= ABS(local_18))) {
      this_ptr->triggered = 0;
      this_ptr->needs_actor_search = 0;
      return;
    }
    if ((this_ptr->persistent_event_flag != 0) ||
       ((this_ptr->triggered == 0 && (this_ptr->needs_actor_search == 0)))) {
      core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,this_ptr->what_event);
    }
    this_ptr->triggered = 1;
  }
  this_ptr->needs_actor_search = 0;
  return;
}
