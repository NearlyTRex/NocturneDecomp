// Name: crt_stdlib.c_memory_swap_FUN_005fdf10
// Address: 005fdf10
// Address Range: [[005fdf10, 005fdf35]]
// Convention: __watcallRegister
// Signature: void crt_stdlib.c_memory_swap_FUN_005fdf10(void * ptr1, void * ptr2, SIZE_T bytes)
// Cross-references:
//   crt_stdlib.c_qsort_FUN_005fdf38 (005fdf38) at 005fe403 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void crt_stdlib_c_memory_swap_FUN_005fdf10(void *ptr1,void *ptr2,SIZE_T bytes)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint in_ECX;
  uint uVar4;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  for (uVar4 = in_ECX >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    LOCK();
    uVar2 = *unaff_ESI;
    *unaff_ESI = *unaff_EDI;
    UNLOCK();
    *unaff_EDI = uVar2;
    unaff_ESI = unaff_ESI + 1;
    unaff_EDI = unaff_EDI + 1;
  }
  uVar4 = (uint)((byte)in_ECX & 3);
  uVar3 = in_ECX & 3;
  while (uVar3 != 0) {
    LOCK();
    uVar1 = *(undefined1 *)unaff_ESI;
    *(undefined1 *)unaff_ESI = *(undefined1 *)unaff_EDI;
    UNLOCK();
    *(undefined1 *)unaff_EDI = uVar1;
    unaff_ESI = (undefined4 *)((int)unaff_ESI + 1);
    uVar4 = uVar4 - 1;
    unaff_EDI = (undefined4 *)((int)unaff_EDI + 1);
    uVar3 = uVar4;
  }
  return;
}


// Assembly code:
// 005fdf10: PUSH ES
//   Label: crt_stdlib.c_memory_swap_FUN_005fdf10
// 005fdf11: PUSH DS
// 005fdf12: POP ES
// 005fdf13: MOVZX EDX,CL
// 005fdf16: SHR ECX,0x2
// 005fdf19: JZ 0x005fdf26
//   XREF to: 005fdf26 (CONDITIONAL_JUMP)
// 005fdf1b: MOV EAX,dword ptr [EDI]
//   Label: LAB_005fdf1b
// 005fdf1d: XCHG dword ptr [ESI],EAX
// 005fdf1f: STOSD ES:EDI
// 005fdf20: ADD ESI,0x4
// 005fdf23: DEC ECX
// 005fdf24: JNZ 0x005fdf1b
//   XREF to: 005fdf1b (CONDITIONAL_JUMP)
// 005fdf26: AND DL,0x3
//   Label: LAB_005fdf26
// 005fdf29: JZ 0x005fdf34
//   XREF to: 005fdf34 (CONDITIONAL_JUMP)
// 005fdf2b: MOV AL,byte ptr [EDI]
//   Label: LAB_005fdf2b
// 005fdf2d: XCHG byte ptr [ESI],AL
// 005fdf2f: STOSB ES:EDI
// 005fdf30: INC ESI
// 005fdf31: DEC EDX
// 005fdf32: JNZ 0x005fdf2b
//   XREF to: 005fdf2b (CONDITIONAL_JUMP)
// 005fdf34: POP ES
//   Label: LAB_005fdf34
// 005fdf35: RET
