// Name: sound_sndmain.cpp_setSfxUserData_FUN_005a9ba0
// Address: 005a9ba0
// Address Range: [[005a9ba0, 005a9c01]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_setSfxUserData_FUN_005a9ba0()
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_006509ae
//   TerminatedCString s_setSfxUserData_invalid_u_006509c3
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

undefined4 sound_sndmain_cpp_setSfxUserData_FUN_005a9ba0(void)

{
  CSfxSlot *pCVar1;
  uint in_stack_00000008;
  int in_stack_00000014;
  
  if (((int)in_stack_00000008 < 0) || (1 < (int)in_stack_00000008)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xf40;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("setSfxUserData - invalid user data index: %d",in_stack_00000008);
  }
  pCVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(in_stack_00000008,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  (pCVar1->options).userdata[in_stack_00000008] = in_stack_00000014;
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}


// Assembly code:
// 005a9ba0: PUSH EBX
//   Label: sound_sndmain.cpp_setSfxUserData_FUN_005a9ba0
// 005a9ba1: PUSH ESI
// 005a9ba2: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005a9ba6: TEST EBX,EBX
// 005a9ba8: JL 0x005a9baf
//   XREF to: 005a9baf (CONDITIONAL_JUMP)
// 005a9baa: CMP EBX,0x2
// 005a9bad: JL 0x005a9bd3
//   XREF to: 005a9bd3 (CONDITIONAL_JUMP)
// 005a9baf: PUSH EBX
//   Label: LAB_005a9baf
// 005a9bb0: MOV EDX,0x6509ae
//   XREF to: 006509ae (DATA)
// 005a9bb5: MOV ECX,0xf40
// 005a9bba: PUSH 0x6509c3
//   XREF to: 006509c3 (DATA)
// 005a9bbf: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005a9bc5: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005a9bcb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a9bd0: ADD ESP,0x8
// 005a9bd3: PUSH 0x1
//   Label: LAB_005a9bd3
// 005a9bd5: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005a9bd9: PUSH ESI
// 005a9bda: CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
//   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
// 005a9bdf: ADD ESP,0x8
// 005a9be2: TEST EAX,EAX
// 005a9be4: JNZ 0x005a9be9
//   XREF to: 005a9be9 (CONDITIONAL_JUMP)
// 005a9be6: POP ESI
// 005a9be7: POP EBX
// 005a9be8: RET
// 005a9be9: SHL EBX,0x2
//   Label: LAB_005a9be9
// 005a9bec: ADD EAX,EBX
// 005a9bee: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005a9bf2: MOV dword ptr [EAX + 0x54],EBX
// 005a9bf5: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a9bfa: MOV EAX,0x1
// 005a9bff: POP ESI
// 005a9c00: POP EBX
// 005a9c01: RET
