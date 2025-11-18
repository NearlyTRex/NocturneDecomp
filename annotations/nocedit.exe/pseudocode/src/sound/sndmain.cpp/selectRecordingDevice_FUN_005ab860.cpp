// Name: sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860
// Address: 005ab860
// Address Range: [[005ab860, 005ab8c0]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860(int device_id)
// Cross-references:
//   sound_sndmain.cpp_initializeRecordingDevice_FUN_005ab8d0 (005ab8d0) at 005ab8e1 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005ac00a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00 (005aae00) at 005aaea2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650d68
//   TerminatedCString s_selectRecordingDevice_de_00650d7d
//   int g_CurrentRecordingDevice = -0x1
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_sndmain.cpp_findBestRecordingDevice_FUN_005ab7e0
//   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720
//   sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_selectRecordingDevice_FUN_005ab860(int device_id)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isRecordingSystemActive_FUN_005ab970();
  if (iVar1 != 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x1447;
    core_main_c_displayErrorAndQuit_FUN_00506f10("selectRecordingDevice - device already open.");
  }
  if (device_id < 0) {
    device_id = g_CurrentRecordingDevice;
  }
  iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_005ab720();
  if ((device_id < iVar1) && (-1 < device_id)) {
    g_CurrentRecordingDevice = device_id;
    return;
  }
  g_CurrentRecordingDevice = sound_sndmain_cpp_findBestRecordingDevice_FUN_005ab7e0();
  return;
}


// Assembly code:
// 005ab860: PUSH EBX
//   Label: sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860
// 005ab861: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ab865: CALL sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970
//   XREF to: 005ab970 (UNCONDITIONAL_CALL)
// 005ab86a: TEST EAX,EAX
// 005ab86c: JNZ 0x005ab890
//   XREF to: 005ab890 (CONDITIONAL_JUMP)
// 005ab86e: TEST EBX,EBX
//   Label: LAB_005ab86e
// 005ab870: JGE 0x005ab878
//   XREF to: 005ab878 (CONDITIONAL_JUMP)
// 005ab872: MOV EBX,dword ptr [0x00681b50]
//   XREF to: 00681b50 (READ)
// 005ab878: CALL sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720
//   Label: LAB_005ab878
//   XREF to: 005ab720 (UNCONDITIONAL_CALL)
// 005ab87d: CMP EBX,EAX
// 005ab87f: JL 0x005ab8b5
//   XREF to: 005ab8b5 (CONDITIONAL_JUMP)
// 005ab881: CALL sound_sndmain.cpp_findBestRecordingDevice_FUN_005ab7e0
//   Label: LAB_005ab881
//   XREF to: 005ab7e0 (UNCONDITIONAL_CALL)
// 005ab886: MOV EBX,EAX
// 005ab888: MOV dword ptr [0x00681b50],EBX
//   XREF to: 00681b50 (WRITE)
// 005ab88e: POP EBX
// 005ab88f: RET
// 005ab890: MOV EDX,0x650d68
//   Label: LAB_005ab890
//   XREF to: 00650d68 (PARAM)
// 005ab895: MOV ECX,0x1447
// 005ab89a: PUSH 0x650d7d
//   XREF to: 00650d7d (DATA)
// 005ab89f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005ab8a5: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005ab8ab: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ab8b0: ADD ESP,0x4
// 005ab8b3: JMP 0x005ab86e
//   XREF to: 005ab86e (UNCONDITIONAL_JUMP)
// 005ab8b5: TEST EBX,EBX
//   Label: LAB_005ab8b5
// 005ab8b7: JL 0x005ab881
//   XREF to: 005ab881 (CONDITIONAL_JUMP)
// 005ab8b9: MOV dword ptr [0x00681b50],EBX
//   XREF to: 00681b50 (WRITE)
// 005ab8bf: POP EBX
// 005ab8c0: RET
