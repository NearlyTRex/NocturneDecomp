// Name: crt_string.c_mbtowc_peek_FUN_0056d9f0
// Address: 0056d9f0
// Address Range: [[0056d9f0, 0056da2b]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_string_c_mbtowc_peek_FUN_0056d9f0(char *str)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __watcallStack mbtowc_peek(char *str)

{
  if ((_DAT_02de5c30 != 0) && ((*(byte *)((byte)*str + 0x2de5c41) & 1) != 0)) {
    return (uint)CONCAT11(*str,str[1]);
  }
  return (uint)(byte)*str;
}
