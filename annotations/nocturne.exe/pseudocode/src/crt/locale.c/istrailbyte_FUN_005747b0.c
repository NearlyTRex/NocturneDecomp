// Name: crt_locale.c_istrailbyte_FUN_005747b0
// Address: 005747b0
// Address Range: [[005747b0, 005747e8]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_locale_c_istrailbyte_FUN_005747b0(uchar byte_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __watcallStack istrailbyte(uchar byte_value)

{
  undefined3 in_stack_00000005;
  
  if (_DAT_02de5c30 != 0) {
    if (DAT_005c2144 == 0x3a4) {
      return (uint)((&DAT_005c2201)[byte_value] & 8);
    }
    if (_byte_value != 0) {
      return 1;
    }
  }
  return 0;
}
