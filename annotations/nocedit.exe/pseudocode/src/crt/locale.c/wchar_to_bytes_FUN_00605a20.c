// Name: crt_locale.c_wchar_to_bytes_FUN_00605a20
// Address: 00605a20
// Address Range: [[00605a20, 00605a3d]]
// Convention: __watcallStack
// Signature: void crt_locale.c_wchar_to_bytes_FUN_00605a20(wchar_t character, char * output_buffer)
// Cross-references:
//   crt_file.c_makepath_FUN_005febfc (005febfc) at 005fed67 [UNCONDITIONAL_CALL]
//   crt_locale.c_toupper_multibyte_FUN_0060f300 (0060f300) at 0060f30d [UNCONDITIONAL_CALL]
//   crt_string.c_char_in_set_FUN_0060e340 (0060e340) at 0060e350 [UNCONDITIONAL_CALL]
//   crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0 (0060e5d0) at 0060e5fe [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __watcallStack crt_locale_c_wchar_to_bytes_FUN_00605a20(wchar_t character,char *output_buffer)

{
  char cVar1;
  
  cVar1 = (char)((ushort)character >> 8);
  if (cVar1 != '\0') {
    output_buffer[1] = (char)character;
    *output_buffer = cVar1;
    return;
  }
  *output_buffer = (char)character;
  return;
}


// Assembly code:
// 00605a20: PUSH EBX
//   Label: crt_locale.c_wchar_to_bytes_FUN_00605a20
// 00605a21: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00605a25: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00605a29: TEST DH,0xff
// 00605a2c: JZ 0x00605a3a
//   XREF to: 00605a3a (CONDITIONAL_JUMP)
// 00605a2e: MOV EBX,EDX
// 00605a30: MOV byte ptr [EAX + 0x1],DL
// 00605a33: SHR EBX,0x8
// 00605a36: MOV byte ptr [EAX],BL
// 00605a38: POP EBX
// 00605a39: RET
// 00605a3a: MOV byte ptr [EAX],DL
//   Label: LAB_00605a3a
// 00605a3c: POP EBX
// 00605a3d: RET
