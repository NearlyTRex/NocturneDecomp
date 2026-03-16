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
  char *mb_char;
  char *str;
  char *in_stack_fffffff4;
  
  str = param_1;
  while( true ) {
    iVar1 = mbstring_termination_check(str);
    if (iVar1 != 0) break;
    mb_char = (char *)mbtowc_peek(str);
    character = toupper_multibyte(mb_char,in_stack_fffffff4);
    wchar_to_bytes(character,&stack0xfffffff4);
    iVar1 = mblen(&stack0xfffffff4);
    (&stack0xfffffff4)[iVar1] = 0;
    copyMbChar(str,&stack0xfffffff4);
    str = mbtowc_next(str);
  }
  return param_1;
}
