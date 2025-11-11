// Name: sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
// Address: 005a9d90
// Address Range: [[005a9d90, 005a9dd7]]
// Convention: __cdecl
// Signature: float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 005127e2 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b2dd0 (005b2dd0) at 005b2e7f [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b2fd0 (005b2fd0) at 005b323b [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b3830 (005b3830) at 005b3883 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b2d70 (005b2d70) at 005b2d8f [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_DirectSoundDevice_HardwareSfx3DBuffer_FUN_005af750 (005af750) at 005af7ea [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSlot_FUN_005a6f00 (005a6f00) at 005a6f42 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005ac1ad [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_writeIni_FUN_005ac220 (005ac220) at 005ac3ab [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650a32
//   TerminatedCString s_getSfxChannelVol_invalid_00650a47
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03f688a8
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)

{
  if ((-1 < channel_index) && (channel_index < 0x20)) {
    return *(float *)(&DAT_03f688a8 + channel_index * 4);
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 0xf96;
  core_main_c_displayErrorAndQuit_FUN_00506f10("getSfxChannelVol - invalid channel index: %d",channel_index);
  return *(float *)(&DAT_03f688a8 + channel_index * 4);
}


// Assembly code:
// 005a9d90: PUSH EBX
//   Label: sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
// 005a9d91: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a9d95: TEST EBX,EBX
// 005a9d97: JL 0x005a9da9
//   XREF to: 005a9da9 (CONDITIONAL_JUMP)
// 005a9d99: CMP EBX,0x20
// 005a9d9c: JGE 0x005a9da9
//   XREF to: 005a9da9 (CONDITIONAL_JUMP)
// 005a9d9e: MOV EBX,dword ptr [EBX*0x4 + 0x3f688a8]
//   XREF to: 03f688a8 (DATA)
// 005a9da5: MOV EAX,EBX
// 005a9da7: POP EBX
// 005a9da8: RET
// 005a9da9: PUSH EBX
//   Label: LAB_005a9da9
// 005a9daa: MOV EDX,0x650a32
//   XREF to: 00650a32 (PARAM)
// 005a9daf: MOV ECX,0xf96
// 005a9db4: PUSH 0x650a47
//   XREF to: 00650a47 (DATA)
// 005a9db9: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005a9dbf: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005a9dc5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a9dca: ADD ESP,0x8
// 005a9dcd: MOV EBX,dword ptr [EBX*0x4 + 0x3f688a8]
//   XREF to: 03f688a8 (DATA)
// 005a9dd4: MOV EAX,EBX
// 005a9dd6: POP EBX
// 005a9dd7: RET
