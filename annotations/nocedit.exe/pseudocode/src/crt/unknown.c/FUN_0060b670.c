// Name: crt_unknown.c_FUN_0060b670
// Address: 0060b670
// Address Range: [[0060b670, 0060b6d6]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060b670()
// Cross-references:
//   crt_string.c_mbstrncpy_FUN_00605e90 (00605e90) at 00605eb0 [UNCONDITIONAL_CALL]
// Globals:
//   int g_MultibyteLocaleActive
//   char[256] g_LeadByteTable
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* Signature: undefined1 FUN_0060b670(undefined4 param_1, undefined4 param_2, undefined4 param_3) */

char * crt_unknown_c_FUN_0060b670(void)

{
  char cVar1;
  char *pcVar2;
  char *dest;
  char *in_stack_00000004;
  char *in_stack_00000008;
  ulong in_stack_0000000c;
  
  pcVar2 = in_stack_00000004;
  dest = in_stack_00000004;
  if (in_stack_0000000c != 0) {
    do {
      dest = pcVar2;
      if (*in_stack_00000008 == '\0') break;
      dest = pcVar2 + 1;
      cVar1 = *in_stack_00000008;
      in_stack_00000008 = in_stack_00000008 + 1;
      in_stack_0000000c = in_stack_0000000c - 1;
      *pcVar2 = cVar1;
      pcVar2 = dest;
    } while (in_stack_0000000c != 0);
  }
  if ((((*in_stack_00000008 != '\0') && (in_stack_00000004 < dest)) &&
      (g_MultibyteLocaleActive != 0)) && ((g_LeadByteTable[(byte)in_stack_00000008[-1]] & 1U) != 0))
  {
    dest[-1] = '\0';
  }
  if (in_stack_0000000c != 0) {
    crt_memory_c_memset_FUN_005fde40(dest,0,in_stack_0000000c);
  }
  return in_stack_00000004;
}


// Assembly code:
// 0060b670: PUSH EBX
//   Label: crt_unknown.c_FUN_0060b670
// 0060b671: PUSH ESI
// 0060b672: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060b676: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0060b67a: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0060b67e: MOV EDX,ESI
// 0060b680: TEST EBX,EBX
// 0060b682: JBE 0x0060b695
//   XREF to: 0060b695 (CONDITIONAL_JUMP)
// 0060b684: CMP byte ptr [EAX],0x0
//   Label: LAB_0060b684
// 0060b687: JZ 0x0060b695
//   XREF to: 0060b695 (CONDITIONAL_JUMP)
// 0060b689: INC EDX
// 0060b68a: MOV CL,byte ptr [EAX]
// 0060b68c: INC EAX
// 0060b68d: DEC EBX
// 0060b68e: MOV byte ptr [EDX + -0x1],CL
// 0060b691: TEST EBX,EBX
// 0060b693: JA 0x0060b684
//   XREF to: 0060b684 (CONDITIONAL_JUMP)
// 0060b695: CMP byte ptr [EAX],0x0
//   Label: LAB_0060b695
// 0060b698: JZ 0x0060b6c2
//   XREF to: 0060b6c2 (CONDITIONAL_JUMP)
// 0060b69a: CMP EDX,ESI
// 0060b69c: JBE 0x0060b6c2
//   XREF to: 0060b6c2 (CONDITIONAL_JUMP)
// 0060b69e: CMP dword ptr [0x03f9c020],0x0
//   XREF to: 03f9c020 (READ)
// 0060b6a5: JZ 0x0060b6c2
//   XREF to: 0060b6c2 (CONDITIONAL_JUMP)
// 0060b6a7: MOV AL,byte ptr [EAX + -0x1]
// 0060b6aa: AND EAX,0xff
// 0060b6af: MOV AL,byte ptr [EAX + 0x3f9c031]
//   XREF to: 03f9c031 (DATA)
// 0060b6b5: AND AL,0x1
// 0060b6b7: AND EAX,0xff
// 0060b6bc: JZ 0x0060b6c2
//   XREF to: 0060b6c2 (CONDITIONAL_JUMP)
// 0060b6be: MOV byte ptr [EDX + -0x1],0x0
// 0060b6c2: TEST EBX,EBX
//   Label: LAB_0060b6c2
// 0060b6c4: JBE 0x0060b6d2
//   XREF to: 0060b6d2 (CONDITIONAL_JUMP)
// 0060b6c6: PUSH EBX
// 0060b6c7: PUSH 0x0
// 0060b6c9: PUSH EDX
// 0060b6ca: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0060b6cf: ADD ESP,0xc
// 0060b6d2: MOV EAX,ESI
//   Label: LAB_0060b6d2
// 0060b6d4: POP ESI
// 0060b6d5: POP EBX
// 0060b6d6: RET
