// Name: core_bat.cpp_FUN_004146f0
// Address: 004146f0
// Address Range: [[004146f0, 00414780]]
// Convention: unknown
// Signature: undefined core_bat.cpp_FUN_004146f0()
// Function calls:
//   crt_math.c_floor_FUN_005feb90

#include "nocturne.h"

float core_bat_cpp_FUN_004146f0(void)

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
// 004146f0: PUSH EBP
//   Label: core_bat.cpp_FUN_004146f0
// 004146f1: MOV EBP,ESP
// 004146f3: SUB ESP,0x10
// 004146f6: AND ESP,0xfffffff8
// 004146f9: FLD float ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004146fc: FLDZ
// 004146fe: FXCH
// 00414700: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00414703: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00414706: FNSTSW AX
// 00414708: SAHF
// 00414709: JBE 0x00414751
//   XREF to: 00414751 (CONDITIONAL_JUMP)
// 0041470b: FLD float ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0041470e: FCHS
// 00414710: FDIV float ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00414713: SUB ESP,0x8
// 00414716: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00414719: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0041471e: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00414722: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 00414726: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 0041472a: ADD ESP,0x8
// 0041472d: FMUL float ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00414730: FADD double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00414733: FST float ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (WRITE)
// 00414736: FLDZ
// 00414738: FCOMPP
// 0041473a: FNSTSW AX
// 0041473c: SAHF
// 0041473d: JA 0x00414746
//   XREF to: 00414746 (CONDITIONAL_JUMP)
// 0041473f: MOV EAX,dword ptr [EBP + 0x8]
//   Label: LAB_0041473f
//   XREF to: Stack[0x4] (READ)
// 00414742: MOV ESP,EBP
// 00414744: POP EBP
// 00414745: RET
// 00414746: FLD float ptr [EBP + 0x8]
//   Label: LAB_00414746
//   XREF to: Stack[0x4] (READ)
// 00414749: FADD float ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0041474c: FSTP float ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (WRITE)
// 0041474f: JMP 0x0041473f
//   XREF to: 0041473f (UNCONDITIONAL_JUMP)
// 00414751: FLD float ptr [EBP + 0x8]
//   Label: LAB_00414751
//   XREF to: Stack[0x4] (READ)
// 00414754: FDIV float ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00414757: SUB ESP,0x8
// 0041475a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0041475d: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00414762: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00414766: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 0041476a: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 0041476e: ADD ESP,0x8
// 00414771: FMUL float ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00414774: FSUBR double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00414777: FSTP float ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (WRITE)
// 0041477a: MOV EAX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0041477d: MOV ESP,EBP
// 0041477f: POP EBP
// 00414780: RET
