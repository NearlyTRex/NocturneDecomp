// Name: crt_unknown.c_FUN_0060b0c8
// Address: 0060b0c8
// Address Range: [[0060b0c8, 0060b105]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060b0c8()
// Cross-references:
//   crt_unknown.c_FUN_0060b133 (0060b133) at 0060b135 [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable

#include "nocturne.h"

char * crt_unknown_c_FUN_0060b0c8(void)

{
  char *pcVar1;
  char *in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0x14) &&
     (pcVar1 = in_stack_00000004,
     (g_CharacterClassificationTable[(byte)(*in_stack_00000004 + 1)] & 0x20U) != 0)) {
    for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
      in_stack_00000008 = in_stack_00000008 + -1;
    }
    for (; 0 < in_stack_00000008; in_stack_00000008 = in_stack_00000008 + -1) {
      *pcVar1 = '0';
      pcVar1 = pcVar1 + 1;
    }
    *pcVar1 = '\0';
  }
  return in_stack_00000004;
}


// Assembly code:
// 0060b0c8: PUSH EBX
//   Label: crt_unknown.c_FUN_0060b0c8
// 0060b0c9: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060b0cd: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060b0d1: MOV ECX,EAX
// 0060b0d3: CMP EDX,0x14
// 0060b0d6: JGE 0x0060b102
//   XREF to: 0060b102 (CONDITIONAL_JUMP)
// 0060b0d8: MOV BL,byte ptr [EAX]
// 0060b0da: INC BL
// 0060b0dc: AND EBX,0xff
// 0060b0e2: TEST byte ptr [EBX + 0x6849c4],0x20
//   XREF to: 006849c4 (DATA)
// 0060b0e9: JZ 0x0060b102
//   XREF to: 0060b102 (CONDITIONAL_JUMP)
// 0060b0eb: CMP byte ptr [EAX],0x0
//   Label: LAB_0060b0eb
// 0060b0ee: JZ 0x0060b0f4
//   XREF to: 0060b0f4 (CONDITIONAL_JUMP)
// 0060b0f0: INC EAX
// 0060b0f1: DEC EDX
// 0060b0f2: JMP 0x0060b0eb
//   XREF to: 0060b0eb (UNCONDITIONAL_JUMP)
// 0060b0f4: TEST EDX,EDX
//   Label: LAB_0060b0f4
// 0060b0f6: JLE 0x0060b0ff
//   XREF to: 0060b0ff (CONDITIONAL_JUMP)
// 0060b0f8: DEC EDX
// 0060b0f9: MOV byte ptr [EAX],0x30
// 0060b0fc: INC EAX
// 0060b0fd: JMP 0x0060b0f4
//   XREF to: 0060b0f4 (UNCONDITIONAL_JUMP)
// 0060b0ff: MOV byte ptr [EAX],0x0
//   Label: LAB_0060b0ff
// 0060b102: MOV EAX,ECX
//   Label: LAB_0060b102
// 0060b104: POP EBX
// 0060b105: RET
