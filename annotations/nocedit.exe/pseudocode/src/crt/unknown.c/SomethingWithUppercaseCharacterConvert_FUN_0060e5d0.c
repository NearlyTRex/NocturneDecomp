// Name: crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0
// Address: 0060e5d0
// Address Range: [[0060e5d0, 0060e636]]
// Convention: unknown
// Signature: char * crt_unknown_c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0(char *param_1)

#include "nocturne.h"

char * SomethingWithUppercaseCharacterConvert(char *param_1)

{
  wchar_t wVar1;
  int iVar2;
  ushort extraout_var;
  char *str;
  char *in_stack_fffffff4;
  
  str = param_1;
  while( true ) {
    iVar2 = mbstring_termination_check(str);
    if (iVar2 != 0) break;
    wVar1 = mbtowc_peek(str);
    wVar1 = toupper_multibyte
                      ((char *)CONCAT22(extraout_var,wVar1),in_stack_fffffff4);
    wchar_to_bytes(wVar1,&stack0xfffffff4);
    iVar2 = mblen(&stack0xfffffff4);
    (&stack0xfffffff4)[iVar2] = 0;
    copyMbChar(str,&stack0xfffffff4);
    str = mbtowc_next(str);
  }
  return param_1;
}
