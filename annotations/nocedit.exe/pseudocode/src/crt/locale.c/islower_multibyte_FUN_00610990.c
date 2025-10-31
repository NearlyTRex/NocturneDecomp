// Name: crt_locale.c_islower_multibyte_FUN_00610990
// Address: 00610990
// Address Range: [[00610990, 006109d4]]
// Convention: __watcallStack
// Signature: int crt_locale.c_islower_multibyte_FUN_00610990(wchar_t character)
// Cross-references:
//   crt_locale.c_fullwidth_toupper_FUN_0060ffb0 (0060ffb0) at 0060ffb6 [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable
// Function calls:
//   crt_locale.c_ismultibyte_FUN_00610a20

#include "nocturne.h"

int __watcallStack crt_locale_c_islower_multibyte_FUN_00610990(wchar_t character)

{
  int iVar1;
  undefined2 in_stack_00000006;
  
  iVar1 = crt_locale_c_ismultibyte_FUN_00610a20(character);
  if (iVar1 == 0) {
    return (uint)(g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x80);
  }
  if ((0x8280 < _character) && (_character < 0x829b)) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 00610990: PUSH EBX
//   Label: crt_locale.c_islower_multibyte_FUN_00610990
// 00610991: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00610995: PUSH EBX
// 00610996: CALL crt_locale.c_ismultibyte_FUN_00610a20
//   XREF to: 00610a20 (UNCONDITIONAL_CALL)
// 0061099b: ADD ESP,0x4
// 0061099e: TEST EAX,EAX
// 006109a0: JZ 0x006109bd
//   XREF to: 006109bd (CONDITIONAL_JUMP)
// 006109a2: CMP EBX,0x8281
// 006109a8: JC 0x006109b9
//   XREF to: 006109b9 (CONDITIONAL_JUMP)
// 006109aa: CMP EBX,0x829a
// 006109b0: JA 0x006109b9
//   XREF to: 006109b9 (CONDITIONAL_JUMP)
// 006109b2: MOV EAX,0x1
// 006109b7: POP EBX
// 006109b8: RET
// 006109b9: XOR EAX,EAX
//   Label: LAB_006109b9
// 006109bb: POP EBX
// 006109bc: RET
// 006109bd: MOV AL,BL
//   Label: LAB_006109bd
// 006109bf: INC AL
// 006109c1: AND EAX,0xff
// 006109c6: MOV AL,byte ptr [EAX + 0x6849c4]
//   XREF to: 006849c4 (DATA)
// 006109cc: AND AL,0x80
// 006109ce: AND EAX,0xff
// 006109d3: POP EBX
// 006109d4: RET
