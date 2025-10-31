// Name: core_event.cpp_FUN_004aa650
// Address: 004aa650
// Address Range: [[004aa650, 004aa6b4]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aa650()
// Globals:
//   char[256] g_CharacterClassificationTable
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void core_event_cpp_FUN_004aa650(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  SIZE_T n;
  char *in_stack_00000004;
  
  uVar3 = 0xffffffff;
  pcVar2 = in_stack_00000004;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  n = ~uVar3 - 1;
  if (0 < (int)n) {
    pcVar2 = in_stack_00000004 + n;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2U) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  in_stack_00000004[n] = '\0';
  while ((g_CharacterClassificationTable[(byte)(*in_stack_00000004 + 1)] & 2U) != 0) {
    crt_string_c_memmove_FUN_005fe5e0(in_stack_00000004,in_stack_00000004 + 1,n);
    n = n - 1;
  }
  return;
}


// Assembly code:
// 004aa650: PUSH EBX
//   Label: core_event.cpp_FUN_004aa650
// 004aa651: PUSH ESI
// 004aa652: PUSH EDI
// 004aa653: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004aa657: MOV EDI,ESI
// 004aa659: SUB ECX,ECX
// 004aa65b: DEC ECX
// 004aa65c: XOR EAX,EAX
// 004aa65e: SCASB.REPNE ES:EDI
// 004aa660: NOT ECX
// 004aa662: DEC ECX
// 004aa663: MOV EBX,ECX
// 004aa665: TEST ECX,ECX
// 004aa667: JLE 0x004aa680
//   XREF to: 004aa680 (CONDITIONAL_JUMP)
// 004aa669: LEA EAX,[ECX + ESI*0x1]
// 004aa66c: MOV DL,byte ptr [EAX + -0x1]
//   Label: LAB_004aa66c
// 004aa66f: INC DL
// 004aa671: AND EDX,0xff
// 004aa677: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004aa67e: JNZ 0x004aa69f
//   XREF to: 004aa69f (CONDITIONAL_JUMP)
// 004aa680: LEA EAX,[ESI + EBX*0x1]
//   Label: LAB_004aa680
// 004aa683: LEA EDI,[ESI + 0x1]
// 004aa686: MOV byte ptr [EAX],0x0
// 004aa689: MOV AL,byte ptr [ESI]
//   Label: LAB_004aa689
// 004aa68b: INC AL
// 004aa68d: AND EAX,0xff
// 004aa692: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004aa699: JNZ 0x004aa6a7
//   XREF to: 004aa6a7 (CONDITIONAL_JUMP)
// 004aa69b: POP EDI
// 004aa69c: POP ESI
// 004aa69d: POP EBX
// 004aa69e: RET
// 004aa69f: DEC EBX
//   Label: LAB_004aa69f
// 004aa6a0: DEC EAX
// 004aa6a1: TEST EBX,EBX
// 004aa6a3: JG 0x004aa66c
//   XREF to: 004aa66c (CONDITIONAL_JUMP)
// 004aa6a5: JMP 0x004aa680
//   XREF to: 004aa680 (UNCONDITIONAL_JUMP)
// 004aa6a7: PUSH EBX
//   Label: LAB_004aa6a7
// 004aa6a8: PUSH EDI
// 004aa6a9: PUSH ESI
// 004aa6aa: DEC EBX
// 004aa6ab: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004aa6b0: ADD ESP,0xc
// 004aa6b3: JMP 0x004aa689
//   XREF to: 004aa689 (UNCONDITIONAL_JUMP)
