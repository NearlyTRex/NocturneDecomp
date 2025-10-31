// Name: crt_stdlib.c_median_of_3_FUN_005fdea0
// Address: 005fdea0
// Address Range: [[005fdea0, 005fdf0f]]
// Convention: __watcallStack
// Signature: void * crt_stdlib.c_median_of_3_FUN_005fdea0(void * a, void * b, void * c, QSORT_COMPARATOR compar)
// Cross-references:
//   crt_stdlib.c_qsort_FUN_005fdf38 (005fdf38) at 005fe202 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void * __watcallStack
crt_stdlib_c_median_of_3_FUN_005fdea0(void *a,void *b,void *c,QSORT_COMPARATOR compar)

{
  int iVar1;
  void *in_stack_00000030;
  void *in_stack_00000044;
  
  iVar1 = (*compar)(a,b);
  if (iVar1 < 1) {
    iVar1 = (*compar)(a,c);
    if (-1 < iVar1) {
      return a;
    }
    iVar1 = (*compar)(in_stack_00000030,c);
    if (0 < iVar1) {
      return c;
    }
  }
  else {
    iVar1 = (*compar)(a,c);
    if (iVar1 < 1) {
      return a;
    }
    iVar1 = (*compar)(in_stack_00000030,c);
    if (iVar1 < 1) {
      return c;
    }
  }
  return in_stack_00000044;
}


// Assembly code:
// 005fdea0: PUSH EBX
//   Label: crt_stdlib.c_median_of_3_FUN_005fdea0
// 005fdea1: PUSH ESI
// 005fdea2: PUSH EDI
// 005fdea3: PUSH ES
// 005fdea4: PUSH FS
// 005fdea6: PUSH GS
// 005fdea8: PUSH EBP
// 005fdea9: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005fdead: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 005fdeb1: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 005fdeb5: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005fdeb9: PUSH EDX
// 005fdeba: PUSH EBP
// 005fdebb: CALL EDI
// 005fdebd: ADD ESP,0x8
// 005fdec0: TEST EAX,EAX
// 005fdec2: JLE 0x005fdee0
//   XREF to: 005fdee0 (CONDITIONAL_JUMP)
// 005fdec4: PUSH ESI
// 005fdec5: PUSH EBP
// 005fdec6: CALL EDI
// 005fdec8: ADD ESP,0x8
// 005fdecb: TEST EAX,EAX
// 005fdecd: JLE 0x005fdeeb
//   XREF to: 005fdeeb (CONDITIONAL_JUMP)
// 005fdecf: PUSH ESI
// 005fded0: MOV ECX,dword ptr [ESP + 0x28]
// 005fded4: PUSH ECX
// 005fded5: CALL EDI
// 005fded7: ADD ESP,0x8
// 005fdeda: TEST EAX,EAX
// 005fdedc: JLE 0x005fdefe
//   XREF to: 005fdefe (CONDITIONAL_JUMP)
// 005fdede: JMP 0x005fdf02
//   XREF to: 005fdf02 (UNCONDITIONAL_JUMP)
// 005fdee0: PUSH ESI
//   Label: LAB_005fdee0
// 005fdee1: PUSH EBP
// 005fdee2: CALL EDI
// 005fdee4: ADD ESP,0x8
// 005fdee7: TEST EAX,EAX
// 005fdee9: JL 0x005fdeef
//   XREF to: 005fdeef (CONDITIONAL_JUMP)
// 005fdeeb: MOV EAX,EBP
//   Label: LAB_005fdeeb
// 005fdeed: JMP 0x005fdf06
//   XREF to: 005fdf06 (UNCONDITIONAL_JUMP)
// 005fdeef: PUSH ESI
//   Label: LAB_005fdeef
// 005fdef0: MOV EBX,dword ptr [ESP + 0x28]
// 005fdef4: PUSH EBX
// 005fdef5: CALL EDI
// 005fdef7: ADD ESP,0x8
// 005fdefa: TEST EAX,EAX
// 005fdefc: JLE 0x005fdf02
//   XREF to: 005fdf02 (CONDITIONAL_JUMP)
// 005fdefe: MOV EAX,ESI
//   Label: LAB_005fdefe
// 005fdf00: JMP 0x005fdf06
//   XREF to: 005fdf06 (UNCONDITIONAL_JUMP)
// 005fdf02: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_005fdf02
// 005fdf06: POP EBP
//   Label: LAB_005fdf06
// 005fdf07: POP GS
// 005fdf09: POP FS
// 005fdf0b: POP ES
// 005fdf0c: POP EDI
// 005fdf0d: POP ESI
// 005fdf0e: POP EBX
// 005fdf0f: RET
