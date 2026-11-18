// Name: crt_locale.c_istrailbyte_FUN_005747b0
// Address: 005747b0
// Address Range: [[005747b0, 005747e8]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_locale_c_istrailbyte_FUN_005747b0(uchar byte_value)

#include "nocturne.h"

int __watcallStack istrailbyte(uchar byte_value)

{
  undefined3 in_stack_00000005;
  
  if (g_MultibyteLocaleActive != 0) {
    if (g_CodePage == 0x3a4) {
      return (uint)(g_ShiftJIS_TrailByteTable[byte_value] & 8);
    }
    if (_byte_value != 0) {
      return 1;
    }
  }
  return 0;
}
