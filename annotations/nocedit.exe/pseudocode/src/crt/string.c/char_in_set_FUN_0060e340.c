// Name: crt_string.c_char_in_set_FUN_0060e340
// Address: 0060e340
// Address Range: [[0060e340, 0060e3ae]]
// Convention: __cdecl
// Signature: char * crt_string.c_char_in_set_FUN_0060e340(char * charset, wchar_t wc)

#include "nocturne.h"

char * __cdecl crt_string_c_char_in_set_FUN_0060e340(char *charset,wchar_t wc)

{
  int iVar1;
  char *str;
  BADSPACEBASE *in_ESP;
  ushort in_stack_0000000a;
  int in_stack_0000001c;
  
  str = charset;
  crt_locale_c_wchar_to_bytes_FUN_00605a20(wc,&stack0xfffffff8);
  iVar1 = crt_locale_c_mblen_FUN_00605a40(&stack0xfffffffc);
  (&stack0x00000000)[iVar1] = 0;
  while( true ) {
    iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(str);
    if (iVar1 != 0) break;
    iVar1 = crt_string_c_mbcmp_FUN_0060e640(str,(char *)&charset);
    if (iVar1 == 0) break;
    charset = str;
    str = crt_string_c_mbtowc_next_FUN_00605a70(str);
  }
  charset = str;
  iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(str);
  if ((iVar1 != 0) && (in_stack_0000001c != 0)) {
    str = (char *)0x0;
  }
  return str;
}
