// Name: core_event.cpp_CEventList_FUN_004add00
// Address: 004add00
// Address Range: [[004add00, 004add39]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_FUN_004add00(CEventList * this_ptr)
// Cross-references:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 0040f91a [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004acd94 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055cc1f [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005594a0 (005594a0) at 005594d0 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02d0a45c
//   undefined1 DAT_02d0a460
// Function calls:
//   core_event.cpp_CEventList_FUN_004add80

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004add00(CEventList *this_ptr)

{
  int iVar1;
  char *in_stack_00000008;
  
  if (*in_stack_00000008 != '\0') {
    DAT_02d0a45c = 1;
    iVar1 = core_event_cpp_CEventList_FUN_004add80(this_ptr);
    DAT_02d0a45c = 0;
    if (iVar1 < 0) {
      return 0x2d0a460;
    }
  }
  return 0;
}


// Assembly code:
// 004add00: PUSH EBX
//   Label: core_event.cpp_CEventList_FUN_004add00
// 004add01: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004add05: CMP byte ptr [EAX],0x0
// 004add08: JNZ 0x004add0e
//   XREF to: 004add0e (CONDITIONAL_JUMP)
// 004add0a: XOR EAX,EAX
//   Label: LAB_004add0a
// 004add0c: POP EBX
// 004add0d: RET
// 004add0e: PUSH EAX
//   Label: LAB_004add0e
// 004add0f: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004add13: MOV EDX,0x1
// 004add18: PUSH ECX
// 004add19: XOR EBX,EBX
// 004add1b: MOV dword ptr [0x02d0a45c],EDX
//   XREF to: 02d0a45c (WRITE)
// 004add21: CALL core_event.cpp_CEventList_FUN_004add80
//   XREF to: 004add80 (UNCONDITIONAL_CALL)
// 004add26: ADD ESP,0x8
// 004add29: MOV dword ptr [0x02d0a45c],EBX
//   XREF to: 02d0a45c (WRITE)
// 004add2f: TEST EAX,EAX
// 004add31: JGE 0x004add0a
//   XREF to: 004add0a (CONDITIONAL_JUMP)
// 004add33: MOV EAX,0x2d0a460
//   XREF to: 02d0a460 (DATA)
// 004add38: POP EBX
// 004add39: RET
