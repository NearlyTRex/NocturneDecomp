// Name: core_door.cpp_FUN_0047fcf0
// Address: 0047fcf0
// Address Range: [[0047fcf0, 0047fd09]]
// Convention: unknown
// Signature: undefined core_door.cpp_FUN_0047fcf0()
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042cd60 (0042cd60) at 0042cd72 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f2d70 (004f2d70) at 004f2e9a [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f2ed0 (004f2ed0) at 004f2f11 [UNCONDITIONAL_CALL]
// Globals:
//   CEventList* g_CEventListPtr = 02d05310
//   undefined4 DAT_02d05310
// Function calls:
//   core_event.cpp_FUN_004aabe0

#include "nocturne.h"

void core_door_cpp_FUN_0047fcf0(void)

{
  core_event_cpp_FUN_004aabe0();
  return;
}


// Assembly code:
// 0047fcf0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_door.cpp_FUN_0047fcf0
//   XREF to: Stack[0x4] (READ)
// 0047fcf4: ADD EAX,0x2e8
// 0047fcf9: PUSH EAX
// 0047fcfa: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 0047fd00: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 0047fd01: CALL core_event.cpp_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 0047fd06: ADD ESP,0x8
// 0047fd09: RET
