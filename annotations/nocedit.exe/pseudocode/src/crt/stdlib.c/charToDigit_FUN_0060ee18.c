// Name: crt_stdlib.c_charToDigit_FUN_0060ee18
// Address: 0060ee18
// Address Range: [[0060ee18, 0060ee74]]
// Convention: __cdecl
// Signature: int crt_stdlib.c_charToDigit_FUN_0060ee18(char ch)
// Cross-references:
//   crt_stdlib.c_strtol_internal_FUN_0060ec70 (0060ec70) at 0060ed2b [UNCONDITIONAL_CALL]
// Function calls:
//   crt_ctype.c_tolower_FUN_005feb30

#include "nocturne.h"

int __cdecl crt_stdlib_c_charToDigit_FUN_0060ee18(char ch)

{
  byte bVar1;
  uint uVar2;
  
  if ((0x2f < (byte)ch) && ((byte)ch < 0x3a)) {
    return (byte)ch - 0x30;
  }
  uVar2 = crt_ctype_c_tolower_FUN_005feb30((uint)(byte)ch);
  bVar1 = (byte)uVar2;
  if ((0x60 < bVar1) && (bVar1 < 0x6a)) {
    return (uVar2 & 0xff) - 0x57;
  }
  if ((0x69 < bVar1) && (bVar1 < 0x73)) {
    return (uVar2 & 0xff) - 0x57;
  }
  if ((0x72 < bVar1) && (bVar1 < 0x7b)) {
    return (uVar2 & 0xff) - 0x57;
  }
  return 0x25;
}


// Assembly code:
// 0060ee18: MOV AL,byte ptr [ESP + 0x4]
//   Label: crt_stdlib.c_charToDigit_FUN_0060ee18
//   XREF to: Stack[0x4] (READ)
// 0060ee1c: CMP AL,0x30
// 0060ee1e: JC 0x0060ee2d
//   XREF to: 0060ee2d (CONDITIONAL_JUMP)
// 0060ee20: CMP AL,0x39
// 0060ee22: JA 0x0060ee2d
//   XREF to: 0060ee2d (CONDITIONAL_JUMP)
// 0060ee24: AND EAX,0xff
// 0060ee29: SUB EAX,0x30
// 0060ee2c: RET
// 0060ee2d: AND EAX,0xff
//   Label: LAB_0060ee2d
// 0060ee32: PUSH EAX
// 0060ee33: CALL crt_ctype.c_tolower_FUN_005feb30
//   XREF to: 005feb30 (UNCONDITIONAL_CALL)
// 0060ee38: MOV EDX,EAX
// 0060ee3a: ADD ESP,0x4
// 0060ee3d: CMP AL,0x61
// 0060ee3f: JC 0x0060ee4d
//   XREF to: 0060ee4d (CONDITIONAL_JUMP)
// 0060ee41: CMP AL,0x69
// 0060ee43: JA 0x0060ee4d
//   XREF to: 0060ee4d (CONDITIONAL_JUMP)
// 0060ee45: XOR EAX,EAX
// 0060ee47: MOV AL,DL
// 0060ee49: SUB EAX,0x57
// 0060ee4c: RET
// 0060ee4d: CMP AL,0x6a
//   Label: LAB_0060ee4d
// 0060ee4f: JC 0x0060ee5e
//   XREF to: 0060ee5e (CONDITIONAL_JUMP)
// 0060ee51: CMP AL,0x72
// 0060ee53: JA 0x0060ee5e
//   XREF to: 0060ee5e (CONDITIONAL_JUMP)
// 0060ee55: AND EAX,0xff
// 0060ee5a: SUB EAX,0x57
// 0060ee5d: RET
// 0060ee5e: CMP AL,0x73
//   Label: LAB_0060ee5e
// 0060ee60: JC 0x0060ee6f
//   XREF to: 0060ee6f (CONDITIONAL_JUMP)
// 0060ee62: CMP AL,0x7a
// 0060ee64: JA 0x0060ee6f
//   XREF to: 0060ee6f (CONDITIONAL_JUMP)
// 0060ee66: AND EAX,0xff
// 0060ee6b: SUB EAX,0x57
// 0060ee6e: RET
// 0060ee6f: MOV EAX,0x25
//   Label: LAB_0060ee6f
// 0060ee74: RET
