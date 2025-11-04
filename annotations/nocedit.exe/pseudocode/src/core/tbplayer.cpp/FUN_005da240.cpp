// Name: core_tbplayer.cpp_FUN_005da240
// Address: 005da240
// Address Range: [[005da240, 005da27e]]
// Convention: unknown
// Signature: undefined core_tbplayer.cpp_FUN_005da240()
// Function calls:
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00

#include "nocturne.h"

void core_tbplayer_cpp_FUN_005da240(void)

{
  float fVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  fVar1 = *(float *)(in_stack_00000004 + 0x243c) - *(float *)(in_stack_00000008 + 4);
  *(float *)(in_stack_00000004 + 0x243c) = fVar1;
  if (0.0 < fVar1) {
    return;
  }
  *(undefined4 *)(in_stack_00000004 + 0x243c) = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 0x158),3,1);
  return;
}


// Assembly code:
// 005da240: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_tbplayer.cpp_FUN_005da240
//   XREF to: Stack[0x4] (READ)
// 005da244: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005da248: FLD float ptr [EAX + 0x4]
// 005da24b: FSUBR float ptr [EDX + 0x243c]
// 005da251: FST float ptr [EDX + 0x243c]
// 005da257: FLDZ
// 005da259: FCOMPP
// 005da25b: FNSTSW AX
// 005da25d: SAHF
// 005da25e: JNC 0x005da261
//   XREF to: 005da261 (CONDITIONAL_JUMP)
// 005da260: RET
// 005da261: PUSH 0x1
//   Label: LAB_005da261
// 005da263: PUSH 0x3
// 005da265: ADD EDX,0x158
// 005da26b: PUSH EDX
// 005da26c: MOV dword ptr [EDX + 0x22e4],0x0
// 005da276: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005da27b: ADD ESP,0xc
// 005da27e: RET
