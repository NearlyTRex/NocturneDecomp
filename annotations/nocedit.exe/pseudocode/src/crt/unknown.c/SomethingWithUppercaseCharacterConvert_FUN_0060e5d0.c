// Name: crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0
// Address: 0060e5d0
// Address Range: [[0060e5d0, 0060e636]]
// Convention: unknown
// Signature: char * crt_unknown_c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0(char *param_1)

#include "nocturne.h"

char * SomethingWithUppercaseCharacterConvert(char *param_1)

{
  wchar_t character;
  int iVar1;
  char *str;
  char acStack_c [4];
  
  str = param_1;
  while( true ) {
    iVar1 = mbstring_termination_check(str);
    if (iVar1 != 0) break;
    iVar1 = mbtowc_peek(str);
    character = func_0x0060f300(iVar1);
    wchar_to_bytes(character,acStack_c);
    iVar1 = mblen(acStack_c);
    acStack_c[iVar1] = '\0';
    copyMbChar(str,acStack_c);
    str = mbtowc_next(str);
  }
  return param_1;
}
