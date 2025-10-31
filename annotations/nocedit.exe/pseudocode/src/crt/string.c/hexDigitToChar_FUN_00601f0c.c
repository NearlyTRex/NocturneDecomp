// Name: crt_string.c_hexDigitToChar_FUN_00601f0c
// Address: 00601f0c
// Address Range: [[00601f0c, 00601f1b]]
// Convention: __watcallStack
// Signature: char crt_string.c_hexDigitToChar_FUN_00601f0c(int digit)
// Cross-references:
//   crt_io.c_generateTempFilename_FUN_00601f1c (00601f1c) at 00601fa9 [UNCONDITIONAL_CALL]

#include "nocturne.h"

char __watcallStack crt_string_c_hexDigitToChar_FUN_00601f0c(int digit)

{
  int iVar1;
  
  iVar1 = digit + 0x30;
  if (0x39 < iVar1) {
    iVar1 = digit + 0x57;
  }
  return (char)iVar1;
}


// Assembly code:
// 00601f0c: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_string.c_hexDigitToChar_FUN_00601f0c
//   XREF to: Stack[0x4] (READ)
// 00601f10: ADD EAX,0x30
// 00601f13: CMP EAX,0x39
// 00601f16: JLE 0x00601f1b
//   XREF to: 00601f1b (CONDITIONAL_JUMP)
// 00601f18: ADD EAX,0x27
// 00601f1b: RET
//   Label: LAB_00601f1b
