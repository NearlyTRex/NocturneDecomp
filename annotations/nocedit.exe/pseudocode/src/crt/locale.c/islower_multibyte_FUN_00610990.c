// Name: crt_locale.c_islower_multibyte_FUN_00610990
// Address: 00610990
// Address Range: [[00610990, 006109d4]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_locale_c_islower_multibyte_FUN_00610990(wchar_t character)

#include "nocturne.h"

int __watcallStack crt_locale_c_islower_multibyte_FUN_00610990(wchar_t character)

{
  int iVar1;
  ushort in_stack_00000006;
  
  iVar1 = crt_locale_c_ismultibyte_FUN_00610a20(character);
  if (iVar1 == 0) {
    return (uint)(g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x80);
  }
  if ((0x8280 < _character) && (_character < 0x829b)) {
    return 1;
  }
  return 0;
}
