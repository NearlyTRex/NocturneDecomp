// Name: core_motion.cpp_FUN_0052ddb0
// Address: 0052ddb0
// Address Range: [[0052ddb0, 0052ddda]]
// Convention: __cdecl
// Signature: void core_motion.cpp_FUN_0052ddb0(void)
// Cross-references:
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043d480 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_CDraculaBride_load_FUN_00485dd0 (00485dd0) at 00485e89 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_00520500 (00520500) at 0052057e [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_process_FUN_00528d20 (00528d20) at 00529242 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c9fd [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00536e20 (00536e20) at 005371de [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c6750 (005c6750) at 005c679e [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c70f3 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_SomethingVoicuHumanWav_FUN_005e74c0 (005e74c0) at 005e74dd [UNCONDITIONAL_CALL]
// Function calls:
//   core_motion.cpp_CMotionController_FUN_0052dde0
//   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460

#include "nocturne.h"

void __cdecl core_motion_cpp_FUN_0052ddb0(void)

{
  undefined4 *in_stack_00000004;
  CMotionController *in_stack_00000008;
  
  core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460((CMotionList *)*in_stack_00000004);
  core_motion_cpp_CMotionController_FUN_0052dde0(in_stack_00000008);
  return;
}


// Assembly code:
// 0052ddb0: PUSH EBX
//   Label: core_motion.cpp_FUN_0052ddb0
// 0052ddb1: PUSH 0x1
// 0052ddb3: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0052ddb7: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052ddbb: PUSH EDX
// 0052ddbc: MOV ECX,dword ptr [EAX]
// 0052ddbe: PUSH ECX
// 0052ddbf: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 0052ddc4: ADD ESP,0xc
// 0052ddc7: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0052ddcb: PUSH EAX
// 0052ddcc: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0052ddd0: PUSH EBX
// 0052ddd1: CALL core_motion.cpp_CMotionController_FUN_0052dde0
//   XREF to: 0052dde0 (UNCONDITIONAL_CALL)
// 0052ddd6: ADD ESP,0xc
// 0052ddd9: POP EBX
// 0052ddda: RET
