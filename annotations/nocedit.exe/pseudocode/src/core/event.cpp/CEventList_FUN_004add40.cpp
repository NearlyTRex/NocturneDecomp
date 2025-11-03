// Name: core_event.cpp_CEventList_FUN_004add40
// Address: 004add40
// Address Range: [[004add40, 004add79]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_FUN_004add40(CEventList * this_ptr)
// Cross-references:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 0040f9de [UNCONDITIONAL_CALL]
//   core_actor.cpp_FUN_0040fffe (0040fffe) at 0041000d [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004df21d [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055bb91 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02d0a45c
//   undefined1 DAT_02d0a460
// Function calls:
//   core_event.cpp_CEventList_FUN_004aac00

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004add40(CEventList *this_ptr)

{
  int iVar1;
  char *in_stack_00000008;
  
  if (*in_stack_00000008 != '\0') {
    DAT_02d0a45c = 1;
    iVar1 = core_event_cpp_CEventList_FUN_004aac00(this_ptr);
    DAT_02d0a45c = 0;
    if (iVar1 == 0) {
      return 0x2d0a460;
    }
  }
  return 0;
}


// Assembly code:
// 004add40: PUSH EBX
//   Label: core_event.cpp_CEventList_FUN_004add40
// 004add41: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004add45: CMP byte ptr [EAX],0x0
// 004add48: JNZ 0x004add4e
//   XREF to: 004add4e (CONDITIONAL_JUMP)
// 004add4a: XOR EAX,EAX
//   Label: LAB_004add4a
// 004add4c: POP EBX
// 004add4d: RET
// 004add4e: PUSH EAX
//   Label: LAB_004add4e
// 004add4f: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004add53: MOV EDX,0x1
// 004add58: PUSH ECX
// 004add59: XOR EBX,EBX
// 004add5b: MOV dword ptr [0x02d0a45c],EDX
//   XREF to: 02d0a45c (WRITE)
// 004add61: CALL core_event.cpp_CEventList_FUN_004aac00
//   XREF to: 004aac00 (UNCONDITIONAL_CALL)
// 004add66: ADD ESP,0x8
// 004add69: MOV dword ptr [0x02d0a45c],EBX
//   XREF to: 02d0a45c (WRITE)
// 004add6f: TEST EAX,EAX
// 004add71: JNZ 0x004add4a
//   XREF to: 004add4a (CONDITIONAL_JUMP)
// 004add73: MOV EAX,0x2d0a460
//   XREF to: 02d0a460 (DATA)
// 004add78: POP EBX
// 004add79: RET
