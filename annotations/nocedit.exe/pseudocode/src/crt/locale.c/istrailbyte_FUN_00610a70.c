// Name: crt_locale.c_istrailbyte_FUN_00610a70
// Address: 00610a70
// Address Range: [[00610a70, 00610aa8]]
// Convention: __watcallStack
// Signature: int crt_locale.c_istrailbyte_FUN_00610a70(uchar byte_value)
// Cross-references:
//   crt_locale.c_ismultibyte_FUN_00610a20 (00610a20) at 00610a4e [UNCONDITIONAL_CALL]
// Globals:
//   uint g_CodePage = 0x1
//   char[256] g_ShiftJIS_TrailByteTable
//   int g_MultibyteLocaleActive

#include "nocturne.h"

int __watcallStack crt_locale_c_istrailbyte_FUN_00610a70(uchar byte_value)

{
  undefined3 in_stack_00000005;
  
  if (g_MultibyteLocaleActive == 0) {
    _byte_value = 0;
  }
  else {
    if (g_CodePage == 0x3a4) {
      return (uint)(g_ShiftJIS_TrailByteTable[byte_value] & 8);
    }
    if (_byte_value != 0) {
      return 1;
    }
  }
  return _byte_value;
}


// Assembly code:
// 00610a70: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_locale.c_istrailbyte_FUN_00610a70
//   XREF to: Stack[0x4] (READ)
// 00610a74: CMP dword ptr [0x03f9c020],0x0
//   XREF to: 03f9c020 (READ)
// 00610a7b: JZ 0x00610aa6
//   XREF to: 00610aa6 (CONDITIONAL_JUMP)
// 00610a7d: CMP dword ptr [0x00685570],0x3a4
//   XREF to: 00685570 (READ)
// 00610a87: JZ 0x00610a93
//   XREF to: 00610a93 (CONDITIONAL_JUMP)
// 00610a89: TEST EAX,EAX
// 00610a8b: JZ 0x00610aa8
//   XREF to: 00610aa8 (CONDITIONAL_JUMP)
// 00610a8d: MOV EAX,0x1
// 00610a92: RET
// 00610a93: AND EAX,0xff
//   Label: LAB_00610a93
// 00610a98: MOV AL,byte ptr [EAX + 0x68562d]
//   XREF to: 0068562d (DATA)
// 00610a9e: AND AL,0x8
// 00610aa0: AND EAX,0xff
// 00610aa5: RET
// 00610aa6: XOR EAX,EAX
//   Label: LAB_00610aa6
// 00610aa8: RET
//   Label: LAB_00610aa8
