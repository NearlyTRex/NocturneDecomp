// Name: core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0
// Address: 005b3cc0
// Address Range: [[005b3cc0, 005b3d18]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0(CSound * this_ptr, int index)
// Cross-references:
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b082 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580f7e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_sound_cpp_0065281b
//   TerminatedCString s_CSound_setReverbPreset_i_0065282d
//   undefined4 DAT_00681f00
//   undefined4 DAT_00681f04
//   undefined4 DAT_00681f08
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_sound.cpp_CSound_set3DListenerOrientRight_FUN_005b3c90

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_005b3cc0(CSound *this_ptr,int index)

{
  if ((index < 0) || (0x1a < index)) {
    g_CurrentFilename = "..\\core\\sound.cpp";
    g_CurrentLineNumber = 0x402;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CSound::setReverbPreset - invalid index");
  }
  core_sound_cpp_CSound_set3DListenerOrientRight_FUN_005b3c90
            ((CSound *)index,g_SoundModeTable[index].listener_orient.x,
             g_SoundModeTable[index].listener_orient.y,g_SoundModeTable[index].listener_orient.z);
  return;
}


// Assembly code:
// 005b3cc0: PUSH EBX
//   Label: core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0
// 005b3cc1: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005b3cc5: TEST EBX,EBX
// 005b3cc7: JL 0x005b3cf4
//   XREF to: 005b3cf4 (CONDITIONAL_JUMP)
// 005b3cc9: CMP EBX,0x1b
// 005b3ccc: JGE 0x005b3cf4
//   XREF to: 005b3cf4 (CONDITIONAL_JUMP)
// 005b3cce: MOV EAX,EBX
//   Label: LAB_005b3cce
// 005b3cd0: SHL EAX,0x4
// 005b3cd3: PUSH dword ptr [EAX + 0x681f08]
//   XREF to: 00681f08 (DATA)
// 005b3cd9: PUSH dword ptr [EAX + 0x681f04]
//   XREF to: 00681f04 (DATA)
// 005b3cdf: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005b3ce3: PUSH dword ptr [EAX + 0x681f00]
//   XREF to: 00681f00 (DATA)
// 005b3ce9: PUSH EBX
// 005b3cea: CALL core_sound.cpp_CSound_set3DListenerOrientRight_FUN_005b3c90
//   XREF to: 005b3c90 (UNCONDITIONAL_CALL)
// 005b3cef: ADD ESP,0x10
// 005b3cf2: POP EBX
// 005b3cf3: RET
// 005b3cf4: MOV EDX,0x65281b
//   Label: LAB_005b3cf4
//   XREF to: 0065281b (PARAM)
// 005b3cf9: MOV ECX,0x402
// 005b3cfe: PUSH 0x65282d
//   XREF to: 0065282d (DATA)
// 005b3d03: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005b3d09: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005b3d0f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005b3d14: ADD ESP,0x4
// 005b3d17: JMP 0x005b3cce
//   XREF to: 005b3cce (UNCONDITIONAL_JUMP)
