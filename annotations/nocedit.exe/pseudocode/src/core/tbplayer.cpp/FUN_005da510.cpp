// Name: core_tbplayer.cpp_FUN_005da510
// Address: 005da510
// Address Range: [[005da510, 005da534]]
// Convention: unknown
// Signature: undefined core_tbplayer.cpp_FUN_005da510()

#include "nocturne.h"

void core_tbplayer_cpp_FUN_005da510(void)

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
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
  return;
}


// Assembly code:
// 005da510: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_tbplayer.cpp_FUN_005da510
//   XREF to: Stack[0x4] (READ)
// 005da514: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005da518: FLD float ptr [EAX + 0x4]
// 005da51b: FSUBR float ptr [EDX + 0x243c]
// 005da521: FST float ptr [EDX + 0x243c]
// 005da527: FLDZ
// 005da529: FCOMPP
// 005da52b: FNSTSW AX
// 005da52d: SAHF
// 005da52e: JNC 0x005da261
//   XREF to: 005da261 (CONDITIONAL_JUMP)
// 005da534: RET
