// Name: crt_string.c_mbtowc_peek_FUN_006059e0
// Address: 006059e0
// Address Range: [[006059e0, 00605a1b]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_string_c_mbtowc_peek_FUN_006059e0(char *str)

#include "nocturne.h"

int __watcallStack mbtowc_peek(char *str)

{
  if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[(byte)*str] & 1U) != 0)) {
    return (uint)CONCAT11(*str,str[1]);
  }
  return (uint)(byte)*str;
}
