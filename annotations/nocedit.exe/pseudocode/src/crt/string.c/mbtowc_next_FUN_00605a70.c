// Name: crt_string.c_mbtowc_next_FUN_00605a70
// Address: 00605a70
// Address Range: [[00605a70, 00605a9d]]
// Convention: __watcallStack
// Signature: char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)

#include "nocturne.h"

char * __watcallStack crt_string_c_mbtowc_next_FUN_00605a70(char *str)

{
  if (((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[(byte)*str] & 1U) != 0)) &&
     (str[1] != '\0')) {
    return str + 2;
  }
  return str + 1;
}
