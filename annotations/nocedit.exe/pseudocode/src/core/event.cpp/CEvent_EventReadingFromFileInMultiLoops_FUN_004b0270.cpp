// Name: core_event.cpp_CEvent_EventReadingFromFileInMultiLoops_FUN_004b0270
// Address: 004b0270
// Address Range: [[004b0270, 004b0329]]
// Convention: unknown
// Signature: undefined core_event.cpp_CEvent_EventReadingFromFileInMultiLoops_FUN_004b0270()
// Cross-references:
//   core_event.cpp_CEvent_EventReadingFromFile_FUN_004ae140 (004ae140) at 004ae1fe [UNCONDITIONAL_CALL]
//   core_event.cpp_CEvent_SyntaxErrorSomething_FUN_004add80 (004add80) at 004add9f [UNCONDITIONAL_CALL]
// Function calls:
//   core_event.cpp_CEvent_EventReadingFromFile_FUN_004ae140

#include "nocturne.h"

/* Signature: int core_event.cpp_CEvent_EventReadingFromFileInMultiLoops(undefined4 param_1,
   undefined4 param_2, undefined4 param_3) */

int core_event_cpp_CEvent_EventReadingFromFileInMultiLoops_FUN_004b0270(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000008;
  int *in_stack_0000000c;
  
  iVar2 = core_event_cpp_CEvent_EventReadingFromFile_FUN_004ae140();
  if (iVar2 < 0) {
    return iVar2;
  }
  while( true ) {
    while( true ) {
      cVar1 = *(char *)(*in_stack_0000000c + in_stack_00000008);
      if (cVar1 == '\0') {
        return iVar2;
      }
      if (cVar1 != '|') break;
      iVar3 = *in_stack_0000000c;
      iVar4 = iVar3 + 1;
      *in_stack_0000000c = iVar4;
      if (*(char *)(in_stack_00000008 + iVar4) == '|') {
        *in_stack_0000000c = iVar3 + 2;
      }
      iVar3 = core_event_cpp_CEvent_EventReadingFromFile_FUN_004ae140();
      if (iVar3 < 0) {
        return iVar3;
      }
      if ((iVar2 != 0) || (iVar3 != 0)) {
        iVar2 = 1;
      }
    }
    if (cVar1 != '&') {
      return iVar2;
    }
    iVar3 = *in_stack_0000000c;
    iVar4 = iVar3 + 1;
    *in_stack_0000000c = iVar4;
    if (*(char *)(in_stack_00000008 + iVar4) == '&') {
      *in_stack_0000000c = iVar3 + 2;
    }
    iVar3 = core_event_cpp_CEvent_EventReadingFromFile_FUN_004ae140();
    if (iVar3 < 0) break;
    if ((iVar2 == 0) || (iVar3 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
  }
  return iVar3;
}


// Assembly code:
// 004b0270: PUSH EBX
//   Label: core_event.cpp_CEvent_EventReadingFromFileInMultiLoops_FUN_004b0270
// 004b0271: PUSH ESI
// 004b0272: PUSH EDI
// 004b0273: PUSH EBP
// 004b0274: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b0278: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b027c: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004b0280: PUSH EBX
// 004b0281: PUSH ESI
// 004b0282: PUSH EBP
// 004b0283: CALL core_event.cpp_CEvent_EventReadingFromFile_FUN_004ae140
//   XREF to: 004ae140 (UNCONDITIONAL_CALL)
// 004b0288: ADD ESP,0xc
// 004b028b: MOV EDI,EAX
// 004b028d: TEST EAX,EAX
// 004b028f: JL 0x004ae1bc
//   XREF to: 004ae1bc (CONDITIONAL_JUMP)
// 004b0295: MOV EAX,dword ptr [EBX]
//   Label: LAB_004b0295
// 004b0297: ADD EAX,ESI
// 004b0299: MOV DL,byte ptr [EAX]
// 004b029b: TEST DL,DL
// 004b029d: JZ 0x004b0323
//   XREF to: 004b0323 (CONDITIONAL_JUMP)
// 004b02a3: CMP DL,0x7c
// 004b02a6: JZ 0x004b02e5
//   XREF to: 004b02e5 (CONDITIONAL_JUMP)
// 004b02a8: CMP DL,0x26
// 004b02ab: JNZ 0x004b0323
//   XREF to: 004b0323 (CONDITIONAL_JUMP)
// 004b02b1: MOV EDX,dword ptr [EBX]
// 004b02b3: INC EDX
// 004b02b4: MOV EAX,EDX
// 004b02b6: MOV dword ptr [EBX],EDX
// 004b02b8: CMP byte ptr [ESI + EAX*0x1],0x26
// 004b02bc: JNZ 0x004b02c3
//   XREF to: 004b02c3 (CONDITIONAL_JUMP)
// 004b02be: LEA ECX,[EDX + 0x1]
// 004b02c1: MOV dword ptr [EBX],ECX
// 004b02c3: PUSH EBX
//   Label: LAB_004b02c3
// 004b02c4: PUSH ESI
// 004b02c5: PUSH EBP
// 004b02c6: CALL core_event.cpp_CEvent_EventReadingFromFile_FUN_004ae140
//   XREF to: 004ae140 (UNCONDITIONAL_CALL)
// 004b02cb: ADD ESP,0xc
// 004b02ce: TEST EAX,EAX
// 004b02d0: JL 0x004ae1bc
//   XREF to: 004ae1bc (CONDITIONAL_JUMP)
// 004b02d6: TEST EDI,EDI
// 004b02d8: JZ 0x004b031c
//   XREF to: 004b031c (CONDITIONAL_JUMP)
// 004b02da: TEST EAX,EAX
// 004b02dc: JZ 0x004b031c
//   XREF to: 004b031c (CONDITIONAL_JUMP)
// 004b02de: MOV EDI,0x1
// 004b02e3: JMP 0x004b0295
//   XREF to: 004b0295 (UNCONDITIONAL_JUMP)
// 004b02e5: MOV EAX,dword ptr [EBX]
//   Label: LAB_004b02e5
// 004b02e7: INC EAX
// 004b02e8: MOV dword ptr [EBX],EAX
// 004b02ea: CMP byte ptr [ESI + EAX*0x1],0x7c
// 004b02ee: JNZ 0x004b02f5
//   XREF to: 004b02f5 (CONDITIONAL_JUMP)
// 004b02f0: LEA EDX,[EAX + 0x1]
// 004b02f3: MOV dword ptr [EBX],EDX
// 004b02f5: PUSH EBX
//   Label: LAB_004b02f5
// 004b02f6: PUSH ESI
// 004b02f7: PUSH EBP
// 004b02f8: CALL core_event.cpp_CEvent_EventReadingFromFile_FUN_004ae140
//   XREF to: 004ae140 (UNCONDITIONAL_CALL)
// 004b02fd: ADD ESP,0xc
// 004b0300: TEST EAX,EAX
// 004b0302: JL 0x004ae1bc
//   XREF to: 004ae1bc (CONDITIONAL_JUMP)
// 004b0308: TEST EDI,EDI
// 004b030a: JZ 0x004b0313
//   XREF to: 004b0313 (CONDITIONAL_JUMP)
// 004b030c: MOV EDI,0x1
//   Label: LAB_004b030c
// 004b0311: JMP 0x004b0295
//   XREF to: 004b0295 (UNCONDITIONAL_JUMP)
// 004b0313: TEST EAX,EAX
//   Label: LAB_004b0313
// 004b0315: JNZ 0x004b030c
//   XREF to: 004b030c (CONDITIONAL_JUMP)
// 004b0317: JMP 0x004b0295
//   XREF to: 004b0295 (UNCONDITIONAL_JUMP)
// 004b031c: XOR EDI,EDI
//   Label: LAB_004b031c
// 004b031e: JMP 0x004b0295
//   XREF to: 004b0295 (UNCONDITIONAL_JUMP)
// 004b0323: MOV EAX,EDI
//   Label: LAB_004b0323
// 004b0325: POP EBP
// 004b0326: POP EDI
// 004b0327: POP ESI
// 004b0328: POP EBX
// 004b0329: RET
