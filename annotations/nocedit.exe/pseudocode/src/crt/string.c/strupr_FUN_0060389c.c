// Name: crt_string.c_strupr_FUN_0060389c
// Address: 0060389c
// Address Range: [[0060389c, 006038be]]
// Convention: __cdecl
// Signature: char * crt_string.c_strupr_FUN_0060389c(char * string)
// Cross-references:
//   crt_stdio.c_ConvertFormatSpec_FUN_00603238 (00603238) at 0060376d [UNCONDITIONAL_CALL]
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0

#include "nocturne.h"

char * __cdecl crt_string_c_strupr_FUN_0060389c(char *string)

{
  byte bVar1;
  char *in_EAX;
  
  bVar1 = *string;
  while (bVar1 != 0) {
    in_EAX = (char *)crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)*string);
    *string = (byte)in_EAX;
    bVar1 = ((byte *)string)[1];
    string = (char *)((byte *)string + 1);
  }
  return in_EAX;
}


// Assembly code:
// 0060389c: PUSH EBX
//   Label: crt_string.c_strupr_FUN_0060389c
// 0060389d: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 006038a1: CMP byte ptr [EBX],0x0
// 006038a4: JZ 0x006038bd
//   XREF to: 006038bd (CONDITIONAL_JUMP)
// 006038a6: XOR EAX,EAX
//   Label: LAB_006038a6
// 006038a8: MOV AL,byte ptr [EBX]
// 006038aa: PUSH EAX
// 006038ab: INC EBX
// 006038ac: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 006038b1: MOV byte ptr [EBX + -0x1],AL
// 006038b4: MOV DL,byte ptr [EBX]
// 006038b6: ADD ESP,0x4
// 006038b9: TEST DL,DL
// 006038bb: JNZ 0x006038a6
//   XREF to: 006038a6 (CONDITIONAL_JUMP)
// 006038bd: POP EBX
//   Label: LAB_006038bd
// 006038be: RET
