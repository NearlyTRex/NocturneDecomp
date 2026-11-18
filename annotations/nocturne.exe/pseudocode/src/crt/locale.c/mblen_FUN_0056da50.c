// Name: crt_locale.c_mblen_FUN_0056da50
// Address: 0056da50
// Address Range: [[0056da50, 0056da7b]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_locale_c_mblen_FUN_0056da50(char *mb_string)

#include "nocturne.h"

int __watcallStack mblen(char *mb_string)

{
  if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[(byte)*mb_string] & 1U) != 0)) {
    return 2;
  }
  return 1;
}
