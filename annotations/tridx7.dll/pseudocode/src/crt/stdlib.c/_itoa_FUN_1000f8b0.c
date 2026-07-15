// Name: crt_stdlib.c__itoa_FUN_1000f8b0
// Address: 1000f8b0
// Address Range: [[1000f8b0, 1000f8eb]]
// Convention: __cdecl
// Signature: char * __cdecl crt_stdlib_c__itoa_FUN_1000f8b0(int val,char *buf,int radix)

#include "nocturne.h"

char * __cdecl _itoa(int val,char *buf,int radix)

{
  if ((radix == 10) && (val < 0)) {
    xtoa(val,buf,10,1);
    return buf;
  }
  xtoa(val,buf,radix,0);
  return buf;
}
