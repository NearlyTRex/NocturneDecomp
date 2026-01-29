// Name: crt_locale.c_fullwidth_toupper_FUN_0060ffb0
// Address: 0060ffb0
// Address Range: [[0060ffb0, 0060ffca]]
// Convention: __watcallStack
// Signature: wchar_t __watcallStack crt_locale_c_fullwidth_toupper_FUN_0060ffb0(wchar_t character)

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
