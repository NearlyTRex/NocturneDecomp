// Name: crt_string.c_mbstrncpy_FUN_0056db80
// Address: 0056db80
// Address Range: [[0056db80, 0056dbac]]
// Convention: __watcallStack
// Signature: char * __watcallStack crt_string_c_mbstrncpy_FUN_0056db80(char *dest,char *src,int char_count)

#include "nocturne.h"

char * __watcallStack mbstrncpy(char *dest,char *src,int char_count)

{
  int iVar1;
  
  iVar1 = mbstrnbytes(src,char_count);
  FUN_00570ce0(dest,src,iVar1 + 1);
  return dest;
}
