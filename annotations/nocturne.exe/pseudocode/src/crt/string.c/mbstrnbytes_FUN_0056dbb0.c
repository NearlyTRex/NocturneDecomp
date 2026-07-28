// Name: crt_string.c_mbstrnbytes_FUN_0056dbb0
// Address: 0056dbb0
// Address Range: [[0056dbb0, 0056dc0f]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_string_c_mbstrnbytes_FUN_0056dbb0(char *str,int char_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __watcallStack mbstrnbytes(char *str,int char_count)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; (iVar1 = mbstring_termination_check(str), iVar1 == 0 &&
         (char_count != 0)); char_count = char_count + -1) {
    if ((_DAT_02de5c30 == 0) || ((*(byte *)((byte)*str + 0x2de5c41) & 1) == 0)) {
      iVar2 = iVar2 + 1;
    }
    else {
      if (str[1] == 0) {
        return iVar2;
      }
      iVar1 = mblen(str);
      iVar2 = iVar2 + iVar1;
    }
    str = (char *)mbtowc_next(str);
  }
  return iVar2;
}
