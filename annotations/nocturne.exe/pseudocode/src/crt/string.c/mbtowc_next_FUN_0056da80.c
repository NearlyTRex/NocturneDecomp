// Name: crt_string.c_mbtowc_next_FUN_0056da80
// Address: 0056da80
// Address Range: [[0056da80, 0056daad]]
// Convention: __watcallStack
// Signature: char * __watcallStack crt_string_c_mbtowc_next_FUN_0056da80(char *str)

#include "nocturne.h"

char * __watcallStack mbtowc_next(char *str)

{
  if (((g_INT_02de5c30 != 0) && ((g_CHAR_ARRAY_02de5c41[(byte)*str] & 1U) != 0)) && (str[1] != '\0')
     ) {
    return str + 2;
  }
  return str + 1;
}
