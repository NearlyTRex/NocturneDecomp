// Name: core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90
// Address: 0052db90
// Address Range: [[0052db90, 0052dbbd]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90(CMotionController * this_ptr, char * state_name, int force_immediate)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042c920 (0042c920) at 0042c9b9 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_FUN_004f28d0 (004f28d0) at 004f2984 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_FUN_004f29b0 (004f29b0) at 004f2a17 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_process_FUN_005448b0 (005448b0) at 00544b07 [UNCONDITIONAL_CALL]
// Function calls:
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0

#include "nocturne.h"

void __cdecl
core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
          (CMotionController *this_ptr,char *state_name,int force_immediate)

{
  int desired_state_index;
  int in_stack_00000010;
  
  desired_state_index =
       core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr->motion_list_ptr);
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)state_name,desired_state_index,in_stack_00000010);
  return;
}


// Assembly code:
// 0052db90: PUSH EBX
//   Label: core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90
// 0052db91: PUSH ESI
// 0052db92: PUSH 0x1
// 0052db94: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0052db98: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0052db9c: PUSH EDX
// 0052db9d: MOV ECX,dword ptr [EAX]
// 0052db9f: PUSH ECX
// 0052dba0: CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)
// 0052dba5: ADD ESP,0xc
// 0052dba8: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0052dbac: PUSH EBX
// 0052dbad: PUSH EAX
// 0052dbae: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052dbb2: PUSH ESI
// 0052dbb3: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0052dbb8: ADD ESP,0xc
// 0052dbbb: POP ESI
// 0052dbbc: POP EBX
// 0052dbbd: RET
