// Name: crt_stdio.c_char_to_digit_FUN_006058e8
// Address: 006058e8
// Address Range: [[006058e8, 00605916]]
// Convention: __cdecl
// Signature: int crt_stdio.c_char_to_digit_FUN_006058e8(int ch)
// Cross-references:
//   crt_stdio.c_scanf_integer_FUN_0060547c (0060547c) at 0060576b [UNCONDITIONAL_CALL]
// Function calls:
//   crt_ctype.c_tolower_FUN_005feb30

#include "nocturne.h"

int __cdecl crt_stdio_c_char_to_digit_FUN_006058e8(int ch)

{
  int iVar1;
  
  if ((0x2f < ch) && (ch < 0x3a)) {
    return ch + -0x30;
  }
  iVar1 = crt_ctype_c_tolower_FUN_005feb30(ch);
  if ((0x60 < iVar1) && (iVar1 < 0x67)) {
    return iVar1 + -0x57;
  }
  return 0x10;
}


// Assembly code:
// 006058e8: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_stdio.c_char_to_digit_FUN_006058e8
//   XREF to: Stack[0x4] (READ)
// 006058ec: CMP EAX,0x30
// 006058ef: JL 0x006058fa
//   XREF to: 006058fa (CONDITIONAL_JUMP)
// 006058f1: CMP EAX,0x39
// 006058f4: JG 0x006058fa
//   XREF to: 006058fa (CONDITIONAL_JUMP)
// 006058f6: SUB EAX,0x30
// 006058f9: RET
// 006058fa: PUSH EAX
//   Label: LAB_006058fa
// 006058fb: CALL crt_ctype.c_tolower_FUN_005feb30
//   XREF to: 005feb30 (UNCONDITIONAL_CALL)
// 00605900: ADD ESP,0x4
// 00605903: CMP EAX,0x61
// 00605906: JL 0x00605911
//   XREF to: 00605911 (CONDITIONAL_JUMP)
// 00605908: CMP EAX,0x66
// 0060590b: JG 0x00605911
//   XREF to: 00605911 (CONDITIONAL_JUMP)
// 0060590d: SUB EAX,0x57
// 00605910: RET
// 00605911: MOV EAX,0x10
//   Label: LAB_00605911
// 00605916: RET
