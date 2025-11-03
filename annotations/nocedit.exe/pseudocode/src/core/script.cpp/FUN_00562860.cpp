// Name: core_script.cpp_FUN_00562860
// Address: 00562860
// Address Range: [[00562860, 00562885]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00562860()
// Cross-references:
//   core_script.cpp_FUN_00562920 (00562920) at 00563952 [UNCONDITIONAL_CALL]
// Function calls:
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_script.cpp_FUN_005627f0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00562860(undefined4 param_1, undefined4 param_2) */

void core_script_cpp_FUN_00562860(void)

{
  int iVar1;
  
  iVar1 = core_script_cpp_FUN_005627f0();
  if (iVar1 == 0) {
    return;
  }
  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0((CMotionController *)(iVar1 + 0x158))
  ;
  return;
}


// Assembly code:
// 00562860: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_script.cpp_FUN_00562860
//   XREF to: Stack[0x8] (READ)
// 00562864: PUSH EDX
// 00562865: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00562869: PUSH ECX
// 0056286a: CALL core_script.cpp_FUN_005627f0
//   XREF to: 005627f0 (UNCONDITIONAL_CALL)
// 0056286f: ADD ESP,0x8
// 00562872: TEST EAX,EAX
// 00562874: JNZ 0x00562877
//   XREF to: 00562877 (CONDITIONAL_JUMP)
// 00562876: RET
// 00562877: ADD EAX,0x158
//   Label: LAB_00562877
// 0056287c: PUSH EAX
// 0056287d: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 00562882: ADD ESP,0x4
// 00562885: RET
