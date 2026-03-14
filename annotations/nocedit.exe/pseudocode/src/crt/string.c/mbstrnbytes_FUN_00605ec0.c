// Name: crt_string.c_mbstrnbytes_FUN_00605ec0
// Address: 00605ec0
// Address Range: [[00605ec0, 00605f1f]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_string_c_mbstrnbytes_FUN_00605ec0(char *str,int char_count)

#include "nocturne.h"

int __watcallStack mbstrnbytes(char *str,int char_count)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; (iVar1 = mbstring_termination_check(str), iVar1 == 0 &&
         (char_count != 0)); char_count = char_count + -1) {
    if ((g_MultibyteLocaleActive == 0) || ((g_LeadByteTable[(byte)*str] & 1U) == 0)) {
      iVar2 = iVar2 + 1;
    }
    else {
      if (str[1] == 0) {
        return iVar2;
      }
      iVar1 = mblen(str);
      iVar2 = iVar2 + iVar1;
    }
    str = mbtowc_next(str);
  }
  return iVar2;
}
