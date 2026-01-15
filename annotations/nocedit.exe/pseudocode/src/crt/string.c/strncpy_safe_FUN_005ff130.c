// Name: crt_string.c_strncpy_safe_FUN_005ff130
// Address: 005ff130
// Address Range: [[005ff130, 005ff177]]
// Convention: __watcallStack
// Signature: void crt_string.c_strncpy_safe_FUN_005ff130(char * dest, char * src, int length, int maxlen)

#include "nocturne.h"

void __watcallStack
crt_string_c_strncpy_safe_FUN_005ff130(char *dest,char *src,int length,int maxlen)

{
  int iVar1;
  
  if (dest != (char *)0x0) {
    if (maxlen < length) {
      length = maxlen;
    }
    iVar1 = crt_string_c_mbstrnlen_FUN_00605e50(src,length);
    crt_string_c_mbstrncpy_FUN_00605e90(dest,src,iVar1);
    iVar1 = crt_string_c_mbstrnbytes_FUN_00605ec0(dest,iVar1);
    dest[iVar1] = '\0';
  }
  return;
}
