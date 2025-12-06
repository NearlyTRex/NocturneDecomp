// Name: crt_string.c_strpbrk_FUN_0060c190
// Address: 0060c190
// Address Range: [[0060c190, 0060c1d4]]
// Convention: __cdecl
// Signature: char * crt_string.c_strpbrk_FUN_0060c190(char * str, char * char_set)

#include "nocturne.h"

char * __cdecl crt_string_c_strpbrk_FUN_0060c190(char *str,char *char_set)

{
  wchar_t wc;
  int iVar1;
  char *pcVar2;
  
  while( true ) {
    iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(str);
    if (iVar1 != 0) {
      return (char *)0x0;
    }
    wc = crt_string_c_mbtowc_peek_FUN_006059e0(str);
    pcVar2 = crt_string_c_char_in_set_FUN_0060e340(char_set,wc);
    if (pcVar2 != (char *)0x0) break;
    str = crt_string_c_mbtowc_next_FUN_00605a70(str);
  }
  return str;
}
