// Name: crt_string.c_char_in_set_FUN_0060e340
// Address: 0060e340
// Address Range: [[0060e340, 0060e3ae]]
// Convention: __cdecl
// Signature: char * crt_string.c_char_in_set_FUN_0060e340(char * charset, wchar_t wc)

#include "nocturne.h"

char * __cdecl crt_string_c_char_in_set_FUN_0060e340(char *charset,wchar_t wc)

{
  int iVar1;
  ushort in_stack_0000000a;
  char acStack_8 [4];
  
  crt_locale_c_wchar_to_bytes_FUN_00605a20(wc,acStack_8);
  iVar1 = crt_locale_c_mblen_FUN_00605a40(acStack_8);
  acStack_8[iVar1] = '\0';
  while( true ) {
    iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(charset);
    if (iVar1 != 0) break;
    iVar1 = crt_string_c_mbcmp_FUN_0060e640(charset,acStack_8);
    if (iVar1 == 0) break;
    charset = crt_string_c_mbtowc_next_FUN_00605a70(charset);
  }
  iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(charset);
  if ((iVar1 != 0) && (_wc != 0)) {
    charset = (char *)0x0;
  }
  return charset;
}
