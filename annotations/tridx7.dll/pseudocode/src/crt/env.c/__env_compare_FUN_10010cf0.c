// Name: crt_env.c___env_compare_FUN_10010cf0
// Address: 10010cf0
// Address Range: [[10010cf0, 10010d2a]]
// Convention: __cdecl
// Signature: int __cdecl crt_env_c___env_compare_FUN_10010cf0(char *s1,char *s2,int len)

#include "nocturne.h"

int __cdecl __env_compare(char *s1,char *s2,int len)

{
  int iVar1;
  
  if (len == 0) {
    return 0;
  }
  iVar1 = __crtCompareStringA(DAT_10016ee0,1,s1,len,s2,len,DAT_10016edc);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}
