// Name: core_stranger.cpp_CStranger_process_FUN_005bb830
// Address: 005bb830
// Address Range: [[005bb830, 005bb8ff]]
// Convention: __cdecl
// Signature: void core_stranger.cpp_CStranger_process_FUN_005bb830(CStranger * this_ptr)
// Globals:
//   void* switchdataD_005bb7dc = 005bb84e
//   double DOUBLE_006534ac = 0.25
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_game.cpp_CGame_slamDT_FUN_004e3080
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_stranger.cpp_CStranger_FUN_005bb960

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_process_FUN_005bb830(CStranger *this_ptr)

{
  bool bVar1;
  int iVar2;
  SMotion *pSVar3;
  
  iVar2 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar2 == 0) {
    return;
  }
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->base_hero).base_character.model.motion_controller);
  bVar1 = false;
  switch(pSVar3->state_index) {
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1b:
    bVar1 = true;
  }
  if ((this_ptr->action_pending == 7) || (bVar1)) {
    core_stranger_cpp_CStranger_FUN_005bb960();
    core_stranger_cpp_CStranger_FUN_005bb960();
    core_stranger_cpp_CStranger_FUN_005bb960();
  }
  core_stranger_cpp_CStranger_FUN_005bb960();
  core_game_cpp_CGame_slamDT_FUN_004e3080(g_CGamePtr,(float)this_ptr);
  return;
}


// Assembly code:
// 005bb830: PUSH EBX
//   Label: core_stranger.cpp_CStranger_process_FUN_005bb830
// 005bb831: SUB ESP,0x8
// 005bb834: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005bb838: PUSH dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005bb83c: PUSH EBX
// 005bb83d: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 005bb842: ADD ESP,0x8
// 005bb845: TEST EAX,EAX
// 005bb847: JNZ 0x005bb8bb
//   XREF to: 005bb8bb (CONDITIONAL_JUMP)
// 005bb849: ADD ESP,0x8
// 005bb84c: POP EBX
// 005bb84d: RET
// 005bb84e: MOV ESI,0x1
//   Label: caseD_1b
// 005bb853: CMP dword ptr [EBX + 0x1fc38],0x7
//   Label: caseD_1a
// 005bb85a: JNZ 0x005bb8f2
//   XREF to: 005bb8f2 (CONDITIONAL_JUMP)
// 005bb860: FLD float ptr [ESP + 0x18]
//   Label: LAB_005bb860
//   XREF to: Stack[0x8] (READ)
// 005bb864: FMUL double ptr [0x006534ac]
//   XREF to: 006534ac (READ)
// 005bb86a: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (WRITE)
// 005bb86e: PUSH dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 005bb872: PUSH EBX
// 005bb873: CALL core_stranger.cpp_CStranger_FUN_005bb960
//   XREF to: 005bb960 (UNCONDITIONAL_CALL)
// 005bb878: ADD ESP,0x8
// 005bb87b: PUSH dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 005bb87f: PUSH EBX
// 005bb880: CALL core_stranger.cpp_CStranger_FUN_005bb960
//   XREF to: 005bb960 (UNCONDITIONAL_CALL)
// 005bb885: ADD ESP,0x8
// 005bb888: PUSH dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 005bb88c: PUSH EBX
// 005bb88d: CALL core_stranger.cpp_CStranger_FUN_005bb960
//   XREF to: 005bb960 (UNCONDITIONAL_CALL)
// 005bb892: ADD ESP,0x8
// 005bb895: PUSH dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 005bb899: PUSH EBX
//   Label: LAB_005bb899
// 005bb89a: CALL core_stranger.cpp_CStranger_FUN_005bb960
//   XREF to: 005bb960 (UNCONDITIONAL_CALL)
// 005bb89f: ADD ESP,0x8
// 005bb8a2: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005bb8a8: PUSH dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x8] (READ)
// 005bb8ac: PUSH ECX
//   XREF to: 02d81a9c (DATA)
// 005bb8ad: CALL core_game.cpp_CGame_slamDT_FUN_004e3080
//   XREF to: 004e3080 (UNCONDITIONAL_CALL)
// 005bb8b2: ADD ESP,0x8
// 005bb8b5: POP ESI
// 005bb8b6: ADD ESP,0x8
// 005bb8b9: POP EBX
// 005bb8ba: RET
// 005bb8bb: PUSH ESI
//   Label: LAB_005bb8bb
// 005bb8bc: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005bb8c1: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005bb8c7: LEA EAX,[EBX + 0x158]
// 005bb8cd: PUSH EAX
// 005bb8ce: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x8] (WRITE)
// 005bb8d2: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005bb8d7: MOV EAX,dword ptr [EAX + 0x24]
// 005bb8da: XOR ESI,ESI
// 005bb8dc: SUB EAX,0x7
// 005bb8df: ADD ESP,0x4
// 005bb8e2: CMP EAX,0x14
// 005bb8e5: JA 0x005bb853
//   XREF to: 005bb853 (CONDITIONAL_JUMP)
// 005bb8eb: JMP dword ptr [EAX*0x4 + 0x5bb7dc]
//   Label: switchD
//   XREF to: 005bb84e (COMPUTED_JUMP)
//   XREF to: 005bb853 (COMPUTED_JUMP)
//   XREF to: 005bb7dc (DATA)
// 005bb8f2: TEST ESI,ESI
//   Label: LAB_005bb8f2
// 005bb8f4: JNZ 0x005bb860
//   XREF to: 005bb860 (CONDITIONAL_JUMP)
// 005bb8fa: PUSH dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bb8fe: JMP 0x005bb899
//   XREF to: 005bb899 (UNCONDITIONAL_JUMP)
