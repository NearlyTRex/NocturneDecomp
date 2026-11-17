// Name: crt_locale.c_ismultibyte_FUN_00574760
// Address: 00574760
// Address Range: [[00574760, 005747a2]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_locale_c_ismultibyte_FUN_00574760(wchar_t character)

#include "nocturne.h"

int __watcallStack ismultibyte(wchar_t character)

{
  int iVar1;
  
  if ((g_INT_02de5c30 != 0) && ((g_CHAR_ARRAY_02de5c41[(ushort)character >> 8] & 1U) != 0)) {
    iVar1 = istrailbyte((uchar)character);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
