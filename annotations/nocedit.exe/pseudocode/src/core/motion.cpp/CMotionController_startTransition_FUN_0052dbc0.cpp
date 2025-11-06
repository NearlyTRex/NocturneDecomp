// Name: core_motion.cpp_CMotionController_startTransition_FUN_0052dbc0
// Address: 0052dbc0
// Address Range: [[0052dbc0, 0052dc76]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionController_startTransition_FUN_0052dbc0(CMotionController * this_ptr, SMotionTransition * transition)
// Cross-references:
//   core_motion.cpp_CMotionController_advance_FUN_0052d610 (0052d610) at 0052d8d1 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950 (0052d950) at 0052da28 [UNCONDITIONAL_CALL]
// Globals:
//   float g_MotionControllerAutoDetermineFrame = -1
// Function calls:
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0

#include "nocturne.h"

void __cdecl
core_motion_cpp_CMotionController_startTransition_FUN_0052dbc0
          (CMotionController *this_ptr,SMotionTransition *transition)

{
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  float in_stack_0000000c;
  
  if (transition->to_frame_number == g_MotionControllerAutoDetermineFrame) {
    iVar2 = (*this_ptr->vtable->findPatchToFrame)
                      (this_ptr,this_ptr->current_motion_index,this_ptr->current_frame_number,
                       transition->to_motion_number);
    in_stack_0000000c = (float)iVar2;
  }
  if (transition->tween_time <= 0.0) {
    core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
              (this_ptr,transition->to_motion_number,in_stack_0000000c);
    if (transition->set_new_state_as_desired != 0) {
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
      this_ptr->state_index = pSVar3->state_index;
      return;
    }
  }
  else {
    this_ptr->tween_target_motion = transition->to_motion_number;
    this_ptr->tween_target_frame = in_stack_0000000c;
    iVar2 = transition->cmd;
    this_ptr->tween_progress = 0.001;
    this_ptr->tween_type = iVar2;
    fVar1 = transition->tween_time;
    this_ptr->tween_direction = 0;
    this_ptr->tween_speed = 1.0 / fVar1;
    this_ptr->tween_set_new_state = transition->set_new_state_as_desired;
  }
  return;
}


// Assembly code:
// 0052dbc0: PUSH EBX
//   Label: core_motion.cpp_CMotionController_startTransition_FUN_0052dbc0
// 0052dbc1: PUSH ESI
// 0052dbc2: PUSH EDI
// 0052dbc3: PUSH EBP
// 0052dbc4: SUB ESP,0x8
// 0052dbc7: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0052dbcb: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0052dbcf: MOV EAX,dword ptr [ESI + 0xc]
// 0052dbd2: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 0052dbd5: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0052dbd8: FCOMP float ptr [0x0063aa93]
//   XREF to: 0063aa93 (READ)
// 0052dbde: FNSTSW AX
// 0052dbe0: SAHF
// 0052dbe1: JZ 0x0052dc27
//   XREF to: 0052dc27 (CONDITIONAL_JUMP)
// 0052dbe3: FLD float ptr [ESI + 0x10]
//   Label: LAB_0052dbe3
// 0052dbe6: FLDZ
// 0052dbe8: FCOMPP
// 0052dbea: FNSTSW AX
// 0052dbec: SAHF
// 0052dbed: JNC 0x0052dc49
//   XREF to: 0052dc49 (CONDITIONAL_JUMP)
// 0052dbef: MOV EAX,dword ptr [ESI + 0x8]
// 0052dbf2: MOV dword ptr [EBX + 0x18],EAX
// 0052dbf5: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0052dbf8: MOV dword ptr [EBX + 0x1c],EAX
// 0052dbfb: MOV EAX,dword ptr [ESI + 0x4]
// 0052dbfe: MOV dword ptr [EBX + 0x14],0x3a83126f
// 0052dc05: MOV dword ptr [EBX + 0xc],EAX
// 0052dc08: FLD float ptr [ESI + 0x10]
// 0052dc0b: FLD1
// 0052dc0d: FDIVRP
// 0052dc0f: MOV dword ptr [EBX + 0x20],0x0
// 0052dc16: FSTP float ptr [EBX + 0x10]
// 0052dc19: MOV EAX,dword ptr [ESI + 0x14]
// 0052dc1c: MOV dword ptr [EBX + 0x24],EAX
// 0052dc1f: ADD ESP,0x8
//   Label: LAB_0052dc1f
// 0052dc22: POP EBP
// 0052dc23: POP EDI
// 0052dc24: POP ESI
// 0052dc25: POP EBX
// 0052dc26: RET
// 0052dc27: MOV EDX,dword ptr [ESI + 0x8]
//   Label: LAB_0052dc27
// 0052dc2a: PUSH EDX
// 0052dc2b: MOV ECX,dword ptr [EBX + 0x4]
// 0052dc2e: PUSH dword ptr [EBX + 0x8]
// 0052dc31: PUSH ECX
// 0052dc32: MOV EAX,dword ptr [EBX + 0x50]
// 0052dc35: PUSH EBX
// 0052dc36: CALL dword ptr [EAX + 0x4]
// 0052dc39: ADD ESP,0x10
// 0052dc3c: MOV dword ptr [ESP + 0x4],EAX
// 0052dc40: FILD dword ptr [ESP + 0x4]
// 0052dc44: FSTP float ptr [ESP]
// 0052dc47: JMP 0x0052dbe3
//   XREF to: 0052dbe3 (UNCONDITIONAL_JUMP)
// 0052dc49: MOV EDI,dword ptr [ESI + 0x8]
//   Label: LAB_0052dc49
// 0052dc4c: PUSH dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0052dc4f: PUSH EDI
// 0052dc50: PUSH EBX
// 0052dc51: CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0
//   XREF to: 0052dde0 (UNCONDITIONAL_CALL)
// 0052dc56: MOV EBP,dword ptr [ESI + 0x14]
// 0052dc59: ADD ESP,0xc
// 0052dc5c: TEST EBP,EBP
// 0052dc5e: JZ 0x0052dc1f
//   XREF to: 0052dc1f (CONDITIONAL_JUMP)
// 0052dc60: PUSH EBX
// 0052dc61: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0052dc66: MOV EAX,dword ptr [EAX + 0x24]
// 0052dc69: ADD ESP,0x4
// 0052dc6c: MOV dword ptr [EBX + 0x28],EAX
// 0052dc6f: ADD ESP,0x8
// 0052dc72: POP EBP
// 0052dc73: POP EDI
// 0052dc74: POP ESI
// 0052dc75: POP EBX
// 0052dc76: RET
