// Name: crt_string.c_mbstring_termination_check_FUN_0060b630
// Address: 0060b630
// Address Range: [[0060b630, 0060b669]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_string_c_mbstring_termination_check_FUN_0060b630(char *str)

#include "nocturne.h"

int __watcallStack mbstring_termination_check(char *str)

{
  if (*str == '\0') {
    return 1;
  }
  if (((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[(byte)*str] & 1U) != 0)) &&
     (str[1] == '\0')) {
    return 2;
  }
  return 0;
}
