// Name: crt_stdlib.c__ultoa_FUN_1000f980
// Address: 1000f980
// Address Range: [[1000f980, 1000f99d]]
// Convention: __cdecl
// Signature: char * __cdecl crt_stdlib_c__ultoa_FUN_1000f980(ulong val,char *buf,int radix)

#include "nocturne.h"

char * __cdecl _ultoa(ulong val,char *buf,int radix)

{
  xtoa(val,buf,radix,0);
  return buf;
}
