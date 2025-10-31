// Name: crt_unknown.c_FUN_00604104
// Address: 00604104
// Address Range: [[00604104, 0060411b]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00604104()
// Cross-references:
//   crt_unknown.c_FUN_006040ed (006040ed) at 006040fe [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 FUN_00604104() */

void crt_unknown_c_FUN_00604104(ushort param_1,undefined4 param_2,char *unaff_EBX)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = (byte)param_1;
  cVar1 = (char)(param_1 >> 8);
  if (9 < bVar2) {
    cVar1 = (char)(param_1 / 10);
    bVar2 = (byte)(param_1 % 10);
  }
  *unaff_EBX = cVar1 + '0';
  unaff_EBX[1] = bVar2 + 0x30;
  return;
}


// Assembly code:
// 00604104: MOV CL,0xa
//   Label: crt_unknown.c_FUN_00604104
// 00604106: CMP AL,CL
// 00604108: XCHG AH,AL
// 0060410a: JC 0x00604110
//   XREF to: 00604110 (CONDITIONAL_JUMP)
// 0060410c: XCHG AH,AL
// 0060410e: DIV CL
// 00604110: ADD AH,0x30
//   Label: LAB_00604110
// 00604113: ADD AL,0x30
// 00604115: MOV byte ptr [EBX],AL
// 00604117: INC EBX
// 00604118: MOV byte ptr [EBX],AH
// 0060411a: INC EBX
// 0060411b: RET
