// Name: crt_string.c_strcpy_advance_FUN_00610240
// Address: 00610240
// Address Range: [[00610240, 00610256]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c_strcpy_advance_FUN_00610240(char *dest,char *src)

#include "nocturne.h"

char * __cdecl crt_string_c_strcpy_advance_FUN_00610240(char *dest,char *src)

{
  char cVar1;
  
  for (; cVar1 = *src, *dest = cVar1, cVar1 != '\0'; src = src + 1) {
    dest = dest + 1;
  }
  return dest;
}
