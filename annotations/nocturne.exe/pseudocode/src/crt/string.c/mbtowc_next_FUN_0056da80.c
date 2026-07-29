// Name: crt_string.c_mbtowc_next_FUN_0056da80
// Address: 0056da80
// Address Range: [[0056da80, 0056daad]]
// Convention: __watcallStack
// Signature: char * __watcallStack crt_string_c_mbtowc_next_FUN_0056da80(char *str)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __watcallStack mbtowc_next(char *str)

{
  if (((_DAT_02de5c30 != 0) && ((*(byte *)((byte)*str + 0x2de5c41) & 1) != 0)) && (str[1] != '\0'))
  {
    return str + 2;
  }
  return str + 1;
}
