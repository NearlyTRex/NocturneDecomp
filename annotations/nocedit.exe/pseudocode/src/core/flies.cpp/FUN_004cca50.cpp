// Name: core_flies.cpp_FUN_004cca50
// Address: 004cca50
// Address Range: [[004cca50, 004cca9d]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004cca50()
// Cross-references:
//   core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70 (00409e70) at 00409e89 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CFliesClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

/* Signature: undefined1 actors_other_flies.cpp_FUN_004cca50(undefined4 param_1) */

CDemonActor * core_flies_cpp_FUN_004cca50(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar2) {
      return (CDemonActor *)0x0;
    }
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar3),
                        g_CFliesClassInfo.name_hash);
    if ((pCVar1 != (CDemonActor *)0x0) && (in_stack_00000004 == pCVar1[0x1f].runtime_state)) break;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return pCVar1;
}


// Assembly code:
// 004cca50: PUSH EBX
//   Label: core_flies.cpp_FUN_004cca50
// 004cca51: PUSH ESI
// 004cca52: PUSH EDI
// 004cca53: PUSH EBP
// 004cca54: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004cca58: XOR ESI,ESI
// 004cca5a: XOR EBX,EBX
// 004cca5c: MOV EAX,[0x006810c8]
//   Label: LAB_004cca5c
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004cca61: CMP EBX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 004cca67: JL 0x004cca76
//   XREF to: 004cca76 (CONDITIONAL_JUMP)
// 004cca69: XOR EAX,EAX
// 004cca6b: POP EBP
// 004cca6c: POP EDI
// 004cca6d: POP ESI
// 004cca6e: POP EBX
// 004cca6f: RET
// 004cca70: INC EBX
//   Label: LAB_004cca70
// 004cca71: ADD ESI,0x4
// 004cca74: JMP 0x004cca5c
//   XREF to: 004cca5c (UNCONDITIONAL_JUMP)
// 004cca76: MOV ECX,dword ptr [0x02d7a7fc]
//   Label: LAB_004cca76
//   XREF to: 02d7a7fc (READ)
// 004cca7c: PUSH ECX
// 004cca7d: MOV EBP,dword ptr [ESI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
// 004cca84: PUSH EBP
// 004cca85: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004cca8a: ADD ESP,0x8
// 004cca8d: TEST EAX,EAX
// 004cca8f: JZ 0x004cca70
//   XREF to: 004cca70 (CONDITIONAL_JUMP)
// 004cca91: CMP EDI,dword ptr [EAX + 0x2a08]
// 004cca97: JNZ 0x004cca70
//   XREF to: 004cca70 (CONDITIONAL_JUMP)
// 004cca99: POP EBP
// 004cca9a: POP EDI
// 004cca9b: POP ESI
// 004cca9c: POP EBX
// 004cca9d: RET
