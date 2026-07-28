// Name: crt_locale.c_fullwidth_toupper_FUN_00574520
// Address: 00574520
// Address Range: [[00574520, 0057453a]]
// Convention: __watcallStack
// Signature: wchar_t __watcallStack crt_locale_c_fullwidth_toupper_FUN_00574520(wchar_t character)

#include "nocturne.h"

wchar_t __watcallStack fullwidth_toupper(wchar_t character)

{
  int iVar1;
  
  iVar1 = islower_multibyte(character);
  if (iVar1 != 0) {
    return character + L'\uffdf';
  }
  return character;
}
