// Name: sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0
// Address: 005ab4c0
// Address Range: [[005ab4c0, 005ab520]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0(int device_id)
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512cab [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005aae00 (005aae00) at 005aae94 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_allocBuffers_FUN_005ab5b0 (005ab5b0) at 005ab5c3 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005abffc [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650c9b
//   TerminatedCString s_selectSoundDevice_device_00650cb0
//   int g_CurrentSoundDevice = -0x1
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_sndmain.cpp_findBestSoundDevice_FUN_005ab3d0
//   sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
//   sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(int device_id)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = sound_sndmain_cpp_isSoundSystemActive_FUN_005ab530();
  if (uVar1 != 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x1335;
    core_main_c_displayErrorAndQuit_FUN_00506f10("selectSoundDevice - device already open.");
  }
  if (device_id < 0) {
    device_id = g_CurrentSoundDevice;
  }
  iVar2 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0();
  if ((device_id < iVar2) && (-1 < device_id)) {
    g_CurrentSoundDevice = device_id;
    return;
  }
  g_CurrentSoundDevice = sound_sndmain_cpp_findBestSoundDevice_FUN_005ab3d0();
  return;
}


// Assembly code:
// 005ab4c0: PUSH EBX
//   Label: sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0
// 005ab4c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ab4c5: CALL sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530
//   XREF to: 005ab530 (UNCONDITIONAL_CALL)
// 005ab4ca: TEST EAX,EAX
// 005ab4cc: JNZ 0x005ab4f0
//   XREF to: 005ab4f0 (CONDITIONAL_JUMP)
// 005ab4ce: TEST EBX,EBX
//   Label: LAB_005ab4ce
// 005ab4d0: JGE 0x005ab4d8
//   XREF to: 005ab4d8 (CONDITIONAL_JUMP)
// 005ab4d2: MOV EBX,dword ptr [0x00681b24]
//   XREF to: 00681b24 (READ)
// 005ab4d8: CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
//   Label: LAB_005ab4d8
//   XREF to: 005ab2e0 (UNCONDITIONAL_CALL)
// 005ab4dd: CMP EBX,EAX
// 005ab4df: JL 0x005ab515
//   XREF to: 005ab515 (CONDITIONAL_JUMP)
// 005ab4e1: CALL sound_sndmain.cpp_findBestSoundDevice_FUN_005ab3d0
//   Label: LAB_005ab4e1
//   XREF to: 005ab3d0 (UNCONDITIONAL_CALL)
// 005ab4e6: MOV EBX,EAX
// 005ab4e8: MOV dword ptr [0x00681b24],EBX
//   XREF to: 00681b24 (WRITE)
// 005ab4ee: POP EBX
// 005ab4ef: RET
// 005ab4f0: MOV EDX,0x650c9b
//   Label: LAB_005ab4f0
//   XREF to: 00650c9b (PARAM)
// 005ab4f5: MOV ECX,0x1335
// 005ab4fa: PUSH 0x650cb0
//   XREF to: 00650cb0 (DATA)
// 005ab4ff: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005ab505: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005ab50b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ab510: ADD ESP,0x4
// 005ab513: JMP 0x005ab4ce
//   XREF to: 005ab4ce (UNCONDITIONAL_JUMP)
// 005ab515: TEST EBX,EBX
//   Label: LAB_005ab515
// 005ab517: JL 0x005ab4e1
//   XREF to: 005ab4e1 (CONDITIONAL_JUMP)
// 005ab519: MOV dword ptr [0x00681b24],EBX
//   XREF to: 00681b24 (WRITE)
// 005ab51f: POP EBX
// 005ab520: RET
