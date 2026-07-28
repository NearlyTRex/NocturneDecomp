// Name: crt_unknown.c_hexDigitToChar_FUN_005633ec
// Address: 005633ec
// Address Range: [[005633ec, 005633fb]]
// Convention: __watcallStack
// Signature: char __watcallStack crt_unknown_c_hexDigitToChar_FUN_005633ec(int digit)

#include "nocturne.h"

char __watcallStack hexDigitToChar(int digit)

{
  int iVar1;
  
  iVar1 = digit + 0x30;
  if (0x39 < iVar1) {
    iVar1 = digit + 0x57;
  }
  return (char)iVar1;
}
