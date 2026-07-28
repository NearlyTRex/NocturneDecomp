// Name: crt_string.c_strpbrk_FUN_00570870
// Address: 00570870
// Address Range: [[00570870, 005708b4]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c_strpbrk_FUN_00570870(char *str,char *char_set)

#include "nocturne.h"

char * __cdecl strpbrk(char *str,char *char_set)

{
  int iVar1;
  
  while( true ) {
    iVar1 = mbstring_termination_check(str);
    if (iVar1 != 0) {
      return (char *)0x0;
    }
    iVar1 = mbtowc_peek(str);
    iVar1 = char_in_set(char_set,iVar1);
    if (iVar1 != 0) break;
    str = (char *)mbtowc_next(str);
  }
  return str;
}
