// Name: crt_string.c__strdup_FUN_100117b0
// Address: 100117b0
// Address Range: [[100117b0, 100117d5]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c__strdup_FUN_100117b0(char *s)

#include "nocturne.h"

char * __cdecl _strdup(char *s)

{
  size_t sVar1;
  char *dst;
  char *pcVar2;
  
  sVar1 = strlen(s);
  dst = (char *)malloc(sVar1 + 1);
  pcVar2 = (char *)0x0;
  if (dst != (char *)0x0) {
    pcVar2 = strcpy(dst,s);
  }
  return pcVar2;
}
