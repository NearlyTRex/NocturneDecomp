// Name: core_marquee.cpp_FUN_0050bda0
// Address: 0050bda0
// Address Range: [[0050bda0, 0050be42]]
// Convention: unknown
// Signature: undefined core_marquee.cpp_FUN_0050bda0()

#include "nocturne.h"

/* Signature: undefined1 actors_other_marquee.cpp_FUN_0050bda0(undefined4 param_1, undefined4
   param_2) */

void core_marquee_cpp_FUN_0050bda0(void)

{
  float fVar1;
  float fVar2;
  int in_stack_00000004;
  float in_stack_00000008;
  
  fVar1 = (float)*(int *)(in_stack_00000004 + 0x1a4);
  if (*(int *)(in_stack_00000004 + 0x1a0) == 1) {
    fVar2 = (in_stack_00000008 * fVar1) / *(float *)(in_stack_00000004 + 0x178) +
            *(float *)(in_stack_00000004 + 0x17c);
    *(float *)(in_stack_00000004 + 0x17c) = fVar2;
    if (fVar1 < fVar2) {
      *(float *)(in_stack_00000004 + 0x17c) = *(float *)(in_stack_00000004 + 0x17c) - fVar1;
      return;
    }
  }
  else if (*(int *)(in_stack_00000004 + 0x1a0) == 0) {
    fVar1 = in_stack_00000008 / *(float *)(in_stack_00000004 + 0x178) +
            *(float *)(in_stack_00000004 + 0x17c);
    *(float *)(in_stack_00000004 + 0x17c) = fVar1;
    if ((float)*(int *)(in_stack_00000004 + 0x180) < fVar1) {
      *(float *)(in_stack_00000004 + 0x17c) =
           *(float *)(in_stack_00000004 + 0x17c) - (float)*(int *)(in_stack_00000004 + 0x180);
      return;
    }
  }
  return;
}


// Assembly code:
// 0050bda0: SUB ESP,0xc
//   Label: core_marquee.cpp_FUN_0050bda0
// 0050bda3: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0050bda7: LEA EAX,[EDX + 0x1a4]
// 0050bdad: MOV EAX,dword ptr [EAX]
// 0050bdaf: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 0050bdb3: MOV ECX,dword ptr [EDX + 0x1a0]
// 0050bdb9: FILD dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x4] (READ)
// 0050bdbd: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (WRITE)
// 0050bdc1: CMP ECX,0x1
// 0050bdc4: JZ 0x0050bdf9
//   XREF to: 0050bdf9 (CONDITIONAL_JUMP)
// 0050bdc6: TEST ECX,ECX
// 0050bdc8: JNZ 0x0050bdf5
//   XREF to: 0050bdf5 (CONDITIONAL_JUMP)
// 0050bdca: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0050bdce: FDIV float ptr [EDX + 0x178]
// 0050bdd4: FILD dword ptr [EDX + 0x180]
// 0050bdda: FXCH
// 0050bddc: FADD float ptr [EDX + 0x17c]
// 0050bde2: FXCH
// 0050bde4: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 0050bde7: FST float ptr [EDX + 0x17c]
// 0050bded: FCOMP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 0050bdf0: FNSTSW AX
// 0050bdf2: SAHF
// 0050bdf3: JA 0x0050be30
//   XREF to: 0050be30 (CONDITIONAL_JUMP)
// 0050bdf5: ADD ESP,0xc
//   Label: LAB_0050bdf5
// 0050bdf8: RET
// 0050bdf9: FLD float ptr [ESP + 0x4]
//   Label: LAB_0050bdf9
//   XREF to: Stack[-0x8] (READ)
// 0050bdfd: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0050be01: FMUL ST1
// 0050be03: FDIV float ptr [EDX + 0x178]
// 0050be09: FADD float ptr [EDX + 0x17c]
// 0050be0f: FST float ptr [EDX + 0x17c]
// 0050be15: FCOMPP
// 0050be17: FNSTSW AX
// 0050be19: SAHF
// 0050be1a: JBE 0x0050bdf5
//   XREF to: 0050bdf5 (CONDITIONAL_JUMP)
// 0050be1c: FLD float ptr [EDX + 0x17c]
// 0050be22: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 0050be26: FSTP float ptr [EDX + 0x17c]
// 0050be2c: ADD ESP,0xc
// 0050be2f: RET
// 0050be30: FLD float ptr [EDX + 0x17c]
//   Label: LAB_0050be30
// 0050be36: FSUB float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 0050be39: FSTP float ptr [EDX + 0x17c]
// 0050be3f: ADD ESP,0xc
// 0050be42: RET
