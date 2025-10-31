// Name: core_actor.cpp_FUN_0040cf90
// Address: 0040cf90
// Address Range: [[0040cf90, 0040cfcf]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_0040cf90()
// Cross-references:
//   core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0 (00409ec0) at 00409edf [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042dde0 (0042dde0) at 0042de2f [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_FUN_0040ce30

#include "nocturne.h"

undefined8 core_actor_cpp_FUN_0040cf90(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *in_stack_00000008;
  
  cVar1 = *in_stack_00000008;
  uVar2 = CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(cVar1,(char)param_1));
  while (cVar1 != '\0') {
    in_stack_00000008 = in_stack_00000008 + 1;
    uVar3 = core_actor_cpp_FUN_0040ce30();
    uVar2 = (undefined4)uVar3;
    cVar1 = *in_stack_00000008;
    param_2 = CONCAT31((int3)((ulonglong)uVar3 >> 0x28),cVar1);
  }
  return CONCAT44(param_2,uVar2);
}


// Assembly code:
// 0040cf90: PUSH EBX
//   Label: core_actor.cpp_FUN_0040cf90
// 0040cf91: PUSH ESI
// 0040cf92: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0040cf96: MOV AH,byte ptr [EBX]
// 0040cf98: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040cf9c: TEST AH,AH
// 0040cf9e: JZ 0x0040cfc0
//   XREF to: 0040cfc0 (CONDITIONAL_JUMP)
// 0040cfa0: XOR EAX,EAX
//   Label: LAB_0040cfa0
// 0040cfa2: MOV AL,byte ptr [EBX]
// 0040cfa4: PUSH EAX
// 0040cfa5: PUSH ESI
// 0040cfa6: INC EBX
// 0040cfa7: CALL core_actor.cpp_FUN_0040ce30
//   XREF to: 0040ce30 (UNCONDITIONAL_CALL)
// 0040cfac: MOV DL,byte ptr [EBX]
// 0040cfae: ADD ESP,0x8
// 0040cfb1: TEST DL,DL
// 0040cfb3: JNZ 0x0040cfa0
//   XREF to: 0040cfa0 (CONDITIONAL_JUMP)
// 0040cfb5: LEA EAX,[EAX]
// 0040cfbb: LEA EDX,[EDX]
// 0040cfbe: MOV EBX,EBX
// 0040cfc0: POP ESI
//   Label: LAB_0040cfc0
// 0040cfc1: POP EBX
// 0040cfc2: LEA EAX,[EAX]
// 0040cfc8: LEA EDX,[EDX]
// 0040cfce: MOV EAX,EAX
