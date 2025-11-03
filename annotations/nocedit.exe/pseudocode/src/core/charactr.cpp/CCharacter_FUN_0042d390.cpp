// Name: core_charactr.cpp_CCharacter_FUN_0042d390
// Address: 0042d390
// Address Range: [[0042d390, 0042d3cf]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042d390(CCharacter * this_ptr)
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055d17b [UNCONDITIONAL_CALL]
// Function calls:
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042d390(CCharacter *this_ptr)

{
  CMotionList *this_ptr_00;
  int iVar1;
  
  this_ptr->field11_0x25a0[0x2c] = '\0';
  this_ptr->field11_0x25a0[0x2d] = '\0';
  this_ptr->field11_0x25a0[0x2e] = '\0';
  this_ptr->field11_0x25a0[0x2f] = '\0';
  this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                          (&(this_ptr->model).motion_controller);
  iVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_00);
  *(int *)(this_ptr->field11_0x25a0 + 0x28) = iVar1;
  return (uint)(-1 < iVar1);
}


// Assembly code:
// 0042d390: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042d390
// 0042d391: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0042d395: PUSH 0x0
// 0042d397: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0042d39b: PUSH EDX
// 0042d39c: LEA EAX,[EBX + 0x158]
// 0042d3a2: PUSH EAX
// 0042d3a3: MOV dword ptr [EBX + 0x25cc],0x0
// 0042d3ad: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 0042d3b2: ADD ESP,0x4
// 0042d3b5: PUSH EAX
// 0042d3b6: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 0042d3bb: ADD ESP,0xc
// 0042d3be: MOV dword ptr [EBX + 0x25c8],EAX
// 0042d3c4: TEST EAX,EAX
// 0042d3c6: SETGE AL
// 0042d3c9: AND EAX,0xff
// 0042d3ce: POP EBX
// 0042d3cf: RET
