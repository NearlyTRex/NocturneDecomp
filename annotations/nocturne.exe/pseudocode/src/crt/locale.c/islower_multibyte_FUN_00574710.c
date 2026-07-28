// Name: crt_locale.c_islower_multibyte_FUN_00574710
// Address: 00574710
// Address Range: [[00574710, 00574754]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_locale_c_islower_multibyte_FUN_00574710(wchar_t character)

#include "nocturne.h"

int __watcallStack islower_multibyte(wchar_t character)

{
  int iVar1;
  ushort in_stack_00000006;
  
  iVar1 = ismultibyte(character);
  if (iVar1 == 0) {
    return (uint)((&DAT_005c168c)[(byte)((char)character + 1)] & 0x80);
  }
  if ((0x8280 < _character) && (_character < 0x829b)) {
    return 1;
  }
  return 0;
}
