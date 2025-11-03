// Name: core_stranger.cpp_CStranger_FUN_005c67c0
// Address: 005c67c0
// Address Range: [[005c67c0, 005c67e8]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c67c0()
// Globals:
//   TerminatedCString s_strangerCannotDie_00653fa7
//   CEventList* g_CEventListPtr = 02d05310
//   CEventList g_CEventListInstance
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042c580
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c67c0(undefined4 param_1) */

int core_stranger_cpp_CStranger_FUN_005c67c0(void)

{
  int iVar1;
  CCharacter *in_stack_00000008;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,"strangerCannotDie");
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_FUN_0042c580(in_stack_00000008);
  return iVar1;
}


// Assembly code:
// 005c67c0: PUSH 0x653fa7
//   Label: core_stranger.cpp_CStranger_FUN_005c67c0
//   XREF to: 00653fa7 (DATA)
// 005c67c5: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 005c67cb: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 005c67cc: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 005c67d1: ADD ESP,0x8
// 005c67d4: TEST EAX,EAX
// 005c67d6: JZ 0x005c67db
//   XREF to: 005c67db (CONDITIONAL_JUMP)
// 005c67d8: XOR EAX,EAX
// 005c67da: RET
// 005c67db: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_005c67db
//   XREF to: Stack[0x4] (READ)
// 005c67df: PUSH ECX
// 005c67e0: CALL core_charactr.cpp_CCharacter_FUN_0042c580
//   XREF to: 0042c580 (UNCONDITIONAL_CALL)
// 005c67e5: ADD ESP,0x4
// 005c67e8: RET
