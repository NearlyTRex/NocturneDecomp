// Name: crt_string.c_mbstring_termination_check_FUN_00570ca0
// Address: 00570ca0
// Address Range: [[00570ca0, 00570cd9]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_string_c_mbstring_termination_check_FUN_00570ca0(char *str)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __watcallStack mbstring_termination_check(char *str)

{
  if (*str == '\0') {
    return 1;
  }
  if (((_DAT_02de5c30 != 0) && ((*(byte *)((byte)*str + 0x2de5c41) & 1) != 0)) && (str[1] == '\0'))
  {
    return 2;
  }
  return 0;
}
