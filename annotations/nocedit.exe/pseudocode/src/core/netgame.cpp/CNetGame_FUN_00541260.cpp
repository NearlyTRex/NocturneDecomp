// Name: core_netgame.cpp_CNetGame_FUN_00541260
// Address: 00541260
// Address Range: [[00541260, 005412a3]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_FUN_00541260()
// Cross-references:
//   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 (005406a0) at 005406bc [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_FUN_00541260(undefined4 param_1, undefined4
   param_2) */

int core_netgame_cpp_CNetGame_FUN_00541260(void)

{
  int *piVar1;
  int iVar2;
  int in_stack_00000004;
  int *in_stack_00000008;
  
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x1c)) {
    piVar1 = (int *)(in_stack_00000004 + 0x3c);
    do {
      if (((short)piVar1[1] == (short)in_stack_00000008[1]) && (*piVar1 == *in_stack_00000008)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x1e;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x1c));
  }
  return -1;
}


// Assembly code:
// 00541260: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_FUN_00541260
// 00541261: PUSH ESI
// 00541262: PUSH EDI
// 00541263: PUSH EBP
// 00541264: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541268: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0054126c: MOV ECX,dword ptr [EDI + 0x1c]
// 0054126f: XOR EDX,EDX
// 00541271: TEST ECX,ECX
// 00541273: JLE 0x00541293
//   XREF to: 00541293 (CONDITIONAL_JUMP)
// 00541275: LEA EAX,[EDI + 0x3c]
// 00541278: MOV CX,word ptr [EAX + 0x4]
//   Label: LAB_00541278
// 0054127c: CMP CX,word ptr [ESI + 0x4]
// 00541280: JNZ 0x00541288
//   XREF to: 00541288 (CONDITIONAL_JUMP)
// 00541282: MOV EBP,dword ptr [EAX]
// 00541284: CMP EBP,dword ptr [ESI]
// 00541286: JZ 0x0054129d
//   XREF to: 0054129d (CONDITIONAL_JUMP)
// 00541288: INC EDX
//   Label: LAB_00541288
// 00541289: MOV EBX,dword ptr [EDI + 0x1c]
// 0054128c: ADD EAX,0x78
// 0054128f: CMP EDX,EBX
// 00541291: JL 0x00541278
//   XREF to: 00541278 (CONDITIONAL_JUMP)
// 00541293: MOV EAX,0xffffffff
//   Label: LAB_00541293
// 00541298: POP EBP
// 00541299: POP EDI
// 0054129a: POP ESI
// 0054129b: POP EBX
// 0054129c: RET
// 0054129d: MOV EAX,EDX
//   Label: LAB_0054129d
// 0054129f: POP EBP
// 005412a0: POP EDI
// 005412a1: POP ESI
// 005412a2: POP EBX
// 005412a3: RET
