// Name: core_motion.cpp_CMotionController_FUN_0052da50
// Address: 0052da50
// Address Range: [[0052da50, 0052daaf]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionController_FUN_0052da50(CMotionController * this_ptr)
// Cross-references:
//   core_motion.cpp_CMotionController_advance_FUN_0052d610 (0052d610) at 0052d877 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 (0052db00) at 0052db72 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_FUN_0052da50(CMotionController *this_ptr)

{
  int iVar1;
  float fVar2;
  
  this_ptr->tween_direction = 1;
  iVar1 = this_ptr->current_motion_index;
  this_ptr->current_motion_index = this_ptr->tween_target_motion;
  this_ptr->tween_target_motion = iVar1;
  fVar2 = this_ptr->current_frame_number;
  this_ptr->current_frame_number = this_ptr->tween_target_frame;
  this_ptr->tween_target_frame = fVar2;
  if (this_ptr->tween_type == 5) {
    this_ptr->tween_type = 4;
  }
  else if (this_ptr->tween_type == 4) {
    this_ptr->tween_type = 5;
    this_ptr->tween_progress = 1.0 - this_ptr->tween_progress;
    return;
  }
  this_ptr->tween_progress = 1.0 - this_ptr->tween_progress;
  return;
}


// Assembly code:
// 0052da50: PUSH EBX
//   Label: core_motion.cpp_CMotionController_FUN_0052da50
// 0052da51: PUSH ESI
// 0052da52: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052da56: LEA EDX,[EAX + 0x4]
// 0052da59: LEA ECX,[EAX + 0x18]
// 0052da5c: MOV dword ptr [EAX + 0x20],0x1
// 0052da63: MOV ESI,dword ptr [ECX]
// 0052da65: MOV EBX,dword ptr [EDX]
// 0052da67: MOV dword ptr [EDX],ESI
// 0052da69: MOV dword ptr [ECX],EBX
// 0052da6b: LEA ECX,[EAX + 0x8]
// 0052da6e: LEA EDX,[EAX + 0x1c]
// 0052da71: MOV EBX,dword ptr [ECX]
// 0052da73: MOV ESI,dword ptr [EDX]
// 0052da75: MOV dword ptr [ECX],ESI
// 0052da77: MOV dword ptr [EDX],EBX
// 0052da79: MOV EDX,dword ptr [EAX + 0xc]
// 0052da7c: CMP EDX,0x5
// 0052da7f: JZ 0x0052da93
//   XREF to: 0052da93 (CONDITIONAL_JUMP)
// 0052da81: CMP EDX,0x4
// 0052da84: JZ 0x0052da9c
//   XREF to: 0052da9c (CONDITIONAL_JUMP)
// 0052da86: FLD float ptr [EAX + 0x14]
//   Label: LAB_0052da86
// 0052da89: FLD1
// 0052da8b: FSUBRP
// 0052da8d: FSTP float ptr [EAX + 0x14]
// 0052da90: POP ESI
// 0052da91: POP EBX
// 0052da92: RET
// 0052da93: MOV dword ptr [EAX + 0xc],0x4
//   Label: LAB_0052da93
// 0052da9a: JMP 0x0052da86
//   XREF to: 0052da86 (UNCONDITIONAL_JUMP)
// 0052da9c: MOV dword ptr [EAX + 0xc],0x5
//   Label: LAB_0052da9c
// 0052daa3: FLD float ptr [EAX + 0x14]
// 0052daa6: FLD1
// 0052daa8: FSUBRP
// 0052daaa: FSTP float ptr [EAX + 0x14]
// 0052daad: POP ESI
// 0052daae: POP EBX
// 0052daaf: RET
