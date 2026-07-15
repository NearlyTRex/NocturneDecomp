// Name: crt_stdlib.c__ltoa_FUN_1000f950
// Address: 1000f950
// Address Range: [[1000f950, 1000f97e]]
// Convention: __cdecl
// Signature: char * __cdecl crt_stdlib_c__ltoa_FUN_1000f950(long val,char *buf,int radix)

#include "nocturne.h"

char * __cdecl _ltoa(long val,char *buf,int radix)

{
  int neg;
  
  if ((radix == 10) && (val < 0)) {
    neg = 1;
  }
  else {
    neg = 0;
  }
  xtoa(val,buf,radix,neg);
  return buf;
}
