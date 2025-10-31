// Name: core_conveyor.cpp_FUN_00442400
// Address: 00442400
// Address Range: [[00442400, 00442490]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_00442400()
// Function calls:
//   crt_math.c_floor_FUN_005feb90

#include "nocturne.h"

float core_conveyor_cpp_FUN_00442400(void)

{
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  float10 in_ST0;
  float in_stack_00000004;
  float in_stack_00000008;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_18 = SUB84((double)in_stack_00000004,0);
  if ((double)in_stack_00000004 < 0.0) {
    uStack_1c = (undefined4)((ulonglong)(double)(-in_stack_00000004 / in_stack_00000008) >> 0x20);
    crt_math_c_floor_FUN_005feb90((double)in_ST0);
    in_stack_00000004 =
         (float)(double)CONCAT44(extraout_EDX,extraout_EAX) * in_stack_00000008 +
         (float)(double)CONCAT44(local_18,uStack_1c);
    if (in_stack_00000004 < 0.0) {
      in_stack_00000004 = in_stack_00000004 + in_stack_00000008;
    }
    return in_stack_00000004;
  }
  uStack_1c = (undefined4)((ulonglong)(double)(in_stack_00000004 / in_stack_00000008) >> 0x20);
  crt_math_c_floor_FUN_005feb90((double)in_ST0);
  return (float)(double)CONCAT44(local_18,uStack_1c) -
         (float)(double)CONCAT44(extraout_EDX_00,extraout_EAX_00) * in_stack_00000008;
}


// Assembly code:
// 00442400: PUSH EBP
//   Label: core_conveyor.cpp_FUN_00442400
// 00442401: MOV EBP,ESP
// 00442403: SUB ESP,0x10
// 00442406: AND ESP,0xfffffff8
// 00442409: FLD float ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0044240c: FLDZ
// 0044240e: FXCH
// 00442410: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00442413: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00442416: FNSTSW AX
// 00442418: SAHF
// 00442419: JBE 0x00442461
//   XREF to: 00442461 (CONDITIONAL_JUMP)
// 0044241b: FLD float ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0044241e: FCHS
// 00442420: FDIV float ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00442423: SUB ESP,0x8
// 00442426: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00442429: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0044242e: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00442432: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 00442436: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 0044243a: ADD ESP,0x8
// 0044243d: FMUL float ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00442440: FADD double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00442443: FST float ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (WRITE)
// 00442446: FLDZ
// 00442448: FCOMPP
// 0044244a: FNSTSW AX
// 0044244c: SAHF
// 0044244d: JA 0x00442456
//   XREF to: 00442456 (CONDITIONAL_JUMP)
// 0044244f: MOV EAX,dword ptr [EBP + 0x8]
//   Label: LAB_0044244f
//   XREF to: Stack[0x4] (READ)
// 00442452: MOV ESP,EBP
// 00442454: POP EBP
// 00442455: RET
// 00442456: FLD float ptr [EBP + 0x8]
//   Label: LAB_00442456
//   XREF to: Stack[0x4] (READ)
// 00442459: FADD float ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0044245c: FSTP float ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (WRITE)
// 0044245f: JMP 0x0044244f
//   XREF to: 0044244f (UNCONDITIONAL_JUMP)
// 00442461: FLD float ptr [EBP + 0x8]
//   Label: LAB_00442461
//   XREF to: Stack[0x4] (READ)
// 00442464: FDIV float ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00442467: SUB ESP,0x8
// 0044246a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0044246d: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00442472: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00442476: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 0044247a: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 0044247e: ADD ESP,0x8
// 00442481: FMUL float ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00442484: FSUBR double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00442487: FSTP float ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (WRITE)
// 0044248a: MOV EAX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0044248d: MOV ESP,EBP
// 0044248f: POP EBP
// 00442490: RET
