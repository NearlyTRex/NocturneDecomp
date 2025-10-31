// Name: core_msnedit.cpp_FUN_005374b0
// Address: 005374b0
// Address Range: [[005374b0, 00537521]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_005374b0()
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CScript* g_CScriptPtr = 0310f858
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f7c634
//   CScript g_CScriptInstance
// Function calls:
//   core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060
//   core_script.cpp_CScript_unk50_FUN_00566660
//   engine_2d.c_clearInputAndWait_FUN_00403260

#include "nocturne.h"

void core_msnedit_cpp_FUN_005374b0(void)

{
  int in_stack_00000004;
  
  if ((2 < in_stack_00000004) || (in_stack_00000004 < 0)) {
    in_stack_00000004 = 0;
  }
  core_script_cpp_CScript_unk50_FUN_00566660();
  DAT_02f7c634 = in_stack_00000004;
  core_msnedit_cpp_CalltoCallToDemonCameraInit_FUN_00539060();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}


// Assembly code:
// 005374b0: PUSH EBX
//   Label: core_msnedit.cpp_FUN_005374b0
// 005374b1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005374b5: CMP EBX,0x2
// 005374b8: JLE 0x005374fe
//   XREF to: 005374fe (CONDITIONAL_JUMP)
// 005374ba: XOR EBX,EBX
//   Label: LAB_005374ba
// 005374bc: MOV EAX,[0x00679398]
//   Label: LAB_005374bc
//   XREF to: 00679398 (READ)
// 005374c1: DEC EAX
// 005374c2: PUSH EAX
// 005374c3: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005374c8: DEC EAX
// 005374c9: PUSH EAX
// 005374ca: PUSH 0x101
// 005374cf: PUSH 0x0
// 005374d1: MOV ECX,dword ptr [0x00680d50]
//   XREF to: 00680d50 (READ)
//   XREF to: 0310f858 (PARAM)
// 005374d7: PUSH ECX
//   XREF to: 0310f858 (DATA)
// 005374d8: CALL core_script.cpp_CScript_unk50_FUN_00566660
//   Label: LAB_005374d8
//   XREF to: 00566660 (UNCONDITIONAL_CALL)
// 005374dd: ADD ESP,0x14
// 005374e0: PUSH 0x1
// 005374e2: MOV dword ptr [0x02f7c634],EBX
//   XREF to: 02f7c634 (WRITE)
// 005374e8: MOV EBX,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
//   XREF to: 02f33740 (PARAM)
// 005374ee: PUSH EBX
//   XREF to: 02f33740 (DATA)
// 005374ef: CALL core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060
//   XREF to: 00539060 (UNCONDITIONAL_CALL)
// 005374f4: ADD ESP,0x8
// 005374f7: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005374fc: POP EBX
// 005374fd: RET
// 005374fe: TEST EBX,EBX
//   Label: LAB_005374fe
// 00537500: JL 0x005374ba
//   XREF to: 005374ba (CONDITIONAL_JUMP)
// 00537502: CMP EBX,0x2
// 00537505: JNZ 0x005374bc
//   XREF to: 005374bc (CONDITIONAL_JUMP)
// 00537507: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0053750c: DEC EAX
// 0053750d: PUSH EAX
// 0053750e: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00537513: DEC EAX
// 00537514: PUSH EAX
// 00537515: PUSH 0x0
// 00537517: PUSH 0x0
// 00537519: MOV EDX,dword ptr [0x00680d50]
//   XREF to: 00680d50 (READ)
//   XREF to: 0310f858 (PARAM)
// 0053751f: PUSH EDX
//   XREF to: 0310f858 (DATA)
// 00537520: JMP 0x005374d8
//   XREF to: 005374d8 (UNCONDITIONAL_JUMP)
