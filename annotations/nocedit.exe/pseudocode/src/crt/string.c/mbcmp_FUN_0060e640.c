// Name: crt_string.c_mbcmp_FUN_0060e640
// Address: 0060e640
// Address Range: [[0060e640, 0060e69b]]
// Convention: __cdecl
// Signature: int crt_string.c_mbcmp_FUN_0060e640(char * str1, char * str2)
// Cross-references:
//   crt_string.c_char_in_set_FUN_0060e340 (0060e340) at 0060e379 [UNCONDITIONAL_CALL]
//   crt_string.c_compare_mb_chars_ci_FUN_0060c790 (0060c790) at 0060c7fe [UNCONDITIONAL_CALL]
// Globals:
//   int g_MultibyteLocaleActive
//   char[256] g_LeadByteTable

#include "nocturne.h"

int __cdecl crt_string_c_mbcmp_FUN_0060e640(char *str1,char *str2)

{
  if (*str1 != *str2) {
    return (uint)(byte)*str1 - (uint)(byte)*str2;
  }
  if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[(byte)*str1] & 1U) != 0)) {
    if (str1[1] != str2[1]) {
      return (uint)(byte)str1[1] - (uint)(byte)str2[1];
    }
  }
  return 0;
}


// Assembly code:
// 0060e640: PUSH EBX
//   Label: crt_string.c_mbcmp_FUN_0060e640
// 0060e641: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060e645: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060e649: MOV BL,byte ptr [EAX]
// 0060e64b: CMP BL,byte ptr [EDX]
// 0060e64d: JNZ 0x0060e68e
//   XREF to: 0060e68e (CONDITIONAL_JUMP)
// 0060e64f: CMP dword ptr [0x03f9c020],0x0
//   XREF to: 03f9c020 (READ)
// 0060e656: JZ 0x0060e677
//   XREF to: 0060e677 (CONDITIONAL_JUMP)
// 0060e658: XOR EBX,EBX
// 0060e65a: MOV BL,byte ptr [EAX]
// 0060e65c: MOV BL,byte ptr [EBX + 0x3f9c031]
//   XREF to: 03f9c031 (DATA)
// 0060e662: AND BL,0x1
// 0060e665: AND EBX,0xff
// 0060e66b: JZ 0x0060e677
//   XREF to: 0060e677 (CONDITIONAL_JUMP)
// 0060e66d: MOV BL,byte ptr [EAX + 0x1]
// 0060e670: MOV CL,byte ptr [EDX + 0x1]
// 0060e673: CMP BL,CL
// 0060e675: JNZ 0x0060e67b
//   XREF to: 0060e67b (CONDITIONAL_JUMP)
// 0060e677: XOR EAX,EAX
//   Label: LAB_0060e677
// 0060e679: POP EBX
// 0060e67a: RET
// 0060e67b: MOV AL,BL
//   Label: LAB_0060e67b
// 0060e67d: AND EAX,0xff
// 0060e682: MOV DL,CL
// 0060e684: AND EDX,0xff
// 0060e68a: SUB EAX,EDX
// 0060e68c: POP EBX
// 0060e68d: RET
// 0060e68e: XOR EBX,EBX
//   Label: LAB_0060e68e
// 0060e690: MOV BL,byte ptr [EAX]
// 0060e692: XOR EAX,EAX
// 0060e694: MOV AL,byte ptr [EDX]
// 0060e696: SUB EBX,EAX
// 0060e698: MOV EAX,EBX
// 0060e69a: POP EBX
// 0060e69b: RET
