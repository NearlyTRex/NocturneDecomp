// Name: crt_string.c_mbstrncpy_FUN_00605e90
// Address: 00605e90
// Address Range: [[00605e90, 00605ebc]]
// Convention: __watcallStack
// Signature: char * crt_string.c_mbstrncpy_FUN_00605e90(char * dest, char * src, int char_count)

#include "nocturne.h"

char * __watcallStack crt_string_c_mbstrncpy_FUN_00605e90(char *dest,char *src,int char_count)

{
  crt_string_c_mbstrnbytes_FUN_00605ec0(src,char_count);
  crt_unknown_c_FUN_0060b670();
  return dest;
}
