// Name: crt_string.c_mbstrncpy_FUN_00605e90
// Address: 00605e90
// Address Range: [[00605e90, 00605ebc]]
// Convention: __watcallStack
// Signature: char * __watcallStack crt_string_c_mbstrncpy_FUN_00605e90(char *dest,char *src,int char_count)

#include "nocturne.h"

char * __watcallStack mbstrncpy(char *dest,char *src,int char_count)

{
  int iVar1;
  
  iVar1 = mbstrnbytes(src,char_count);
  FUN_0060b670(dest,src,iVar1 + 1);
  return dest;
}
