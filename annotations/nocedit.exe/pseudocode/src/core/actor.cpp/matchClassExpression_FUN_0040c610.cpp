// Name: core_actor.cpp_matchClassExpression_FUN_0040c610
// Address: 0040c610
// Address Range: [[0040c610, 0040c6c1]]
// Convention: __cdecl
// Signature: int core_actor.cpp_matchClassExpression_FUN_0040c610(CDemonActorType * type_ptr, char * * parse_pos)
// Cross-references:
//   core_actor.cpp_matchClassTerm_FUN_0040c4f0 (0040c4f0) at 0040c54f [UNCONDITIONAL_CALL]
//   core_actor.cpp_matchesClassName_FUN_0040c740 (0040c740) at 0040c74a [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable
// Function calls:
//   core_actor.cpp_matchClassTerm_FUN_0040c4f0

#include "nocturne.h"

int __cdecl
core_actor_cpp_matchClassExpression_FUN_0040c610(CDemonActorType *type_ptr,char **parse_pos)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    while( true ) {
      while ((g_CharacterClassificationTable[(byte)(**parse_pos + 1)] & 2U) != 0) {
        *parse_pos = *parse_pos + 1;
      }
      pcVar2 = *parse_pos;
      cVar1 = *pcVar2;
      if ((cVar1 == '\0') || (cVar1 == ')')) {
        return iVar4;
      }
      if (cVar1 == '|') break;
      if (cVar1 == '&') {
        *parse_pos = pcVar2 + 1;
        if (pcVar2[1] == '&') {
          *parse_pos = pcVar2 + 2;
        }
        iVar3 = core_actor_cpp_matchClassTerm_FUN_0040c4f0(type_ptr,parse_pos);
        if (iVar3 < 0) {
          return -1;
        }
        if (iVar3 == 0) {
          iVar4 = 0;
        }
      }
      else {
        iVar3 = core_actor_cpp_matchClassTerm_FUN_0040c4f0(type_ptr,parse_pos);
        if (iVar3 < 0) {
          return -1;
        }
        if (0 < iVar3) {
          iVar4 = 1;
        }
      }
    }
    *parse_pos = pcVar2 + 1;
    if (pcVar2[1] == '|') {
      *parse_pos = pcVar2 + 2;
    }
    iVar3 = core_actor_cpp_matchClassTerm_FUN_0040c4f0(type_ptr,parse_pos);
    if (iVar3 < 0) break;
    if (0 < iVar3) {
      iVar4 = 1;
    }
  }
  return -1;
}


// Assembly code:
// 0040c610: PUSH EBX
//   Label: core_actor.cpp_matchClassExpression_FUN_0040c610
// 0040c611: PUSH ESI
// 0040c612: PUSH EDI
// 0040c613: PUSH EBP
// 0040c614: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040c618: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040c61c: XOR EDI,EDI
// 0040c61e: MOV BH,0x2
// 0040c620: MOV EDX,ESI
//   Label: LAB_0040c620
// 0040c622: MOV EAX,dword ptr [EDX]
//   Label: LAB_0040c622
// 0040c624: MOV BL,byte ptr [EAX]
// 0040c626: XOR ECX,ECX
// 0040c628: INC BL
// 0040c62a: MOV CL,BL
// 0040c62c: TEST byte ptr [ECX + 0x6849c4],BH
//   XREF to: 006849c4 (DATA)
// 0040c632: JNZ 0x0040c668
//   XREF to: 0040c668 (CONDITIONAL_JUMP)
// 0040c634: MOV EAX,dword ptr [ESI]
// 0040c636: MOV CL,byte ptr [EAX]
// 0040c638: TEST CL,CL
// 0040c63a: JZ 0x0040c66d
//   XREF to: 0040c66d (CONDITIONAL_JUMP)
// 0040c63c: CMP CL,0x29
// 0040c63f: JZ 0x0040c66d
//   XREF to: 0040c66d (CONDITIONAL_JUMP)
// 0040c641: CMP CL,0x7c
// 0040c644: JNZ 0x0040c67e
//   XREF to: 0040c67e (CONDITIONAL_JUMP)
// 0040c646: INC EAX
// 0040c647: MOV dword ptr [ESI],EAX
// 0040c649: CMP byte ptr [EAX],0x7c
// 0040c64c: JNZ 0x0040c651
//   XREF to: 0040c651 (CONDITIONAL_JUMP)
// 0040c64e: INC EAX
// 0040c64f: MOV dword ptr [ESI],EAX
// 0040c651: PUSH ESI
//   Label: LAB_0040c651
// 0040c652: PUSH EBP
// 0040c653: CALL core_actor.cpp_matchClassTerm_FUN_0040c4f0
//   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)
// 0040c658: ADD ESP,0x8
// 0040c65b: TEST EAX,EAX
// 0040c65d: JL 0x0040c674
//   XREF to: 0040c674 (CONDITIONAL_JUMP)
// 0040c65f: JLE 0x0040c620
//   XREF to: 0040c620 (CONDITIONAL_JUMP)
// 0040c661: MOV EDI,0x1
// 0040c666: JMP 0x0040c620
//   XREF to: 0040c620 (UNCONDITIONAL_JUMP)
// 0040c668: INC EAX
//   Label: LAB_0040c668
// 0040c669: MOV dword ptr [EDX],EAX
// 0040c66b: JMP 0x0040c622
//   XREF to: 0040c622 (UNCONDITIONAL_JUMP)
// 0040c66d: MOV EAX,EDI
//   Label: LAB_0040c66d
// 0040c66f: POP EBP
// 0040c670: POP EDI
// 0040c671: POP ESI
// 0040c672: POP EBX
// 0040c673: RET
// 0040c674: MOV EAX,0xffffffff
//   Label: LAB_0040c674
// 0040c679: POP EBP
// 0040c67a: POP EDI
// 0040c67b: POP ESI
// 0040c67c: POP EBX
// 0040c67d: RET
// 0040c67e: CMP CL,0x26
//   Label: LAB_0040c67e
// 0040c681: JNZ 0x0040c6a4
//   XREF to: 0040c6a4 (CONDITIONAL_JUMP)
// 0040c683: INC EAX
// 0040c684: MOV dword ptr [ESI],EAX
// 0040c686: CMP CL,byte ptr [EAX]
// 0040c688: JNZ 0x0040c68d
//   XREF to: 0040c68d (CONDITIONAL_JUMP)
// 0040c68a: INC EAX
// 0040c68b: MOV dword ptr [ESI],EAX
// 0040c68d: PUSH ESI
//   Label: LAB_0040c68d
// 0040c68e: PUSH EBP
// 0040c68f: CALL core_actor.cpp_matchClassTerm_FUN_0040c4f0
//   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)
// 0040c694: ADD ESP,0x8
// 0040c697: TEST EAX,EAX
// 0040c699: JL 0x0040c674
//   XREF to: 0040c674 (CONDITIONAL_JUMP)
// 0040c69b: JNZ 0x0040c620
//   XREF to: 0040c620 (CONDITIONAL_JUMP)
// 0040c69d: XOR EDI,EDI
// 0040c69f: JMP 0x0040c620
//   XREF to: 0040c620 (UNCONDITIONAL_JUMP)
// 0040c6a4: PUSH ESI
//   Label: LAB_0040c6a4
// 0040c6a5: PUSH EBP
// 0040c6a6: CALL core_actor.cpp_matchClassTerm_FUN_0040c4f0
//   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)
// 0040c6ab: ADD ESP,0x8
// 0040c6ae: TEST EAX,EAX
// 0040c6b0: JL 0x0040c674
//   XREF to: 0040c674 (CONDITIONAL_JUMP)
// 0040c6b2: JLE 0x0040c620
//   XREF to: 0040c620 (CONDITIONAL_JUMP)
// 0040c6b8: MOV EDI,0x1
// 0040c6bd: JMP 0x0040c620
//   XREF to: 0040c620 (UNCONDITIONAL_JUMP)
