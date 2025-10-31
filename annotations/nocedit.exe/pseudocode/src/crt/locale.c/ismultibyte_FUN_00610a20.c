// Name: crt_locale.c_ismultibyte_FUN_00610a20
// Address: 00610a20
// Address Range: [[00610a20, 00610a62]]
// Convention: __watcallStack
// Signature: int crt_locale.c_ismultibyte_FUN_00610a20(wchar_t character)
// Cross-references:
//   crt_locale.c_islower_multibyte_FUN_00610990 (00610990) at 00610996 [UNCONDITIONAL_CALL]
// Globals:
//   int g_MultibyteLocaleActive
//   char[256] g_LeadByteTable
// Function calls:
//   crt_locale.c_istrailbyte_FUN_00610a70

#include "nocturne.h"

int __watcallStack crt_locale_c_ismultibyte_FUN_00610a20(wchar_t character)

{
  int iVar1;
  
  if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[(ushort)character >> 8] & 1U) != 0)) {
    iVar1 = crt_locale_c_istrailbyte_FUN_00610a70((uchar)character);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 00610a20: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_locale.c_ismultibyte_FUN_00610a20
//   XREF to: Stack[0x4] (READ)
// 00610a24: CMP dword ptr [0x03f9c020],0x0
//   XREF to: 03f9c020 (READ)
// 00610a2b: JZ 0x00610a60
//   XREF to: 00610a60 (CONDITIONAL_JUMP)
// 00610a2d: MOV EAX,EDX
// 00610a2f: SHR EAX,0x8
// 00610a32: AND EAX,0xff
// 00610a37: MOV AL,byte ptr [EAX + 0x3f9c031]
//   XREF to: 03f9c031 (DATA)
// 00610a3d: AND AL,0x1
// 00610a3f: AND EAX,0xff
// 00610a44: JZ 0x00610a60
//   XREF to: 00610a60 (CONDITIONAL_JUMP)
// 00610a46: MOV EAX,EDX
// 00610a48: AND EAX,0xff
// 00610a4d: PUSH EAX
// 00610a4e: CALL crt_locale.c_istrailbyte_FUN_00610a70
//   XREF to: 00610a70 (UNCONDITIONAL_CALL)
// 00610a53: ADD ESP,0x4
// 00610a56: TEST EAX,EAX
// 00610a58: JZ 0x00610a60
//   XREF to: 00610a60 (CONDITIONAL_JUMP)
// 00610a5a: MOV EAX,0x1
// 00610a5f: RET
// 00610a60: XOR EAX,EAX
//   Label: LAB_00610a60
// 00610a62: RET
