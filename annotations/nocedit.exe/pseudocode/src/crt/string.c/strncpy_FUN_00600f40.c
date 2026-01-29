// Name: crt_string.c_strncpy_FUN_00600f40
// Address: 00600f40
// Address Range: [[00600f40, 00600f74]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c_strncpy_FUN_00600f40(char *dest,char *src,SIZE_T count)

#include "nocturne.h"

char * __cdecl strncpy(char *dest,char *src,SIZE_T count)

{
  char *pcVar1;
  
  pcVar1 = dest;
  for (; (count != 0 && (*src != '\0')); src = src + 1) {
    *pcVar1 = *src;
    count = count - 1;
    pcVar1 = pcVar1 + 1;
  }
  for (; count != 0; count = count - 1) {
    *pcVar1 = '\0';
    pcVar1 = pcVar1 + 1;
  }
  return dest;
}
