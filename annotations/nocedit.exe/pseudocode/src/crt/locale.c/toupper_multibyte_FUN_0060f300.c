// Name: crt_locale.c_toupper_multibyte_FUN_0060f300
// Address: 0060f300
// Address Range: [[0060f300, 0060f37a]]
// Convention: __watcallStack
// Signature: wchar_t __watcallStack crt_locale_c_toupper_multibyte_FUN_0060f300(char *mb_char,char *output_buffer)

#include "nocturne.h"

wchar_t __watcallStack
toupper_multibyte(char *mb_char,char *output_buffer)

{
  wchar_t wVar1;
  int iVar2;
  byte local_c [4];
  
  wchar_to_bytes((wchar_t)mb_char,(char *)local_c);
  iVar2 = mblen((char *)local_c);
  local_c[iVar2] = 0;
  if (((g_CodePage == 0x3a4) && (g_MultibyteLocaleActive != 0)) &&
     ((g_LeadByteTable[local_c[0]] & 1U) != 0)) {
    wVar1 = fullwidth_toupper((wchar_t)mb_char);
  }
  else {
    (*g_CharUpperBuffAFunc)((LPSTR)local_c,1);
    wVar1 = mbtowc_peek((char *)local_c);
  }
  return wVar1;
}
