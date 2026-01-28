// Name: crt_string.c_mbtowc_peek_FUN_006059e0
// Address: 006059e0
// Address Range: [[006059e0, 00605a1b]]
// Convention: __watcallStack
// Signature: wchar_t __watcallStack crt_string_c_mbtowc_peek_FUN_006059e0(char *str)

#include "nocturne.h"

wchar_t __watcallStack crt_string_c_mbtowc_peek_FUN_006059e0(char *str)

{
  if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[(byte)*str] & 1U) != 0)) {
    return CONCAT11(*str,str[1]);
  }
  return (wchar_t)(byte)*str;
}
