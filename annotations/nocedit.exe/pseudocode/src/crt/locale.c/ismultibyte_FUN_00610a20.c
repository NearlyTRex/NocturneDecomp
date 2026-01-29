// Name: crt_locale.c_ismultibyte_FUN_00610a20
// Address: 00610a20
// Address Range: [[00610a20, 00610a62]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_locale_c_ismultibyte_FUN_00610a20(wchar_t character)

#include "nocturne.h"

int __watcallStack ismultibyte(wchar_t character)

{
  int iVar1;
  
  if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[(ushort)character >> 8] & 1U) != 0)) {
    iVar1 = istrailbyte((uchar)character);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
