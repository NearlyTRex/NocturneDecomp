// Name: FUN_00572d90
// Address: 00572d90
// Address Range: [[00572d90, 00572df6]]
// Convention: unknown
// Signature: char * FUN_00572d90(char *param_1)

#include "nocturne.h"

char * FUN_00572d90(char *param_1)

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
    character = FUN_00573db0(iVar1);
    wchar_to_bytes(character,acStack_c);
    iVar1 = mblen(acStack_c);
    acStack_c[iVar1] = '\0';
    FUN_00572d50(str,acStack_c);
    str = mbtowc_next(str);
  }
  return param_1;
}
