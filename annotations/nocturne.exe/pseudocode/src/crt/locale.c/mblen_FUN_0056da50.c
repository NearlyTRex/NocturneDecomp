// Name: crt_locale.c_mblen_FUN_0056da50
// Address: 0056da50
// Address Range: [[0056da50, 0056da7b]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_locale_c_mblen_FUN_0056da50(char *mb_string)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __watcallStack mblen(char *mb_string)

{
  if ((_DAT_02de5c30 != 0) && ((*(byte *)((byte)*mb_string + 0x2de5c41) & 1) != 0)) {
    return 2;
  }
  return 1;
}
