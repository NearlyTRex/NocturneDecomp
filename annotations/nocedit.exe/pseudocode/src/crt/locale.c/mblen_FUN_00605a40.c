// Name: crt_locale.c_mblen_FUN_00605a40
// Address: 00605a40
// Address Range: [[00605a40, 00605a6b]]
// Convention: __watcallStack
// Signature: int crt_locale.c_mblen_FUN_00605a40(char * mb_string)
// Cross-references:
//   crt_file.c_makepath_FUN_005febfc (005febfc) at 005feca6 [UNCONDITIONAL_CALL]
//   crt_locale.c_mbtowc_FUN_0060b1c0 (0060b1c0) at 0060b21e [UNCONDITIONAL_CALL]
//   crt_locale.c_toupper_multibyte_FUN_0060f300 (0060f300) at 0060f318 [UNCONDITIONAL_CALL]
//   crt_string.c_char_in_set_FUN_0060e340 (0060e340) at 0060e35b [UNCONDITIONAL_CALL]
//   crt_string.c_compare_mb_chars_ci_FUN_0060c790 (0060c790) at 0060c7ac [UNCONDITIONAL_CALL]
//   crt_string.c_mbstrnbytes_FUN_00605ec0 (00605ec0) at 00605eff [UNCONDITIONAL_CALL]
//   crt_string.c_mbstrnlen_FUN_00605e50 (00605e50) at 00605e6f [UNCONDITIONAL_CALL]
//   crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0 (0060e5d0) at 0060e609 [UNCONDITIONAL_CALL]
// Globals:
//   int g_MultibyteLocaleActive
//   char[256] g_LeadByteTable

#include "nocturne.h"

int __watcallStack crt_locale_c_mblen_FUN_00605a40(char *mb_string)

{
  if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[(byte)*mb_string] & 1U) != 0)) {
    return 2;
  }
  return 1;
}


// Assembly code:
// 00605a40: CMP dword ptr [0x03f9c020],0x0
//   Label: crt_locale.c_mblen_FUN_00605a40
//   XREF to: 03f9c020 (READ)
// 00605a47: JZ 0x00605a66
//   XREF to: 00605a66 (CONDITIONAL_JUMP)
// 00605a49: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00605a4d: XOR EAX,EAX
// 00605a4f: MOV AL,byte ptr [EDX]
// 00605a51: MOV AL,byte ptr [EAX + 0x3f9c031]
//   XREF to: 03f9c031 (DATA)
// 00605a57: AND AL,0x1
// 00605a59: AND EAX,0xff
// 00605a5e: JZ 0x00605a66
//   XREF to: 00605a66 (CONDITIONAL_JUMP)
// 00605a60: MOV EAX,0x2
// 00605a65: RET
// 00605a66: MOV EAX,0x1
//   Label: LAB_00605a66
// 00605a6b: RET
