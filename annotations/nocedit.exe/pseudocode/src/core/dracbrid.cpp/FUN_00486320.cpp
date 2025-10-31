// Name: core_dracbrid.cpp_FUN_00486320
// Address: 00486320
// Address Range: [[00486320, 0048635e]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_00486320()
// Globals:
//   undefined4 caseD_f
//   void* switchdataD_004862f0 = 0048632f
// Function calls:
//   core_motion.cpp_CMotionController_FUN_0052dab0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_draculabride.cpp_FUN_00486320(undefined4 param_1) */

undefined4 core_dracbrid_cpp_FUN_00486320(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x70) == 2) {
    return 2;
  }
  iVar1 = core_motion_cpp_CMotionController_FUN_0052dab0();
  switch(*(undefined4 *)(iVar1 + 0x24)) {
  case 7:
  case 10:
    return 1;
  default:
    return 0;
  case 0x10:
  case 0x11:
    return 2;
  }
}


// Assembly code:
// 00486320: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dracbrid.cpp_FUN_00486320
//   XREF to: Stack[0x4] (READ)
// 00486324: MOV EDX,dword ptr [EAX + 0x70]
// 00486327: CMP EDX,0x2
// 0048632a: JNZ 0x0048633b
//   XREF to: 0048633b (CONDITIONAL_JUMP)
// 0048632c: MOV EAX,EDX
// 0048632e: RET
// 0048632f: MOV EAX,0x1
//   Label: caseD_a
// 00486334: RET
// 00486335: MOV EAX,0x2
//   Label: caseD_11
// 0048633a: RET
// 0048633b: ADD EAX,0x158
//   Label: LAB_0048633b
// 00486340: PUSH EAX
// 00486341: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00486346: MOV EAX,dword ptr [EAX + 0x24]
// 00486349: SUB EAX,0x7
// 0048634c: ADD ESP,0x4
// 0048634f: CMP EAX,0xa
// 00486352: JA 0x00485bcd
//   XREF to: 00485bcd (CONDITIONAL_JUMP)
// 00486358: JMP dword ptr [EAX*0x4 + 0x4862f0]
//   Label: switchD
//   XREF to: 00485bcd (COMPUTED_JUMP)
//   XREF to: 0048632f (COMPUTED_JUMP)
//   XREF to: 00486335 (COMPUTED_JUMP)
//   XREF to: 004862f0 (DATA)
