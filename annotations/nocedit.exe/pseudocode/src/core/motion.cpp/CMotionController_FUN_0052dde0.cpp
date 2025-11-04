// Name: core_motion.cpp_CMotionController_FUN_0052dde0
// Address: 0052dde0
// Address Range: [[0052dde0, 0052de3b]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionController_FUN_0052dde0(CMotionController * this_ptr)
// Cross-references:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 0040fb45 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041bffb [UNCONDITIONAL_CALL]
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043c913 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004ad5c0 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_createOneHero_FUN_00524920 (00524920) at 00524a17 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_FUN_0052dbc0 (0052dbc0) at 0052dc51 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950 (0052d950) at 0052d9d5 [UNCONDITIONAL_CALL]
//   core_motion.cpp_FUN_0052ddb0 (0052ddb0) at 0052ddd1 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545d30 (00545d30) at 00545edb [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0063aafb = -1
// Function calls:
//   core_motion.cpp_CMotionController_FUN_0052de40

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_FUN_0052dde0(CMotionController *this_ptr)

{
  int iVar1;
  int in_stack_00000008;
  float in_stack_0000000c;
  
  if (in_stack_0000000c == FLOAT_0063aafb) {
    iVar1 = (*(code *)this_ptr->vtable->findPatchToFrame)();
    in_stack_0000000c = (float)iVar1;
  }
  this_ptr->in_transition = 0;
  this_ptr->current_motion_index = in_stack_00000008;
  this_ptr->current_frame_number = in_stack_0000000c;
  core_motion_cpp_CMotionController_FUN_0052de40(this_ptr);
  return;
}


// Assembly code:
// 0052dde0: PUSH EBX
//   Label: core_motion.cpp_CMotionController_FUN_0052dde0
// 0052dde1: SUB ESP,0x4
// 0052dde4: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052dde8: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0052ddec: FCOMP float ptr [0x0063aafb]
//   XREF to: 0063aafb (READ)
// 0052ddf2: FNSTSW AX
// 0052ddf4: SAHF
// 0052ddf5: JZ 0x0052de1a
//   XREF to: 0052de1a (CONDITIONAL_JUMP)
// 0052ddf7: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_0052ddf7
//   XREF to: Stack[0x8] (READ)
// 0052ddfb: MOV dword ptr [EBX + 0x2c],0x0
// 0052de02: MOV dword ptr [EBX + 0x4],EAX
// 0052de05: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0052de09: PUSH EBX
// 0052de0a: MOV dword ptr [EBX + 0x8],EAX
// 0052de0d: CALL core_motion.cpp_CMotionController_FUN_0052de40
//   XREF to: 0052de40 (UNCONDITIONAL_CALL)
// 0052de12: ADD ESP,0x4
// 0052de15: ADD ESP,0x4
// 0052de18: POP EBX
// 0052de19: RET
// 0052de1a: MOV EDX,dword ptr [ESP + 0x10]
//   Label: LAB_0052de1a
//   XREF to: Stack[0x8] (READ)
// 0052de1e: PUSH EDX
// 0052de1f: MOV ECX,dword ptr [EBX + 0x4]
// 0052de22: PUSH dword ptr [EBX + 0x8]
// 0052de25: PUSH ECX
// 0052de26: MOV EAX,dword ptr [EBX + 0x50]
// 0052de29: PUSH EBX
// 0052de2a: CALL dword ptr [EAX + 0x4]
// 0052de2d: ADD ESP,0x10
// 0052de30: MOV dword ptr [ESP],EAX
// 0052de33: FILD dword ptr [ESP]
// 0052de36: FSTP float ptr [ESP + 0x14]
// 0052de3a: JMP 0x0052ddf7
//   XREF to: 0052ddf7 (UNCONDITIONAL_JUMP)
