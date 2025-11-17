// Name: sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
// Address: 005a8af0
// Address Range: [[005a8af0, 005a8b3a]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0(int channel_index)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004ac560 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e4391 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_0055ff00 (0055ff00) at 00560066 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b2dd0 (005b2dd0) at 005b2eac [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b2fd0 (005b2fd0) at 005b3395 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b3830 (005b3830) at 005b393f [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b2770 (005b2770) at 005b289f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650858
//   TerminatedCString s_setNextSfxChannel_invali_0065086d
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_SfxLastSlot
//   CSfxOptions[8] g_SfxOptions
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(int channel_index)

{
  if ((channel_index < 0) || (0x1f < channel_index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xcf8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setNextSfxChannel - invalid channel index: %d",channel_index);
  }
  g_SfxOptions[g_SfxLastSlot].status = channel_index;
  return;
}


// Assembly code:
// 005a8af0: PUSH EBX
//   Label: sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
// 005a8af1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a8af5: TEST EBX,EBX
// 005a8af7: JL 0x005a8b15
//   XREF to: 005a8b15 (CONDITIONAL_JUMP)
// 005a8af9: CMP EBX,0x20
// 005a8afc: JGE 0x005a8b15
//   XREF to: 005a8b15 (CONDITIONAL_JUMP)
// 005a8afe: MOV EAX,[0x03f624a4]
//   Label: LAB_005a8afe
//   XREF to: 03f624a4 (READ)
// 005a8b03: SHL EAX,0x4
// 005a8b06: MOV EDX,EAX
// 005a8b08: SHL EAX,0x3
// 005a8b0b: SUB EAX,EDX
// 005a8b0d: MOV dword ptr [EAX + 0x3f624a8],EBX
//   XREF to: 03f624a8 (DATA)
// 005a8b13: POP EBX
// 005a8b14: RET
// 005a8b15: PUSH EBX
//   Label: LAB_005a8b15
// 005a8b16: MOV EDX,0x650858
//   XREF to: 00650858 (PARAM)
// 005a8b1b: MOV ECX,0xcf8
// 005a8b20: PUSH 0x65086d
//   XREF to: 0065086d (DATA)
// 005a8b25: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005a8b2b: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005a8b31: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a8b36: ADD ESP,0x8
// 005a8b39: JMP 0x005a8afe
//   XREF to: 005a8afe (UNCONDITIONAL_JUMP)
