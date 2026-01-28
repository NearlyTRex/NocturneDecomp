// Name: core_msnedit.cpp_FUN_00538df0
// Address: 00538df0
// Address Range: [[00538df0, 00538e9d]]
// Convention: unknown
// Signature: void core_msnedit_cpp_FUN_00538df0(void)

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_00538df0(uint param_1, uint param_2) */

void core_msnedit_cpp_FUN_00538df0(void)

{
  CDemonActor *pCVar1;
  CLocation *pCVar2;
  void *pvVar3;
  CDemonMission *in_stack_00000004;
  int in_stack_00000008;
  
  if ((-1 < in_stack_00000008) && (in_stack_00000008 < (int)in_stack_00000004->set_list)) {
    pCVar1 = in_stack_00000004->first_actor;
    while (pCVar1 != (CDemonActor *)0x0) {
      pCVar2 = &pCVar1->location;
      pCVar1 = pCVar1->next_actor;
      if (in_stack_00000008 == pCVar2->area_id) {
        core_msnedit_cpp_FUN_00538ea0();
        core_mission_cpp_CDemonMission_FUN_00523f20(in_stack_00000004);
      }
    }
    for (pCVar1 = in_stack_00000004->first_actor; pCVar1 != (CDemonActor *)0x0;
        pCVar1 = pCVar1->next_actor) {
      (*((pCVar1->vtable)._ub)->onAreaDeleted)(pCVar1,in_stack_00000008);
    }
    pvVar3 = (void *)((int)in_stack_00000004->set_list + -1);
    in_stack_00000004->set_list = pvVar3;
    crt_string_c_memmove_FUN_005fe5e0
              (in_stack_00000004->unk3 + in_stack_00000008 * 0x100,
               in_stack_00000004->unk3 + in_stack_00000008 * 0x100,
               ((int)pvVar3 - in_stack_00000008) * 0x100);
  }
  return;
}
