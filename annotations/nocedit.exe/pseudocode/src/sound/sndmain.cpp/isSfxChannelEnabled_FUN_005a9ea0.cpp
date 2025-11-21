// Name: sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
// Address: 005a9ea0
// Address Range: [[005a9ea0, 005a9ee3]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004ac549 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e4109 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 005128a1 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_init_FUN_005b2dd0 (005b2dd0) at 005b2e62 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_process_FUN_005b2fd0 (005b2fd0) at 005b321d [UNCONDITIONAL_CALL]
//   core_sound.cpp_syncChannel3WithChannel0_FUN_005b2d70 (005b2d70) at 005b2d75 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005ac15d [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a8f23 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_writeIni_FUN_005ac220 (005ac220) at 005ac37a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650aee
//   TerminatedCString s_isSfxChannelEnabled_inva_00650b03
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int[32] g_SfxChannelEnabled
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return g_SfxChannelEnabled[channel_index];
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 0xfb0;
  core_main_c_displayErrorAndQuit_FUN_00506f10("isSfxChannelEnabled - invalid channel index: %d",channel_index);
  return g_SfxChannelEnabled[channel_index];
}


// Assembly code:
// 005a9ea0: PUSH EBX
//   Label: sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
// 005a9ea1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a9ea5: TEST EBX,EBX
// 005a9ea7: JL 0x005a9eb7
//   XREF to: 005a9eb7 (CONDITIONAL_JUMP)
// 005a9ea9: CMP EBX,0x20
// 005a9eac: JGE 0x005a9eb7
//   XREF to: 005a9eb7 (CONDITIONAL_JUMP)
// 005a9eae: MOV EAX,dword ptr [EBX*0x4 + 0x3f68928]
//   XREF to: 03f68928 (DATA)
// 005a9eb5: POP EBX
// 005a9eb6: RET
// 005a9eb7: PUSH EBX
//   Label: LAB_005a9eb7
// 005a9eb8: MOV EDX,0x650aee
//   XREF to: 00650aee (PARAM)
// 005a9ebd: MOV ECX,0xfb0
// 005a9ec2: PUSH 0x650b03
//   XREF to: 00650b03 (DATA)
// 005a9ec7: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005a9ecd: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005a9ed3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a9ed8: ADD ESP,0x8
// 005a9edb: MOV EAX,dword ptr [EBX*0x4 + 0x3f68928]
//   XREF to: 03f68928 (DATA)
// 005a9ee2: POP EBX
// 005a9ee3: RET
