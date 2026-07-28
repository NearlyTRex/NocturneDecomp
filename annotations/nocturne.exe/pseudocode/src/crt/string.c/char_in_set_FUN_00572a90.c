// Name: crt_string.c_char_in_set_FUN_00572a90
// Address: 00572a90
// Address Range: [[00572a90, 00572afe]]
// Convention: unknown
// Signature: char * crt_string_c_char_in_set_FUN_00572a90(char *param_1,int param_2)

#include "nocturne.h"

char * char_in_set(char *param_1,int param_2)

{
  int iVar1;
  char acStack_8 [4];
  
  wchar_to_bytes((wchar_t)param_2,acStack_8);
  iVar1 = mblen(acStack_8);
  acStack_8[iVar1] = '\0';
  while( true ) {
    iVar1 = mbstring_termination_check(param_1);
    if (iVar1 != 0) break;
    iVar1 = FUN_00572e00(param_1,acStack_8);
    if (iVar1 == 0) break;
    param_1 = (char *)mbtowc_next(param_1);
  }
  iVar1 = mbstring_termination_check(param_1);
  if ((iVar1 != 0) && (param_2 != 0)) {
    param_1 = (char *)0x0;
  }
  return param_1;
}
