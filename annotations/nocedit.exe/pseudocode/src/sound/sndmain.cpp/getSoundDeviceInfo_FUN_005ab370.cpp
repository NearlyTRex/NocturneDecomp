// Name: sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
// Address: 005ab370
// Address Range: [[005ab370, 005ab3cc]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370(int device_id, SSoundDeviceInfo * device_info)
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512c65 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_findBestSoundDevice_FUN_005ab3d0 (005ab3d0) at 005ab486 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_logSoundError_FUN_005adba0 (005adba0) at 005adce8 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005abfda [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_writeIni_FUN_005ac220 (005ac220) at 005ac261 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650c63
//   TerminatedCString s_getSoundDeviceInfo_inval_00650c78
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   SSoundDeviceInfo[8] g_SoundDevices
//   undefined4 g_SoundDevices[0].device_name[4]
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(int device_id,SSoundDeviceInfo *device_info)

{
  int iVar1;
  SSoundDeviceInfo *pSVar2;
  byte bVar3;
  undefined4 *in_stack_00000010;
  
  bVar3 = 0;
  iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0();
  if ((device_id < 0) || (iVar1 <= device_id)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x12f5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("getSoundDeviceInfo - invalid index");
  }
  pSVar2 = g_SoundDevices + device_id;
  for (iVar1 = 0x46; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_stack_00000010 = *(undefined4 *)pSVar2->device_name;
    pSVar2 = (SSoundDeviceInfo *)((int)pSVar2 + ((uint)bVar3 * -2 + 1) * 4);
    in_stack_00000010 = in_stack_00000010 + (uint)bVar3 * -2 + 1;
  }
  return;
}


// Assembly code:
// 005ab370: PUSH EBX
//   Label: sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
// 005ab371: PUSH ESI
// 005ab372: PUSH EDI
// 005ab373: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005ab377: CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
//   XREF to: 005ab2e0 (UNCONDITIONAL_CALL)
// 005ab37c: TEST EBX,EBX
// 005ab37e: JL 0x005ab3a8
//   XREF to: 005ab3a8 (CONDITIONAL_JUMP)
// 005ab380: CMP EBX,EAX
// 005ab382: JGE 0x005ab3a8
//   XREF to: 005ab3a8 (CONDITIONAL_JUMP)
// 005ab384: LEA EAX,[EBX*0x8 + 0x0]
//   Label: LAB_005ab384
// 005ab38b: ADD EAX,EBX
// 005ab38d: SHL EAX,0x2
// 005ab390: SUB EAX,EBX
// 005ab392: MOV ECX,0x46
// 005ab397: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005ab39b: LEA ESI,[EAX*0x8 + 0x3f689a8]
//   XREF to: 03f689a8 (DATA)
// 005ab3a2: MOVSD.REP ES:EDI,ESI
//   XREF to: 03f689a8 (DATA)
//   XREF to: 03f689ac (DATA)
// 005ab3a4: POP EDI
// 005ab3a5: POP ESI
// 005ab3a6: POP EBX
// 005ab3a7: RET
// 005ab3a8: MOV EDX,0x650c63
//   Label: LAB_005ab3a8
//   XREF to: 00650c63 (PARAM)
// 005ab3ad: MOV ECX,0x12f5
// 005ab3b2: PUSH 0x650c78
//   XREF to: 00650c78 (DATA)
// 005ab3b7: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005ab3bd: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005ab3c3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ab3c8: ADD ESP,0x4
// 005ab3cb: JMP 0x005ab384
//   XREF to: 005ab384 (UNCONDITIONAL_JUMP)
