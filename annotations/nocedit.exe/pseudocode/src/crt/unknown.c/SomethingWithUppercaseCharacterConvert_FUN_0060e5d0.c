// Name: crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0
// Address: 0060e5d0
// Address Range: [[0060e5d0, 0060e636]]
// Convention: unknown
// Signature: undefined crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0()

#include "nocturne.h"

/* Signature: byte unk_SomethingWithUppercaseCharacterConvert(uint param_1) */

char * crt_unknown_c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0(void)

{
  wchar_t wVar1;
  int iVar2;
  ushort extraout_var;
  char *str;
  char *in_stack_00000004;
  char *in_stack_fffffff4;
  
  str = in_stack_00000004;
  while( true ) {
    iVar2 = crt_string_c_mbstring_termination_check_FUN_0060b630(str);
    if (iVar2 != 0) break;
    wVar1 = crt_string_c_mbtowc_peek_FUN_006059e0(str);
    wVar1 = crt_locale_c_toupper_multibyte_FUN_0060f300
                      ((char *)CONCAT22 /* combine 2-byte values */(extraout_var,wVar1),in_stack_fffffff4);
    crt_locale_c_wchar_to_bytes_FUN_00605a20(wVar1,&stack0xfffffff4);
    iVar2 = crt_locale_c_mblen_FUN_00605a40(&stack0xfffffff4);
    (&stack0xfffffff4)[iVar2] = 0;
    crt_mbstring_c_copyMbChar_FUN_0060e590(str,&stack0xfffffff4);
    str = crt_string_c_mbtowc_next_FUN_00605a70(str);
  }
  return in_stack_00000004;
}
