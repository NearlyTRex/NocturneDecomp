// Name: core_charactr.cpp_CCharacter_applyGesture_FUN_0042d3d0
// Address: 0042d3d0
// Address Range: [[0042d3d0, 0042d4cd]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_applyGesture_FUN_0042d3d0(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0 (0042dfc0) at 0042dfc6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_charactr_cpp_00617368
//   TerminatedCString s_CCharacter_applyGesture__0061737d
//   float FLOAT_006173c2 = 0.3000000
//   float FLOAT_006173c6 = 0.8500000
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059eb50

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_applyGesture_FUN_0042d3d0(CCharacter *this_ptr)

{
  if (-1 < *(int *)(this_ptr->field11_0x25a0 + 0x28)) {
    if (*(int *)(this_ptr->field11_0x25a0 + 0x24) < -1) {
      g_CurrentFilename = "..\\core\\charactr.cpp";
      g_CurrentLineNumber = 0xcc7;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::applyGesture - never set gestureBranchRoot for actor %s",this_ptr);
    }
    core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
              (&(this_ptr->model).motion_controller);
    core_skeleton_cpp_CDeformableModelInstance_FUN_0059eb50(&this_ptr->model);
  }
  return;
}


// Assembly code:
// 0042d3d0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_applyGesture_FUN_0042d3d0
// 0042d3d1: SUB ESP,0x10
// 0042d3d4: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0042d3d8: CMP dword ptr [EBX + 0x25c8],0x0
// 0042d3df: JL 0x0042d49e
//   XREF to: 0042d49e (CONDITIONAL_JUMP)
// 0042d3e5: PUSH ESI
// 0042d3e6: CMP dword ptr [EBX + 0x25c4],-0x1
// 0042d3ed: JL 0x0042d4a3
//   XREF to: 0042d4a3 (CONDITIONAL_JUMP)
// 0042d3f3: IMUL ESI,dword ptr [EBX + 0x25c8],0x54c
//   Label: LAB_0042d3f3
// 0042d3fd: LEA EAX,[EBX + 0x158]
// 0042d403: PUSH EAX
// 0042d404: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 0042d409: FLD float ptr [ESI + EAX*0x1 + 0x988]
// 0042d410: FMUL float ptr [0x006173c2]
//   XREF to: 006173c2 (READ)
// 0042d416: FLD float ptr [EBX + 0x25cc]
// 0042d41c: ADD ESP,0x4
// 0042d41f: FLD1
// 0042d421: FDIVRP ST2,ST0
// 0042d423: FMUL ST1
// 0042d425: FILD dword ptr [ESI + EAX*0x1 + 0x9cc]
// 0042d42c: FSUB float ptr [EBX + 0x25cc]
// 0042d432: MOV EAX,0x3f59999a
// 0042d437: FMULP ST2
// 0042d439: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0042d43d: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (WRITE)
// 0042d441: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0xc] (WRITE)
// 0042d445: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 0042d449: FCOMP float ptr [0x006173c6]
//   XREF to: 006173c6 (READ)
// 0042d44f: FNSTSW AX
// 0042d451: SAHF
// 0042d452: JNC 0x0042d45c
//   XREF to: 0042d45c (CONDITIONAL_JUMP)
// 0042d454: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 0042d458: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0042d45c: FLD float ptr [ESP + 0xc]
//   Label: LAB_0042d45c
//   XREF to: Stack[-0xc] (READ)
// 0042d460: FCOMP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x8] (READ)
// 0042d464: FNSTSW AX
// 0042d466: SAHF
// 0042d467: JNC 0x0042d471
//   XREF to: 0042d471 (CONDITIONAL_JUMP)
// 0042d469: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xc] (READ)
// 0042d46d: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0042d471: PUSH 0x59ddb0
//   Label: LAB_0042d471
//   XREF to: 0059ddb0 (DATA)
// 0042d476: MOV EDX,dword ptr [EBX + 0x25c4]
// 0042d47c: PUSH EDX
// 0042d47d: PUSH dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x8] (READ)
// 0042d481: MOV ECX,dword ptr [EBX + 0x25c8]
// 0042d487: PUSH dword ptr [EBX + 0x25cc]
// 0042d48d: PUSH ECX
// 0042d48e: ADD EBX,0x158
// 0042d494: PUSH EBX
// 0042d495: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059eb50
//   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
// 0042d49a: ADD ESP,0x18
// 0042d49d: POP ESI
// 0042d49e: ADD ESP,0x10
//   Label: LAB_0042d49e
// 0042d4a1: POP EBX
// 0042d4a2: RET
// 0042d4a3: PUSH EDI
//   Label: LAB_0042d4a3
// 0042d4a4: PUSH EBX
// 0042d4a5: MOV ESI,0x617368
//   XREF to: 00617368 (DATA)
// 0042d4aa: MOV EDI,0xcc7
// 0042d4af: PUSH 0x61737d
//   XREF to: 0061737d (DATA)
// 0042d4b4: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0042d4ba: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0042d4c0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0042d4c5: ADD ESP,0x8
// 0042d4c8: POP EDI
// 0042d4c9: JMP 0x0042d3f3
//   XREF to: 0042d3f3 (UNCONDITIONAL_JUMP)
