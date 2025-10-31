// Name: core_bat.cpp_FUN_00414ce0
// Address: 00414ce0
// Address Range: [[00414ce0, 00414db6]]
// Convention: unknown
// Signature: undefined core_bat.cpp_FUN_00414ce0()
// Cross-references:
//   core_bat.cpp_CBat_FUN_00414f00 (00414f00) at 00414f96 [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_process_FUN_00414a00 (00414a00) at 00414a3f [UNCONDITIONAL_CALL]
// Function calls:
//   core_course.cpp_CCourse_FUN_00442710
//   crt_math.c_floor_FUN_005feb90

#include "nocturne.h"

/* Signature: undefined1 actors_other_bat.cpp_FUN_00414ce0(undefined4 param_1) */

void core_bat_cpp_FUN_00414ce0(void)

{
  float fVar1;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  float10 in_ST0;
  int in_stack_00000004;
  undefined4 uStack_2c;
  undefined4 local_28;
  float fStack_24;
  
  fVar1 = *(float *)(in_stack_00000004 + 0x304);
  local_28 = SUB84((double)fVar1,0);
  if (0.0 <= (double)fVar1) {
    uStack_2c = (undefined4)
                ((ulonglong)(double)(fVar1 / (float)*(int *)(in_stack_00000004 + 0x178)) >> 0x20);
    crt_math_c_floor_FUN_005feb90((double)in_ST0);
    fStack_24 = (float)(double)CONCAT44(local_28,uStack_2c) -
                (float)(double)CONCAT44(extraout_EDX_00,extraout_EAX_00) * fVar1;
  }
  else {
    uStack_2c = (undefined4)
                ((ulonglong)(double)(-fVar1 / (float)*(int *)(in_stack_00000004 + 0x178)) >> 0x20);
    crt_math_c_floor_FUN_005feb90((double)in_ST0);
    fStack_24 = (float)(double)CONCAT44(extraout_EDX,extraout_EAX) * fVar1 +
                (float)(double)CONCAT44(local_28,uStack_2c);
    if (fStack_24 < 0.0) {
      fStack_24 = fStack_24 + fVar1;
    }
  }
  *(float *)(in_stack_00000004 + 0x304) = fStack_24;
  core_course_cpp_CCourse_FUN_00442710((CCourse *)(in_stack_00000004 + 0x178));
  return;
}


// Assembly code:
// 00414ce0: PUSH EBX
//   Label: core_bat.cpp_FUN_00414ce0
// 00414ce1: PUSH EBP
// 00414ce2: MOV EBP,ESP
// 00414ce4: SUB ESP,0x1c
// 00414ce7: AND ESP,0xfffffff8
// 00414cea: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00414ced: LEA EAX,[EBX + 0x178]
// 00414cf3: MOV EAX,dword ptr [EAX]
// 00414cf5: FLDZ
// 00414cf7: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00414cfb: MOV EAX,dword ptr [EBX + 0x304]
// 00414d01: FILD dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x10] (READ)
// 00414d05: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00414d09: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00414d0d: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00414d11: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00414d14: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00414d17: FNSTSW AX
// 00414d19: SAHF
// 00414d1a: JBE 0x00414d8c
//   XREF to: 00414d8c (CONDITIONAL_JUMP)
// 00414d1c: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00414d20: FCHS
// 00414d22: FDIV float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00414d26: SUB ESP,0x8
// 00414d29: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00414d2c: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00414d31: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00414d35: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00414d39: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00414d3d: ADD ESP,0x8
// 00414d40: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00414d44: FADD double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00414d47: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 00414d4b: FLDZ
// 00414d4d: FCOMPP
// 00414d4f: FNSTSW AX
// 00414d51: SAHF
// 00414d52: JBE 0x00414d60
//   XREF to: 00414d60 (CONDITIONAL_JUMP)
// 00414d54: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00414d58: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00414d5c: FSTP float ptr [ESP + 0x8]
//   Label: LAB_00414d5c
//   XREF to: Stack[-0x20] (WRITE)
// 00414d60: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_00414d60
//   XREF to: Stack[-0x20] (READ)
// 00414d64: MOV dword ptr [EBX + 0x304],EAX
// 00414d6a: LEA EAX,[EBX + 0x30]
// 00414d6d: PUSH EAX
// 00414d6e: LEA EAX,[EBX + 0x20]
// 00414d71: PUSH EAX
// 00414d72: ADD EBX,0x178
// 00414d78: PUSH dword ptr [EBX + 0x18c]
// 00414d7e: PUSH EBX
// 00414d7f: CALL core_course.cpp_CCourse_FUN_00442710
//   XREF to: 00442710 (UNCONDITIONAL_CALL)
// 00414d84: ADD ESP,0x10
// 00414d87: MOV ESP,EBP
// 00414d89: POP EBP
// 00414d8a: POP EBX
// 00414d8b: RET
// 00414d8c: FLD float ptr [ESP + 0x8]
//   Label: LAB_00414d8c
//   XREF to: Stack[-0x20] (READ)
// 00414d90: FDIV float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00414d94: SUB ESP,0x8
// 00414d97: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00414d9a: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00414d9f: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00414da3: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00414da7: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00414dab: ADD ESP,0x8
// 00414dae: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00414db2: FSUBR double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00414db5: JMP 0x00414d5c
//   XREF to: 00414d5c (UNCONDITIONAL_JUMP)
