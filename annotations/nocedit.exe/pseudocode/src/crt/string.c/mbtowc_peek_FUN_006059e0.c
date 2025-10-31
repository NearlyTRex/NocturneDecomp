// Name: crt_string.c_mbtowc_peek_FUN_006059e0
// Address: 006059e0
// Address Range: [[006059e0, 00605a1b]]
// Convention: __watcallStack
// Signature: wchar_t crt_string.c_mbtowc_peek_FUN_006059e0(char * str)
// Cross-references:
//   crt_file.c_makepath_FUN_005febfc (005febfc) at 005fec8a [UNCONDITIONAL_CALL]
//   crt_file.c_splitpath_FUN_00610460 (00610460) at 00610519 [UNCONDITIONAL_CALL]
//   crt_locale.c_toupper_multibyte_FUN_0060f300 (0060f300) at 0060f36d [UNCONDITIONAL_CALL]
//   crt_string.c_splitpath_FUN_005ff178 (005ff178) at 005ff1bc [UNCONDITIONAL_CALL]
//   crt_string.c_strpbrk_FUN_0060c190 (0060c190) at 0060c1a8 [UNCONDITIONAL_CALL]
//   crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0 (0060e5d0) at 0060e5e9 [UNCONDITIONAL_CALL]
// Globals:
//   int g_MultibyteLocaleActive
//   char[256] g_LeadByteTable

#include "nocturne.h"

wchar_t __watcallStack crt_string_c_mbtowc_peek_FUN_006059e0(char *str)

{
  if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[(byte)*str] & 1U) != 0)) {
    return CONCAT11(*str,str[1]);
  }
  return (wchar_t)(byte)*str;
}


// Assembly code:
// 006059e0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_string.c_mbtowc_peek_FUN_006059e0
//   XREF to: Stack[0x4] (READ)
// 006059e4: CMP dword ptr [0x03f9c020],0x0
//   XREF to: 03f9c020 (READ)
// 006059eb: JZ 0x00605a14
//   XREF to: 00605a14 (CONDITIONAL_JUMP)
// 006059ed: XOR EDX,EDX
// 006059ef: MOV DL,byte ptr [EAX]
// 006059f1: MOV DL,byte ptr [EDX + 0x3f9c031]
//   XREF to: 03f9c031 (DATA)
// 006059f7: AND DL,0x1
// 006059fa: AND EDX,0xff
// 00605a00: JZ 0x00605a14
//   XREF to: 00605a14 (CONDITIONAL_JUMP)
// 00605a02: XOR EDX,EDX
// 00605a04: MOV DL,byte ptr [EAX]
// 00605a06: SHL EDX,0x8
// 00605a09: MOV AL,byte ptr [EAX + 0x1]
// 00605a0c: AND EAX,0xff
// 00605a11: OR EAX,EDX
// 00605a13: RET
// 00605a14: MOV AL,byte ptr [EAX]
//   Label: LAB_00605a14
// 00605a16: AND EAX,0xff
// 00605a1b: RET
