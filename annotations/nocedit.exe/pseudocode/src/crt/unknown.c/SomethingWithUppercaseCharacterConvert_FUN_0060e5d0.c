// Name: crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0
// Address: 0060e5d0
// Address Range: [[0060e5d0, 0060e636]]
// Convention: unknown
// Signature: undefined crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0()

#include "nocturne.h"

/* Signature: byte unk_SomethingWithUppercaseCharacterConvert(uint param_1) */

char * crt_unknown_c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0
                 (uint param_1,uint param_2,char *unaff_EBX,uint param_4,
                 char *param_5,char *param_6)

{
  char *pcVar1;
  wchar_t wVar2;
  int iVar3;
  ushort extraout_var;
  char *str;
  BADSPACEBASE *in_ESP;
  
  pcVar1 = param_5;
  str = param_5;
  while( true ) {
    iVar3 = crt_string_c_mbstring_termination_check_FUN_0060b630(str);
    if (iVar3 != 0) break;
    wVar2 = crt_string_c_mbtowc_peek_FUN_006059e0(str);
    wVar2 = crt_locale_c_toupper_multibyte_FUN_0060f300
                      ((char *)CONCAT22 /* combine 2-byte values */(extraout_var,wVar2),unaff_EBX);
    crt_locale_c_wchar_to_bytes_FUN_00605a20(wVar2,&stack0x00000000);
    iVar3 = crt_locale_c_mblen_FUN_00605a40(&stack0x00000004);
    param_5 = &stack0x00000008;
    *(byte *)((int)&stack0x00000008 + iVar3) = 0;
    unaff_EBX = (char *)0x60e61f;
    crt_mbstring_c_copyMbChar_FUN_0060e590(str,&stack0x00000008);
    param_5 = (char *)0x60e628;
    param_6 = str;
    str = crt_string_c_mbtowc_next_FUN_00605a70(str);
  }
  return pcVar1;
}
