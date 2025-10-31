// Name: core_script.cpp_FUN_005594a0
// Address: 005594a0
// Address Range: [[005594a0, 005594da]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005594a0()
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055be43 [UNCONDITIONAL_CALL]
// Globals:
//   CEventList* g_CEventListPtr = 02d05310
//   undefined4 DAT_02d05310
//   undefined4 DAT_0310ec9c
// Function calls:
//   core_event.cpp_FUN_004add00
//   core_script.cpp_FUN_005593f0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_005594a0(undefined4 param_1, undefined4 param_2) */

void core_script_cpp_FUN_005594a0(void)

{
  int iVar1;
  
  iVar1 = core_script_cpp_FUN_005593f0();
  if ((iVar1 == 0) && (DAT_0310ec9c != 0)) {
    core_event_cpp_FUN_004add00();
    return;
  }
  return;
}


// Assembly code:
// 005594a0: PUSH 0x64
//   Label: core_script.cpp_FUN_005594a0
// 005594a2: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005594a6: PUSH EDX
// 005594a7: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005594ab: PUSH ECX
// 005594ac: CALL core_script.cpp_FUN_005593f0
//   XREF to: 005593f0 (UNCONDITIONAL_CALL)
// 005594b1: ADD ESP,0xc
// 005594b4: TEST EAX,EAX
// 005594b6: JNZ 0x005594c1
//   XREF to: 005594c1 (CONDITIONAL_JUMP)
// 005594b8: CMP dword ptr [0x0310ec9c],0x0
//   XREF to: 0310ec9c (READ)
// 005594bf: JNZ 0x005594c2
//   XREF to: 005594c2 (CONDITIONAL_JUMP)
// 005594c1: RET
//   Label: LAB_005594c1
// 005594c2: PUSH EDI
//   Label: LAB_005594c2
// 005594c3: PUSH ESI
// 005594c4: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005594c8: PUSH ESI
// 005594c9: MOV EDI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 005594cf: PUSH EDI
//   XREF to: 02d05310 (DATA)
// 005594d0: CALL core_event.cpp_FUN_004add00
//   XREF to: 004add00 (UNCONDITIONAL_CALL)
// 005594d5: ADD ESP,0x8
// 005594d8: POP ESI
// 005594d9: POP EDI
// 005594da: RET
