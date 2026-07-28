// Name: crt_locale.c_ismultibyte_FUN_00574760
// Address: 00574760
// Address Range: [[00574760, 005747a2]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_locale_c_ismultibyte_FUN_00574760(wchar_t character)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __watcallStack ismultibyte(wchar_t character)

{
  int iVar1;
  
  if ((_DAT_02de5c30 != 0) && ((*(byte *)(((ushort)character >> 8) + 0x2de5c41) & 1) != 0)) {
    iVar1 = istrailbyte((uchar)character);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
