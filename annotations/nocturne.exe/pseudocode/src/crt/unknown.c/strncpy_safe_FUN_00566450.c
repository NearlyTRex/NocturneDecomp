// Name: crt_unknown.c_strncpy_safe_FUN_00566450
// Address: 00566450
// Address Range: [[00566450, 00566497]]
// Convention: __watcallStack
// Signature: void __watcallStack crt_unknown_c_strncpy_safe_FUN_00566450(char *dest,char *src,int length,int maxlen)

#include "nocturne.h"

void __watcallStack strncpy_safe(char *dest,char *src,int length,int maxlen)

{
  int iVar1;
  
  if (dest != (char *)0x0) {
    if (maxlen < length) {
      length = maxlen;
    }
    iVar1 = mbstrnlen(src,length);
    mbstrncpy(dest,src,iVar1);
    iVar1 = mbstrnbytes(dest,iVar1);
    dest[iVar1] = '\0';
  }
  return;
}
