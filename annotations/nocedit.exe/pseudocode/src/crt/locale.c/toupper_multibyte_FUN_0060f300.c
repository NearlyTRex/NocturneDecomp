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
  byte local_c [4];
  
  crt_locale_c_wchar_to_bytes_FUN_00605a20((wchar_t)mb_char,(char *)local_c);
  iVar2 = crt_locale_c_mblen_FUN_00605a40((char *)local_c);
  local_c[iVar2] = 0;
  if (((g_CodePage == 0x3a4) && (g_MultibyteLocaleActive != 0)) &&
     ((g_LeadByteTable[local_c[0]] & 1U) != 0)) {
    wVar1 = crt_locale_c_fullwidth_toupper_FUN_0060ffb0((wchar_t)mb_char);
  }
  else {
    (*PTR_CharUpperBuffA_0061148c)((LPSTR)local_c,1);
    wVar1 = crt_string_c_mbtowc_peek_FUN_006059e0((char *)local_c);
  }
  return wVar1;
}
