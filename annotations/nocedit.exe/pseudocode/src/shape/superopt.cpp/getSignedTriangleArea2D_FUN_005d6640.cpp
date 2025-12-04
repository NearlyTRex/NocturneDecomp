// Name: shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640
// Address: 005d6640
// Address Range: [[005d6640, 005d66d6]]
// Convention: __cdecl
// Signature: double shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640(CVector2d * p1, CVector2d * p2, CVector2d * p3)
// Cross-references:
//   shape_superopt.cpp_CPoly_containsPoint2D_FUN_005d0340 (005d0340) at 005d0c65 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005cb3a0 (005cb3a0) at 005cb90e [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005cbf90 (005cbf90) at 005cc2dc [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00654552 = 1.00000000000000E-10

#include "nocturne.h"

double __cdecl
shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640(CVector2d *p1,CVector2d *p2,CVector2d *p3)

{
  double dVar1;
  double *in_stack_00000004;
  double local_20;
  
  dVar1 = (p1->x - *in_stack_00000004) * (p2->y - in_stack_00000004[1]) -
          (p2->x - *in_stack_00000004) * (p1->y - in_stack_00000004[1]);
  local_20 = dVar1;
  if (dVar1 < 0.0) {
    local_20 = -dVar1;
  }
  if (DOUBLE_00654552 <= local_20) {
    return dVar1;
  }
  return 0.0;
}


// Assembly code:
// 005d6640: PUSH EBP
//   Label: shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640
// 005d6641: MOV EBP,ESP
// 005d6643: SUB ESP,0x18
// 005d6646: AND ESP,0xfffffff8
// 005d6649: MOV EAX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d664c: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005d664f: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005d6652: FLD double ptr [ECX + 0x8]
// 005d6655: FSUB double ptr [EAX + 0x8]
// 005d6658: FLD double ptr [EDX]
// 005d665a: FSUB double ptr [EAX]
// 005d665c: FMULP
// 005d665e: FLD double ptr [EDX + 0x8]
// 005d6661: FSUB double ptr [EAX + 0x8]
// 005d6664: FLD double ptr [ECX]
// 005d6666: FSUB double ptr [EAX]
// 005d6668: FMULP
// 005d666a: FSUBP
// 005d666c: FLDZ
// 005d666e: FXCH
// 005d6670: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 005d6674: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005d6678: FNSTSW AX
// 005d667a: SAHF
// 005d667b: JBE 0x005d66aa
//   XREF to: 005d66aa (CONDITIONAL_JUMP)
// 005d667d: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005d6681: FCHS
// 005d6683: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005d6686: FLD double ptr [ESP]
//   Label: LAB_005d6686
//   XREF to: Stack[-0x20] (DATA)
// 005d6689: FCOMP double ptr [0x00654552]
//   XREF to: 00654552 (READ)
// 005d668f: FNSTSW AX
// 005d6691: SAHF
// 005d6692: JNC 0x005d66bb
//   XREF to: 005d66bb (CONDITIONAL_JUMP)
// 005d6694: XOR EDX,EDX
// 005d6696: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 005d669a: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 005d669e: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 005d66a2: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc] (READ)
// 005d66a6: MOV ESP,EBP
// 005d66a8: POP EBP
// 005d66a9: RET
// 005d66aa: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005d66aa
//   XREF to: Stack[-0x18] (READ)
// 005d66ae: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x20] (DATA)
// 005d66b1: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 005d66b5: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005d66b9: JMP 0x005d6686
//   XREF to: 005d6686 (UNCONDITIONAL_JUMP)
// 005d66bb: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005d66bb
//   XREF to: Stack[-0x18] (READ)
// 005d66bf: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005d66c3: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 005d66c7: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005d66cb: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 005d66cf: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc] (READ)
// 005d66d3: MOV ESP,EBP
// 005d66d5: POP EBP
// 005d66d6: RET
