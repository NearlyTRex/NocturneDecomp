// Name: core_event.cpp_FUN_004b0b80
// Address: 004b0b80
// Address Range: [[004b0b80, 004b0bee]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b0b80()
// Cross-references:
//   core_event.cpp_FUN_004aa400 (004aa400) at 004aa41f [UNCONDITIONAL_CALL]
//   core_script.cpp_GetDemonActor_FUN_005594e0 (005594e0) at 00559552 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
// Function calls:
//   core_event.cpp_FUN_004b0bf0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: undefined1 core_event.cpp_FUN_004b0b80(undefined4 param_1, undefined4 param_2) */

undefined4 core_event_cpp_FUN_004b0b80(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  
  iVar1 = core_event_cpp_FUN_004b0bf0();
  if (-1 < iVar1) {
    iVar3 = 0;
    for (iVar4 = 0; iVar4 < (int)g_CDemonSetPtr->actor_list_ptr; iVar4 = iVar4 + 1) {
      iVar2 = crt_string_c_stricmp_FUN_005fe7f0
                        (*(char **)(g_CDemonSetPtr->actor_list_data + iVar3),
                         (char *)(in_stack_00000004 + 0x37da + iVar1 * 0x1e));
      if (iVar2 == 0) {
        return *(undefined4 *)(g_CDemonSetPtr->actor_list_data + iVar3);
      }
      iVar3 = iVar3 + 4;
    }
  }
  return 0;
}


// Assembly code:
// 004b0b80: PUSH EBX
//   Label: core_event.cpp_FUN_004b0b80
// 004b0b81: PUSH ESI
// 004b0b82: PUSH EDI
// 004b0b83: PUSH EBP
// 004b0b84: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b0b88: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b0b8c: PUSH EDX
// 004b0b8d: PUSH EDI
// 004b0b8e: CALL core_event.cpp_FUN_004b0bf0
//   XREF to: 004b0bf0 (UNCONDITIONAL_CALL)
// 004b0b93: ADD ESP,0x8
// 004b0b96: TEST EAX,EAX
// 004b0b98: JL 0x004b0bbc
//   XREF to: 004b0bbc (CONDITIONAL_JUMP)
// 004b0b9a: ADD EAX,EAX
// 004b0b9c: MOV EBX,EAX
// 004b0b9e: SHL EAX,0x4
// 004b0ba1: ADD EDI,0x37da
// 004b0ba7: SUB EAX,EBX
// 004b0ba9: XOR ESI,ESI
// 004b0bab: ADD EDI,EAX
// 004b0bad: XOR EBX,EBX
// 004b0baf: MOV EAX,[0x006810c8]
//   Label: LAB_004b0baf
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004b0bb4: CMP ESI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 004b0bba: JL 0x004b0bc9
//   XREF to: 004b0bc9 (CONDITIONAL_JUMP)
// 004b0bbc: XOR EAX,EAX
//   Label: LAB_004b0bbc
// 004b0bbe: POP EBP
// 004b0bbf: POP EDI
// 004b0bc0: POP ESI
// 004b0bc1: POP EBX
// 004b0bc2: RET
// 004b0bc3: INC ESI
//   Label: LAB_004b0bc3
// 004b0bc4: ADD EBX,0x4
// 004b0bc7: JMP 0x004b0baf
//   XREF to: 004b0baf (UNCONDITIONAL_JUMP)
// 004b0bc9: PUSH EDI
//   Label: LAB_004b0bc9
// 004b0bca: MOV EBP,dword ptr [EBX + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
// 004b0bd1: PUSH EBP
// 004b0bd2: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b0bd7: ADD ESP,0x8
// 004b0bda: TEST EAX,EAX
// 004b0bdc: JNZ 0x004b0bc3
//   XREF to: 004b0bc3 (CONDITIONAL_JUMP)
// 004b0bde: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 004b0be3: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
// 004b0bea: POP EBP
// 004b0beb: POP EDI
// 004b0bec: POP ESI
// 004b0bed: POP EBX
// 004b0bee: RET
