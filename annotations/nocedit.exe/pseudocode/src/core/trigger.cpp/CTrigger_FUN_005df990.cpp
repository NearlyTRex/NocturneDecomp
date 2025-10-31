// Name: core_trigger.cpp_CTrigger_FUN_005df990
// Address: 005df990
// Address Range: [[005df990, 005df99a]]
// Convention: __cdecl
// Signature: void core_trigger.cpp_CTrigger_FUN_005df990(CTrigger * this_ptr)
// Cross-references:
//   core_waypoint.cpp_CWaypoint_FUN_005ebeb0 (005ebeb0) at 005ebebb [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_FUN_005df990(CTrigger *this_ptr)

{
  char cVar1;
  int iVar2;
  CDemonMission *pCVar3;
  int iVar4;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  pCVar3 = g_CDemonMissionPtr;
  (this_ptr->base_actor).field14_0xf8 = 0;
  iVar4 = *(int *)(pCVar3->field0_0x0 + 4);
  (this_ptr->base_actor).field16_0x100 = 1;
  iVar2 = *(int *)(this_ptr->field1_0x158 + 0x1c);
  (this_ptr->base_actor).is_transparent = iVar4;
  if (iVar2 == 5) {
    (this_ptr->base_actor).field16_0x100 = 0;
  }
  if (*(int *)(this_ptr->field1_0x158 + 0x1c) == 4) {
    (this_ptr->base_actor).field16_0x100 = 0;
  }
  if (*(int *)(this_ptr->field1_0x158 + 0x1c) == 7) {
    (this_ptr->base_actor).field16_0x100 = 0;
  }
  this_ptr->field1_0x158[0x198] = '\0';
  this_ptr->field1_0x158[0x199] = '\0';
  this_ptr->field1_0x158[0x19a] = '\0';
  this_ptr->field1_0x158[0x19b] = '\0';
  this_ptr->field1_0x158[0x210] = '\0';
  this_ptr->field1_0x158[0x211] = '\0';
  this_ptr->field1_0x158[0x212] = '\0';
  this_ptr->field1_0x158[0x213] = '\0';
  iVar4 = crt_string_c_stricmp_FUN_005fe7f0(this_ptr->field1_0x158 + 0xcc,"none");
  if (iVar4 == 0) {
    this_ptr->field1_0x158[0xcc] = '\0';
  }
  iVar4 = crt_string_c_stricmp_FUN_005fe7f0(this_ptr->field1_0x158 + 0x130,"none");
  if (iVar4 == 0) {
    this_ptr->field1_0x158[0x130] = '\0';
  }
  cVar1 = this_ptr->field1_0x158[0xcc];
  (this_ptr->base_actor).field17_0x104 = 0;
  if ((cVar1 == '\0') && (this_ptr->field1_0x158[0x130] == '\0')) {
    (this_ptr->base_actor).field17_0x104 = 1;
    return;
  }
  return;
}


// Assembly code:
// 005df990: PUSH EBX
//   Label: core_trigger.cpp_CTrigger_FUN_005df990
// 005df991: MOV EBX,dword ptr [ESP + 0x8]
// 005df995: PUSH EBX
// 005df996: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
