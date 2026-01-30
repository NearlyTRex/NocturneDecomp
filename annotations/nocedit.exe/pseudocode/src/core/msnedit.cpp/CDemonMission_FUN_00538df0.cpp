// Name: core_msnedit.cpp_CDemonMission_FUN_00538df0
// Address: 00538df0
// Address Range: [[00538df0, 00538e9d]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_00538df0(CDemonMission *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_00538df0(CDemonMission *this_ptr,int param_2)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  void *pvVar3;
  
  if ((-1 < param_2) && (param_2 < (int)this_ptr->set_list)) {
    pCVar1 = this_ptr->first_actor;
    while (pCVar2 = pCVar1, pCVar2 != (CDemonActor *)0x0) {
      pCVar1 = pCVar2->next_actor;
      if (param_2 == (pCVar2->location).area_id) {
        core_msnedit_cpp_CDemonMission_FUN_00538ea0(this_ptr,(int)pCVar2);
        core_mission_cpp_CDemonMission_FUN_00523f20(this_ptr);
      }
    }
    for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0; pCVar1 = pCVar1->next_actor)
    {
      (*((pCVar1->vtable)._ub)->onAreaDeleted)(pCVar1,param_2);
    }
    pvVar3 = (void *)((int)this_ptr->set_list + -1);
    this_ptr->set_list = pvVar3;
    memmove
              (this_ptr->unk3 + param_2 * 0x100,this_ptr->unk3 + param_2 * 0x100,
               ((int)pvVar3 - param_2) * 0x100);
  }
  return;
}
