// Name: crt_locale.c_toupper_multibyte_FUN_0060f300
// Address: 0060f300
// Address Range: [[0060f300, 0060f37a]]
// Convention: __watcallStack
// Signature: wchar_t crt_locale.c_toupper_multibyte_FUN_0060f300(char * mb_char, char * output_buffer)

#include "nocturne.h"

wchar_t __watcallStack
crt_locale_c_toupper_multibyte_FUN_0060f300(char *mb_char,char *output_buffer)

{
  wchar_t wVar1;
  int iVar2;
  byte unaff_BL;
  BADSPACEBASE *in_ESP;
  wchar_t in_stack_0000000c;
  
  crt_locale_c_wchar_to_bytes_FUN_00605a20((wchar_t)mb_char,&stack0xfffffff4);
  iVar2 = crt_locale_c_mblen_FUN_00605a40(&stack0xfffffff8);
  (&stack0xfffffffc)[iVar2] = 0;
  if (((g_CodePage == 0x3a4) && (g_MultibyteLocaleActive != 0)) &&
     ((g_LeadByteTable[unaff_BL] & 1U) != 0)) {
    wVar1 = crt_locale_c_fullwidth_toupper_FUN_0060ffb0(in_stack_0000000c);
  }
  else {
    (*PTR_CharUpperBuffA_0061148c)(&stack0xfffffffc,1);
    wVar1 = crt_string_c_mbtowc_peek_FUN_006059e0((char *)&output_buffer);
  }
  return wVar1;
}
