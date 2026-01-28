// Name: crt_locale.c_mblen_FUN_00605a40
// Address: 00605a40
// Address Range: [[00605a40, 00605a6b]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_locale_c_mblen_FUN_00605a40(char *mb_string)

#include "nocturne.h"

int __watcallStack crt_locale_c_mblen_FUN_00605a40(char *mb_string)

{
  if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[(byte)*mb_string] & 1U) != 0)) {
    return 2;
  }
  return 1;
}
