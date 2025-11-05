// Name: crt_math.c_ceil_FUN_006001b2
// Address: 006001b2
// Address Range: [[006001b2, 006001e2]]
// Convention: __fpustack
// Signature: double crt_math.c_ceil_FUN_006001b2(double value)
// Cross-references:
//   core_msnedit.cpp_FUN_00536e20 (00536e20) at 00537096 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10 (005a0d10) at 005a0d8c [UNCONDITIONAL_CALL]
//   core_trigger.cpp_FUN_005e0ba0 (005e0ba0) at 005e0c0b [UNCONDITIONAL_CALL]
//   shape_design.c_sampleAndFilterPixel_FUN_0046ae20 (0046ae20) at 0046aee1 [UNCONDITIONAL_CALL]
//   wincore_winrun.cpp_sleep_FUN_005f40e0 (005f40e0) at 005f410b [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_floor_FUN_005feb90

#include "nocturne.h"

double __fpustack crt_math_c_ceil_FUN_006001b2(double value)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  return dVar1;
}


// Assembly code:
// 006001b2: PUSH EBP
//   Label: crt_math.c_ceil_FUN_006001b2
// 006001b3: MOV EBP,ESP
// 006001b5: SUB ESP,0x8
// 006001b8: FLD double ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 006001bb: SUB ESP,0x8
// 006001be: FCHS
// 006001c0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 006001c3: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 006001c8: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 006001cb: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 006001ce: ADD ESP,0x8
// 006001d1: FLD double ptr [EBP + -0x8]
//   XREF to: Stack[-0xc] (READ)
// 006001d4: FCHS
// 006001d6: FSTP double ptr [EBP + -0x8]
//   XREF to: Stack[-0xc] (WRITE)
// 006001d9: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0xc] (READ)
// 006001dc: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x8] (READ)
// 006001df: MOV ESP,EBP
// 006001e1: POP EBP
// 006001e2: RET
