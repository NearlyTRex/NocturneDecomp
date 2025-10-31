// Name: crt_locale.c_fullwidth_toupper_FUN_0060ffb0
// Address: 0060ffb0
// Address Range: [[0060ffb0, 0060ffca]]
// Convention: __watcallStack
// Signature: wchar_t crt_locale.c_fullwidth_toupper_FUN_0060ffb0(wchar_t character)
// Cross-references:
//   crt_locale.c_toupper_multibyte_FUN_0060f300 (0060f300) at 0060f355 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_locale.c_islower_multibyte_FUN_00610990

#include "nocturne.h"

wchar_t __watcallStack crt_locale_c_fullwidth_toupper_FUN_0060ffb0(wchar_t character)

{
  int iVar1;
  
  iVar1 = crt_locale_c_islower_multibyte_FUN_00610990(character);
  if (iVar1 != 0) {
    return character + L'';
  }
  return character;
}


// Assembly code:
// 0060ffb0: PUSH EBX
//   Label: crt_locale.c_fullwidth_toupper_FUN_0060ffb0
// 0060ffb1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060ffb5: PUSH EBX
// 0060ffb6: CALL crt_locale.c_islower_multibyte_FUN_00610990
//   XREF to: 00610990 (UNCONDITIONAL_CALL)
// 0060ffbb: ADD ESP,0x4
// 0060ffbe: TEST EAX,EAX
// 0060ffc0: JZ 0x0060ffc7
//   XREF to: 0060ffc7 (CONDITIONAL_JUMP)
// 0060ffc2: LEA EAX,[EBX + -0x21]
// 0060ffc5: POP EBX
// 0060ffc6: RET
// 0060ffc7: MOV EAX,EBX
//   Label: LAB_0060ffc7
// 0060ffc9: POP EBX
// 0060ffca: RET
