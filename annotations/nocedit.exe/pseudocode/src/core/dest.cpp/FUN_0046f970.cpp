// Name: core_dest.cpp_FUN_0046f970
// Address: 0046f970
// Address Range: [[0046f970, 0046f97a]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_FUN_0046f970(void)

#include "nocturne.h"

/* Signature: byte actors_other_dest.cpp_FUN_0046f970(uint param_1) */

void __cdecl core_dest_cpp_FUN_0046f970(void)

{
  int iVar1;
  CDemonMission *pCVar2;
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  pCVar2 = g_CDemonMissionPtr;
  in_stack_00000004->unk5 = 0;
  iVar1 = *(int *)(pCVar2->unk1 + 4);
  in_stack_00000004[1].location.area_id = 0;
  in_stack_00000004[1].create_event[0x20] = '\x01';
  in_stack_00000004[1].create_event[0x21] = '\0';
  in_stack_00000004[1].create_event[0x22] = '\0';
  in_stack_00000004[1].create_event[0x23] = '\0';
  in_stack_00000004->is_transparent = iVar1;
  return;
}
