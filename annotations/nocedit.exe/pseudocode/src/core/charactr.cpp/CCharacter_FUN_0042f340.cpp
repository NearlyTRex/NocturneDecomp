// Name: core_charactr.cpp_CCharacter_FUN_0042f340
// Address: 0042f340
// Address Range: [[0042f340, 0042f3d4]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042f340(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042f730 (0042f730) at 0042f780 [DATA]
// Globals:
//   TerminatedCString s_none_006176ae
//   undefined4 DAT_006176af
//   undefined4 DAT_006176b0
//   undefined4 DAT_006176b1
//   TerminatedCString s_anon_006176b5
//   TerminatedCString s_s_006176b8
//   undefined4 g_CCharacterClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042f340(CCharacter *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *in_stack_0000000c;
  
  pcVar4 = "(none)";
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->base_actor,g_CCharacterClassInfo.name_hash);
  pcVar5 = in_stack_0000000c;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar5 = pCVar2->create_event;
  pcVar4 = in_stack_0000000c;
  do {
    while (pCVar2[0x1b].field7_0x6c == 0) {
      pCVar2 = (CDemonActor *)&(pCVar2->orient_matrix).m[0].z;
      if (pCVar2 == (CDemonActor *)(pcVar5 + 0x10)) {
        return;
      }
    }
    if (in_stack_0000000c < pcVar4) {
      iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar4,", ");
      pcVar4 = pcVar4 + iVar3;
    }
    iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar4,"%s",pCVar2[0x1b].field7_0x6c);
    pcVar4 = pcVar4 + iVar3;
    pCVar2 = (CDemonActor *)&(pCVar2->orient_matrix).m[0].z;
  } while (pCVar2 != (CDemonActor *)(pcVar5 + 0x10));
  return;
}


// Assembly code:
// 0042f340: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042f340
// 0042f341: PUSH ESI
// 0042f342: PUSH EDI
// 0042f343: PUSH EBP
// 0042f344: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0042f348: MOV EDX,dword ptr [0x00823c4c]
//   XREF to: 00823c4c (READ)
// 0042f34e: PUSH EDX
// 0042f34f: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0042f353: PUSH ECX
// 0042f354: MOV ESI,0x6176ae
//   XREF to: 006176ae (DATA)
// 0042f359: MOV EDI,EBP
// 0042f35b: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0042f360: ADD ESP,0x8
// 0042f363: MOV EBX,EBP
// 0042f365: MOV EDX,EAX
// 0042f367: PUSH EDI
// 0042f368: MOV AL,byte ptr [ESI]
//   Label: LAB_0042f368
//   XREF to: 006176ae (READ)
//   XREF to: 006176b0 (READ)
// 0042f36a: MOV byte ptr [EDI],AL
// 0042f36c: CMP AL,0x0
// 0042f36e: JZ 0x0042f380
//   XREF to: 0042f380 (CONDITIONAL_JUMP)
// 0042f370: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006176af (READ)
//   XREF to: 006176b1 (READ)
// 0042f373: ADD ESI,0x2
// 0042f376: MOV byte ptr [EDI + 0x1],AL
// 0042f379: ADD EDI,0x2
// 0042f37c: CMP AL,0x0
// 0042f37e: JNZ 0x0042f368
//   XREF to: 0042f368 (CONDITIONAL_JUMP)
// 0042f380: POP EDI
//   Label: LAB_0042f380
// 0042f381: MOV ESI,EDX
// 0042f383: LEA EDI,[EDX + 0x88]
// 0042f389: CMP dword ptr [ESI + 0x24b4],0x0
//   Label: LAB_0042f389
// 0042f390: JNZ 0x0042f39e
//   XREF to: 0042f39e (CONDITIONAL_JUMP)
// 0042f392: ADD ESI,0x44
// 0042f395: CMP ESI,EDI
// 0042f397: JNZ 0x0042f389
//   XREF to: 0042f389 (CONDITIONAL_JUMP)
// 0042f399: POP EBP
// 0042f39a: POP EDI
// 0042f39b: POP ESI
// 0042f39c: POP EBX
// 0042f39d: RET
// 0042f39e: CMP EBX,EBP
//   Label: LAB_0042f39e
// 0042f3a0: JBE 0x0042f3b2
//   XREF to: 0042f3b2 (CONDITIONAL_JUMP)
// 0042f3a2: PUSH 0x6176b5
//   XREF to: 006176b5 (DATA)
// 0042f3a7: PUSH EBX
// 0042f3a8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0042f3ad: ADD ESP,0x8
// 0042f3b0: ADD EBX,EAX
// 0042f3b2: MOV EDX,dword ptr [ESI + 0x24b4]
//   Label: LAB_0042f3b2
// 0042f3b8: PUSH EDX
// 0042f3b9: PUSH 0x6176b8
//   XREF to: 006176b8 (DATA)
// 0042f3be: PUSH EBX
// 0042f3bf: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0042f3c4: ADD ESP,0xc
// 0042f3c7: ADD EBX,EAX
// 0042f3c9: ADD ESI,0x44
// 0042f3cc: CMP ESI,EDI
// 0042f3ce: JNZ 0x0042f389
//   XREF to: 0042f389 (CONDITIONAL_JUMP)
// 0042f3d0: POP EBP
// 0042f3d1: POP EDI
// 0042f3d2: POP ESI
// 0042f3d3: POP EBX
// 0042f3d4: RET
