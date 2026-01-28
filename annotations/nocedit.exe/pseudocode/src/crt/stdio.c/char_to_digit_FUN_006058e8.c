// Name: crt_stdio.c_char_to_digit_FUN_006058e8
// Address: 006058e8
// Address Range: [[006058e8, 00605916]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_char_to_digit_FUN_006058e8(int ch)

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
