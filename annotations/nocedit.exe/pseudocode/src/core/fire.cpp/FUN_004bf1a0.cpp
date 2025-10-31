// Name: core_fire.cpp_FUN_004bf1a0
// Address: 004bf1a0
// Address Range: [[004bf1a0, 004bf1ef]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004bf1a0()
// Globals:
//   double DOUBLE_00629bfb = -1
// Function calls:
//   crt_math.c_acos_FUN_00600162

#include "nocturne.h"

float core_fire_cpp_FUN_004bf1a0(void)

{
  double dVar1;
  float in_stack_00000004;
  undefined4 local_8;
  
  if (in_stack_00000004 <= (float)DOUBLE_00629bfb) {
    local_8 = 3.1415927;
  }
  else {
    if ((double)in_stack_00000004 < 1.0) {
      dVar1 = crt_math_c_acos_FUN_00600162((double)in_stack_00000004);
      return (float)dVar1;
    }
    local_8 = 0.0;
  }
  return local_8;
}


// Assembly code:
// 004bf1a0: PUSH EBP
//   Label: core_fire.cpp_FUN_004bf1a0
// 004bf1a1: MOV EBP,ESP
// 004bf1a3: SUB ESP,0xc
// 004bf1a6: AND ESP,0xfffffff8
// 004bf1a9: FLD float ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004bf1ac: FST double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 004bf1af: FCOMP double ptr [0x00629bfb]
//   XREF to: 00629bfb (READ)
// 004bf1b5: FNSTSW AX
// 004bf1b7: SAHF
// 004bf1b8: JBE 0x004bf1d2
//   XREF to: 004bf1d2 (CONDITIONAL_JUMP)
// 004bf1ba: FLD1
// 004bf1bc: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 004bf1bf: FNSTSW AX
// 004bf1c1: SAHF
// 004bf1c2: JA 0x004bf1dc
//   XREF to: 004bf1dc (CONDITIONAL_JUMP)
// 004bf1c4: XOR EDX,EDX
// 004bf1c6: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 004bf1ca: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_004bf1ca
//   XREF to: Stack[-0x8] (READ)
// 004bf1ce: MOV ESP,EBP
// 004bf1d0: POP EBP
// 004bf1d1: RET
// 004bf1d2: MOV dword ptr [ESP + 0x8],0x40490fdb
//   Label: LAB_004bf1d2
//   XREF to: Stack[-0x8] (WRITE)
// 004bf1da: JMP 0x004bf1ca
//   XREF to: 004bf1ca (UNCONDITIONAL_JUMP)
// 004bf1dc: FLD double ptr [ESP]
//   Label: LAB_004bf1dc
//   XREF to: Stack[-0x10] (DATA)
// 004bf1df: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 004bf1e4: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (WRITE)
// 004bf1e8: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 004bf1ec: MOV ESP,EBP
// 004bf1ee: POP EBP
// 004bf1ef: RET
