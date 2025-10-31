// Name: crt_unknown.c_FUN_006040d7
// Address: 006040d7
// Address Range: [[006040d7, 006040ec]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_006040d7()
// Cross-references:
//   crt_unknown.c_FUN_0060403f (0060403f) at 006040d0 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_unknown.c_FUN_006040ed

#include "nocturne.h"

/* Signature: void FUN_006040d7(uint param_1) */

void crt_unknown_c_FUN_006040d7(uint param_1,undefined4 param_2,char *unaff_EBX)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (9999 < param_1) {
    uVar2 = param_1 / 10000;
    param_1 = param_1 % 10000;
  }
  crt_unknown_c_FUN_006040ed(uVar2);
  uVar2 = 0;
  if (99 < param_1) {
    uVar2 = (param_1 & 0xffff) / 100;
    param_1 = (param_1 & 0xffff) % 100;
  }
  crt_unknown_c_FUN_00604104(uVar2);
  uVar1 = (undefined2)CONCAT31((int3)param_1,(char)(param_1 >> 8));
  if (9 < (byte)param_1) {
    uVar1 = CONCAT11((char)((ushort)param_1 % 10),(char)((ushort)param_1 / 10));
  }
  *unaff_EBX = (char)uVar1 + '0';
  unaff_EBX[1] = (char)((ushort)uVar1 >> 8) + '0';
  return;
}


// Assembly code:
// 006040d7: MOV ECX,0x2710
//   Label: crt_unknown.c_FUN_006040d7
// 006040dc: SUB EDX,EDX
// 006040de: CMP EAX,ECX
// 006040e0: XCHG EAX,EDX
// 006040e1: JC 0x006040e6
//   XREF to: 006040e6 (CONDITIONAL_JUMP)
// 006040e3: XCHG EAX,EDX
// 006040e4: DIV ECX
// 006040e6: PUSH EDX
//   Label: LAB_006040e6
// 006040e7: CALL crt_unknown.c_FUN_006040ed
//   XREF to: 006040ed (UNCONDITIONAL_CALL)
// 006040ec: POP EAX
