// Name: crt_string.c_strpbrk_FUN_0060c190
// Address: 0060c190
// Address Range: [[0060c190, 0060c1d4]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c_strpbrk_FUN_0060c190(char *str,char *char_set)

#include "nocturne.h"

char * __cdecl strpbrk(char *str,char *char_set)

{
  wchar_t wc;
  int iVar1;
  char *pcVar2;
  
  while( true ) {
    iVar1 = mbstring_termination_check(str);
    if (iVar1 != 0) {
      return (char *)0x0;
    }
    wc = mbtowc_peek(str);
    pcVar2 = char_in_set(char_set,wc);
    if (pcVar2 != (char *)0x0) break;
    str = mbtowc_next(str);
  }
  return str;
}
