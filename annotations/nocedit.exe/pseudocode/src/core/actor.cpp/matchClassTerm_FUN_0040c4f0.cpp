// Name: core_actor.cpp_matchClassTerm_FUN_0040c4f0
// Address: 0040c4f0
// Address Range: [[0040c4f0, 0040c605]]
// Convention: __cdecl
// Signature: int core_actor.cpp_matchClassTerm_FUN_0040c4f0(CDemonActorType * type_ptr, char * * parse_pos)
// Cross-references:
//   core_actor.cpp_matchClassExpression_FUN_0040c610 (0040c610) at 0040c6a6 [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable
// Function calls:
//   core_actor.cpp_checkNameHash_FUN_0040c700
//   core_actor.cpp_matchClassExpression_FUN_0040c610
//   crt_ctype.c_tolower_FUN_005feb30

#include "nocturne.h"

int __cdecl core_actor_cpp_matchClassTerm_FUN_0040c4f0(CDemonActorType *type_ptr,char **parse_pos)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  while ((g_CharacterClassificationTable[(byte)(**parse_pos + 1)] & 2U) != 0) {
    *parse_pos = *parse_pos + 1;
  }
  pcVar2 = *parse_pos;
  cVar1 = *pcVar2;
  if (cVar1 == '(') {
    *parse_pos = pcVar2 + 1;
    iVar4 = core_actor_cpp_matchClassExpression_FUN_0040c610(type_ptr,parse_pos);
    if (-1 < iVar4) {
      while ((g_CharacterClassificationTable[(byte)(**parse_pos + 1)] & 2U) != 0) {
        *parse_pos = *parse_pos + 1;
      }
      if (**parse_pos == ')') {
        *parse_pos = *parse_pos + 1;
        return iVar4;
      }
    }
    return -1;
  }
  if (cVar1 == '!') {
    *parse_pos = pcVar2 + 1;
    uVar3 = core_actor_cpp_matchClassTerm_FUN_0040c4f0(type_ptr,parse_pos);
    if (-1 < (int)uVar3) {
      uVar3 = (uint)(uVar3 == 0);
    }
    return uVar3;
  }
  if ((g_CharacterClassificationTable[(byte)(cVar1 + 1)] & 0xe0U) == 0) {
    return -1;
  }
  uVar3 = 0;
  do {
    iVar4 = crt_ctype_c_tolower_FUN_005feb30((uint)(byte)**parse_pos);
    uVar3 = iVar4 * 0x20001 + (uVar3 >> 0x19) + uVar3 * 0x80;
    pcVar2 = *parse_pos;
    *parse_pos = pcVar2 + 1;
  } while ((g_CharacterClassificationTable[(byte)(pcVar2[1] + 1)] & 0xe0U) != 0);
  iVar4 = core_actor_cpp_checkNameHash_FUN_0040c700(type_ptr,uVar3);
  return iVar4;
}


// Assembly code:
// 0040c4f0: PUSH EBX
//   Label: core_actor.cpp_matchClassTerm_FUN_0040c4f0
// 0040c4f1: PUSH ESI
// 0040c4f2: PUSH EDI
// 0040c4f3: PUSH EBP
// 0040c4f4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040c4f8: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040c4fc: MOV ESI,EBX
// 0040c4fe: MOV EAX,dword ptr [ESI]
//   Label: LAB_0040c4fe
// 0040c500: MOV DL,byte ptr [EAX]
// 0040c502: INC DL
// 0040c504: AND EDX,0xff
// 0040c50a: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 0040c511: JNZ 0x0040c545
//   XREF to: 0040c545 (CONDITIONAL_JUMP)
// 0040c513: MOV EDI,dword ptr [EBX]
// 0040c515: MOV CH,byte ptr [EDI]
// 0040c517: CMP CH,0x28
// 0040c51a: JZ 0x0040c54a
//   XREF to: 0040c54a (CONDITIONAL_JUMP)
// 0040c51c: CMP CH,0x21
// 0040c51f: JNZ 0x0040c594
//   XREF to: 0040c594 (CONDITIONAL_JUMP)
// 0040c525: PUSH EBX
// 0040c526: INC EDI
// 0040c527: PUSH EBP
// 0040c528: MOV dword ptr [EBX],EDI
// 0040c52a: CALL core_actor.cpp_matchClassTerm_FUN_0040c4f0
//   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)
// 0040c52f: ADD ESP,0x8
// 0040c532: MOV EDI,EAX
// 0040c534: TEST EAX,EAX
// 0040c536: JL 0x0040c53e
//   XREF to: 0040c53e (CONDITIONAL_JUMP)
// 0040c538: SETZ AL
// 0040c53b: MOVZX EDI,AL
// 0040c53e: MOV EAX,EDI
//   Label: LAB_0040c53e
// 0040c540: POP EBP
// 0040c541: POP EDI
// 0040c542: POP ESI
// 0040c543: POP EBX
// 0040c544: RET
// 0040c545: INC EAX
//   Label: LAB_0040c545
// 0040c546: MOV dword ptr [ESI],EAX
// 0040c548: JMP 0x0040c4fe
//   XREF to: 0040c4fe (UNCONDITIONAL_JUMP)
// 0040c54a: PUSH EBX
//   Label: LAB_0040c54a
// 0040c54b: INC EDI
// 0040c54c: PUSH EBP
// 0040c54d: MOV dword ptr [EBX],EDI
// 0040c54f: CALL core_actor.cpp_matchClassExpression_FUN_0040c610
//   XREF to: 0040c610 (UNCONDITIONAL_CALL)
// 0040c554: ADD ESP,0x8
// 0040c557: MOV EDI,EAX
// 0040c559: TEST EAX,EAX
// 0040c55b: JL 0x0040c579
//   XREF to: 0040c579 (CONDITIONAL_JUMP)
// 0040c55d: MOV ESI,EBX
// 0040c55f: MOV EAX,dword ptr [ESI]
//   Label: LAB_0040c55f
// 0040c561: MOV DL,byte ptr [EAX]
// 0040c563: INC DL
// 0040c565: AND EDX,0xff
// 0040c56b: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 0040c572: JZ 0x0040c583
//   XREF to: 0040c583 (CONDITIONAL_JUMP)
// 0040c574: INC EAX
// 0040c575: MOV dword ptr [ESI],EAX
// 0040c577: JMP 0x0040c55f
//   XREF to: 0040c55f (UNCONDITIONAL_JUMP)
// 0040c579: MOV EAX,0xffffffff
//   Label: LAB_0040c579
// 0040c57e: POP EBP
// 0040c57f: POP EDI
// 0040c580: POP ESI
// 0040c581: POP EBX
// 0040c582: RET
// 0040c583: MOV EAX,dword ptr [EBX]
//   Label: LAB_0040c583
// 0040c585: CMP byte ptr [EAX],0x29
// 0040c588: JNZ 0x0040c579
//   XREF to: 0040c579 (CONDITIONAL_JUMP)
// 0040c58a: INC EAX
// 0040c58b: MOV dword ptr [EBX],EAX
// 0040c58d: MOV EAX,EDI
// 0040c58f: POP EBP
// 0040c590: POP EDI
// 0040c591: POP ESI
// 0040c592: POP EBX
// 0040c593: RET
// 0040c594: MOV AL,CH
//   Label: LAB_0040c594
// 0040c596: INC AL
// 0040c598: AND EAX,0xff
// 0040c59d: TEST byte ptr [EAX + 0x6849c4],0xe0
//   XREF to: 006849c4 (DATA)
// 0040c5a4: JZ 0x0040c5fa
//   XREF to: 0040c5fa (CONDITIONAL_JUMP)
// 0040c5a6: XOR ESI,ESI
// 0040c5a8: MOV EAX,dword ptr [EBX]
//   Label: LAB_0040c5a8
// 0040c5aa: MOV AL,byte ptr [EAX]
// 0040c5ac: AND EAX,0xff
// 0040c5b1: PUSH EAX
// 0040c5b2: CALL crt_ctype.c_tolower_FUN_005feb30
//   XREF to: 005feb30 (UNCONDITIONAL_CALL)
// 0040c5b7: MOV EDX,ESI
// 0040c5b9: SHL EDX,0x7
// 0040c5bc: SHR ESI,0x19
// 0040c5bf: ADD ESI,EDX
// 0040c5c1: MOV EDX,EAX
// 0040c5c3: SHL EDX,0x11
// 0040c5c6: ADD EDX,ESI
// 0040c5c8: ADD EAX,EDX
// 0040c5ca: MOV EDX,dword ptr [EBX]
// 0040c5cc: INC EDX
// 0040c5cd: MOV dword ptr [EBX],EDX
// 0040c5cf: ADD ESP,0x4
// 0040c5d2: MOV DL,byte ptr [EDX]
// 0040c5d4: MOV ESI,EAX
// 0040c5d6: INC DL
// 0040c5d8: AND EDX,0xff
// 0040c5de: TEST byte ptr [EDX + 0x6849c4],0xe0
//   XREF to: 006849c4 (DATA)
// 0040c5e5: JNZ 0x0040c5a8
//   XREF to: 0040c5a8 (CONDITIONAL_JUMP)
// 0040c5e7: PUSH EAX
// 0040c5e8: PUSH EBP
// 0040c5e9: CALL core_actor.cpp_checkNameHash_FUN_0040c700
//   XREF to: 0040c700 (UNCONDITIONAL_CALL)
// 0040c5ee: ADD ESP,0x8
// 0040c5f1: MOV EDI,EAX
// 0040c5f3: MOV EAX,EDI
// 0040c5f5: POP EBP
// 0040c5f6: POP EDI
// 0040c5f7: POP ESI
// 0040c5f8: POP EBX
// 0040c5f9: RET
// 0040c5fa: MOV EDI,0xffffffff
//   Label: LAB_0040c5fa
// 0040c5ff: MOV EAX,EDI
// 0040c601: POP EBP
// 0040c602: POP EDI
// 0040c603: POP ESI
// 0040c604: POP EBX
// 0040c605: RET
