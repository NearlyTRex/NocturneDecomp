// Name: core_msnedit.cpp_CDemonMission_removeSet_FUN_00538df0
// Address: 00538df0
// MANUAL RECONSTRUCTION
// Address Range: [[00538df0, 00538e9d]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_removeSet_FUN_00538df0(CDemonMission *this_ptr,int set_index)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_removeSet_FUN_00538df0(CDemonMission *this_ptr,int set_index)

{
  CDemonActor *pCVar1;
  CDemonActor *actor;
  int iVar2;
  
  if ((-1 < set_index) && (set_index < this_ptr->num_sets)) {
    pCVar1 = this_ptr->first_actor;
    while (actor = pCVar1, actor != (CDemonActor *)0x0) {
      pCVar1 = actor->next_actor;
      if (set_index == (actor->location).area_id) {
        core_msnedit_cpp_CDemonMission_deleteActor_FUN_00538ea0(this_ptr,actor);
        core_mission_cpp_CDemonMission_removeActor_FUN_00523f20(this_ptr,actor,1);
      }
    }
    for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0; pCVar1 = pCVar1->next_actor)
    {
      (*((pCVar1->vtable)._ub)->onAreaDeleted)(pCVar1,set_index);
    }
    iVar2 = this_ptr->num_sets + -1;
    this_ptr->num_sets = iVar2;
    memmove
              (this_ptr->set_names + set_index,this_ptr->set_names + set_index,
               (iVar2 - set_index) * sizeof(*this_ptr->set_names));
  }
  return;
}
