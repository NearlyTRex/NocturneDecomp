// Name: crt_string.c_hexDigitToChar_FUN_00601f0c
// Address: 00601f0c
// Address Range: [[00601f0c, 00601f1b]]
// Convention: __watcallStack
// Signature: char __watcallStack crt_string_c_hexDigitToChar_FUN_00601f0c(int digit)

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
