// Name: crt_string.c_mbstring_termination_check_FUN_0060b630
// Address: 0060b630
// Address Range: [[0060b630, 0060b669]]
// Convention: __watcallStack
// Signature: int crt_string.c_mbstring_termination_check_FUN_0060b630(char * str)
// Cross-references:
//   crt_string.c_char_in_set_FUN_0060e340 (0060e340) at 0060e369 [UNCONDITIONAL_CALL]
//   crt_string.c_mbstrnbytes_FUN_00605ec0 (00605ec0) at 00605ece [UNCONDITIONAL_CALL]
//   crt_string.c_mbstrnicmp_FUN_00608e50 (00608e50) at 00608e67 [UNCONDITIONAL_CALL]
//   crt_string.c_mbstrnlen_FUN_00605e50 (00605e50) at 00605e5e [UNCONDITIONAL_CALL]
//   crt_string.c_strpbrk_FUN_0060c190 (0060c190) at 0060c19b [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fa90 (0060fa90) at 0060fa99 [UNCONDITIONAL_CALL]
//   crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0 (0060e5d0) at 0060e5dc [UNCONDITIONAL_CALL]
// Globals:
//   int g_MultibyteLocaleActive
//   char[256] g_LeadByteTable

#include "nocturne.h"

int __watcallStack crt_string_c_mbstring_termination_check_FUN_0060b630(char *str)

{
  if (*str == '\0') {
    return 1;
  }
  if (((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[(byte)*str] & 1U) != 0)) &&
     (str[1] == '\0')) {
    return 2;
  }
  return 0;
}


// Assembly code:
// 0060b630: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_string.c_mbstring_termination_check_FUN_0060b630
//   XREF to: Stack[0x4] (READ)
// 0060b634: CMP byte ptr [EDX],0x0
// 0060b637: JNZ 0x0060b63f
//   XREF to: 0060b63f (CONDITIONAL_JUMP)
// 0060b639: MOV EAX,0x1
// 0060b63e: RET
// 0060b63f: CMP dword ptr [0x03f9c020],0x0
//   Label: LAB_0060b63f
//   XREF to: 03f9c020 (READ)
// 0060b646: JZ 0x0060b667
//   XREF to: 0060b667 (CONDITIONAL_JUMP)
// 0060b648: XOR EAX,EAX
// 0060b64a: MOV AL,byte ptr [EDX]
// 0060b64c: MOV AL,byte ptr [EAX + 0x3f9c031]
//   XREF to: 03f9c031 (DATA)
// 0060b652: AND AL,0x1
// 0060b654: AND EAX,0xff
// 0060b659: JZ 0x0060b667
//   XREF to: 0060b667 (CONDITIONAL_JUMP)
// 0060b65b: CMP byte ptr [EDX + 0x1],0x0
// 0060b65f: JNZ 0x0060b667
//   XREF to: 0060b667 (CONDITIONAL_JUMP)
// 0060b661: MOV EAX,0x2
// 0060b666: RET
// 0060b667: XOR EAX,EAX
//   Label: LAB_0060b667
// 0060b669: RET
