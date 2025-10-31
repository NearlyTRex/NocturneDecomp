// Name: crt_unknown.c_FUN_006040ed
// Address: 006040ed
// Address Range: [[006040ed, 00604103]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_006040ed()
// Cross-references:
//   crt_unknown.c_FUN_006040d7 (006040d7) at 006040e7 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_unknown.c_FUN_00604104

#include "nocturne.h"

/* Signature: void FUN_006040ed(uint param_1) */

void crt_unknown_c_FUN_006040ed(uint param_1,undefined4 param_2,char *unaff_EBX)

{
  undefined2 uVar1;
  uint uVar2;
  undefined3 unaff_retaddr;
  
  uVar2 = 0;
  if (99 < param_1) {
    uVar2 = (param_1 & 0xffff) / 100;
  }
  crt_unknown_c_FUN_00604104(uVar2);
  uVar1 = (undefined2)CONCAT31(unaff_retaddr,(char)((uint3)unaff_retaddr >> 8));
  if (9 < (byte)unaff_retaddr) {
    uVar1 = CONCAT11((char)((ushort)unaff_retaddr % 10),(char)((ushort)unaff_retaddr / 10));
  }
  *unaff_EBX = (char)uVar1 + '0';
  unaff_EBX[1] = (char)((ushort)uVar1 >> 8) + '0';
  return;
}


// Assembly code:
// 006040ed: MOV ECX,0x64
//   Label: crt_unknown.c_FUN_006040ed
// 006040f2: SUB EDX,EDX
// 006040f4: CMP EAX,ECX
// 006040f6: XCHG EAX,EDX
// 006040f7: JC 0x006040fd
//   XREF to: 006040fd (CONDITIONAL_JUMP)
// 006040f9: XCHG EAX,EDX
// 006040fa: DIV CX
// 006040fd: PUSH EDX
//   Label: LAB_006040fd
// 006040fe: CALL crt_unknown.c_FUN_00604104
//   XREF to: 00604104 (UNCONDITIONAL_CALL)
// 00604103: POP EAX
