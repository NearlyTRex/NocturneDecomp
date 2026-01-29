// Name: crt_string.c_char_in_set_FUN_0060e340
// Address: 0060e340
// Address Range: [[0060e340, 0060e3ae]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c_char_in_set_FUN_0060e340(char *charset,wchar_t wc)

#include "nocturne.h"

char * __cdecl char_in_set(char *charset,wchar_t wc)

{
  int iVar1;
  ushort in_stack_0000000a;
  char acStack_8 [4];
  
  wchar_to_bytes(wc,acStack_8);
  iVar1 = mblen(acStack_8);
  acStack_8[iVar1] = '\0';
  while( true ) {
    iVar1 = mbstring_termination_check(charset);
    if (iVar1 != 0) break;
    iVar1 = mbcmp(charset,acStack_8);
    if (iVar1 == 0) break;
    charset = mbtowc_next(charset);
  }
  iVar1 = mbstring_termination_check(charset);
  if ((iVar1 != 0) && (_wc != 0)) {
    charset = (char *)0x0;
  }
  return charset;
}
