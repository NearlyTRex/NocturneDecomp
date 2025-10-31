// Name: shape_meshlod.cpp_FUN_00516e10
// Address: 00516e10
// Address Range: [[00516e10, 00516f4c]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00516e10()
// Cross-references:
//   shape_meshlod.cpp_FUN_00516d50 (00516d50) at 00516d94 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051b8a0 (0051b8a0) at 0051b8c5 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00637671 = 0.5
// Function calls:
//   shape_meshlod.cpp_FUN_00516500
//   shape_meshlod.cpp_FUN_00516570
//   shape_meshlod.cpp_FUN_005165c0

#include "nocturne.h"

void shape_meshlod_cpp_FUN_00516e10(void)

{
  float fVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_10;
  float local_c;
  
  shape_meshlod_cpp_FUN_00516500();
  fVar1 = (local_50 + local_44) * FLOAT_00637671;
  local_10 = -((local_58 + local_4c) * FLOAT_00637671);
  local_c = -((local_54 + local_48) * FLOAT_00637671);
  if ((float *)(in_stack_00000004 + 100) != &local_10) {
    *(float *)(in_stack_00000004 + 100) = local_10;
    *(float *)(in_stack_00000004 + 0x68) = local_c;
    *(float *)(in_stack_00000004 + 0x6c) = -fVar1;
  }
  shape_meshlod_cpp_FUN_00516570();
  local_58 = local_48 - local_54;
  if (local_48 - local_54 < local_44 - local_50) {
    local_58 = local_44 - local_50;
  }
  if (local_58 < local_40 - local_4c) {
    local_58 = local_40 - local_4c;
  }
  *(float *)(in_stack_00000004 + 0x70) = 1.0 / local_58;
  shape_meshlod_cpp_FUN_005165c0();
  return;
}


// Assembly code:
// 00516e10: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00516e10
// 00516e11: PUSH EBP
// 00516e12: MOV EBP,ESP
// 00516e14: SUB ESP,0x58
// 00516e17: AND ESP,0xfffffff8
// 00516e1a: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00516e1d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5c] (DATA)
// 00516e21: PUSH EAX
// 00516e22: PUSH EBX
// 00516e23: CALL shape_meshlod.cpp_FUN_00516500
//   XREF to: 00516500 (UNCONDITIONAL_CALL)
// 00516e28: ADD ESP,0x8
// 00516e2b: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x5c] (READ)
// 00516e2f: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 00516e33: FST float ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (WRITE)
// 00516e37: FLD float ptr [0x00637671]
//   XREF to: 00637671 (READ)
// 00516e3d: FXCH
// 00516e3f: FMUL ST1
// 00516e41: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x54] (READ)
// 00516e45: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 00516e49: FADD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (READ)
// 00516e4d: FXCH
// 00516e4f: FADD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 00516e53: FXCH
// 00516e55: FST float ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (WRITE)
// 00516e59: FMUL ST3
// 00516e5b: FXCH
// 00516e5d: FST float ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (WRITE)
// 00516e61: FMULP ST3
// 00516e63: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x14] (DATA)
// 00516e67: LEA EDX,[EBX + 0x64]
// 00516e6a: FXCH
// 00516e6c: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (WRITE)
// 00516e70: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x34] (WRITE)
// 00516e74: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (WRITE)
// 00516e78: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (READ)
// 00516e7c: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x34] (READ)
// 00516e80: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (READ)
// 00516e84: FXCH ST2
// 00516e86: FCHS
// 00516e88: FXCH
// 00516e8a: FCHS
// 00516e8c: FXCH ST2
// 00516e8e: FCHS
// 00516e90: FXCH
// 00516e92: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (WRITE)
// 00516e96: FXCH
// 00516e98: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (WRITE)
// 00516e9c: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0xc] (WRITE)
// 00516ea0: CMP EDX,EAX
// 00516ea2: JZ 0x00516eb8
//   XREF to: 00516eb8 (CONDITIONAL_JUMP)
// 00516ea4: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (DATA)
// 00516ea8: MOV dword ptr [EDX],EAX
// 00516eaa: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (READ)
// 00516eae: MOV dword ptr [EDX + 0x4],EAX
// 00516eb1: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0xc] (READ)
// 00516eb5: MOV dword ptr [EDX + 0x8],EAX
// 00516eb8: LEA EAX,[EBX + 0x64]
//   Label: LAB_00516eb8
// 00516ebb: PUSH EAX
// 00516ebc: PUSH EBX
// 00516ebd: CALL shape_meshlod.cpp_FUN_00516570
//   XREF to: 00516570 (UNCONDITIONAL_CALL)
// 00516ec2: ADD ESP,0x8
// 00516ec5: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 00516ec9: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (READ)
// 00516ecd: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 00516ed1: FXCH ST2
// 00516ed3: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[-0x5c] (READ)
// 00516ed7: FXCH
// 00516ed9: FSUB float ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 00516edd: FXCH ST2
// 00516edf: FSUB float ptr [ESP + 0xc]
//   XREF to: Stack[-0x54] (READ)
// 00516ee3: FXCH
// 00516ee5: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (WRITE)
// 00516ee9: FXCH
// 00516eeb: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (WRITE)
// 00516eef: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (WRITE)
// 00516ef3: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (READ)
// 00516ef7: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 00516efb: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x60] (DATA)
// 00516efe: FCOMP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (READ)
// 00516f02: FNSTSW AX
// 00516f04: SAHF
// 00516f05: JBE 0x00516f0e
//   XREF to: 00516f0e (CONDITIONAL_JUMP)
// 00516f07: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 00516f0b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x60] (DATA)
// 00516f0e: FLD float ptr [ESP + 0x24]
//   Label: LAB_00516f0e
//   XREF to: Stack[-0x3c] (READ)
// 00516f12: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 00516f15: FNSTSW AX
// 00516f17: SAHF
// 00516f18: JBE 0x00516f21
//   XREF to: 00516f21 (CONDITIONAL_JUMP)
// 00516f1a: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (READ)
// 00516f1e: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x60] (DATA)
// 00516f21: FLD float ptr [ESP]
//   Label: LAB_00516f21
//   XREF to: Stack[-0x60] (DATA)
// 00516f24: FLD1
// 00516f26: FDIVRP
// 00516f28: FSTP float ptr [EBX + 0x70]
// 00516f2b: MOV EAX,dword ptr [EBX + 0x70]
// 00516f2e: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00516f32: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00516f36: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00516f3a: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x2c] (DATA)
// 00516f3e: PUSH EAX
// 00516f3f: PUSH EBX
// 00516f40: CALL shape_meshlod.cpp_FUN_005165c0
//   XREF to: 005165c0 (UNCONDITIONAL_CALL)
// 00516f45: ADD ESP,0x8
// 00516f48: MOV ESP,EBP
// 00516f4a: POP EBP
// 00516f4b: POP EBX
// 00516f4c: RET
